/*
 * XREFs of sub_18000E7C0 @ 0x18000E7C0
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     RtlOwnerAcesPresent @ 0x180087AD0 (RtlOwnerAcesPresent.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memcmp @ 0x180090560 (memcmp.c)
 */

char __fastcall sub_18000E7C0(unsigned __int8 a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned __int8 *v4; // rbx
  unsigned int v5; // edi
  __int16 v6; // r14
  int v7; // r12d
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  char *v10; // rcx
  __int16 Buf2; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+2Ah] [rbp-2Eh]
  __int16 v14; // [rsp+2Eh] [rbp-2Ah]
  int v15; // [rsp+30h] [rbp-28h]

  v13 = 0;
  v14 = 768;
  Buf2 = 257;
  v15 = 4;
  if ( !a2 )
    return 0;
  v3 = *(unsigned __int16 *)(a2 + 4);
  v4 = (unsigned __int8 *)(a2 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a2 + 4) )
    return 0;
  v6 = Buf2;
  v7 = 104928;
  while ( 1 )
  {
    if ( (v4[1] & 8) == 0 )
    {
      v8 = *v4;
      if ( *v4 <= 0x10u && _bittest(&v7, v8) )
      {
        v9 = 16LL * (*((_DWORD *)v4 + 2) & 1) + ((8LL * (*((_DWORD *)v4 + 2) & 2)) | 0xC);
      }
      else if ( v8 == 4 )
      {
        v9 = 12LL;
      }
      else
      {
        if ( v8 >= 0xBu && (unsigned __int8)(v8 - 13) > 1u )
          goto LABEL_10;
        v9 = 8LL;
      }
      v10 = (char *)&v4[v9];
      if ( v10 )
      {
        if ( *(_WORD *)v10 == v6
          && !memcmp(v10, &Buf2, 4 * ((unsigned __int64)*(unsigned __int16 *)v10 >> 8) + 8)
          && (!a1 || (a1 & v4[1]) != 0) )
        {
          return 1;
        }
      }
    }
LABEL_10:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= v3 )
      return 0;
  }
}
