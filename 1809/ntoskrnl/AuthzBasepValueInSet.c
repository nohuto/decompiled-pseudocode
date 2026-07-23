/*
 * XREFs of AuthzBasepValueInSet @ 0x1400A46E8
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x14012F190 (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepGetNextValue @ 0x1400A4800 (AuthzBasepGetNextValue.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1400A4A30 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1401322AC (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140325320 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x140325590 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1403256CC (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepValueInSet(__int64 a1, __int16 *a2, _DWORD *a3, char a4)
{
  __int128 v5; // xmm1
  __int64 v8; // r12
  int NextValue; // eax
  int v10; // ebx
  unsigned __int16 v11; // di
  unsigned __int16 v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  int v16; // eax
  char v17; // al
  int v18; // eax
  _BYTE v19[48]; // [rsp+28h] [rbp-49h] BYREF
  _OWORD v20[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v21; // [rsp+78h] [rbp+7h]
  _WORD v22[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v23; // [rsp+84h] [rbp+13h]
  int v24; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  int v26; // [rsp+98h] [rbp+27h]
  __int64 v27; // [rsp+A0h] [rbp+2Fh]

  v5 = *(_OWORD *)(a1 + 16);
  v20[0] = *(_OWORD *)a1;
  v21 = *(_QWORD *)(a1 + 32);
  *a3 = 0;
  v20[1] = v5;
  do
  {
    while ( 1 )
    {
      v8 = *((unsigned int *)a2 + 2);
      NextValue = AuthzBasepGetNextValue(a2, v22);
      v10 = NextValue;
      if ( NextValue == -2147483622 )
      {
LABEL_17:
        v10 = 0;
        goto LABEL_16;
      }
      if ( NextValue < 0 )
        goto LABEL_18;
      v11 = v20[0];
      if ( LOWORD(v20[0]) == 4 )
      {
        v16 = AuthzBasepGetNextValue(a2, v19);
        v10 = v16;
        if ( v16 == -2147483622 )
          goto LABEL_17;
        if ( v16 < 0 )
          goto LABEL_18;
        v17 = *((_BYTE *)a2 + 4);
        v24 = 0;
        v12 = *a2;
        v23 = v17;
        v25 = *((_QWORD *)a2 + 2);
        v26 = *((_DWORD *)a2 + 2);
        v27 = *((_QWORD *)a2 + 4) + v8;
        v22[0] = v12;
      }
      else
      {
        v12 = v22[0];
      }
      if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(v20) )
        break;
      if ( HIDWORD(v20[0]) == 1 )
        v11 = v12;
      if ( !v11 )
        goto LABEL_14;
      if ( v11 <= 2u )
      {
LABEL_30:
        LOBYTE(v13) = 0x80;
        v18 = AuthzBasepCompareIntegerOperands(v13, v20);
        goto LABEL_31;
      }
      switch ( v11 )
      {
        case 3u:
          v14 = AuthzBasepCompareUnicodeStringOperands(128, (__int64)v20, a3);
          goto LABEL_13;
        case 4u:
          LOBYTE(v13) = 0x80;
          v14 = AuthzBasepCompareFQBNOperands(v13, v20, a3);
LABEL_13:
          v10 = v14;
          if ( v14 < 0 )
            goto LABEL_18;
          break;
        case 5u:
          goto LABEL_28;
        case 6u:
          goto LABEL_30;
        case 0x10u:
LABEL_28:
          LOBYTE(v13) = 0x80;
          v18 = AuthzBasepCompareOctetStringOperands(v13, v20);
LABEL_31:
          *a3 = v18;
          break;
      }
LABEL_14:
      if ( *a3 == 1 )
        goto LABEL_15;
    }
  }
  while ( a4 );
  v10 = -1073741406;
LABEL_15:
  if ( v10 >= 0 )
    goto LABEL_16;
LABEL_18:
  *a3 = -1;
LABEL_16:
  AuthzBasepRestartOperandValueEnumeration(a2);
  return (unsigned int)v10;
}
