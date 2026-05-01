/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180037C44
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180037C1C (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 * Callees:
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180037D08 (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXAEAV-$_ContainerAlloc.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180037D70 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     memmove_0 @ 0x180049A0E (memmove_0.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rax
  char *v5; // rcx
  char v8; // r15
  unsigned __int64 v9; // rax
  _WORD *v10; // rbp
  char *v12; // rax
  void *Block[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)(a1 + 2);
  v5 = *a1;
  v8 = 1;
  if ( v5 == v3 )
    v9 = 7LL;
  else
    v9 = (__int64)(*(_QWORD *)v3 - (_QWORD)v5) >> 1;
  if ( a3 <= v9 )
  {
    if ( v5 != a2 )
    {
      memmove_0(v5, a2, 2 * a3);
      v5 = *a1;
    }
    v12 = &v5[2 * a3];
    a1[1] = v12;
    *(_WORD *)v12 = 0;
  }
  else
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      a1,
      Block);
    v10 = Block[0];
    if ( Block[0] )
    {
      memcpy_0(Block[0], a2, 2 * a3);
      v10[a3] = 0;
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        a1,
        Block,
        a3);
      v10 = Block[0];
    }
    else
    {
      v8 = 0;
    }
    if ( v10 )
      operator delete(v10);
  }
  return v8;
}
