/*
 * XREFs of _PenDeviceManager::PenDeviceManager_::_1_::dtor$16 @ 0x18012767D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenDeviceManager::PenDeviceManager_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::~list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>(*(_QWORD *)(a2 + 96) + 8LL);
}
