/*
 * XREFs of sub_18009261C @ 0x18009261C
 * Callers:
 *     wcstol @ 0x180092840 (wcstol.c)
 *     sub_180092870 @ 0x180092870 (sub_180092870.c)
 *     wcstoul @ 0x1800928A0 (wcstoul.c)
 * Callees:
 *     _errno @ 0x180084320 (_errno.c)
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_1800900E0 @ 0x1800900E0 (sub_1800900E0.c)
 *     sub_180094114 @ 0x180094114 (sub_180094114.c)
 */

__int64 __fastcall sub_18009261C(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned int v6; // r14d
  unsigned __int16 v8; // bp
  unsigned __int16 *v9; // rbx
  unsigned int v10; // edi
  int v11; // esi
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  int v14; // ecx
  unsigned __int16 *v15; // rbx
  __int64 result; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    sub_18008C6D8();
    return 0LL;
  }
  v8 = *a2;
  v9 = a2 + 1;
  v10 = 0;
  while ( (unsigned int)sub_1800900E0(v8, 8) )
    v8 = *v9++;
  v11 = a5;
  if ( v8 == 45 )
  {
    v11 = a5 | 2;
  }
  else if ( v8 != 43 )
  {
    goto LABEL_13;
  }
  v8 = *v9++;
LABEL_13:
  if ( v6 )
    goto LABEL_19;
  if ( !(unsigned int)sub_180094114(v8) )
  {
    if ( ((*v9 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_23;
    }
    v6 = 16;
LABEL_19:
    if ( v6 == 16 && !(unsigned int)sub_180094114(v8) && ((*v9 - 88) & 0xFFDF) == 0 )
    {
      v8 = v9[1];
      v9 += 2;
    }
    goto LABEL_23;
  }
  v6 = 10;
LABEL_23:
  v12 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    v13 = sub_180094114(v8);
    if ( v13 != -1 )
      goto LABEL_30;
    if ( (unsigned __int16)(v8 - 65) > 0x19u && (unsigned __int16)(v8 - 97) > 0x19u )
      break;
    v14 = v8 - 32;
    if ( (unsigned __int16)(v8 - 97) > 0x19u )
      v14 = v8;
    v13 = v14 - 55;
LABEL_30:
    if ( v13 >= v6 )
      break;
    v11 |= 8u;
    if ( a6 || v10 < v12 || v10 == v12 && v13 <= 0xFFFFFFFF % v6 )
    {
      v10 = v13 + v6 * v10;
    }
    else
    {
      v11 |= 4u;
      if ( !a3 )
        break;
    }
    v8 = *v9++;
  }
  v15 = v9 - 1;
  if ( (v11 & 8) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      if ( (v11 & 1) != 0 )
        goto LABEL_52;
      if ( (v11 & 2) != 0 )
      {
        if ( v10 <= 0x80000000 )
          goto LABEL_52;
      }
      else if ( v10 <= 0x7FFFFFFF )
      {
        goto LABEL_52;
      }
    }
    if ( !a6 )
    {
      *errno() = 34;
      if ( (v11 & 1) != 0 )
        v10 = -1;
      else
        v10 = ((v11 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 )
      v15 = a2;
    v10 = 0;
  }
LABEL_52:
  if ( a3 )
    *a3 = v15;
  result = -v10;
  if ( (v11 & 2) == 0 )
    return v10;
  return result;
}
