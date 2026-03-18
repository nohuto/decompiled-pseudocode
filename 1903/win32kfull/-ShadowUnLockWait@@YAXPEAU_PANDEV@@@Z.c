/*
 * XREFs of ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C0290A74
 * Callers:
 *     ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C028FC60 (-PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0290C3C (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02911E8 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0291BCC (-vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ShadowUnLockWait(struct _PANDEV *a1)
{
  ++*(_DWORD *)(*((_QWORD *)a1 + 98) + 88LL);
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)a1 + 98) + 32LL), 0);
  KeWaitForSingleObject(*((PVOID *)a1 + 98), UserRequest, 0, 0, 0LL);
}
