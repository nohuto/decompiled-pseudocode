/*
 * XREFs of ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18005E6A0
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18004C3B0 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18003E770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CVolumeProvider@@QEAA@XZ @ 0x18005E754 (--0CVolumeProvider@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005F570 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>()
{
  CVolumeProvider *v0; // rax
  CVolumeProvider *v1; // rax
  struct IVolumeProvider *v2; // rdi
  const struct _GUID *v3; // rcx
  int IsEqualGUID; // eax
  struct IVolumeProvider *v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // ebx

  g_pVolumeProvider = 0LL;
  v0 = (CVolumeProvider *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CVolumeProvider::CVolumeProvider(v0);
    g_pVolumeProvider = 0LL;
    v2 = v1;
    if ( InlineIsEqualGUID(&GUID_20b2a72d_4632_4a08_bd47_6aca4e517f6a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_pVolumeProvider = v2;
      (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)v2 + 8LL))(v2);
      v7 = 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(v3, v3);
      v5 = 0LL;
      if ( IsEqualGUID )
      {
        g_pVolumeProvider = v2;
        v5 = v2;
      }
      v6 = (unsigned int)-IsEqualGUID;
      v7 = IsEqualGUID == 0 ? 0x80004002 : 0;
      if ( IsEqualGUID )
        (*(void (__fastcall **)(struct IVolumeProvider *, __int64))(*(_QWORD *)v5 + 8LL))(v5, v6);
    }
    if ( v2 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::Release(
        v2,
        v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
