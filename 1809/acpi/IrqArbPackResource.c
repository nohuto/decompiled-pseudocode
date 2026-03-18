/*
 * XREFs of IrqArbPackResource @ 0x1C009DCF0
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpGetRangeData @ 0x1C009DD94 (IrqArbpGetRangeData.c)
 */

__int64 __fastcall IrqArbPackResource(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( *(_BYTE *)(a1 + 1) != 2 )
    return 3221225485LL;
  if ( a2 < 0xFFF00000 )
  {
    *(_WORD *)(a3 + 4) = a2;
    *(_DWORD *)(a3 + 8) = a2;
    *(_WORD *)(a3 + 6) = *(_WORD *)(a1 + 18);
    v6 = 0xFFFFFFFFLL;
LABEL_4:
    *(_QWORD *)(a3 + 12) = v6;
    *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 2);
    *(_WORD *)(a3 + 2) = *(_WORD *)(a1 + 4);
    *(_BYTE *)a3 = *(_BYTE *)(a1 + 1);
    return 0LL;
  }
  result = IrqArbpGetRangeData(a2, &v9);
  if ( (int)result >= 0 )
  {
    v8 = v9;
    *(_DWORD *)(a3 + 8) = v4;
    *(_WORD *)(a3 + 6) = *(unsigned __int8 *)(v8 + 26);
    *(_WORD *)(a3 + 4) = *(_WORD *)(a1 + 18);
    v6 = *(_QWORD *)(a1 + 24);
    goto LABEL_4;
  }
  return result;
}
