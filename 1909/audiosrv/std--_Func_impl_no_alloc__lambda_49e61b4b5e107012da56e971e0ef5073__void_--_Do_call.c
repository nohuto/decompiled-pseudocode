/*
 * XREFs of std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Do_call @ 0x1800F9B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rdx

  v1 = *(const unsigned __int16 **)(a1 + 16);
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(const unsigned __int16 **)v1;
  CAudioResourceManager::ReevaluateSaDeviceSettings(*(CAudioResourceManager **)(a1 + 8), v1);
}
