/*
 * XREFs of ?RuntimeClassInitialize@ShellPositionerProxy@@QEAAJPEAUIShellPositionerManager@@PEAUIApplicationView@@@Z @ 0x180060B20
 * Callers:
 *     ??$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Z @ 0x180060A50 (--$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManag.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=((char *)this + 24, a3);
  return 0LL;
}
