/*
 * XREFs of ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x1800C7B68
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CD40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 */

__int64 *__fastcall std::vector<void *>::vector<void *>(__int64 *a1, unsigned __int64 a2)
{
  size_t v3; // rsi
  _QWORD *v4; // rax
  char *v5; // rax
  char *v6; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v3 = 8 * a2;
    v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * a2);
    *a1 = (__int64)v4;
    a1[1] = (__int64)v4;
    v5 = (char *)*a1;
    a1[2] = v3 + *a1;
    try
    {
      v6 = &v5[v3];
      memset_0(v5, 0, v3);
      a1[1] = (__int64)v6;
    }
    catch ( ... )
    {
      std::vector<void *>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
