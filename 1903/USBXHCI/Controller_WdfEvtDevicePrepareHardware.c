/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     RtlUnicodeStringPrintf @ 0x1C0014624 (RtlUnicodeStringPrintf.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016444 (XilDeviceSlot_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C005E440 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C005E6D8 (CommonBuffer_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C00667BC (Interrupter_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x1C0068064 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C00689FC (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006A99C (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C006ADCC (SecureDmaEnabler_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  char IsSecureDevice; // r14
  NTSTATUS v8; // eax
  int v9; // ebx
  unsigned __int16 v10; // r9
  int v11; // ecx
  int v12; // ecx
  __int64 *v14; // r8
  char v15; // dl
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  char v24; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v23 = 0uLL;
  v22 = 0uLL;
  DestinationString.Buffer = (wchar_t *)&v24;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  IsSecureDevice = Controller_IsSecureDevice(v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(*(_QWORD *)(v6 + 72), 4u, 4u, 0x2Du, (__int64)&Context.Logger + 4, a1);
  v8 = Register_PrepareHardware(*(_QWORD *)(v6 + 88), a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v10 = 46;
    goto LABEL_6;
  }
  if ( IsSecureDevice )
  {
    if ( !*(_QWORD *)(v6 + 104) )
    {
      v9 = SecureDmaEnabler_Create(v6);
      if ( v9 < 0 )
        goto LABEL_17;
    }
    if ( *(_DWORD *)(v6 + 540) != 2 )
      goto LABEL_13;
  }
  if ( *(_QWORD *)(v6 + 96) || (v9 = DmaEnabler_Create(a1, v6), v9 >= 0) )
  {
LABEL_13:
    v11 = *(_DWORD *)(v6 + 540);
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v14 = (__int64 *)(v6 + 120);
        if ( *(_QWORD *)(v6 + 120) )
          goto LABEL_27;
        v15 = 1;
LABEL_26:
        v9 = CommonBuffer_Create(v6, v15, v14);
        if ( v9 < 0 )
          goto LABEL_17;
LABEL_27:
        v9 = Interrupter_PrepareHardware(*(_QWORD *)(v6 + 128), a2, a3);
        if ( v9 < 0 )
          goto LABEL_17;
        v9 = XilDeviceSlot_PrepareHardware(*(_QWORD *)(v6 + 136));
        if ( v9 < 0 )
          goto LABEL_17;
        v9 = Command_PrepareHardware(*(_QWORD *)(v6 + 144));
        if ( v9 < 0 )
          goto LABEL_17;
        v9 = RootHub_PrepareHardware(*(_QWORD *)(v6 + 152));
        if ( v9 < 0 )
          goto LABEL_17;
        if ( *(_DWORD *)(v6 + 464) && *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 32LL) )
        {
          v16 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 264))(
                  WPP_MAIN_CB.Dpc.ProcessorHistory,
                  a1);
          SleepstudyHelper_GenerateGuid(0LL, v16, &v23);
          SleepstudyHelper_GenerateGuid(7LL, v16 + 336, &v22);
          v8 = RtlUnicodeStringPrintf(
                 &DestinationString,
                 L"USBXHCI Selective Suspend Disabled/ Unsupported: Reason code: %d",
                 *(unsigned int *)(v6 + 464));
          v9 = v8;
          if ( v8 >= 0 )
          {
            v20 = v22;
            v17 = *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 32LL);
            v21 = v23;
            v8 = SleepstudyHelper_RegisterComponentEx(v17, &v21, &v20, &DestinationString, v6 + 832);
            v9 = v8;
            if ( v8 >= 0 )
              return (unsigned int)v9;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_39;
            v10 = 48;
            goto LABEL_6;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = 47;
LABEL_6:
            LODWORD(v18) = v8;
            WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), 2u, 4u, v10, (__int64)&Context.Logger + 4, v18);
          }
        }
LABEL_39:
        if ( v9 >= 0 )
          return (unsigned int)v9;
        goto LABEL_17;
      }
      if ( v12 != 1 )
      {
        Debug_FreAssertMsg(
          (__int64)"Unexpected DMA mode",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
          1329);
        v9 = -1073741630;
        goto LABEL_17;
      }
    }
    v14 = (__int64 *)(v6 + 120);
    if ( *(_QWORD *)(v6 + 120) )
      goto LABEL_27;
    v15 = 0;
    goto LABEL_26;
  }
LABEL_17:
  DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = v9;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), 1u, 4u, 0x31u, (__int64)&Context.Logger + 4, v18);
  }
  Controller_ReportFatalError(v6, 32, 4124, 0LL, 0LL, 0LL);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return (unsigned int)v9;
}
