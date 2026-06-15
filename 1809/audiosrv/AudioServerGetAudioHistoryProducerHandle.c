/*
 * XREFs of AudioServerGetAudioHistoryProducerHandle @ 0x1800DB970
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002DE20 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B0884 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B0B7C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012E540 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

__int64 __fastcall AudioServerGetAudioHistoryProducerHandle(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  LPCRITICAL_SECTION v9; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  _QWORD *v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  lpCriticalSection = &g_csVadList;
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (_QWORD *)g_VADServerList;
  v13 = (_QWORD *)g_VADServerList;
  while ( v6 )
  {
    v7 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v5, (__int64)v6);
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 504LL) == a2 )
    {
      *a3 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      if ( ++LODWORD(v9[1].DebugInfo) == 1 )
      {
        CAudioDGProcess::CancelADGTerminationTimer(v9);
        CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v9);
      }
      LeaveCriticalSection(v9);
      break;
    }
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v8, &v13);
    v6 = v13;
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
