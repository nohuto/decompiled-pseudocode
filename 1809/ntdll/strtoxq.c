/*
 * XREFs of strtoxq @ 0x180096230
 * Callers:
 *     _strtoi64 @ 0x180096454 (_strtoi64.c)
 * Callees:
 *     _errno @ 0x180088270 (_errno.c)
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     __pctype_func @ 0x180096220 (__pctype_func.c)
 */

unsigned __int64 __fastcall strtoxq(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4, int a5)
{
  int v5; // r14d
  __int64 v7; // rbp
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int8 v10; // di
  int v11; // edi
  unsigned __int64 v12; // r12
  unsigned int v13; // ecx
  int v14; // ecx
  __int64 v15; // rdx
  unsigned __int8 *v16; // rbx
  unsigned __int64 result; // rax

  v5 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    invalid_parameter();
    return 0LL;
  }
  v7 = *a2;
  v8 = a2 + 1;
  v9 = 0LL;
  if ( (_pctype_func()[v7] & 8) != 0 )
  {
    do
    {
      do
        v10 = *v8++;
      while ( v10 == (_BYTE)v7 );
      LOBYTE(v7) = v10;
    }
    while ( (_pctype_func()[v10] & 8) != 0 );
  }
  v11 = a5;
  if ( (_BYTE)v7 == 45 )
  {
    v11 = a5 | 2;
  }
  else if ( (_BYTE)v7 != 43 )
  {
    goto LABEL_13;
  }
  LOBYTE(v7) = *v8++;
LABEL_13:
  if ( v5 )
    goto LABEL_19;
  if ( (_BYTE)v7 == 48 )
  {
    if ( ((*v8 - 88) & 0xDF) != 0 )
    {
      v5 = 8;
      goto LABEL_23;
    }
    v5 = 16;
LABEL_19:
    if ( v5 == 16 && (_BYTE)v7 == 48 && ((*v8 - 88) & 0xDF) == 0 )
    {
      LOBYTE(v7) = v8[1];
      v8 += 2;
    }
    goto LABEL_23;
  }
  v5 = 10;
LABEL_23:
  v12 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (_pctype_func()[(unsigned __int8)v7] & 4) != 0 )
    {
      v13 = (char)v7 - 48;
    }
    else
    {
      if ( (_pctype_func()[(unsigned __int8)v7] & 0x103) == 0 )
        break;
      v14 = (char)v7 - 32;
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        v14 = (char)v7;
      v13 = v14 - 55;
    }
    if ( v13 >= v5 )
      break;
    v11 |= 8u;
    if ( v9 < v12 )
    {
      v15 = v13;
LABEL_40:
      v9 = v15 + v5 * v9;
      goto LABEL_41;
    }
    if ( v9 == v12 )
    {
      v15 = v13;
      if ( v13 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_40;
    }
    v11 |= 4u;
    if ( !a3 )
      break;
LABEL_41:
    LOBYTE(v7) = *v8++;
  }
  v16 = v8 - 1;
  if ( (v11 & 8) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      if ( (v11 & 1) != 0 )
        goto LABEL_51;
      if ( (v11 & 2) != 0 )
      {
        if ( v9 <= 0x8000000000000000uLL )
          goto LABEL_51;
      }
      else if ( v9 <= 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_51;
      }
    }
    *errno() = 34;
    if ( (v11 & 1) != 0 )
      v9 = -1LL;
    else
      v9 = ((v11 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( a3 )
      v16 = a2;
    v9 = 0LL;
  }
LABEL_51:
  if ( a3 )
    *a3 = v16;
  result = -(__int64)v9;
  if ( (v11 & 2) == 0 )
    return v9;
  return result;
}
