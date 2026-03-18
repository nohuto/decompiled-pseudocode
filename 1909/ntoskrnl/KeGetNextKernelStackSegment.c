/*
 * XREFs of KeGetNextKernelStackSegment @ 0x14008F8CC
 * Callers:
 *     RtlpIsFrameInBoundsEx @ 0x14001AE90 (RtlpIsFrameInBoundsEx.c)
 *     KiInSwapKernelStacks @ 0x14008F478 (KiInSwapKernelStacks.c)
 *     KeEnumerateKernelStackSegments @ 0x14008F828 (KeEnumerateKernelStackSegments.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetNextKernelStackSegment(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    *a2 = a1[7];
    a2[1] = a1[6];
    a2[2] = a1[11];
    a2[3] = a1[5];
  }
  else
  {
    v3 = a2[3];
    if ( !*(_QWORD *)(v3 + 16) )
      return 0;
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v3 + 32);
  }
  return 1;
}
