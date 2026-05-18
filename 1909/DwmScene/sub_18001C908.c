/*
 * XREFs of sub_18001C908 @ 0x18001C908
 * Callers:
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_18007C700 @ 0x18007C700 (sub_18007C700.c)
 * Callees:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800261FC (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180026780 @ 0x180026780 (sub_180026780.c)
 */

__int64 __fastcall sub_18001C908(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  _QWORD *v5; // r11
  unsigned __int64 v6; // r8
  __int64 v8; // rax

  v3 = a2[2];
  v5 = a2;
  v6 = *(_QWORD *)(a3 + 16);
  if ( v6 <= a2[3] - v3 || *(_QWORD *)(a3 + 24) - v6 < v3 )
  {
    v8 = std::wstring::append(a2);
  }
  else
  {
    if ( a2[3] >= 8uLL )
      v5 = (_QWORD *)*a2;
    v8 = sub_180026780(a3, 0LL, v5);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v8;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 7LL;
  *(_WORD *)v8 = 0;
  return a1;
}
