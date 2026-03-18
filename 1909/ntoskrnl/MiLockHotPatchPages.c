/*
 * XREFs of MiLockHotPatchPages @ 0x14088EC58
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140890410 (MiPrepareDriverForHotPatch.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     RtlDetermineHotPatchExtent @ 0x1408D7FAC (RtlDetermineHotPatchExtent.c)
 */

__int64 __fastcall MiLockHotPatchPages(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  unsigned int v9; // r9d
  char *AnyMultiplexedVm; // r15
  int v11; // r8d
  __int64 v12; // rbp
  __int64 v13; // rbx
  char v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]
  unsigned int v17[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( v11 )
  {
    v12 = a6;
    v13 = 4LL * v9;
    do
    {
      RtlDetermineHotPatchExtent(a5, *(unsigned int *)(a2 + 4 * v12), v17, &v18);
      MiLockDriverPageRange(a1, (__int64)AnyMultiplexedVm, v17[0], v18, v15, v16);
      a2 += v13;
      --a3;
    }
    while ( a3 );
  }
  return 0LL;
}
