/*
 * XREFs of ?seekoff@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x1801CC990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::basic_stringbuf<unsigned short>::seekoff(__int64 a1, __int64 *a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax

  if ( std::basic_streambuf<unsigned short>::pptr(a1)
    && *(_QWORD *)(a1 + 104) < (unsigned __int64)std::basic_streambuf<unsigned short>::pptr(a1) )
  {
    *(_QWORD *)(a1 + 104) = std::basic_streambuf<unsigned short>::pptr(a1);
  }
  if ( (a5 & 1) == 0 || !std::basic_streambuf<unsigned short>::gptr(a1) )
  {
    if ( (a5 & 2) != 0 && std::basic_streambuf<unsigned short>::pptr(a1) )
    {
      if ( a4 == 2 )
      {
        a3 += (*(_QWORD *)(a1 + 104) - std::basic_streambuf<unsigned short>::eback(a1)) >> 1;
      }
      else if ( a4 == 1 )
      {
        v15 = std::basic_streambuf<unsigned short>::eback(a1);
        a3 += (std::basic_streambuf<unsigned short>::pptr(a1) - v15) >> 1;
      }
      else if ( a4 )
      {
        a3 = std::_BADOFF;
      }
      if ( a3 >= 0 && a3 <= (*(_QWORD *)(a1 + 104) - std::basic_streambuf<unsigned short>::eback(a1)) >> 1 )
      {
        v16 = std::basic_streambuf<unsigned short>::eback(a1);
        v17 = std::basic_streambuf<unsigned short>::pptr(a1);
        std::basic_streambuf<unsigned short>::pbump(a1, (unsigned int)((v16 - v17) >> 1) + (unsigned int)a3);
        goto LABEL_31;
      }
    }
    else if ( !a3 )
    {
      goto LABEL_31;
    }
LABEL_30:
    a3 = std::_BADOFF;
    goto LABEL_31;
  }
  if ( a4 != 2 )
  {
    if ( a4 == 1 )
    {
      if ( (a5 & 2) == 0 )
      {
        v9 = std::basic_streambuf<unsigned short>::eback(a1);
        a3 += (std::basic_streambuf<unsigned short>::gptr(a1) - v9) >> 1;
        goto LABEL_13;
      }
    }
    else if ( !a4 )
    {
      goto LABEL_13;
    }
    a3 = std::_BADOFF;
    goto LABEL_13;
  }
  a3 += (*(_QWORD *)(a1 + 104) - std::basic_streambuf<unsigned short>::eback(a1)) >> 1;
LABEL_13:
  if ( a3 < 0 || a3 > (*(_QWORD *)(a1 + 104) - std::basic_streambuf<unsigned short>::eback(a1)) >> 1 )
    goto LABEL_30;
  v10 = std::basic_streambuf<unsigned short>::eback(a1);
  v11 = std::basic_streambuf<unsigned short>::gptr(a1);
  std::basic_streambuf<unsigned short>::gbump(a1, (unsigned int)((v10 - v11) >> 1) + (unsigned int)a3);
  if ( (a5 & 2) != 0 && std::basic_streambuf<unsigned short>::pptr(a1) )
  {
    v12 = std::basic_streambuf<unsigned short>::epptr(a1);
    v13 = std::basic_streambuf<unsigned short>::gptr(a1);
    v14 = std::basic_streambuf<unsigned short>::pbase(a1);
    std::basic_streambuf<unsigned short>::setp(a1, v14, v13, v12);
  }
LABEL_31:
  a2[1] = 0LL;
  *a2 = a3;
  a2[2] = 0LL;
  return a2;
}
