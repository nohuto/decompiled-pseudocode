/*
 * XREFs of ?seekpos@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x1801CCBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::basic_stringbuf<unsigned short>::seekpos(__int64 a1, __int64 *a2, _QWORD *a3, char a4)
{
  __int64 v5; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax

  v5 = *a3 + a3[1];
  if ( std::basic_streambuf<unsigned short>::pptr(a1)
    && *(_QWORD *)(a1 + 104) < (unsigned __int64)std::basic_streambuf<unsigned short>::pptr(a1) )
  {
    *(_QWORD *)(a1 + 104) = std::basic_streambuf<unsigned short>::pptr(a1);
  }
  if ( v5 != std::_BADOFF )
  {
    if ( (a4 & 1) != 0 && std::basic_streambuf<unsigned short>::gptr(a1) )
    {
      if ( v5 >= 0 && v5 <= (*(_QWORD *)(a1 + 104) - std::basic_streambuf<unsigned short>::eback(a1)) >> 1 )
      {
        v8 = std::basic_streambuf<unsigned short>::eback(a1);
        v9 = std::basic_streambuf<unsigned short>::gptr(a1);
        std::basic_streambuf<unsigned short>::gbump(a1, (unsigned int)((v8 - v9) >> 1) + (unsigned int)v5);
        if ( (a4 & 2) != 0 && std::basic_streambuf<unsigned short>::pptr(a1) )
        {
          v10 = std::basic_streambuf<unsigned short>::epptr(a1);
          v11 = std::basic_streambuf<unsigned short>::gptr(a1);
          v12 = std::basic_streambuf<unsigned short>::pbase(a1);
          std::basic_streambuf<unsigned short>::setp(a1, v12, v11, v10);
        }
        goto LABEL_18;
      }
    }
    else if ( (a4 & 2) != 0
           && std::basic_streambuf<unsigned short>::pptr(a1)
           && v5 >= 0
           && v5 <= (*(_QWORD *)(a1 + 104) - std::basic_streambuf<unsigned short>::eback(a1)) >> 1 )
    {
      v13 = std::basic_streambuf<unsigned short>::eback(a1);
      v14 = std::basic_streambuf<unsigned short>::pptr(a1);
      std::basic_streambuf<unsigned short>::pbump(a1, (unsigned int)((v13 - v14) >> 1) + (unsigned int)v5);
      goto LABEL_18;
    }
    v5 = std::_BADOFF;
  }
LABEL_18:
  a2[1] = 0LL;
  *a2 = v5;
  a2[2] = 0LL;
  return a2;
}
