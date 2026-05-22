/*
 * XREFs of ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800634F0
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800620A8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialRimDeviceCollection::OnCompositorRunningStateChanged(SpatialRimDeviceCollection *this, char a2)
{
  __int64 v3; // rcx

  if ( a2 )
  {
    if ( !*((_BYTE *)this + 2848) )
    {
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 345) + 80LL))((char *)this + 2760);
      v3 = *((_QWORD *)this + 347);
      *((_BYTE *)this + 2848) = 1;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 0LL);
    }
  }
}
