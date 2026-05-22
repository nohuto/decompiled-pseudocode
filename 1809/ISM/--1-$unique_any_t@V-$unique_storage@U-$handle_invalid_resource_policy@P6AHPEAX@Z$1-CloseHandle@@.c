/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000AF68
 * Callers:
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x18012E22A (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$2.c)
 *     _SystemCursor::CreateCustomCursorSharedTarget_::_1_::dtor$7 @ 0x180132BDE (_SystemCursor--CreateCustomCursorSharedTarget_--_1_--dtor$7.c)
 *     _CustomCursorApplication::CreateSharedVisual_::_1_::dtor$4 @ 0x180132BF0 (_CustomCursorApplication--CreateSharedVisual_--_1_--dtor$4.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle_::_1_::dtor$1 @ 0x180135A1C (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--CloseDriverHandle_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$3 @ 0x18013602E (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_18013602E.c)
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$6 @ 0x180136195 (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_180136195.c)
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
