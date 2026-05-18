/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800260EC
 * Callers:
 *     sub_18001C7F8 @ 0x18001C7F8 (sub_18001C7F8.c)
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_18007C5F0 @ 0x18007C5F0 (sub_18007C5F0.c)
 * Callees:
 *     sub_18001F188 @ 0x18001F188 (sub_18001F188.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, const void *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  bool v6; // cf
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v10; // [rsp+20h] [rbp-18h]

  v4 = a3;
  v5 = Src[2];
  if ( a3 > Src[3] - v5 )
  {
    v10 = a3;
    LOBYTE(a3) = 0;
    return sub_18001F188(Src, v4, a3, a2, v10);
  }
  else
  {
    v6 = Src[3] < 8uLL;
    v7 = v5 + a3;
    Src[2] = v5 + a3;
    v8 = Src;
    if ( !v6 )
      v8 = (_QWORD *)*Src;
    memmove((char *)v8 + 2 * v5, a2, 2 * a3);
    *((_WORD *)v8 + v7) = 0;
    return Src;
  }
}
