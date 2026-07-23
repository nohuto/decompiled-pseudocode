/*
 * XREFs of RtlEqualUnicodeString @ 0x180022950
 * Callers:
 *     EtwpGetPrivateLoggerContextByName @ 0x18000456C (EtwpGetPrivateLoggerContextByName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002284C (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x1800285E0 (RtlpIsDosDeviceName_Ustr.c)
 *     LdrpMinimalMapModule @ 0x18002A0B0 (LdrpMinimalMapModule.c)
 *     LdrpCheckKnownDllFullPath @ 0x18002A8BC (LdrpCheckKnownDllFullPath.c)
 *     RtlEqualDomainName @ 0x18002AE10 (RtlEqualDomainName.c)
 *     RtlpCheckForSameCurdir @ 0x180076B5C (RtlpCheckForSameCurdir.c)
 *     RtlpDetermineDosPathNameType4 @ 0x180077514 (RtlpDetermineDosPathNameType4.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x180088558 (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CD9B0 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CDF20 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // r9
  wchar_t *v4; // r11
  char *v5; // rdi
  wchar_t v6; // r8
  unsigned __int16 v7; // r10
  char *v9; // rcx

  if ( String1->Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v4 = (wchar_t *)((char *)Buffer + String1->Length);
    if ( Buffer >= v4 )
      return 1;
    if ( CaseInSensitive )
    {
      v5 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v6 = *Buffer;
        v7 = *(wchar_t *)((char *)Buffer + (_QWORD)v5);
        if ( *Buffer != v7 )
        {
          if ( v6 >= 0x61u )
          {
            if ( v6 > 0x7Au )
            {
              if ( Nls844UnicodeUpcaseTable && v6 >= 0xC0u )
                v6 += *(_WORD *)(Nls844UnicodeUpcaseTable
                               + 2LL
                               * ((v6 & 0xF)
                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                    + 2LL
                                                                    * (((v6 >> 4) & 0xF)
                                                                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * HIBYTE(v6))))));
            }
            else
            {
              v6 -= 32;
            }
          }
          if ( v7 >= 0x61u )
          {
            if ( v7 > 0x7Au )
            {
              if ( Nls844UnicodeUpcaseTable )
              {
                if ( v7 >= 0xC0u )
                  v7 += *(_WORD *)(Nls844UnicodeUpcaseTable
                                 + 2LL
                                 * ((v7 & 0xF)
                                  + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                      + 2LL
                                                                      * (((v7 >> 4) & 0xF)
                                                                       + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v7 >> 8))))));
              }
            }
            else
            {
              v7 -= 32;
            }
          }
          if ( v6 != v7 )
            break;
        }
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
    else
    {
      v9 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v9) )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
