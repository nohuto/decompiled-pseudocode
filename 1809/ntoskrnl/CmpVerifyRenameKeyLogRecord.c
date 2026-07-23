/*
 * XREFs of CmpVerifyRenameKeyLogRecord @ 0x140581F1C
 * Callers:
 *     CmpVerifyLogRecord @ 0x140581E30 (CmpVerifyLogRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpVerifyRenameKeyLogRecord(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // r9d
  unsigned int v7; // ecx

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0x40 )
    return 3222863920LL;
  v3 = *(_WORD *)(a1 + 32);
  if ( (v3 & 1) != 0 )
    return 3222863920LL;
  v4 = *(_WORD *)(a1 + 48);
  if ( (v4 & 1) != 0 )
    return 3222863920LL;
  v5 = v3 + 64;
  if ( v5 < 0x40 )
    return 3222863920LL;
  v6 = v5;
  result = 3222863920LL;
  v7 = v6 + v4;
  if ( v7 >= v6 )
    return v1 < v7 ? 0xC0190030 : 0;
  return result;
}
