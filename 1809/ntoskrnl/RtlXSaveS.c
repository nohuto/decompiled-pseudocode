/*
 * XREFs of RtlXSaveS @ 0x140141E20
 * Callers:
 *     KeContextFromKframes @ 0x1400A27B8 (KeContextFromKframes.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14012E67C (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x140294468 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x140620FC8 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14012E84C (RtlXSave.c)
 *     XSaveSHelper @ 0x1401C6560 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave((_DWORD *)a1, a2, a2);
}
