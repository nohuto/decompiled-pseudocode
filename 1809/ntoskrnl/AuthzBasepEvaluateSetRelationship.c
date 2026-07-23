/*
 * XREFs of AuthzBasepEvaluateSetRelationship @ 0x14012F190
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x1400A4980 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepValueInSet @ 0x1400A46E8 (AuthzBasepValueInSet.c)
 *     AuthzBasepGetNextValue @ 0x1400A4800 (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1401322AC (AuthzBasepRestartOperandValueEnumeration.c)
 */

__int64 __fastcall AuthzBasepEvaluateSetRelationship(int a1, __int64 a2, _DWORD *a3)
{
  int v4; // r13d
  int v5; // edx
  int v6; // r12d
  int v8; // ecx
  __int64 v9; // r14
  int v10; // eax
  unsigned int v12; // r14d
  int v13; // eax
  char v14; // al
  char v15; // al
  unsigned int v16; // r14d
  int NextValue; // eax
  char v18; // al
  int v19; // eax
  unsigned int v20; // r14d
  int v21; // eax
  char v22; // al
  _WORD v23[2]; // [rsp+20h] [rbp-50h] BYREF
  char v24; // [rsp+24h] [rbp-4Ch]
  int v25; // [rsp+28h] [rbp-48h]
  __int64 v26; // [rsp+30h] [rbp-40h]
  int v27; // [rsp+38h] [rbp-38h]
  __int64 v28; // [rsp+40h] [rbp-30h]
  _BYTE v29[40]; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  *a3 = 0;
  if ( !a1 )
  {
    if ( *(_DWORD *)(a2 + 12) != 1 && *(_DWORD *)(a2 + 52) != 1 && *(_DWORD *)(a2 + 4) != *(_DWORD *)(a2 + 44) )
      return (unsigned int)v5;
    while ( 1 )
    {
      v16 = *(_DWORD *)(a2 + 8);
      NextValue = AuthzBasepGetNextValue(a2, (__int64)v23);
      v5 = NextValue;
      if ( NextValue == -2147483622 )
        break;
      if ( NextValue < 0 )
        goto LABEL_11;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v5 = AuthzBasepGetNextValue(a2, (__int64)v29);
        if ( v5 < 0 )
          goto LABEL_11;
        v18 = *(_BYTE *)(a2 + 4);
        v25 = 0;
        v24 = v18;
        v23[0] = *(_WORD *)a2;
        v26 = *(_QWORD *)(a2 + 16);
        v27 = *(_DWORD *)(a2 + 8);
        v28 = *(_QWORD *)(a2 + 32) + v16;
      }
      ++v4;
      v5 = AuthzBasepValueInSet((__int64)v23, (__int16 *)(a2 + 40), a3, 0);
      if ( v5 < 0 )
      {
LABEL_11:
        *a3 = -1;
        return (unsigned int)v5;
      }
      if ( *a3 != 1 )
        return (unsigned int)v5;
    }
    v19 = *(_DWORD *)(a2 + 12);
    v5 = 0;
    if ( v19 == 1 && !*(_BYTE *)(a2 + 4) )
    {
      if ( *(_DWORD *)(a2 + 52) == 1 )
        goto LABEL_43;
      if ( *(_DWORD *)(a2 + 44) == 1 )
        return (unsigned int)v5;
    }
    if ( *(_DWORD *)(a2 + 52) != 1 )
    {
LABEL_46:
      AuthzBasepRestartOperandValueEnumeration(a2);
      while ( 1 )
      {
        v20 = *(_DWORD *)(a2 + 48);
        v21 = AuthzBasepGetNextValue(a2 + 40, (__int64)v23);
        v5 = v21;
        if ( v21 == -2147483622 )
          break;
        if ( v21 < 0 )
          goto LABEL_11;
        if ( *(_WORD *)a2 == 4 )
        {
          v5 = AuthzBasepGetNextValue(a2 + 40, (__int64)v29);
          if ( v5 < 0 )
            goto LABEL_11;
          v22 = *(_BYTE *)(a2 + 44);
          v25 = 0;
          v24 = v22;
          v23[0] = *(_WORD *)(a2 + 40);
          v26 = *(_QWORD *)(a2 + 56);
          v27 = *(_DWORD *)(a2 + 48);
          v28 = *(_QWORD *)(a2 + 72) + v20;
        }
        ++v6;
        v5 = AuthzBasepValueInSet((__int64)v23, (__int16 *)a2, a3, 0);
        if ( v5 < 0 )
          goto LABEL_11;
        if ( *a3 != 1 )
          return (unsigned int)v5;
      }
      v5 = 0;
      if ( v4 != v6 )
        *a3 = 0;
      return (unsigned int)v5;
    }
LABEL_43:
    if ( !*(_BYTE *)(a2 + 44) && v19 != 1 && *(_DWORD *)(a2 + 4) == 1 )
      return (unsigned int)v5;
    goto LABEL_46;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return (unsigned int)v5;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a2 + 8);
      v13 = AuthzBasepGetNextValue(a2, (__int64)v23);
      v5 = v13;
      if ( v13 == -2147483622 )
        return 0;
      if ( v13 < 0 )
        goto LABEL_11;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v5 = AuthzBasepGetNextValue(a2, (__int64)v29);
        if ( v5 < 0 )
          goto LABEL_11;
        v14 = *(_BYTE *)(a2 + 4);
        v25 = 0;
        v24 = v14;
        v23[0] = *(_WORD *)a2;
        v26 = *(_QWORD *)(a2 + 16);
        v27 = *(_DWORD *)(a2 + 8);
        v28 = *(_QWORD *)(a2 + 32) + v12;
      }
      v5 = AuthzBasepValueInSet((__int64)v23, (__int16 *)(a2 + 40), a3, 1);
      if ( v5 < 0 )
        goto LABEL_11;
      if ( *a3 )
        return (unsigned int)v5;
    }
  }
  if ( *(_DWORD *)(a2 + 12) == 1 || *(_DWORD *)(a2 + 52) == 1 || *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a2 + 44) )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(a2 + 48);
      v10 = AuthzBasepGetNextValue(a2 + 40, (__int64)v23);
      v5 = v10;
      if ( v10 == -2147483622 )
        return 0;
      if ( v10 < 0 )
        goto LABEL_11;
      if ( *(_WORD *)a2 == 4 )
      {
        v5 = AuthzBasepGetNextValue(a2 + 40, (__int64)v29);
        if ( v5 < 0 )
          goto LABEL_11;
        v15 = *(_BYTE *)(a2 + 44);
        v25 = 0;
        v24 = v15;
        v23[0] = *(_WORD *)(a2 + 40);
        v26 = *(_QWORD *)(a2 + 56);
        v27 = *(_DWORD *)(a2 + 48);
        v28 = *(_QWORD *)(a2 + 72) + v9;
      }
      v5 = AuthzBasepValueInSet((__int64)v23, (__int16 *)a2, a3, 0);
      if ( v5 < 0 )
        goto LABEL_11;
      if ( *a3 != 1 )
        return (unsigned int)v5;
    }
  }
  return (unsigned int)v5;
}
