/*
 * XREFs of std::make_unique__anonymous_namespace_::HighResourceUsageReport_0_ @ 0x1800CA98C
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__currentHighResourceReport__ @ 0x180001470 (_anonymous_namespace_--_dynamic_initializer_for__currentHighResourceReport__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

_QWORD *__fastcall std::make_unique__anonymous_namespace_::HighResourceUsageReport_0_(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x30uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x30uLL);
    v3[3] = 0LL;
    v3[4] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
