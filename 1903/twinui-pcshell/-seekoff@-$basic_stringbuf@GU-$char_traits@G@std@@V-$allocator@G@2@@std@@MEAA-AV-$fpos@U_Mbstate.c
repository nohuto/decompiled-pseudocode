/*
 * XREFs of ?seekoff@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x1802181B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::basic_stringbuf<unsigned short>::seekoff(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax

  v9 = std::basic_streambuf<unsigned short>::gptr(a1);
  v10 = std::basic_streambuf<unsigned short>::pptr(a1);
  v11 = v10;
  if ( v10 && *(_QWORD *)(a1 + 104) < v10 )
    *(_QWORD *)(a1 + 104) = v10;
  v12 = std::basic_streambuf<unsigned short>::eback(a1);
  v13 = v12;
  v14 = (*(_QWORD *)(a1 + 104) - v12) >> 1;
  if ( !a4 )
  {
    v16 = 0LL;
    goto LABEL_20;
  }
  v15 = a4 - 1;
  if ( !v15 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v9 && v12 )
          goto LABEL_18;
        v17 = v9;
      }
      else
      {
        if ( (a5 & 2) == 0 || !v11 && v12 )
          goto LABEL_18;
        v17 = v11;
      }
      v16 = (v17 - v13) >> 1;
      goto LABEL_20;
    }
LABEL_18:
    *a2 = -1LL;
    goto LABEL_33;
  }
  if ( v15 != 1 )
    goto LABEL_18;
  v16 = (*(_QWORD *)(a1 + 104) - v12) >> 1;
LABEL_20:
  v18 = v16 + a3;
  if ( v16 + a3 > v14 || v18 && ((a5 & 1) != 0 && !v9 || (a5 & 2) != 0 && !v11) )
    goto LABEL_18;
  if ( (a5 & 1) != 0 && v9 )
    std::basic_streambuf<unsigned short>::setg(a1, v13, v13 + 2 * v18, *(_QWORD *)(a1 + 104));
  if ( (a5 & 2) != 0 && v11 )
  {
    v19 = std::basic_streambuf<unsigned short>::epptr(a1);
    std::basic_streambuf<unsigned short>::setp(a1, v13, v13 + 2 * v18, v19);
  }
  *a2 = v18;
LABEL_33:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
