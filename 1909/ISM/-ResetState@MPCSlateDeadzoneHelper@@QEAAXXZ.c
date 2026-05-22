/*
 * XREFs of ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x180140C08
 * Callers:
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180140C30 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 * Callees:
 *     ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x180140A54 (-ResetState@MPCButtonHoldHelper@@QEAAXXZ.c)
 */

void __fastcall MPCSlateDeadzoneHelper::ResetState(MPCButtonHoldHelper **this)
{
  __int64 v1; // rdx

  MPCButtonHoldHelper::ResetState(this[2]);
  *(_WORD *)(v1 + 12) = 0;
  *(_BYTE *)(v1 + 14) = 0;
  *(_QWORD *)(v1 + 4) = 0LL;
}
