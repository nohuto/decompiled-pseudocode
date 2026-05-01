/*
 * XREFs of ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x18008C1EC
 * Callers:
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18008C5A0 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 * Callees:
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x18006C3D0 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18008C9DC (-_Xlength@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 */

char **__fastcall std::vector<unsigned short>::vector<unsigned short>(char **a1, unsigned __int64 a2)
{
  char *v4; // rax
  size_t v5; // r8
  char *v6; // rax
  char *v7; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Xlength(a1);
    v4 = (char *)std::allocator<unsigned short>::allocate((__int64)a1, a2);
    *a1 = v4;
    a1[1] = v4;
    v5 = 2 * a2;
    v6 = *a1;
    a1[2] = &(*a1)[2 * a2];
    v7 = &v6[2 * a2];
    memset_0(v6, 0, v5);
    a1[1] = v7;
  }
  return a1;
}
