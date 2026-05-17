/*
 * XREFs of sub_180091A10 @ 0x180091A10
 * Callers:
 *     strtol @ 0x180091C40 (strtol.c)
 *     sub_180091C70 @ 0x180091C70 (sub_180091C70.c)
 *     strtoul @ 0x180091CA0 (strtoul.c)
 * Callees:
 *     _errno @ 0x180084320 (_errno.c)
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092AB0 @ 0x180092AB0 (sub_180092AB0.c)
 */

__int64 __fastcall sub_180091A10(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int8 **a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned int v6; // r14d
  __int64 v9; // rbp
  unsigned __int8 *v10; // rbx
  unsigned int v11; // edi
  int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned __int8 *v16; // rbx
  __int64 result; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    sub_18008C6D8();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0;
  while ( (*(_BYTE *)(sub_180092AB0() + 2 * v9) & 8) != 0 )
    v9 = *v10++;
  v12 = a5;
  if ( (_BYTE)v9 == 45 )
  {
    v12 = a5 | 2;
  }
  else if ( (_BYTE)v9 != 43 )
  {
    goto LABEL_13;
  }
  LOBYTE(v9) = *v10++;
LABEL_13:
  if ( v6 )
  {
    if ( v6 - 2 > 0x22 )
    {
      if ( a3 )
        *a3 = a2;
      return 0LL;
    }
    if ( v6 == 16 && (_BYTE)v9 == 48 )
      goto LABEL_25;
  }
  else if ( (_BYTE)v9 == 48 )
  {
    if ( ((*v10 - 88) & 0xDF) == 0 )
    {
      v6 = 16;
LABEL_25:
      if ( ((*v10 - 88) & 0xDF) == 0 )
      {
        LOBYTE(v9) = v10[1];
        v10 += 2;
      }
      goto LABEL_27;
    }
    v6 = 8;
  }
  else
  {
    v6 = 10;
  }
LABEL_27:
  v13 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    if ( (*(_BYTE *)(sub_180092AB0() + 2LL * (unsigned __int8)v9) & 4) != 0 )
    {
      v14 = (char)v9 - 48;
    }
    else
    {
      if ( (*(_WORD *)(sub_180092AB0() + 2LL * (unsigned __int8)v9) & 0x103) == 0 )
        break;
      v15 = (char)v9 - 32;
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
        v15 = (char)v9;
      v14 = v15 - 55;
    }
    if ( v14 >= v6 )
      break;
    v12 |= 8u;
    if ( a6 || v11 < v13 || v11 == v13 && v14 <= 0xFFFFFFFF % v6 )
    {
      v11 = v14 + v6 * v11;
    }
    else
    {
      v12 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v9) = *v10++;
  }
  v16 = v10 - 1;
  if ( (v12 & 8) == 0 )
  {
    if ( a3 )
      v16 = a2;
    v11 = 0;
    goto LABEL_56;
  }
  if ( (v12 & 4) != 0 )
    goto LABEL_52;
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 2) != 0 )
    {
      if ( v11 <= 0x80000000 )
        goto LABEL_56;
LABEL_52:
      if ( !a6 )
      {
        *errno() = 34;
        if ( (v12 & 1) != 0 )
          v11 = -1;
        else
          v11 = ((v12 & 2) != 0) + 0x7FFFFFFF;
      }
      goto LABEL_56;
    }
    if ( v11 > 0x7FFFFFFF )
      goto LABEL_52;
  }
LABEL_56:
  if ( a3 )
    *a3 = v16;
  result = -v11;
  if ( (v12 & 2) == 0 )
    return v11;
  return result;
}
