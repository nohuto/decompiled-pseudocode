/*
 * XREFs of EtwpCCSwapStop @ 0x140708624
 * Callers:
 *     EtwpFlushTrace @ 0x1406CBED4 (EtwpFlushTrace.c)
 *     EtwpUpdateGroupMasks @ 0x140707858 (EtwpUpdateGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 */

void __fastcall EtwpCCSwapStop(unsigned int a1, char a2)
{
  ULONG v2; // esi
  ULONG v3; // edi
  __int64 i; // rbx
  __int64 v6; // rcx

  v2 = KeNumberProcessors_0;
  v3 = 0;
  for ( i = a1; v3 < v2; ++v3 )
  {
    v6 = *(_QWORD *)(KeGetPrcb(v3) + 24616);
    if ( *(_QWORD *)(v6 + 8 * i + 296) )
      *(_BYTE *)(i + v6 + 288) = 1;
  }
  if ( a2 )
    --CCSwapNumLoggersPerClockType[i];
}
