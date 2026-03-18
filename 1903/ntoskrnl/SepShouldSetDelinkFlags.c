/*
 * XREFs of SepShouldSetDelinkFlags @ 0x1406DB2DC
 * Callers:
 *     SepInternalSetSecurityAttributesToken @ 0x14031C804 (SepInternalSetSecurityAttributesToken.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x14012F800 (SepPotentialGlobalTableAttribute.c)
 */

char __fastcall SepShouldSetDelinkFlags(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  unsigned int v4; // edi
  const UNICODE_STRING *v5; // rcx

  v2 = 0;
  if ( *a1 == 1 )
    return 1;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 4) )
  {
    while ( 1 )
    {
      v5 = (const UNICODE_STRING *)(*(_QWORD *)(a2 + 8) + 40LL * v4);
      if ( v5 )
      {
        if ( SepPotentialGlobalTableAttribute(v5) )
          break;
      }
      if ( ++v4 >= *(_DWORD *)(a2 + 4) )
        return v2;
    }
    return 1;
  }
  return v2;
}
