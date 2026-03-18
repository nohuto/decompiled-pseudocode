/*
 * XREFs of ?GetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C0082D70
 * Callers:
 *     imp_WdfDeviceGetDeviceState @ 0x1C0049A60 (imp_WdfDeviceGetDeviceState.c)
 * Callees:
 *     ?GetPnpStateInternal@FxPkgPnp@@IEAAJXZ @ 0x1C0082E44 (-GetPnpStateInternal@FxPkgPnp@@IEAAJXZ.c)
 */

void __fastcall FxPkgPnp::GetPnpState(FxPkgPnp *this, _WDF_DEVICE_STATE *State)
{
  __int16 PnpStateInternal; // ax
  _WDF_TRI_STATE v4; // ecx
  __int16 v5; // dx
  int v6; // eax
  int v7; // edx

  PnpStateInternal = FxPkgPnp::GetPnpStateInternal(this);
  v4 = WdfFalse;
  v5 = PnpStateInternal;
  v6 = PnpStateInternal & 3;
  if ( v6 )
  {
    if ( v6 == 1 )
      State->Disabled = WdfTrue;
    else
      State->Disabled = WdfUseDefault;
  }
  else
  {
    State->Disabled = WdfFalse;
  }
  if ( (v5 & 0xC) != 0 )
    State->DontDisplayInUI = ((v5 & 0xC) != 4) + 1;
  else
    State->DontDisplayInUI = WdfFalse;
  if ( (v5 & 0x30) != 0 )
    State->Failed = ((v5 & 0x30) != 16) + 1;
  else
    State->Failed = WdfFalse;
  if ( (v5 & 0xC0) != 0 )
    State->NotDisableable = ((v5 & 0xC0) != 64) + 1;
  else
    State->NotDisableable = WdfFalse;
  if ( (v5 & 0x300) != 0 )
    State->Removed = ((v5 & 0x300) != 256) + 1;
  else
    State->Removed = WdfFalse;
  v7 = v5 & 0xC00;
  if ( v7 )
  {
    LOBYTE(v4) = v7 != 1024;
    ++v4;
  }
  State->ResourcesChanged = v4;
}
