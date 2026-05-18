/*
 * XREFs of sub_18011BF14 @ 0x18011BF14
 * Callers:
 *     sub_180119B30 @ 0x180119B30 (sub_180119B30.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 * Callees:
 *     strchr @ 0x180125ABA (strchr.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

char __fastcall sub_18011BF14(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  char v6; // dl
  unsigned __int64 v7; // rcx
  char v9; // r9
  __int64 v10; // r10
  char v11; // bp
  unsigned __int64 v12; // rbx
  char *v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int16 v19; // [rsp+28h] [rbp-30h]
  char v20; // [rsp+2Ah] [rbp-2Eh]

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a1 + v4) );
  if ( v4 < 0x12 )
    return 0;
  v5 = 0LL;
  v6 = 2 - (v4 < 0x18);
  v7 = 16LL;
  if ( !a2 )
  {
    do
    {
      while ( v5 < v7 )
      {
        v9 = *(_BYTE *)(a1 + v5);
        if ( (unsigned __int8)(v9 - 43) > 0x2Fu || (v10 = 0xFFFFFFC07FF1LL, !_bittest64(&v10, (char)(v9 - 43))) )
        {
          if ( (unsigned __int8)(v9 - 97) > 0x19u )
            return 0;
        }
        ++v5;
      }
      if ( *(_BYTE *)(a1 + v5) != 46 )
        v7 = 22LL;
      --v6;
    }
    while ( v6 );
    v11 = (v7 == 22) + 1;
    while ( *(_BYTE *)(a1 + v5) == 46 )
    {
      v12 = v5 + 1;
      if ( v12 >= v4 )
        break;
      v18 = 0LL;
      v19 = 0;
      v20 = 0;
      v13 = strchr((const char *)(a1 + v12), 46);
      v14 = (unsigned __int64)&v13[-a1 - v12];
      if ( !v13 )
        v14 = v4 - v12;
      if ( v14 > 0xB )
        break;
      o_strncpy_s(&v18, 11LL, a1 + v12, v14);
      o__set_errno(0LL);
      if ( !(unsigned int)o_strtol(&v18, 0LL, 10LL) && (_BYTE)v18 != 48 && BYTE1(v18) )
        break;
      if ( *(_DWORD *)o__errno(v16, v15, v17) == 34 )
        break;
      v5 = v14 + v12;
      if ( v5 >= v4 )
        return v11;
    }
    return 0;
  }
  do
  {
    if ( *(_BYTE *)(a1 + v7) == 46 )
      break;
    v7 = 22LL;
    --v6;
  }
  while ( v6 );
  return v6;
}
