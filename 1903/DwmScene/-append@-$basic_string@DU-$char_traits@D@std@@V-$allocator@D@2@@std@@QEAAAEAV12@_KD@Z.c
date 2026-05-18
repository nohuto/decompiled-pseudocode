/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180106208
 * Callers:
 *     sub_18010511C @ 0x18010511C (sub_18010511C.c)
 *     sub_1801056E0 @ 0x1801056E0 (sub_1801056E0.c)
 *     sub_18011DE68 @ 0x18011DE68 (sub_18011DE68.c)
 * Callees:
 *     sub_1801033A8 @ 0x1801033A8 (sub_1801033A8.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, size_t Size, char a3)
{
  __int64 v5; // rcx
  bool v6; // cf
  _QWORD *v7; // rax
  char *v8; // rbx
  _QWORD *result; // rax

  v5 = Src[2];
  if ( Size > Src[3] - v5 )
    return sub_1801033A8(Src, Size, 0LL, Size, a3);
  v6 = Src[3] < 0x10uLL;
  Src[2] = v5 + Size;
  v7 = Src;
  if ( !v6 )
    v7 = (_QWORD *)*Src;
  v8 = (char *)v7 + v5;
  memset((char *)v7 + v5, a3, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
