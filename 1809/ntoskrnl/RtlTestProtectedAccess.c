/*
 * XREFs of RtlTestProtectedAccess @ 0x14060A2A0
 * Callers:
 *     PopBlackBoxUpdate @ 0x14058F4C4 (PopBlackBoxUpdate.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140609F94 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140609FC4 (PspValidateCreateProcessProtection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14060A270 (PspCheckForInvalidAccessByProtection.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  BOOLEAN result; // al
  int v3; // eax

  result = 1;
  if ( (Target.Level & 7) != 0 )
  {
    if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4)];
    if ( !_bittest(&v3, Target.Level >> 4) )
      return 0;
  }
  return result;
}
