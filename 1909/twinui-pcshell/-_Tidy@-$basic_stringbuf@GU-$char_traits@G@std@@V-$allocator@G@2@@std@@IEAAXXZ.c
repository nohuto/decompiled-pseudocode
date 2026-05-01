/*
 * XREFs of ?_Tidy@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXXZ @ 0x1802356D8
 * Callers:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18022C550 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::_Tidy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  void *v5; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::basic_streambuf<unsigned short>::pptr() )
      v2 = std::basic_streambuf<unsigned short>::epptr(a1);
    else
      v2 = std::basic_streambuf<unsigned short>::egptr(a1);
    v3 = v2;
    v4 = std::basic_streambuf<unsigned short>::eback(a1);
    v5 = (void *)std::basic_streambuf<unsigned short>::eback(a1);
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(2 * ((v3 - v4) >> 1)));
  }
  std::basic_streambuf<unsigned short>::setg(a1, 0LL, 0LL, 0LL);
  result = std::basic_streambuf<unsigned short>::setp(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return result;
}
