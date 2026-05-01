/*
 * XREFs of ?RuntimeClassInitialize@ShellPositionerProxy@@QEAAJPEAUIShellPositionerManager@@PEAUIApplicationView@@@Z @ 0x180067680
 * Callers:
 *     ??$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Z @ 0x1800675B0 (--$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManag.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800677F8 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerProxy::RuntimeClassInitialize(
        ShellPositionerProxy *this,
        struct IShellPositionerManager *a2,
        struct IApplicationView *a3)
{
  struct IShellPositionerManager *v6; // rax
  struct IShellPositionerManager *v8; // [rsp+40h] [rbp+8h] BYREF

  v6 = (struct IShellPositionerManager *)*((_QWORD *)this + 2);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IShellPositionerManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IShellPositionerManager *)*((_QWORD *)this + 2);
    }
    v8 = v6;
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=((char *)this + 24, a3);
  return 0LL;
}
