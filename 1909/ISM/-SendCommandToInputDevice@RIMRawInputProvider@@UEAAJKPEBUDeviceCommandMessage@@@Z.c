/*
 * XREFs of ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180098C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A4B8 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x18009EFCC (-SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z.c)
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800A1654 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x1800A4588 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800A4D2C (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 */

__int64 __fastcall RIMRawInputProvider::SendCommandToInputDevice(
        HeatDeviceCollection **this,
        unsigned int a2,
        const struct DeviceCommandMessage *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct DeviceInfo *v13; // [rsp+50h] [rbp+18h] BYREF

  switch ( *(_DWORD *)a3 )
  {
    case 2:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[10], a2, &v13) >= 0 )
      {
        v6 = HeatDeviceCollection::SendHeatDeviceCommand(this[10], a2, *((void **)a3 + 1));
        if ( v6 < 0 )
        {
          v7 = 337LL;
          goto LABEL_22;
        }
      }
      return 0LL;
    case 3:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[7], a2, &v13) >= 0 )
      {
        v6 = SpatialRimDeviceCollection::SetInputDeviceHapticsFeedback(
               this[7],
               a2,
               *((_BYTE *)a3 + 8),
               *((_BYTE *)a3 + 9),
               *((_WORD *)a3 + 5));
        if ( v6 < 0 )
        {
          v7 = 355LL;
          goto LABEL_22;
        }
      }
      return 0LL;
    case 4:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[11], a2, &v13) >= 0 )
      {
        v6 = GazeDeviceCollection::SetTrackingEnabled(this[11], a2, *((_DWORD *)a3 + 2));
        if ( v6 < 0 )
        {
          v7 = 370LL;
          goto LABEL_22;
        }
      }
      return 0LL;
    case 5:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[7], a2, &v13) >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this[7] + 347) + 88LL))(
                *((_QWORD *)this[7] + 347),
                a2,
                (__int64)this[7] + 2760);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            435LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
            (const char *)(unsigned int)v11);
      }
      return 0LL;
    case 7:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[5], a2, &v13) >= 0 )
      {
        LOBYTE(v9) = *((_DWORD *)a3 + 3) != 0;
        MobileButtonDeviceCollection::OnButtonEnabledOnIdleChanged(this[5], v8, *((unsigned int *)a3 + 2), v9);
      }
      return 0LL;
  }
  v6 = -2147467263;
  v7 = 411LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
