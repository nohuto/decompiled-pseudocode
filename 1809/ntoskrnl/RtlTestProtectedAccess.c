/*
 * XREFs of RtlTestProtectedAccess @ 0x1406092A0
 * Callers:
 *     PopBlackBoxUpdate @ 0x14058E4C4 (PopBlackBoxUpdate.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140608F94 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140608FC4 (PspValidateCreateProcessProtection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140609270 (PspCheckForInvalidAccessByProtection.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  bool result; // al
  int v3; // eax

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v3, a2 >> 4) )
      return 0;
  }
  return result;
}
