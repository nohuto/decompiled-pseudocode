/*
 * XREFs of IovpValidateDeviceObject @ 0x140925B30
 * Callers:
 *     IovCallDriver @ 0x140924CD4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x14092550C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
