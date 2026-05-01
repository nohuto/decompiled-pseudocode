/*
 * XREFs of ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180037D70
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180037C44 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049094 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rax
  void **v8; // rcx
  char v9; // bl
  void *v11[2]; // [rsp+20h] [rbp-28h] BYREF
  void *Block[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (_QWORD *)*a1 == a1 + 2 )
    v4 = 7LL;
  else
    v4 = (__int64)(a1[2] - *a1) >> 1;
  v5 = 2 * v4 + 1;
  if ( v5 < a3 )
    v5 = a3;
  if ( v5 > 0x3FFFFFFFFFFFFFF7LL )
    v5 = 0x3FFFFFFFFFFFFFF7LL;
  if ( a3 > v5 )
  {
    Block[0] = 0LL;
    v8 = Block;
    Block[1] = 0LL;
    v9 = 2;
    v7 = 0LL;
  }
  else
  {
    v6 = v5 + 1;
    v11[1] = (void *)v6;
    if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
      v7 = 0LL;
    else
      v7 = operator new(2 * v6, (const struct std::nothrow_t *)&std::nothrow);
    v11[0] = v7;
    v8 = v11;
    v9 = 1;
  }
  *v8 = 0LL;
  *a2 = v7;
  a2[1] = v8[1];
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( Block[0] )
      operator delete(Block[0]);
  }
  if ( (v9 & 1) != 0 && v11[0] )
    operator delete(v11[0]);
  return a2;
}
