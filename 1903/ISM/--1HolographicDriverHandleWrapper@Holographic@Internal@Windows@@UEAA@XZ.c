/*
 * XREFs of ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180151BC8
 * Callers:
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_____&__GUID_const_&_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&_bool_&_void___&__::_1_::dtor$1 @ 0x1801499A9 (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_1801499A9.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180151FD4 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180152C40 (--_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z @ 0x180152B68 (--_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015381C (-Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(
        HSTRING *this)
{
  unsigned int v2; // edx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext *v3; // rcx
  HSTRING v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx

  *this = (HSTRING)&Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::Close((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)this);
  v3 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext *)this[19];
  if ( v3 )
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::`scalar deleting destructor'(v3, v2);
  v4 = this[17];
  if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = this[11];
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(((char *)this[13] - (char *)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    this[11] = 0LL;
    this[12] = 0LL;
    this[13] = 0LL;
  }
  v6 = this[8];
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(((char *)this[10] - (char *)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    this[8] = 0LL;
    this[9] = 0LL;
    this[10] = 0LL;
  }
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
}
