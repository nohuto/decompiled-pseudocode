/*
 * XREFs of NVMeHwResetBus @ 0x1C000B360
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerAsyncReset @ 0x1C000D44C (NVMeControllerAsyncReset.c)
 *     NVMeControllerReset @ 0x1C000E108 (NVMeControllerReset.c)
 */

char __fastcall NVMeHwResetBus(__int64 a1)
{
  int v1; // ebx
  char result; // al

  v1 = a1;
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  result = NVMeControllerAsyncReset(a1, 0LL, 0LL, 0LL);
  if ( !result )
    return NVMeControllerReset(v1);
  return result;
}
