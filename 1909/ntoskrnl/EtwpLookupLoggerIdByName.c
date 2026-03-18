/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x1406AA78C
 * Callers:
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // esi
  unsigned int *v8; // rax
  unsigned int *v9; // r14
  BOOLEAN v11; // bl

  v3 = 0;
  v7 = -1073741162;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v8 = EtwpAcquireLoggerContextByLoggerId(a1, v3, 0);
      v9 = v8;
      if ( v8 )
      {
        v11 = RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 38), a2, 1u);
        EtwpReleaseLoggerContext(v9, 0);
        if ( v11 )
          break;
      }
      if ( ++v3 >= *(_DWORD *)(a1 + 16) )
        return v7;
    }
    *a3 = v3;
    return 0;
  }
  return v7;
}
