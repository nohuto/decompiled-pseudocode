/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140031730
 * Callers:
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$14 @ 0x14001F990 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$14.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$3 @ 0x140020110 (_CSubmixImpl--CreateStream_--_1_--dtor$3.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$4 @ 0x140020130 (_CSubmixImpl--CreateStream_--_1_--dtor$4.c)
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$3 @ 0x1400211B4 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
