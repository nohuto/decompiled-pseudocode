/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x14013919C
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400795B0 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400AD200 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     MiGetPteLink @ 0x1400AD784 (MiGetPteLink.c)
 */

unsigned __int64 __fastcall MiWaitForSystemCacheViewFlush(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i, v3, v4) )
  {
    result = MiGetPteLink(*(_QWORD *)(a1 + 24));
    if ( !result )
      break;
  }
  return result;
}
