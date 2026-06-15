/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x180056D00
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005ED18 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180033550 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CDeviceGraphStore@@QEAA@XZ @ 0x180063434 (--0CDeviceGraphStore@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphStor.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore,>()
{
  CDeviceGraphStore *v0; // rax
  struct IDeviceGraphStore *v1; // rbx
  const struct _GUID *v2; // rcx
  unsigned int v3; // edi

  g_DeviceGraphStore = 0LL;
  v0 = (CDeviceGraphStore *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CDeviceGraphStore::CDeviceGraphStore(v0);
    g_DeviceGraphStore = 0LL;
    if ( InlineIsEqualGUID(&GUID_dd4e1953_892c_477b_8524_b1e06c951cd8, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_DeviceGraphStore = v1;
      (*(void (__fastcall **)(struct IDeviceGraphStore *))(*(_QWORD *)v1 + 8LL))(v1);
      v3 = 0;
    }
    else if ( InlineIsEqualGUID(v2, v2) )
    {
      g_DeviceGraphStore = v1;
      v3 = 0;
      (*(void (__fastcall **)(struct IDeviceGraphStore *))(*(_QWORD *)v1 + 8LL))(v1);
    }
    else
    {
      v3 = -2147467262;
    }
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphStore>::Release(v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
