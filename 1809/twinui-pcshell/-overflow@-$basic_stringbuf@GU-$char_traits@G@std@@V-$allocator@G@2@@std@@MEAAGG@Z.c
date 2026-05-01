/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x1801CC560
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009B2D7 (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  bool v12; // cc
  size_t v13; // rcx
  char *v14; // rsi
  void *v15; // r12
  char *v16; // r13
  char *v17; // rdx
  __int64 v18; // rcx
  char *v19; // r9
  char *v20; // r8
  char *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    if ( (*(_BYTE *)(a1 + 112) & 8) != 0
      && ((__int64 (*)(void))std::basic_streambuf<unsigned short>::pptr)()
      && (unsigned __int64)std::basic_streambuf<unsigned short>::pptr(a1) < *(_QWORD *)(a1 + 104) )
    {
      v5 = std::basic_streambuf<unsigned short>::epptr(a1);
      v6 = std::basic_streambuf<unsigned short>::pbase(a1);
      std::basic_streambuf<unsigned short>::setp(a1, v6, *(_QWORD *)(a1 + 104), v5);
    }
    if ( std::basic_streambuf<unsigned short>::pptr(a1) )
    {
      v7 = std::basic_streambuf<unsigned short>::epptr(a1);
      if ( std::basic_streambuf<unsigned short>::pptr(a1) < v7 )
        goto LABEL_10;
    }
    if ( std::basic_streambuf<unsigned short>::pptr(a1) )
    {
      v9 = std::basic_streambuf<unsigned short>::eback(a1);
      v8 = (std::basic_streambuf<unsigned short>::epptr(a1) - v9) >> 1;
    }
    else
    {
      v8 = 0LL;
    }
    v10 = 32LL;
    if ( v8 >> 1 < 0x20 || (v10 = v8 >> 1) != 0 )
    {
      do
      {
        if ( 0x7FFFFFFF - v10 >= v8 )
          break;
        v10 >>= 1;
      }
      while ( v10 );
    }
    if ( v10 )
    {
      v11 = 2 * (v10 + v8);
      v12 = v10 + v8 <= 0x7FFFFFFFFFFFFFFFLL;
      v13 = v11;
      if ( !v12 )
        v13 = -1LL;
      v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
      v15 = (void *)std::basic_streambuf<unsigned short>::eback(a1);
      if ( v8 )
        memcpy_0(v14, v15, 2 * v8);
      v16 = &v14[v11];
      if ( v8 )
      {
        *(_QWORD *)(a1 + 104) = &v14[2 * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v15) >> 1)];
        v21 = &v14[2 * ((std::basic_streambuf<unsigned short>::pptr(a1) - (__int64)v15) >> 1)];
        v22 = std::basic_streambuf<unsigned short>::pbase(a1);
        std::basic_streambuf<unsigned short>::setp(a1, &v14[2 * ((v22 - (__int64)v15) >> 1)], v21, v16);
        v18 = a1;
        if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
        {
          v19 = v14;
          v20 = 0LL;
        }
        else
        {
          v23 = std::basic_streambuf<unsigned short>::pptr(a1);
          v24 = std::basic_streambuf<unsigned short>::gptr(a1);
          v19 = (char *)(v23 + 2);
          v18 = a1;
          v20 = &v14[2 * ((v24 - (__int64)v15) >> 1)];
        }
        v17 = v14;
      }
      else
      {
        *(_QWORD *)(a1 + 104) = v14;
        std::basic_streambuf<unsigned short>::setp(a1, v14, &v14[v11]);
        v17 = v14;
        v18 = a1;
        if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
        {
          v19 = v14;
          v20 = 0LL;
        }
        else
        {
          v19 = v14 + 2;
          v20 = v14;
        }
      }
      std::basic_streambuf<unsigned short>::setg(v18, v17, v20, v19);
      v25 = *(_DWORD *)(a1 + 112);
      if ( (v25 & 1) != 0 )
      {
        std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)(2 * v8));
        v25 = *(_DWORD *)(a1 + 112);
      }
      *(_DWORD *)(a1 + 112) = v25 | 1;
LABEL_10:
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = a2;
      return a2;
    }
  }
  return 0xFFFFLL;
}
