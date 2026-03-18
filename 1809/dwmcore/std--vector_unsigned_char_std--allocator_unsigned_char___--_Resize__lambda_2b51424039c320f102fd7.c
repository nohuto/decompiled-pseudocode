/*
 * XREFs of std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800AD4A8
 * Callers:
 *     _anonymous_namespace_::Compressor::Compress @ 0x18001B250 (_anonymous_namespace_--Compressor--Compress.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1800ABE08 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ @ 0x180183D0C (-ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        const void **a1,
        unsigned __int64 a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // rbp
  unsigned __int64 result; // rax
  char *v7; // rbx
  unsigned __int64 v8; // rdx
  SIZE_T v9; // rsi
  _QWORD *v10; // rdi
  SIZE_T v11; // rcx
  LPVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (char *)*a1;
  v5 = (_BYTE *)a1[1] - v4;
  result = (_BYTE *)a1[2] - v4;
  if ( a2 > result )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v8 = result >> 1;
    if ( result > 0x7FFFFFFFFFFFFFFFLL - (result >> 1) )
    {
      v9 = a2;
    }
    else
    {
      v9 = v8 + result;
      if ( v8 + result < a2 )
        v9 = a2;
    }
    if ( v9 >= 0x1000 )
    {
      v11 = v9 + 39;
      if ( v9 + 39 < v9 )
        v11 = -1LL;
      v12 = operator new(v11);
      if ( !v12 )
      {
        _o__invalid_parameter_noinfo_noreturn(v14, v13, v15, v16);
        JUMPOUT(0x1800AD612LL);
      }
      v10 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v10 - 1) = v12;
    }
    else if ( v9 )
    {
      v10 = HeapAlloc(WPF::g_processHeap, 0, v9);
      if ( !v10 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    else
    {
      v10 = 0LL;
    }
    memset_0((char *)v10 + v5, 0, a2 - v5);
    memmove_0(v10, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    if ( *a1 )
      std::_Deallocate<16,0>((void *)*a1, (_BYTE *)a1[2] - (_BYTE *)*a1);
    *a1 = v10;
    a1[1] = (char *)v10 + a2;
    result = (unsigned __int64)v10 + v9;
    a1[2] = (char *)v10 + v9;
  }
  else if ( a2 <= v5 )
  {
    if ( a2 != v5 )
    {
      result = (unsigned __int64)&v4[a2];
      a1[1] = &v4[a2];
    }
  }
  else
  {
    v7 = &v4[a2];
    result = (unsigned __int64)memset_0((void *)a1[1], 0, &v4[a2] - (_BYTE *)a1[1]);
    a1[1] = v7;
  }
  return result;
}
