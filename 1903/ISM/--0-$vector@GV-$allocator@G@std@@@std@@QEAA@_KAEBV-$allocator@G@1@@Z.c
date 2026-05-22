/*
 * XREFs of ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x18009B9E8
 * Callers:
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18009B0D4 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

char **__fastcall std::vector<unsigned short>::vector<unsigned short>(char **a1, unsigned __int64 a2)
{
  size_t v3; // rsi
  char *v4; // rax
  char *v5; // rax
  char *v6; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v3 = 2 * a2;
    v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * a2);
    *a1 = v4;
    a1[1] = v4;
    v5 = *a1;
    a1[2] = &(*a1)[v3];
    try
    {
      v6 = &v5[v3];
      memset_0(v5, 0, v3);
      a1[1] = v6;
    }
    catch ( ... )
    {
      std::vector<unsigned short>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
