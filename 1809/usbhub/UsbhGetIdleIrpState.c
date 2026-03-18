/*
 * XREFs of UsbhGetIdleIrpState @ 0x1C00015A8
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001458 (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleIrp_Event @ 0x1C005A888 (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 */

__int64 __fastcall UsbhGetIdleIrpState(__int64 a1, __int64 a2, KIRQL *a3)
{
  __int64 v4; // rdi
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 result; // rax

  v4 = PdoExt(a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 2048));
  v6 = *(unsigned int *)(v4 + 1788) + 56LL;
  *a3 = v5;
  result = *(unsigned int *)(v4 + 1536);
  v6 *= 32LL;
  *(_DWORD *)(v6 + v4) = 0;
  *(_DWORD *)(v6 + v4 + 4) = result;
  return result;
}
