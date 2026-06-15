/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180029070
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800292B0 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180028EC0 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(CAudioSrv *this, unsigned __int16 *a2, struct _tagpropertykey *a3)
{
  CAudioSrv *v5; // rbx
  unsigned int v6; // r15d
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  DWORD pid; // edi
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  int v14; // r9d
  _QWORD *v15; // r8
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rax
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // [rsp+38h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v5 = this;
  v6 = 0;
  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *(GUID *)lpCriticalSection = a3->fmtid;
    pid = a3->pid;
    COnDeviceWorkItem::COnDeviceWorkItem(v7, a2, 4);
    *v8 = &COnDevicePropertyChangedWorkItem::`vftable';
    *((_OWORD *)v8 + 2) = *(_OWORD *)lpCriticalSection;
    *((_DWORD *)v8 + 12) = pid;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v8[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
LABEL_31:
    v6 = -2147024882;
LABEL_32:
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 0x6B9u, v6);
    return v6;
  }
  if ( !*((_QWORD *)v5 + 25) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    return v6;
  }
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)v5 + 112);
  LOBYTE(lpCriticalSection[1]) = 0;
  ATL::CCritSecLock::Lock(lpCriticalSection);
  v6 = 0;
  try
  {
    v10 = *((_QWORD *)v5 + 20);
    if ( *((_QWORD *)v5 + 23) )
    {
LABEL_18:
      v16 = (__int64 *)*((_QWORD *)v5 + 23);
      v17 = *v16;
      v16[2] = (__int64)v8;
      *((_QWORD *)v5 + 23) = v17;
      v16[1] = v10;
      *v16 = 0LL;
      ++*((_QWORD *)v5 + 21);
      v18 = (__int64 **)*((_QWORD *)v5 + 20);
      if ( v18 )
        *v18 = v16;
      else
        *((_QWORD *)v5 + 19) = v16;
      *((_QWORD *)v5 + 20) = v16;
      goto LABEL_38;
    }
    v11 = *((unsigned int *)v5 + 48);
    if ( *((_DWORD *)v5 + 48) )
    {
      if ( v11 == 10 )
        v12 = 0x1999999999999999LL;
      else
        v12 = 0xFFFFFFFFFFFFFFFFuLL / v11;
      if ( v12 < 0x18 )
        goto LABEL_28;
      v11 *= 24LL;
    }
    if ( ~v11 >= 8 )
    {
      v13 = malloc(v11 + 8);
      if ( v13 )
      {
        *v13 = *((_QWORD *)v5 + 22);
        *((_QWORD *)v5 + 22) = v13;
        v14 = *((_DWORD *)v5 + 48) - 1;
        v15 = &v13[3 * (unsigned int)v14 + 1];
        while ( v14 >= 0 )
        {
          *v15 = *((_QWORD *)v5 + 23);
          *((_QWORD *)v5 + 23) = v15;
          v15 -= 3;
          --v14;
        }
        goto LABEL_18;
      }
    }
LABEL_28:
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( ATL::CAtlException *v21 )
  {
    v20 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v24 = *(_DWORD *)v20;
    v5 = this;
    v6 = v24;
  }
LABEL_38:
  if ( LOBYTE(lpCriticalSection[1]) )
  {
    LeaveCriticalSection(lpCriticalSection[0]);
    LOBYTE(lpCriticalSection[1]) = 0;
  }
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *((_QWORD *)v5 + 25));
  if ( (v6 & 0x80000000) != 0 )
    goto LABEL_32;
  return v6;
}
