/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x14013C980
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400700C0 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetPteLink @ 0x140076E80 (MiGetPteLink.c)
 */

unsigned __int64 __fastcall MiWaitForSystemCacheViewFlush(__int64 a1)
{
  unsigned __int64 result; // rax
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i) )
  {
    result = MiGetPteLink(*(_QWORD *)(a1 + 24));
    if ( !result )
      break;
  }
  return result;
}
