/*
 * XREFs of ?TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@45@@Z @ 0x180214CE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18020BA10 (--0-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$0A@$0A@$03$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18020BCF4 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$0A@$0A@$03$0CAAAAAA@U_TlgReflector.c)
 *     ??1TakeForeground@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18020D2F8 (--1TakeForeground@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ??1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18020D5B4 (--1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXI@Z @ 0x1802136EC (-StartActivity@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXI@Z.c)
 *     ?StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x18021382C (-StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180213920 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?Stop@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x180213B9C (-Stop@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableS.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::TakeForeground(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        enum Windows::Internal::ComposableShell::ForegroundPolicyResult *a2)
{
  int v2; // ebx
  int v5; // ebx
  RTL_SRWLOCK *v6; // rbx
  char v7; // bp
  HWND v8; // rdi
  _QWORD v10[40]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v11[40]; // [rsp+160h] [rbp-168h] BYREF

  v2 = *((_DWORD *)this + 84);
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,0,0,4,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,0,0,4,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
  v11[0] = &Win32BackedViewHostItemTelemetry::TakeForeground::`vftable';
  Win32BackedViewHostItemTelemetry::TakeForeground::StartActivity(
    (Win32BackedViewHostItemTelemetry::TakeForeground *)v11,
    v2);
  v5 = *((_DWORD *)this + 84);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"Win32BackedViewHostItem_TakeForeground");
  v10[0] = &HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::`vftable';
  HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::StartActivity(
    (HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *)v10,
    v5);
  *(_DWORD *)a2 = 2;
  v6 = (RTL_SRWLOCK *)((char *)this + 160);
  v7 = *((_BYTE *)this + 352);
  AcquireSRWLockShared((PSRWLOCK)this + 20);
  v8 = (HWND)*((_QWORD *)this + 42);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  if ( v7 && SetForegroundWindow(v8) )
    *(_DWORD *)a2 = 0;
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v10);
  Win32BackedViewHostItemTelemetry::TakeForeground::Stop((__int64)v11, *(_DWORD *)a2);
  HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::~Win32BackedViewHostItem_TakeForeground((HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *)v10);
  Win32BackedViewHostItemTelemetry::TakeForeground::~TakeForeground((Win32BackedViewHostItemTelemetry::TakeForeground *)v11);
  return 0LL;
}
