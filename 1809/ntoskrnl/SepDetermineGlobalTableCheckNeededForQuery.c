/*
 * XREFs of SepDetermineGlobalTableCheckNeededForQuery @ 0x1400A7204
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6A08 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x140014114 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400A7130 (AuthzBasepFindSecurityAttribute.c)
 */

char __fastcall SepDetermineGlobalTableCheckNeededForQuery(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  unsigned int v8; // edi

  v3 = 1;
  if ( (SepSingletonGlobal[4] & 1) == 0 || !a2 )
    return 0;
  v8 = 0;
  if ( a3 )
  {
    while ( SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a2 + 16LL * v8))
         && !AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), (const UNICODE_STRING *)(a2 + 16LL * v8)) )
    {
      if ( ++v8 >= a3 )
        return v3;
    }
    return 0;
  }
  return v3;
}
