/*
 * XREFs of ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1801B6890
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801B1FB0 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801B2230 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B604C (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _LogEventWithApplicationViewData @ 0x1801B7870 (_LogEventWithApplicationViewData.c)
 */

__int64 __fastcall HolographicPositioner::_EnsureShellStateForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        bool *a3)
{
  int v3; // r9d
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // esi
  struct IApplicationView **v11; // rsi
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 104);
  *a3 = v3 == 0;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 104) == 1 )
    {
      LogEventWithApplicationViewData(a2, HolographicPositionerTelemetry::DenyAppViewDuringOOBE<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView(this, a2);
      if ( v6 < 0 )
      {
        v7 = 1886LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
    }
    else if ( *((_QWORD *)this + 50) )
    {
      LogEventWithApplicationViewData(a2, HolographicPositionerTelemetry::QueueAppViewPending<unsigned short const *>);
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 50) + 24LL))(
             *((_QWORD *)this + 50),
             a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x764,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      v11 = (struct IApplicationView **)((char *)this + 392);
      v12 = *((_QWORD *)this + 49);
      if ( v12 )
      {
        LogEventWithApplicationViewData(
          v12,
          HolographicPositionerTelemetry::PreviousPendingViewClosed<unsigned short const *>);
        v6 = HolographicPositioner::_CloseView(this, *v11);
        if ( v6 < 0 )
        {
          v7 = 1899LL;
          goto LABEL_5;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
      }
      Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
        (__int64 *)v11,
        (__int64)a2);
    }
    else
    {
      LogEventWithApplicationViewData(a2, HolographicPositionerTelemetry::DenyAppViewPending<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView(this, a2);
      if ( v6 < 0 )
      {
        v7 = 1910LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
