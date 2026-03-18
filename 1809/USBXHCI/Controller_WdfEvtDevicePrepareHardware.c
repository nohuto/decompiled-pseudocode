/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x1C005C350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0013910 (XilDeviceSlot_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C0057408 (Command_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0057658 (CommonBuffer_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C005EB9C (Interrupter_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x1C006014C (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C0060A08 (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C00627D8 (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C0062BC4 (SecureDmaEnabler_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  char IsSecureDevice; // bp
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  __int64 *v13; // r8
  char v14; // dl
  __int64 v15; // [rsp+28h] [rbp-20h]

  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  IsSecureDevice = Controller_IsSecureDevice(v6);
  WPP_RECORDER_SF_i(*(_QWORD *)(v6 + 72), 4u, 4u, 0x2Du, (__int64)&Context.Logger + 4, a1);
  v8 = Register_PrepareHardware(*(_QWORD *)(v6 + 88), a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), 2u, 4u, 0x2Eu, (__int64)&Context.Logger + 4, v15);
    goto LABEL_25;
  }
  if ( !IsSecureDevice )
    goto LABEL_29;
  if ( !*(_QWORD *)(v6 + 104) )
  {
    v9 = SecureDmaEnabler_Create(v6);
    if ( v9 < 0 )
      goto LABEL_13;
  }
  if ( *(_DWORD *)(v6 + 476) == 2 )
  {
LABEL_29:
    if ( !*(_QWORD *)(v6 + 96) )
    {
      v9 = DmaEnabler_Create(a1, v6);
      if ( v9 < 0 )
        goto LABEL_13;
    }
  }
  v10 = *(_DWORD *)(v6 + 476);
  if ( !v10 )
  {
LABEL_18:
    v13 = (__int64 *)(v6 + 120);
    if ( !*(_QWORD *)(v6 + 120) )
    {
      v14 = 0;
LABEL_20:
      v9 = CommonBuffer_Create(v6, v14, v13);
      if ( v9 < 0 )
        goto LABEL_13;
      goto LABEL_21;
    }
    goto LABEL_21;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
        1332);
      v9 = -1073741630;
      goto LABEL_13;
    }
    goto LABEL_18;
  }
  v13 = (__int64 *)(v6 + 120);
  if ( !*(_QWORD *)(v6 + 120) )
  {
    v14 = 1;
    goto LABEL_20;
  }
LABEL_21:
  v9 = Interrupter_PrepareHardware(*(_QWORD *)(v6 + 128), a2, a3);
  if ( v9 >= 0 )
  {
    v9 = XilDeviceSlot_PrepareHardware(*(_QWORD *)(v6 + 136));
    if ( v9 >= 0 )
    {
      v9 = Command_PrepareHardware(*(_QWORD *)(v6 + 144));
      if ( v9 >= 0 )
      {
        v9 = RootHub_PrepareHardware(*(_QWORD *)(v6 + 152));
LABEL_25:
        if ( v9 >= 0 )
          return (unsigned int)v9;
      }
    }
  }
LABEL_13:
  DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
  LODWORD(v15) = v9;
  WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), 1u, 4u, 0x2Fu, (__int64)&Context.Logger + 4, v15);
  Controller_ReportFatalError(v6, 32, 4124, 0LL, 0LL, 0LL);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return (unsigned int)v9;
}
