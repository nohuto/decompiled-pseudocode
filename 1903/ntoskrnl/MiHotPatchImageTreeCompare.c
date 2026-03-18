/*
 * XREFs of MiHotPatchImageTreeCompare @ 0x14088EAA4
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x140309A18 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x14030A198 (PsLoadVsmEnclaveData.c)
 *     MiDeleteImageHotPatchState @ 0x14088E14C (MiDeleteImageHotPatchState.c)
 *     MiGetHotPatchEntry @ 0x14088E454 (MiGetHotPatchEntry.c)
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
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
