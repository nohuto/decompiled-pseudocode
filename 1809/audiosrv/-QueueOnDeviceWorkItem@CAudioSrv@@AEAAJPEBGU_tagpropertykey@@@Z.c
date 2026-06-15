/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x18001F010
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x18001EFE0 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x18001F1EC (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18001FBEC (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(
        CAudioSrv *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  CAudioSrv *v5; // rsi
  int v6; // r15d
  _OWORD *v7; // rax
  _OWORD *v8; // r14
  DWORD pid; // ebx
  __int64 v10; // rbx
  struct ATL::CAtlPlex *v11; // rax
  int v12; // r9d
  _QWORD *v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 **v16; // rax
  int *v18; // rbx
  ATL::CAtlException *v19; // [rsp+38h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-28h] BYREF

  v5 = this;
  v6 = 0;
  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *(GUID *)lpCriticalSection = a3->fmtid;
    pid = a3->pid;
    COnDeviceWorkItem::COnDeviceWorkItem(v7, a2, 4LL);
    *(_QWORD *)v8 = &COnDevicePropertyChangedWorkItem::`vftable';
    v8[2] = *(_OWORD *)lpCriticalSection;
    *((_DWORD *)v8 + 12) = pid;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_26;
  if ( !*(_DWORD *)(*((_QWORD *)v8 + 1) - 16LL) )
  {
    (**(void (__fastcall ***)(void *, __int64))v8)(v8, 1LL);
LABEL_26:
    v6 = -2147024882;
    goto LABEL_18;
  }
  if ( !*((_QWORD *)v5 + 25) )
  {
    (**(void (__fastcall ***)(void *, __int64))v8)(v8, 1LL);
    return (unsigned int)v6;
  }
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)v5 + 112);
  LOBYTE(lpCriticalSection[1]) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
  v6 = 0;
  try
  {
    v10 = *((_QWORD *)v5 + 20);
    if ( !*((_QWORD *)v5 + 23) )
    {
      v11 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v5 + 22, *((unsigned int *)v5 + 48), 0x18uLL);
      if ( !v11 )
        ATL::AtlThrowImpl(-2147024882);
      v12 = *((_DWORD *)v5 + 48) - 1;
      v13 = (_QWORD *)((char *)v11 + 24 * (unsigned int)v12 + 8);
      while ( v12 >= 0 )
      {
        *v13 = *((_QWORD *)v5 + 23);
        *((_QWORD *)v5 + 23) = v13;
        v13 -= 3;
        --v12;
      }
    }
    v14 = (__int64 *)*((_QWORD *)v5 + 23);
    v15 = *v14;
    v14[2] = (__int64)v8;
    *((_QWORD *)v5 + 23) = v15;
    v14[1] = v10;
    *v14 = 0LL;
    ++*((_QWORD *)v5 + 21);
    v16 = (__int64 **)*((_QWORD *)v5 + 20);
    if ( v16 )
      *v16 = v14;
    else
      *((_QWORD *)v5 + 19) = v14;
    *((_QWORD *)v5 + 20) = v14;
  }
  catch ( ATL::CAtlException *v19 )
  {
    v18 = (int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v5 = this;
    v6 = *v18;
  }
  if ( LOBYTE(lpCriticalSection[1]) )
  {
    LeaveCriticalSection(lpCriticalSection[0]);
    LOBYTE(lpCriticalSection[1]) = 0;
  }
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *((_QWORD *)v5 + 25));
LABEL_18:
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1828, v6);
  return (unsigned int)v6;
}
