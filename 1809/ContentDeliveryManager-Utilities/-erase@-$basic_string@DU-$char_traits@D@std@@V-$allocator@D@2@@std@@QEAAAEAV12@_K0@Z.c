/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x1800149C4
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180014640 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180014228 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     memmove_0 @ 0x1800C7153 (memmove_0.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rbx
  bool v5; // cf
  _QWORD *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax

  v3 = a1[2];
  v4 = a1;
  if ( v3 < a2 )
    std::wstring::_Xran();
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      v7 = a1[3];
      if ( v7 >= 0x10 )
        a1 = (_QWORD *)*a1;
      v8 = v3 - a3;
      if ( v8 != a2 )
      {
        memmove_0((char *)a1 + a2, (char *)a1 + a2 + a3, v8 - a2);
        v7 = v4[3];
      }
      v4[2] = v8;
      if ( v7 < 0x10 )
        v9 = v4;
      else
        v9 = (_QWORD *)*v4;
      *((_BYTE *)v9 + v8) = 0;
    }
  }
  else
  {
    v5 = a1[3] < 0x10uLL;
    a1[2] = a2;
    if ( v5 )
      v6 = a1;
    else
      v6 = (_QWORD *)*a1;
    *((_BYTE *)v6 + a2) = 0;
  }
  return v4;
}
