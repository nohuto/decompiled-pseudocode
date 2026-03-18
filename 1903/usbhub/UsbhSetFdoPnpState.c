/*
 * XREFs of UsbhSetFdoPnpState @ 0x1C001FA7C
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C001D380 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C001DCF0 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C001F6A0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0052200 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C00522A0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0052440 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C00525A4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwLogHubInformation @ 0x1C0020788 (UsbhEtwLogHubInformation.c)
 */

unsigned __int64 __fastcall UsbhSetFdoPnpState(__int64 a1, int a2, int a3)
{
  _DWORD *v5; // rdi
  __int64 v6; // r9
  unsigned __int64 result; // rax
  void *v8; // rdx

  v5 = FdoExt(a1);
  v6 = ((unsigned __int8)v5[6] + 1) & 7;
  v5[6] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)v5 + v6 + 28) = a3;
  *(_DWORD *)((char *)v5 + v6 + 32) = v5[340];
  *(_DWORD *)((char *)v5 + v6 + 36) = a2;
  result = (unsigned int)v5[340];
  if ( a2 != (_DWORD)result )
  {
    if ( (_DWORD)result == 5 )
    {
      v8 = &USBHUB_ETW_EVENT_HUB_REMOVE;
    }
    else
    {
      if ( a2 != 5 )
        goto LABEL_4;
      v8 = &USBHUB_ETW_EVENT_HUB_START;
    }
    result = UsbhEtwLogHubInformation(v5, v8);
  }
LABEL_4:
  switch ( a2 )
  {
    case 1:
      result = (unsigned __int64)Usbh_FDO_WaitPnpAdd;
      break;
    case 2:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStart;
      break;
    case 3:
      *((_QWORD *)v5 + 171) = 0LL;
      goto LABEL_11;
    case 4:
      result = (unsigned __int64)Usbh_FDO_WaitPnpRemove;
      break;
    case 5:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStop;
      break;
    case 6:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStop_CB;
      break;
    case 7:
      result = (unsigned __int64)Usbh_FDO_WaitPnpRestart;
      break;
    default:
      goto LABEL_11;
  }
  *((_QWORD *)v5 + 171) = result;
LABEL_11:
  v5[340] = a2;
  return result;
}
