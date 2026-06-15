/*
 * XREFs of _CStreamInstance::UnregisterResources_::_1_::dtor$0 @ 0x14001FBD7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstance::UnregisterResources_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return CSAutoLock<1>::~CSAutoLock<1>(a2 + 64);
}
