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
              if ( qword_180166510 && v6 >= 0xC0u )
                v6 += *(_WORD *)(qword_180166510
                               + 2LL
                               * ((v6 & 0xF)
                                + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                    + 2LL
                                                                    * (((v6 >> 4) & 0xF)
                                                                     + (unsigned int)*(unsigned __int16 *)(qword_180166510 + 2 * ((unsigned __int64)v6 >> 8))))));
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
