/*
 * XREFs of RtlEqualUnicodeString @ 0x18000A720
 * Callers:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000A950 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18000E580 (RtlpIsDosDeviceName_Ustr.c)
 *     LdrpMinimalMapModule @ 0x180021EDC (LdrpMinimalMapModule.c)
 *     RtlEqualDomainName @ 0x180046420 (RtlEqualDomainName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800480C0 (RtlDeriveCapabilitySidsFromName.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180052320 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x180071CF4 (RtlpDetermineDosPathNameType4.c)
 *     LdrpCheckKnownDllFullPath @ 0x180075338 (LdrpCheckKnownDllFullPath.c)
 *     RtlpCheckForSameCurdir @ 0x18007B8FC (RtlpCheckForSameCurdir.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008AEB0 (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CF100 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CF658 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlEqualUnicodeString(unsigned __int16 *a1, __int64 a2, char a3)
{
  char *v3; // r9
  char *v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v9; // rcx

  if ( *a1 == *(_WORD *)a2 )
  {
    v3 = (char *)*((_QWORD *)a1 + 1);
    v4 = &v3[*a1];
    if ( a3 )
    {
      if ( v3 < v4 )
      {
        v5 = *(_QWORD *)(a2 + 8) - (_QWORD)v3;
        while ( 1 )
        {
          v6 = *(unsigned __int16 *)v3;
          v7 = *(unsigned __int16 *)&v3[v5];
          if ( (_DWORD)v6 != (_DWORD)v7 )
          {
            if ( (unsigned int)v6 >= 0x61 )
            {
              if ( (unsigned int)v6 > 0x7A )
                LODWORD(v6) = (unsigned __int16)(v6
                                               + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                          + 2
                                                          * ((v6 & 0xF)
                                                           + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                 + 2LL
                                                                                 * (((unsigned __int8)v6 >> 4)
                                                                                  + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v6 >> 8)))))));
              else
                LODWORD(v6) = v6 - 32;
            }
            if ( (unsigned int)v7 >= 0x61 )
            {
              if ( (unsigned int)v7 > 0x7A )
                LODWORD(v7) = (unsigned __int16)(v7
                                               + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                          + 2
                                                          * ((v7 & 0xF)
                                                           + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                 + 2LL
                                                                                 * (((unsigned __int8)v7 >> 4)
                                                                                  + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v7 >> 8)))))));
              else
                LODWORD(v7) = v7 - 32;
            }
            if ( (_DWORD)v6 != (_DWORD)v7 )
              break;
          }
          v3 += 2;
          if ( v3 >= v4 )
            return 1;
        }
        return 0;
      }
    }
    else if ( v3 < v4 )
    {
      v9 = *(_QWORD *)(a2 + 8) - (_QWORD)v3;
      while ( *(_WORD *)v3 == *(_WORD *)&v3[v9] )
      {
        v3 += 2;
        if ( v3 >= v4 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
