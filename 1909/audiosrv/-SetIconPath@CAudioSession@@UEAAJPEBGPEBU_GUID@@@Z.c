/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800D1540
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180028760 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180047348 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x1800CCF0C (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(unsigned __int16 **this, unsigned __int16 *a2, const struct _GUID *a3)
{
  const struct _GUID *v3; // rsi
  unsigned __int16 **v5; // rdi
  int v6; // ebx
  __int64 *v7; // r15
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 **v13; // [rsp+38h] [rbp-40h]
  unsigned __int16 *v14; // [rsp+40h] [rbp-38h]
  const struct _GUID *v15; // [rsp+48h] [rbp-30h]

  v3 = a3;
  v5 = this;
  v6 = 0;
  v7 = (__int64 *)(this + 41);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 41,
                       (__int64)a2) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 44);
    LOBYTE(v13) = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a2);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = (int *)v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v5 = this;
      v3 = a3;
      v6 = *v10;
    }
    if ( (_BYTE)v13 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 382, v6);
    }
    else
    {
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 1))(v5);
      lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionIconPathChanged::`vftable';
      v13 = v5;
      v14 = v5[41];
      v15 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)(v5 + 62),
        (void (__fastcall ***)(_QWORD, __int64 *))&lpCriticalSection);
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 2))(v5);
    }
  }
  return (unsigned int)v6;
}
