/*
 * XREFs of XilUsbDevice_Create @ 0x1C00393D8
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0069E40 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00394D8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_FreeResources @ 0x1C00396C8 (XilUsbDevice_FreeResources.c)
 *     XilCoreUsbDevice_Create @ 0x1C004898C (XilCoreUsbDevice_Create.c)
 */

__int64 __fastcall XilUsbDevice_Create(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rsi
  int SecureObject; // edi
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // r9
  _BYTE *v10; // r8

  v2 = (_BYTE *)(a1 + 608);
  v3 = a2;
  *(_QWORD *)(a1 + 664) = a1;
  v5 = *(_QWORD *)(a1 + 8);
  LOBYTE(a2) = *(_BYTE *)(v5 + 537);
  *(_BYTE *)(a1 + 657) = a2;
  if ( (_BYTE)a2 )
  {
    SecureObject = XilUsbDevice_CreateSecureObject(a1 + 608, v3);
    if ( SecureObject < 0 )
    {
LABEL_13:
      XilUsbDevice_FreeResources(v2);
      return (unsigned int)SecureObject;
    }
    v7 = *(_DWORD *)(v5 + 540);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = 3 - (unsigned int)(v2[48] != 0);
          v2[50] = v2[48] == 0;
        }
        else
        {
          Debug_FreAssertMsg(
            (__int64)"Unexpected DMA Mode",
            0,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
            264);
          v9 = 1LL;
        }
      }
      else
      {
        v2[50] = 0;
        v9 = 2LL;
      }
    }
    else
    {
      v9 = 1LL;
      v2[50] = 1;
    }
    LOBYTE(a2) = v2[49];
    v10 = v2 + 8;
  }
  else
  {
    v9 = 1LL;
    v10 = (_BYTE *)(a1 + 608);
    *(_BYTE *)(a1 + 658) = 1;
  }
  SecureObject = XilCoreUsbDevice_Create(a1, a2, v10, v9);
  if ( SecureObject < 0 )
    goto LABEL_13;
  return (unsigned int)SecureObject;
}
