/*
 * XREFs of SeCreateAccessState @ 0x140613230
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     WmipCreateGuidObject @ 0x140612BC8 (WmipCreateGuidObject.c)
 *     PsOpenThread @ 0x140612DF0 (PsOpenThread.c)
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 *     NtGetNextProcess @ 0x14071A010 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x14088FBF0 (NtGetNextThread.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x140613280 (SeCreateAccessStateEx.c)
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
