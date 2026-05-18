/*
 * XREFs of sub_180080820 @ 0x180080820
 * Callers:
 *     sub_18007FEE0 @ 0x18007FEE0 (sub_18007FEE0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801261F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall sub_180080820(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  void *v5; // rax

  v2 = a2;
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL || a2 <= 0 )
  {
LABEL_6:
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  else
  {
    v4 = a2;
    while ( 1 )
    {
      v5 = operator new(16 * v4, (const struct std::nothrow_t *)&unk_180215118);
      if ( v5 )
        break;
      v4 /= 2LL;
      v2 = v4;
      if ( v4 <= 0 )
        goto LABEL_6;
    }
    *a1 = v5;
    a1[1] = v2;
  }
  return a1;
}
