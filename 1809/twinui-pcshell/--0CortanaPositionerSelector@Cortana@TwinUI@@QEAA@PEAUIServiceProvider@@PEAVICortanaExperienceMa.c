/*
 * XREFs of ??0CortanaPositionerSelector@Cortana@TwinUI@@QEAA@PEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@12@@Z @ 0x180186CE0
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180153DE4 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

TwinUI::Cortana::CortanaPositionerSelector *__fastcall TwinUI::Cortana::CortanaPositionerSelector::CortanaPositionerSelector(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct IServiceProvider *a2,
        struct TwinUI::Cortana::ICortanaExperienceManagerNotification *a3)
{
  __int64 *v5; // rcx

  *(_QWORD *)this = &TwinUI::Cortana::CortanaPositionerSelector::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v5 = (__int64 *)((char *)this + 32);
  *v5 = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaExperienceManagerNotification *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
