/*
 * XREFs of _anonymous_namespace_::HighResourceUsageReport::_scalar_deleting_destructor_ @ 0x1800D1A00
 * Callers:
 *     std::unique_ptr__anonymous_namespace_::HighResourceUsageReport_std::default_delete__anonymous_namespace_::HighResourceUsageReport___::_unique_ptr__anonymous_namespace_::HighResourceUsageReport_std::default_delete__anonymous_namespace_::HighResourceUsageReport___ @ 0x1800D183C (std--unique_ptr__anonymous_namespace_--HighResourceUsageReport_std--default_delete__anonymous_na.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall anonymous_namespace_::HighResourceUsageReport::_scalar_deleting_destructor_(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[2];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 104 * ((a1[4] - (_QWORD)v2) / 104LL));
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
  operator delete(a1);
  return a1;
}
