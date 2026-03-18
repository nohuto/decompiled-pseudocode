/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x14013C360
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14006FE50 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetPteLink @ 0x140076C10 (MiGetPteLink.c)
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
