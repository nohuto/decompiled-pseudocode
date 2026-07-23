/*
 * XREFs of KiWaitForContextSwap @ 0x14013D570
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14013D0B8 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x14013D4C4 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i, a2, a3) )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
  }
  return result;
}
