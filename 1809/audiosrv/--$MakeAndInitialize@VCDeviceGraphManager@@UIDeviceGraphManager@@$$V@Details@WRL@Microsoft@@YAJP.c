/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x18005D410
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005D298 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18003E770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CDeviceGraphManager@@QEAA@XZ @ 0x18005D4D0 (--0CDeviceGraphManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EF10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManag.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E2A84 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800E2A84.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager,>()
{
  CDeviceGraphManager *v0; // rax
  CDeviceGraphManager *v1; // rax
  struct IDeviceGraphManager *v2; // rdi
  const struct _GUID *v3; // rcx
  const struct _GUID *v4; // rcx
  const struct _GUID *v5; // r9
  __int64 v6; // rdx
  struct IDeviceGraphManager *v7; // r8
  int CanCastTo; // ebx

  g_DeviceGraphManager = 0LL;
  v0 = (CDeviceGraphManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v0 )
    return (unsigned int)-2147024882;
  v1 = CDeviceGraphManager::CDeviceGraphManager(v0);
  g_DeviceGraphManager = 0LL;
  v2 = v1;
  if ( InlineIsEqualGUID(&GUID_d1560edf_8a5c_4f4a_9ee0_3d153853e7d9, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    g_DeviceGraphManager = v2;
    (*(void (__fastcall **)(struct IDeviceGraphManager *))(*(_QWORD *)v2 + 8LL))(v2);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, v5) )
    {
      g_DeviceGraphManager = v7;
      CanCastTo = 0;
LABEL_6:
      (*(void (__fastcall **)(struct IDeviceGraphManager *))(*(_QWORD *)v7 + 8LL))(v7);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
                  (char *)v7 + 8,
                  v6,
                  &g_DeviceGraphManager);
    if ( CanCastTo >= 0 )
    {
      v7 = g_DeviceGraphManager;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>::Release(v2);
  return (unsigned int)CanCastTo;
}
