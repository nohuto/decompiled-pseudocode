/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180056D88
 * Callers:
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x180056D71 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$2.c)
 *     _SystemCursor::CreateCustomCursorSharedTarget_::_1_::dtor$7 @ 0x1800CCF33 (_SystemCursor--CreateCustomCursorSharedTarget_--_1_--dtor$7.c)
 *     _CustomCursorApplication::CreateSharedVisual_::_1_::dtor$4 @ 0x1800CD28D (_CustomCursorApplication--CreateSharedVisual_--_1_--dtor$4.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800E97B8 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x1800E984C (-CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::HolographicDriverHandleWrapper_::_1_::dtor$3 @ 0x180150DCD (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--HolographicDriverH_ea_180150DCD.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$3 @ 0x1801510DC (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_1801510DC.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle_::_1_::dtor$1 @ 0x180153AC8 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--CloseDriverHandle_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
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
