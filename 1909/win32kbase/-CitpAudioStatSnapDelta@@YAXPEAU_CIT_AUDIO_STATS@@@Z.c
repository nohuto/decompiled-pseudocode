/*
 * XREFs of ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C0098CC8
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0082F74 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C0098C9C (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpAudioStatSnapDelta(struct _CIT_AUDIO_STATS *a1)
{
  int v2; // r8d
  int v3; // eax
  unsigned int v4; // ecx

  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v4 = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL
     + (*(_DWORD *)a1 & 0xFFFFFF)
     - *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
  if ( v4 > 0xFFFFFF )
    v4 = 0xFFFFFF;
  *(_DWORD *)a1 = v2 ^ (v4 ^ v3) & 0xFFFFFF;
}
