/*
 * XREFs of PfSnGetUnsafeProcessParameters @ 0x140667CAC
 * Callers:
 *     PfSnScanCommandLine @ 0x140667A14 (PfSnScanCommandLine.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 PfSnGetUnsafeProcessParameters()
{
  unsigned __int64 v0; // rdx
  __int64 result; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  result = 0LL;
  if ( v0 )
  {
    if ( (*(_QWORD *)(v0 + 32) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    return *(_QWORD *)(v0 + 32);
  }
  return result;
}
