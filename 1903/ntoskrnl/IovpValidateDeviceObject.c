/*
 * XREFs of IovpValidateDeviceObject @ 0x140963CC0
 * Callers:
 *     IovCallDriver @ 0x140962E34 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x14096368C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
