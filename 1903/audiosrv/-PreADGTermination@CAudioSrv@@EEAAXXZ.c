/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180044610
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x1800BD4F4 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800BF258 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800BF55C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800C153C (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  int v1; // ebx
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  size_t cchDest; // [rsp+48h] [rbp-C0h] BYREF
  STRSAFE_LPWSTR v6; // [rsp+50h] [rbp-B8h] BYREF
  __int64 i; // [rsp+58h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+68h] [rbp-A0h]
  __int64 v10; // [rsp+70h] [rbp-98h]
  wchar_t pszDest[1024]; // [rsp+78h] [rbp-90h] BYREF

  v10 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  LOBYTE(v9) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( qword_1801B7810 )
  {
    v6 = pszDest;
    cchDest = 1024LL;
    v1 = StringCchPrintfExW(
           pszDest,
           0x400uLL,
           &v6,
           &cchDest,
           0x800u,
           L"AudioSrv active Stream on AudioDG terminating: ");
    if ( v1 >= 0 )
    {
      v2 = g_VADServerList;
      for ( i = g_VADServerList; v2; v2 = i )
      {
        v3 = (_QWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v2, v2);
        v1 = StringCchPrintfExW(v6, cchDest, &v6, &cchDest, 0x800u, L"%p ", *v3);
        if ( v1 )
          break;
        ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v4, &i);
      }
      if ( (int)(v1 + 0x80000000) < 0 || v1 == -2147024774 )
        LogProductionAssert(0x6D58B0uLL, pszDest);
    }
  }
  if ( (_BYTE)v9 )
    LeaveCriticalSection(lpCriticalSection);
}
