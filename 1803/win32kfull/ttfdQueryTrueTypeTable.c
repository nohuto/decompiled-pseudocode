/*
 * XREFs of ttfdQueryTrueTypeTable @ 0x1C0220B5C
 * Callers:
 *     ttfdSemQueryTrueTypeTable @ 0x1C0217770 (ttfdSemQueryTrueTypeTable.c)
 * Callees:
 *     ttfdQueryTrueTypeTable2 @ 0x1C0220BC4 (ttfdQueryTrueTypeTable2.c)
 */

__int64 __fastcall ttfdQueryTrueTypeTable(__int64 a1, int a2, int a3, int a4, int a5, void *a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r11

  v8 = *(_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 3LL));
  if ( !*(_DWORD *)(v8 + 48) )
  {
    *(_QWORD *)(v8 + 64) = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(v8 + 72) = *(_DWORD *)(a1 + 24);
  }
  return ttfdQueryTrueTypeTable2(a1, a2, a3, a4, a5, a6, a7, a8);
}
