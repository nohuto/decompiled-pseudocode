/*
 * XREFs of MiHotPatchImageTreeCompare @ 0x14088E2C4
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x1403094C8 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140309C48 (PsLoadVsmEnclaveData.c)
 *     MiDeleteImageHotPatchState @ 0x14088D96C (MiDeleteImageHotPatchState.c)
 *     MiGetHotPatchEntry @ 0x14088DC74 (MiGetHotPatchEntry.c)
 *     PsCallEnclave @ 0x1408CB3F0 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHotPatchImageTreeCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
