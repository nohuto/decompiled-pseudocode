/*
 * XREFs of ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800200CC
 * Callers:
 *     sub_1800E3318 @ 0x1800E3318 (sub_1800E3318.c)
 * Callees:
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, _WORD *a2)
{
  __int64 v3; // r8

  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  sub_180026168(a1, a2);
  return a1;
}
