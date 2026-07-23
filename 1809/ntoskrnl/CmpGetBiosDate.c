/*
 * XREFs of CmpGetBiosDate @ 0x1409C3A94
 * Callers:
 *     CmpSetVideoBiosInformation @ 0x1409C3418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C35D4 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     strtoul @ 0x1401981DC (strtoul.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

char __fastcall CmpGetBiosDate(__int64 a1, unsigned int a2, _BYTE *a3, char a4)
{
  _BYTE *v4; // rdi
  _BYTE *v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int16 *v7; // rsi
  char result; // al
  char v10; // bl
  char v11; // r15
  char v12; // cl
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  char v16; // r8
  char v17; // dl
  char Str[8]; // [rsp+30h] [rbp-30h] BYREF
  char v20[2]; // [rsp+38h] [rbp-28h] BYREF
  char v21; // [rsp+3Ah] [rbp-26h]
  __int64 Src; // [rsp+40h] [rbp-20h] BYREF
  __int16 v23; // [rsp+48h] [rbp-18h]
  char v24; // [rsp+4Ah] [rbp-16h]

  Src = 0LL;
  v23 = 0;
  v4 = (_BYTE *)(a1 + 2);
  v24 = 0;
  v5 = a3;
  v6 = a2 + a1 - 5;
  if ( a1 + 2 < v6 )
  {
    v7 = (unsigned __int16 *)(a1 + 6);
    do
    {
      if ( *v4 == 47
        && v4[3] == 47
        && (unsigned __int8)(*(v4 - 1) - 48) <= 9u
        && (unsigned __int8)(v4[1] - 48) <= 9u
        && (unsigned __int8)(v4[2] - 48) <= 9u )
      {
        v10 = *(_BYTE *)v7;
        if ( (unsigned __int8)(*(_BYTE *)v7 - 48) <= 9u )
        {
          v11 = v4[5];
          if ( (unsigned __int8)(v11 - 48) <= 9u )
          {
            memmove(&Str[5], v4 - 2, 5uLL);
            v12 = Str[5];
            Str[2] = v10;
            Str[3] = v11;
            if ( (unsigned __int8)(Str[5] - 48) > 9u )
              v12 = 48;
            Str[5] = v12;
            v21 = 0;
            Str[7] = 0;
            Str[4] = 0;
            v13 = strtoul(&Str[2], 0LL, 16);
            v14 = strtoul(&Str[5], 0LL, 16);
            v15 = strtoul(v20, 0LL, 16);
            if ( v14 - 1 <= 0x11 && v15 - 1 <= 0x30 )
            {
              if ( a4
                && (v16 = v4[6], (unsigned __int8)(v16 - 48) <= 9u)
                && (v17 = v4[7], (unsigned __int8)(v17 - 48) <= 9u)
                && (*v7 == *(unsigned __int16 *)"19" || *v7 == *(unsigned __int16 *)"20") )
              {
                Str[0] = *(_BYTE *)v7;
                Str[1] = v4[5];
                Str[2] = v16;
                Str[3] = v17;
              }
              else
              {
                *(_WORD *)Str = 12338;
                if ( v13 >= 0x80 )
                  *(_WORD *)Str = 14641;
              }
              Str[7] = 47;
              Str[4] = 47;
              if ( memcmp(&Src, Str, 0xAuLL) < 0 )
              {
                Src = *(_QWORD *)Str;
                v23 = *(_WORD *)v20;
              }
              v4 += 2;
              ++v7;
            }
          }
        }
      }
      ++v4;
      v7 = (unsigned __int16 *)((char *)v7 + 1);
    }
    while ( (unsigned __int64)v4 < v6 );
    v5 = a3;
  }
  if ( (_BYTE)Src )
  {
    memmove(v5, (char *)&Src + 5, 5uLL);
    result = 1;
    *((_WORD *)v5 + 3) = WORD1(Src);
    v5[5] = 47;
    v5[8] = 0;
  }
  else
  {
    *v5 = 0;
    return 0;
  }
  return result;
}
