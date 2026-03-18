/*
 * XREFs of GetUserHandedness @ 0x1C01EF790
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C023A1AC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0253394 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0254164 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUserHandedness(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // r8d

  v3 = RIMIsDefaultUILanguageRTL(a1, a2, a3);
  v4 = 0;
  if ( v3 )
    LOBYTE(v4) = *(_DWORD *)(gpsi + 2056LL) == 0;
  else
    LOBYTE(v4) = *(_DWORD *)(gpsi + 2056LL) != 0;
  return v4;
}
