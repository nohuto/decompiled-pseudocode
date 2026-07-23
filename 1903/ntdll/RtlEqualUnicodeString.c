/*
 * XREFs of RtlEqualUnicodeString @ 0x180022950
 * Callers:
 *     sub_18000456C @ 0x18000456C (sub_18000456C.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_18002284C @ 0x18002284C (sub_18002284C.c)
 *     sub_1800285E0 @ 0x1800285E0 (sub_1800285E0.c)
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 *     sub_18002A8BC @ 0x18002A8BC (sub_18002A8BC.c)
 *     RtlEqualDomainName @ 0x18002AE10 (RtlEqualDomainName.c)
 *     sub_1800766DC @ 0x1800766DC (sub_1800766DC.c)
 *     sub_180077094 @ 0x180077094 (sub_180077094.c)
 *     sub_180087EB8 @ 0x180087EB8 (sub_180087EB8.c)
 *     sub_1800CD8F0 @ 0x1800CD8F0 (sub_1800CD8F0.c)
 *     sub_1800CDE60 @ 0x1800CDE60 (sub_1800CDE60.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  PWCH Buffer; // r9
  WCHAR *v4; // r11
  char *v5; // rdi
  WCHAR v6; // r8
  unsigned __int16 v7; // r10
  char *v9; // rcx

  if ( String1->Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v4 = (PWCH)((char *)Buffer + String1->Length);
    if ( Buffer >= v4 )
      return 1;
    if ( CaseInSensitive )
    {
      v5 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v6 = *Buffer;
        v7 = *(PWCH)((char *)Buffer + (_QWORD)v5);
        if ( *Buffer != v7 )
        {
          if ( v6 >= 0x61u )
          {
            if ( v6 > 0x7Au )
            {
              if ( qword_180166510 && v6 >= 0xC0u )
                v6 += *(_WORD *)(qword_180166510
                               + 2LL
                               * ((v6 & 0xF)
                                + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                    + 2LL
                                                                    * (((v6 >> 4) & 0xF)
                                                                     + (unsigned int)*(unsigned __int16 *)(qword_180166510 + 2LL * HIBYTE(v6))))));
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
              if ( qword_180166510 )
              {
                if ( v7 >= 0xC0u )
                  v7 += *(_WORD *)(qword_180166510
                                 + 2LL
                                 * ((v7 & 0xF)
                                  + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                      + 2LL
                                                                      * (((v7 >> 4) & 0xF)
                                                                       + (unsigned int)*(unsigned __int16 *)(qword_180166510 + 2 * ((unsigned __int64)v7 >> 8))))));
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
      while ( *Buffer == *(PWCH)((char *)Buffer + (_QWORD)v9) )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
