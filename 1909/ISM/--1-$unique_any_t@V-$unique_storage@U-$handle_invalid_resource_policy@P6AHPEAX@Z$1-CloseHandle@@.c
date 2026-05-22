/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180056AE8
 * Callers:
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x180056AD1 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$2.c)
 *     _SystemCursor::CreateCustomCursorSharedTarget_::_1_::dtor$7 @ 0x1800CCCF3 (_SystemCursor--CreateCustomCursorSharedTarget_--_1_--dtor$7.c)
 *     _CustomCursorApplication::CreateSharedVisual_::_1_::dtor$4 @ 0x1800CD04D (_CustomCursorApplication--CreateSharedVisual_--_1_--dtor$4.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800E9588 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x1800E961C (-CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::HolographicDriverHandleWrapper_::_1_::dtor$3 @ 0x180150DBD (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--HolographicDriverH_ea_180150DBD.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$3 @ 0x1801510CC (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_1801510CC.c)
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
