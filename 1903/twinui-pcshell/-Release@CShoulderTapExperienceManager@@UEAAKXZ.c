/*
 * XREFs of ?Release@CShoulderTapExperienceManager@@UEAAKXZ @ 0x180147EF0
 * Callers:
 *     ?Release@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@W7EAAKXZ @ 0x1800B2E20 (-Release@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShoulderTapExperienceManager::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorChangedEventArgs>::Release(this);
}
