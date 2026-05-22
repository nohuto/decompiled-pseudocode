/*
 * XREFs of ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180019124
 * Callers:
 *     ??0?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@G_N@std@@@1@AEBV?$allocator@U?$pair@G_N@std@@@1@@Z @ 0x1800190EC (--0-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@QEAA@V-$initializer_list@U-$.c)
 * Callees:
 *     ?_Buy@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAA_N_K@Z @ 0x1800191B0 (-_Buy@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAA_N_K@Z.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned short,bool>>::_Range_construct_or_tidy<std::pair<unsigned short,bool> const *>(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3)
{
  unsigned int *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  unsigned __int64 v9; // r8

  v4 = a2;
  v5 = a3 - (_QWORD)a2;
  result = std::vector<std::pair<unsigned short,bool>>::_Buy(&xmmword_1801E1540, (__int64)(a3 - (_QWORD)a2) >> 2);
  v7 = 0LL;
  if ( (_BYTE)result )
  {
    v8 = (_DWORD *)xmmword_1801E1540;
    v9 = (v5 + 3) >> 2;
    if ( (unsigned __int64)v4 > a3 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        result = *v4;
        *v8++ = result;
        ++v4;
        ++v7;
      }
      while ( v7 != v9 );
    }
    *((_QWORD *)&xmmword_1801E1540 + 1) = v8;
  }
  return result;
}
