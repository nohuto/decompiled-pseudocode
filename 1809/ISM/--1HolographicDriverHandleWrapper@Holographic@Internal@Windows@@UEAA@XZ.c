/*
 * XREFs of ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x18010F5C8
 * Callers:
 *     ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180110440 (--_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180116890 (--_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x18011C660 (-_Destroy@-$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@.c)
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180136128 (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper_--_Ref_coun.c)
 * Callees:
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18010FBC0 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x180110360 (-UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z.c)
 *     ??R?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBAXPEAUCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x18011AAB8 (--R-$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(
        HSTRING *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  HSTRING v4; // rdx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  HSTRING v8; // r8
  char *v9; // rcx
  HSTRING v10; // rcx
  HSTRING v11; // r8

  *this = (HSTRING)&Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(
    (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)this,
    0);
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
    (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)this,
    6u);
  v4 = this[19];
  if ( v4 )
    std::default_delete<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator()(
      v2,
      v4,
      v3);
  v5 = this[17];
  if ( (unsigned __int64)v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  v6 = this[11];
  if ( v6 )
  {
    v7 = (const struct std::nothrow_t *)(((char *)this[13] - (char *)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
      v8 = (HSTRING)*((_QWORD *)v6 - 1);
      v9 = (char *)((char *)v6 - (char *)v8);
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
        goto LABEL_16;
      v6 = v8;
    }
    operator delete(v6, v7);
    this[11] = 0LL;
    this[12] = 0LL;
    this[13] = 0LL;
  }
  v10 = this[8];
  if ( v10 )
  {
    v7 = (const struct std::nothrow_t *)(((char *)this[10] - (char *)v10) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v7 < 0x1000 )
    {
LABEL_14:
      operator delete(v10, v7);
      this[8] = 0LL;
      this[9] = 0LL;
      this[10] = 0LL;
      goto LABEL_15;
    }
    v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
    v11 = (HSTRING)*((_QWORD *)v10 - 1);
    v9 = (char *)((char *)v10 - (char *)v11);
    if ( (unsigned __int64)(v9 - 8) <= 0x1F )
    {
      v10 = v11;
      goto LABEL_14;
    }
LABEL_16:
    _o__invalid_parameter_noinfo_noreturn(v9, v7);
    JUMPOUT(0x18010F6D5LL);
  }
LABEL_15:
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
}
