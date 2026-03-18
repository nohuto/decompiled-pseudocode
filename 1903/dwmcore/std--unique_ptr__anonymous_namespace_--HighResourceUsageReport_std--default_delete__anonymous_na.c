/*
 * XREFs of std::unique_ptr__anonymous_namespace_::HighResourceUsageReport_std::default_delete__anonymous_namespace_::HighResourceUsageReport___::_unique_ptr__anonymous_namespace_::HighResourceUsageReport_std::default_delete__anonymous_namespace_::HighResourceUsageReport___ @ 0x1800D183C
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__currentHighResourceReport__ @ 0x1800EDC30 (_anonymous_namespace_--_dynamic_atexit_destructor_for__currentHighResourceReport__.c)
 * Callees:
 *     _anonymous_namespace_::HighResourceUsageReport::_scalar_deleting_destructor_ @ 0x1800D1A00 (_anonymous_namespace_--HighResourceUsageReport--_scalar_deleting_destructor_.c)
 */

__int64 __fastcall std::unique_ptr__anonymous_namespace_::HighResourceUsageReport_std::default_delete__anonymous_namespace_::HighResourceUsageReport___::_unique_ptr__anonymous_namespace_::HighResourceUsageReport_std::default_delete__anonymous_namespace_::HighResourceUsageReport___(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return anonymous_namespace_::HighResourceUsageReport::_scalar_deleting_destructor_(v1);
  return result;
}
