/*
 * XREFs of bVerifyVTFD @ 0x1C0228D24
 * Callers:
 *     bVtfdLoadFont @ 0x1C0228FC0 (bVtfdLoadFont.c)
 * Callees:
 *     bMappedViewStrlen @ 0x1C02288FC (bMappedViewStrlen.c)
 */

__int64 __fastcall bVerifyVTFD(unsigned __int16 **a1)
{
  __int64 v1; // rsi
  unsigned __int16 *v2; // r10
  char v4; // dl
  unsigned __int8 v5; // cl
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  int v8; // r11d
  int v9; // edi
  int v10; // ebx
  unsigned int v11; // r14d
  __int16 v12; // r11
  int v13; // eax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // r11d
  __int64 v20; // rdi
  unsigned int v21; // ebp
  __int64 v22; // rcx
  unsigned __int16 v23; // dx
  _BYTE *v24; // rax
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+70h] [rbp+18h]

  v1 = *((unsigned int *)a1 + 3);
  v2 = *a1;
  if ( (unsigned int)v1 < 0x76 )
    return 0LL;
  v4 = *((_BYTE *)v2 + 66);
  if ( (v4 & 1) == 0 )
    return 0LL;
  if ( ((*v2 - 256) & 0xFFFFFEFF) != 0 )
    return 0LL;
  v5 = *((_BYTE *)v2 + 113);
  if ( (v5 & 1) != 0 )
    return 0LL;
  v6 = *((unsigned __int8 *)v2 + 2) | ((*((unsigned __int8 *)v2 + 3) | (v2[2] << 8)) << 8);
  if ( v6 > (unsigned int)v1 )
    return 0LL;
  v7 = v5 | ((*((unsigned __int8 *)v2 + 114) | (*(unsigned __int16 *)((char *)v2 + 115) << 8)) << 8);
  if ( v7 > v6 )
    return 0LL;
  v8 = *((unsigned __int8 *)v2 + 106);
  v9 = *((unsigned __int8 *)v2 + 105);
  v10 = *((unsigned __int8 *)v2 + 108);
  LODWORD(v25) = *((unsigned __int8 *)v2 + 107);
  v26 = v8;
  v27 = v9;
  if ( (v9 | ((v8 | (((unsigned int)v25 | (v10 << 8)) << 8)) << 8)) > v6
    || v4 & 0x7A | (*((unsigned __int8 *)v2 + 67) << 8) )
  {
    return 0LL;
  }
  v11 = 0;
  v12 = v2[37];
  v13 = -((__int16)(*((unsigned __int8 *)v2 + 75) << 8) | *((unsigned __int8 *)v2 + 74));
  if ( v12 >= 0 )
    v13 = (__int16)(*((unsigned __int8 *)v2 + 75) << 8) | *((unsigned __int8 *)v2 + 74);
  if ( v13 > (*((unsigned __int8 *)v2 + 88) | (__int16)(*((unsigned __int8 *)v2 + 89) << 8)) )
    return 0LL;
  if ( (__int16)v2[38] > v12 )
    return 0LL;
  v14 = *((_BYTE *)v2 + 95);
  v15 = *((_BYTE *)v2 + 96);
  if ( v14 > v15 )
    return 0LL;
  v16 = v15 - v14;
  if ( *((unsigned __int8 *)v2 + 97) > v16 || *((unsigned __int8 *)v2 + 98) > v16 )
    return 0LL;
  v17 = v16 + 1;
  v18 = v2[43] ? 2 * v17 : 4 * v17;
  v19 = v2[43] != 0 ? 2 : 4;
  if ( v18 * v19 + 117 > (unsigned int)v1 )
    return 0LL;
  v20 = v18;
  v21 = 0;
  if ( v18 >= 0 )
  {
    v22 = 0LL;
    do
    {
      v23 = *(unsigned __int16 *)((char *)v2 + v22 + 117);
      if ( v23 < v21 || v23 + v7 < v23 || v23 + v7 > v6 )
        return 0LL;
      if ( v22 == v20 )
        break;
      v24 = (char *)v2 + v7 + v23;
      if ( v24 >= (_BYTE *)v2 + v6 || *v24 != 0x80 )
        return 0LL;
      v22 += v19;
      v21 = v23;
    }
    while ( v22 <= v20 );
  }
  LOBYTE(v11) = (unsigned int)bMappedViewStrlen(
                                (unsigned __int64)v2,
                                v1,
                                (_BYTE *)v2
                              + ((unsigned __int8)v27 | (unsigned __int64)((v26 | (((unsigned int)v25 | (v10 << 8)) << 8)) << 8)),
                                &v25) != 0;
  return v11;
}
