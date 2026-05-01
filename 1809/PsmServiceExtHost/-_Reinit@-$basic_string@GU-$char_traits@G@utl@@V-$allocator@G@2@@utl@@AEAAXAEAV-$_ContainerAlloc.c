/*
 * XREFs of ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180037D08
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180037C44 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v7; // r9
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
  v7 = *a2;
  *(_QWORD *)a1 = *a2;
  result = v7 + 2 * a3;
  *(_QWORD *)(a1 + 8) = result;
  *v3 = v7 + 2 * (a2[1] - 1);
  *a2 = 0LL;
  return result;
}
