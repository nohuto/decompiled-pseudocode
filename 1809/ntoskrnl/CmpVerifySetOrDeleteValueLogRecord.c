/*
 * XREFs of CmpVerifySetOrDeleteValueLogRecord @ 0x140581F78
 * Callers:
 *     CmpVerifyLogRecord @ 0x140581E30 (CmpVerifyLogRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpVerifySetOrDeleteValueLogRecord(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 result; // rax
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // cx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  unsigned int v9; // ecx

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0x50 || *(_DWORD *)(a1 + 12) == 5 && (*(_QWORD *)(a1 + 72) || *(_DWORD *)(a1 + 68)) )
    return 3222863920LL;
  v4 = *(_WORD *)(a1 + 32);
  if ( (v4 & 1) != 0 )
    return 3222863920LL;
  v5 = *(_WORD *)(a1 + 48);
  if ( (v5 & 1) != 0 )
    return 3222863920LL;
  v6 = v4 + 64;
  if ( v6 < 0x40 )
    return 3222863920LL;
  v7 = v6 + v5;
  if ( v7 < v6 )
    return 3222863920LL;
  v8 = v7;
  result = 3222863920LL;
  v9 = v7 + *(_DWORD *)(a1 + 68);
  if ( v9 >= v8 )
    return v1 < v9 ? 0xC0190030 : 0;
  return result;
}
