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

char __fastcall RtlEqualUnicodeString(unsigned __int16 *a1, __int64 a2, char a3)
{
  char *v3; // r9
  char *v4; // r11
  __int64 v5; // rdi
  unsigned __int16 v6; // r8
  unsigned __int16 v7; // r10
  __int64 v9; // rcx

  if ( *a1 == *(_WORD *)a2 )
  {
    v3 = (char *)*((_QWORD *)a1 + 1);
    v4 = &v3[*a1];
    if ( v3 >= v4 )
      return 1;
    if ( a3 )
    {
      v5 = *(_QWORD *)(a2 + 8) - (_QWORD)v3;
      while ( 1 )
      {
        v6 = *(_WORD *)v3;
        v7 = *(_WORD *)&v3[v5];
        if ( *(_WORD *)v3 != v7 )
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
                                                                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v6 >> 8))))));
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
        v3 += 2;
        if ( v3 >= v4 )
          return 1;
      }
    }
    else
    {
      v9 = *(_QWORD *)(a2 + 8) - (_QWORD)v3;
      while ( *(_WORD *)v3 == *(_WORD *)&v3[v9] )
      {
        v3 += 2;
        if ( v3 >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
