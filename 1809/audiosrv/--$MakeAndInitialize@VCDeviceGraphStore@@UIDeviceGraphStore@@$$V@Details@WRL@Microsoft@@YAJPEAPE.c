/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x18005D55C
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005D298 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18003E770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CDeviceGraphStore@@QEAA@XZ @ 0x18005D634 (--0CDeviceGraphStore@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005F510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphStor.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore,>()
{
  CDeviceGraphStore *v0; // rax
  struct IDeviceGraphStore *v1; // rdi
  const struct _GUID *v2; // rcx
  int IsEqualGUID; // eax
  struct IDeviceGraphStore *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ebx

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
      v6 = 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(v2, v2);
      v4 = 0LL;
      if ( IsEqualGUID )
      {
        g_DeviceGraphStore = v1;
        v4 = v1;
      }
      v5 = (unsigned int)-IsEqualGUID;
      v6 = IsEqualGUID == 0 ? 0x80004002 : 0;
      if ( IsEqualGUID )
        (*(void (__fastcall **)(struct IDeviceGraphStore *, __int64))(*(_QWORD *)v4 + 8LL))(v4, v5);
    }
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphStore>::Release(
        v1,
        v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
