/*
 * XREFs of ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C017E100
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0174CAC (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C017A194 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C017A7D0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C017B728 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01919F8 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015D7A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C015DB10 (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C017E46C (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ApiSetEditionQueryInertiaWorker @ 0x1C019DDF8 (ApiSetEditionQueryInertiaWorker.c)
 */

__int64 __fastcall CInertiaManager::QueryInertia(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned __int64 v7; // rdx
  CInertiaManager *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  _OWORD v13[8]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 192);
  if ( (v3 & 1) != 0 && (v7 = *(_QWORD *)(a1 + 128)) != 0 )
  {
    CInputDest::CInputDest(v13, v7, 2 - ((v3 & 0x20) != 0), 1);
    LOBYTE(v3) = CInertiaManager::ValidateInertiaDest(v8, (const struct CInputDest *)v13);
    if ( (_BYTE)v3 && (*(_DWORD *)(a1 + 192) & 2) != 0 )
      LOBYTE(v3) = CInputDest::HasDelegationThread((CInputDest *)v13);
    CInputDest::SetEmpty((CInputDest *)v13, v9, v10);
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 192) & 0x10u) >> 4;
  }
  if ( (_BYTE)v3 && (LOBYTE(v3) = (a3 & *(_DWORD *)(a1 + 32)) != 0) != 0 )
  {
    v11 = a1 + 8;
    LOBYTE(v3) = (unsigned int)ApiSetEditionQueryInertiaWorker(a2, v11) != 0;
  }
  else
  {
    v11 = a1 + 8;
  }
  return v11 & -(__int64)((_BYTE)v3 != 0);
}
