/*
 * XREFs of RtlTestProtectedAccess @ 0x1406B8AE0
 * Callers:
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     PopBlackBoxUpdate @ 0x14069C85C (PopBlackBoxUpdate.c)
 *     PspValidateCreateProcessProtection @ 0x1406B86BC (PspValidateCreateProcessProtection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B8AB0 (PspCheckForInvalidAccessByProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406E2B64 (PspGetProcessProtectionRequirementsFromImage.c)
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
