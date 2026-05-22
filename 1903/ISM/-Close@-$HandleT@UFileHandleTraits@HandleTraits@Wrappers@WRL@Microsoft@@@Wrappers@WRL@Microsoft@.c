/*
 * XREFs of ?Close@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800A5EA4
 * Callers:
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x180026D80 (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z @ 0x1800A6380 (-WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800A734C (--1WGIRawInputProvider@@UEAA@XZ.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A8ECC (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close(
        __int64 a1)
{
  int LastError; // eax

  if ( *(_QWORD *)(a1 + 8) != -1LL )
  {
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a1)(a1) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      RaiseException(LastError, 1u, 0, 0LL);
      __debugbreak();
    }
    *(_QWORD *)(a1 + 8) = -1LL;
  }
}
