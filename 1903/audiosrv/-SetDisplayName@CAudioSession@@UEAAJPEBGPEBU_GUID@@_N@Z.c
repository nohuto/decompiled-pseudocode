/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800D1800
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180025B10 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180042D98 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x1800CD37C (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetDisplayName(
        CAudioSession *this,
        unsigned __int16 *a2,
        const struct _GUID *a3,
        char a4)
{
  const struct _GUID *v5; // rsi
  CAudioSession *v7; // rbx
  int v8; // edi
  __int64 *v9; // r12
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  CAudioSession *v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  const struct _GUID *v16; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+98h] [rbp+20h]

  v5 = a3;
  v7 = this;
  v8 = 0;
  if ( a4 )
    *((_BYTE *)this + 301) = 1;
  v9 = (__int64 *)((char *)this + 320);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       (unsigned __int16 **)this + 40,
                       (__int64)a2)
    && (a4 || !*((_BYTE *)v7 + 301)) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v7 + 352);
    LOBYTE(v14) = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v8 = 0;
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v9, a2);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v11 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v19 = *(_DWORD *)v11;
      v7 = this;
      v5 = a3;
      v8 = v19;
    }
    if ( (_BYTE)v14 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 258, v8);
    }
    else
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
      lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionDisplayNameChanged::`vftable';
      v14 = v7;
      v15 = *((_QWORD *)v7 + 40);
      v16 = v5;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)v7 + 496),
        (void (__fastcall ***)(_QWORD, __int64 *))&lpCriticalSection);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v8;
}
