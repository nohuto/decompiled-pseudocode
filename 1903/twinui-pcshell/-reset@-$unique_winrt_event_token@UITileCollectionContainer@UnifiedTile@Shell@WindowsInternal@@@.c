/*
 * XREFs of ?reset@?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180254D50
 * Callers:
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@P83456@EAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@ZP83456@EAAJUEventRegistrationToken@@@ZPEAU789@@details@wil@@YAJPEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@P82345@EAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@ZP82345@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@1@@Z @ 0x180250368 (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITileCollectionContainer@UnifiedTi.c)
 *     ??1?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180250B10 (--1-$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@wil@.c)
 *     ??1DefaultIconManager@@EEAA@XZ @ 0x180250B40 (--1DefaultIconManager@@EEAA@XZ.c)
 *     ?Shutdown@DefaultIconManager@@UEAAJXZ @ 0x180253710 (-Shutdown@DefaultIconManager@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>::reset(
        __int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)a1 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
      *(_QWORD *)(a1 + 8),
      &GUID_6fe03efc_a8af_4faf_9c23_bc0cb5bf29d3,
      &v5);
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 16))(v5, *(_QWORD *)a1);
      if ( v2 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1952LL,
          (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
          (const char *)(unsigned int)v2);
        __debugbreak();
      }
    }
    *(_QWORD *)a1 = 0LL;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 8));
    v3 = v5;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
