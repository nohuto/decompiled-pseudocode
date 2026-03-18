/*
 * XREFs of RtlXSaveS @ 0x14012EDCC
 * Callers:
 *     KeContextFromKframes @ 0x1400168CC (KeContextFromKframes.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14012EBFC (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1402AA9B8 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x1405E8CD8 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14012EDF4 (RtlXSave.c)
 *     XSaveSHelper @ 0x1401CD550 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave(a1, a2);
}
