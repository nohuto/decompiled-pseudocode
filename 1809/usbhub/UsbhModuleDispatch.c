/*
 * XREFs of UsbhModuleDispatch @ 0x1C004FF7C
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C001C990 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C001E9E0 (Usbh_FDO_WaitPnpStart.c)
 *     DriverEntry @ 0x1C0028F14 (DriverEntry.c)
 *     UsbhDriverUnload @ 0x1C004F840 (UsbhDriverUnload.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0050520 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C00506C0 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C0050824 (Usbh_PnpRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhModuleDispatch(char a1, __int64 a2, _LIST_ENTRY *a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // esi
  unsigned int v7; // r12d
  unsigned int v11; // ebx
  int v12; // edi
  void (__fastcall **v13)(_LIST_ENTRY *, __int64); // rdx
  void (__fastcall *v14)(_LIST_ENTRY *, __int64); // rax
  __int64 (__fastcall *v15)(_LIST_ENTRY *, __int64); // rax
  __int64 v16; // rdx
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *v18)(_LIST_ENTRY *); // rax
  __int64 (__fastcall *v19)(_LIST_ENTRY *, __int64); // rax
  int v20; // eax
  int v21; // ecx

  v6 = 0;
  v7 = 0;
  v11 = a1 == 0 ? 9 : 0;
  do
  {
    v12 = 0;
    v13 = (void (__fastcall **)(_LIST_ENTRY *, __int64))((char *)&HubModule + 56 * v11);
    if ( !v13 )
      goto LABEL_26;
    switch ( a4 )
    {
      case 0:
        if ( !*v13 )
          goto LABEL_30;
        (*v13)(a3, a6);
LABEL_26:
        if ( a4 != 1 )
          goto LABEL_30;
        goto LABEL_27;
      case 1:
        v19 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64))v13[1];
        if ( v19 )
          v12 = v19(a3, a6);
LABEL_27:
        v20 = v12;
        if ( v12 >= 0 )
          v20 = v6;
        v6 = v20;
        goto LABEL_30;
      case 2:
        v14 = v13[2];
LABEL_11:
        if ( v14 )
          v14(a3, a6);
        goto LABEL_30;
      case 3:
        v15 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64))v13[3];
        if ( !v15 )
          goto LABEL_30;
        v16 = a5;
        Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
        break;
      case 4:
        v18 = (void (__fastcall *)(_LIST_ENTRY *))v13[4];
        if ( v18 )
          v18(WPP_MAIN_CB.Queue.ListEntry.Blink);
        goto LABEL_30;
      case 5:
        v15 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64))v13[5];
        if ( !v15 )
          goto LABEL_30;
        v16 = a6;
        Blink = a3;
        break;
      case 6:
        v14 = v13[6];
        goto LABEL_11;
      default:
        goto LABEL_26;
    }
    v12 = v15(Blink, v16);
    if ( v12 < 0 )
      break;
LABEL_30:
    ++v7;
    v21 = v11++ - 1;
    if ( !a1 )
      v11 = v21;
  }
  while ( v7 < 0xA );
  if ( a4 != 1 )
    return (unsigned int)v12;
  return v6;
}
