/*
 * XREFs of RtlXSaveS @ 0x14012E47C
 * Callers:
 *     KeContextFromKframes @ 0x1400164DC (KeContextFromKframes.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14012E2AC (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1402AAC58 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x1405E8508 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14012E4A4 (RtlXSave.c)
 *     XSaveSHelper @ 0x1401CC9D0 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave(a1, a2);
}
