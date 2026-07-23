/*
 * XREFs of MiLockHotPatchPages @ 0x1408570F8
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1408584BC (MiPrepareDriverForHotPatch.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     RtlDetermineHotPatchExtent @ 0x14089ADBC (RtlDetermineHotPatchExtent.c)
 */

__int64 __fastcall MiLockHotPatchPages(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  unsigned int v9; // r9d
  char *AnyMultiplexedVm; // r15
  int v11; // r8d
  __int64 v12; // rbp
  __int64 v13; // rbx
  unsigned int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( v11 )
  {
    v12 = a6;
    v13 = 4LL * v9;
    do
    {
      RtlDetermineHotPatchExtent(a5, *(unsigned int *)(a2 + 4 * v12), v15, &v16);
      MiLockHotPatchPageRange(a1, (__int64)AnyMultiplexedVm, v15[0], v16);
      a2 += v13;
      --a3;
    }
    while ( a3 );
  }
  return 0LL;
}
