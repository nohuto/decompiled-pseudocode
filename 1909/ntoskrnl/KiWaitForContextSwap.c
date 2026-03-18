/*
 * XREFs of KiWaitForContextSwap @ 0x14008F9C4
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14008F500 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x14008F918 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1)
{
  char result; // al
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i) )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
  }
  return result;
}
