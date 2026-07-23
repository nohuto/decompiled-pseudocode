/*
 * XREFs of AuthzBasepGetConstantOperand @ 0x1400A48D8
 * Callers:
 *     AuthzBasepGetNextValue @ 0x1400A4800 (AuthzBasepGetNextValue.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140325320 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetConstantOperand(char *a1, int a2, __int64 a3, int *a4)
{
  unsigned int v4; // r10d
  int v6; // r11d
  unsigned __int8 v7; // cl
  unsigned int v8; // ecx
  __int64 result; // rax
  char v10; // al

  v4 = 0;
  *(_WORD *)a3 = 0;
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v6 = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(a3 + 12) = 1;
  *(_DWORD *)(a3 + 24) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  v7 = *a1;
  if ( v7 )
  {
    if ( v7 <= 4u )
    {
      if ( (unsigned int)(a2 - 1) >= 0xA )
      {
        *(_DWORD *)(a3 + 24) = 10;
        *(_WORD *)a3 = 2;
        *(_QWORD *)(a3 + 32) = a1 + 1;
        v6 = 11;
        goto LABEL_9;
      }
      goto LABEL_10;
    }
    if ( v7 == 16 || v7 == 24 || (unsigned __int8)(v7 - 80) <= 1u )
    {
      if ( (unsigned int)(a2 - 1) >= 4 )
      {
        if ( v7 == 16 )
        {
          *(_WORD *)a3 = 3;
        }
        else
        {
          v10 = *(_BYTE *)(a3 + 4);
          *(_WORD *)a3 = 16;
          if ( v7 == 80 )
            v10 = 1;
          *(_BYTE *)(a3 + 4) = v10;
        }
        v8 = *(_DWORD *)(a1 + 1);
        *(_DWORD *)(a3 + 24) = v8;
        v6 = 5;
        if ( a2 - 5 >= v8 )
        {
          *(_QWORD *)(a3 + 32) = a1 + 5;
          v6 = v8 + 5;
          goto LABEL_9;
        }
      }
LABEL_10:
      v4 = -1073741406;
    }
  }
LABEL_9:
  result = v4;
  *a4 = v6;
  return result;
}
