/*
 * XREFs of ??1?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x18011910C
 * Callers:
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$7 @ 0x1801361AE (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_1801361AE.c)
 * Callees:
 *     ??R?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBAXPEAUCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x18011AAB8 (--R-$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@.c)
 */

__int64 __fastcall std::unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::~unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator()(
             a1,
             *a1,
             a3);
  return result;
}
