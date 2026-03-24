/*
 * XREFs of SeCreateAccessState @ 0x140612230
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405828D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x14061145C (ObReferenceObjectByNameEx.c)
 *     WmipCreateGuidObject @ 0x140611BC8 (WmipCreateGuidObject.c)
 *     PsOpenThread @ 0x140611DF0 (PsOpenThread.c)
 *     SeSubProcessToken @ 0x14064EA4C (SeSubProcessToken.c)
 *     NtGetNextProcess @ 0x140718D70 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x14088E990 (NtGetNextThread.c)
 *     CMFCheckAccess @ 0x1408D83E4 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x140612280 (SeCreateAccessStateEx.c)
 */

__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  return SeCreateAccessStateEx(
           (unsigned int)KeGetCurrentThread(),
           KeGetCurrentThread()->ApcState.Process,
           a1,
           a2,
           a3,
           a4);
}
