/*
 * XREFs of ?underflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGXZ @ 0x1801CCEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::underflow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax

  if ( std::basic_streambuf<unsigned short>::gptr(a1) )
  {
    v2 = std::basic_streambuf<unsigned short>::egptr(a1);
    if ( std::basic_streambuf<unsigned short>::gptr(a1) < v2 )
      return *(unsigned __int16 *)std::basic_streambuf<unsigned short>::gptr(a1);
    if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
    {
      if ( std::basic_streambuf<unsigned short>::pptr(a1) )
      {
        v4 = std::basic_streambuf<unsigned short>::pptr(a1);
        if ( v4 > std::basic_streambuf<unsigned short>::gptr(a1)
          || *(_QWORD *)(a1 + 104) > (unsigned __int64)std::basic_streambuf<unsigned short>::gptr(a1) )
        {
          v5 = *(_QWORD *)(a1 + 104);
          if ( v5 < std::basic_streambuf<unsigned short>::pptr(a1) )
          {
            v5 = std::basic_streambuf<unsigned short>::pptr(a1);
            *(_QWORD *)(a1 + 104) = v5;
          }
          v6 = std::basic_streambuf<unsigned short>::gptr(a1);
          v7 = std::basic_streambuf<unsigned short>::eback(a1);
          std::basic_streambuf<unsigned short>::setg(a1, v7, v6, v5);
          return *(unsigned __int16 *)std::basic_streambuf<unsigned short>::gptr(a1);
        }
      }
    }
  }
  return 0xFFFFLL;
}
