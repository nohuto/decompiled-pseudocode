/*
 * XREFs of ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x18009DDA0
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001F5FC (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialRimDeviceCollection::OnCompositorRunningStateChanged(
        SpatialRimDeviceCollection *this,
        __int64 a2)
{
  char v2; // si
  char *v4; // rbx
  __int64 v5; // rcx

  v2 = a2;
  if ( (_BYTE)a2 && !*((_BYTE *)this + 2848) )
  {
    v4 = (char *)this + 2760;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 345) + 96LL))((char *)this + 2760);
    v5 = *((_QWORD *)this + 347);
    *((_BYTE *)this + 2848) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v5 + 24LL))(v5, 0LL, v4);
  }
  if ( *((_BYTE *)this + 2848) )
  {
    LOBYTE(a2) = v2;
    (*(void (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 347) + 32LL))(
      *((_QWORD *)this + 347),
      a2,
      (char *)this + 2760);
  }
}
