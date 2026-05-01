/*
 * XREFs of ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJW4ARRANGEMENT_BASED_VIEW_STATE@@AEBUtagRECT@@@Z @ 0x180056E18
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x180056A4C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 * Callees:
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x180056ED0 (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

__int64 __fastcall CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _OWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+50h] [rbp-10h]

  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 52) = 0;
  *(_OWORD *)(a1 + 16) = 0uLL;
  v5 = *a3;
  *(_DWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 32) = v5;
  memset_0(v9, 0, 0x28uLL);
  v6 = v9[1];
  *(_OWORD *)(a1 + 60) = v9[0];
  *(_QWORD *)&v5 = v10;
  *(_OWORD *)(a1 + 76) = v6;
  *(_QWORD *)(a1 + 92) = v5;
  v7 = *(_OWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 76) = -1LL;
  *(_OWORD *)(a1 + 84) = v7;
  *(_QWORD *)(a1 + 68) = -1LL;
  *(_DWORD *)(a1 + 64) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState(a2);
  return 0LL;
}
