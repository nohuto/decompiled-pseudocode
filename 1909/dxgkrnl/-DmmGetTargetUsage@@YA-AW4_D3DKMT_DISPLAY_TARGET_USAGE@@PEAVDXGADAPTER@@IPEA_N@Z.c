/*
 * XREFs of ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C0129A84
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C0129A68 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0130CC0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028CE84 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000D7C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmGetTargetUsage(DXGADAPTER *a1, unsigned int a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // edi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 319) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 14442LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a3 )
    *a3 = 0;
  v9 = *((_QWORD *)a1 + 319);
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, *(_QWORD *)(v9 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
    v11 = *(_QWORD *)(v10 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v11, a2);
    if ( TargetById )
    {
      if ( a3 )
        *a3 = *((_BYTE *)TargetById + 92);
      v15 = *((_DWORD *)TargetById + 22);
    }
    else
    {
      v15 = 0;
    }
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v13, v14);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
    return v15;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 0LL;
  }
}
