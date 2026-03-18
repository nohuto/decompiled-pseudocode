/*
 * XREFs of XilEndpoint_Create @ 0x1C0016FD0
 * Callers:
 *     Endpoint_Create @ 0x1C0064D10 (Endpoint_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0017098 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_FreeResources @ 0x1C0017348 (XilEndpoint_FreeResources.c)
 */

__int64 __fastcall XilEndpoint_Create(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  char v4; // al
  int SecureObject; // edi

  v1 = a1 + 1312;
  *(_QWORD *)(a1 + 1344) = a1;
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 540LL);
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 1) <= 1 )
    {
      *(_BYTE *)(a1 + 1336) = 1;
      goto LABEL_7;
    }
    Debug_FreAssertMsg(
      (__int64)"Unknown DMA Mode",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
      300);
    v4 = *(_BYTE *)(v1 + 24);
  }
  else
  {
    *(_BYTE *)(a1 + 1336) = 0;
    v4 = 0;
  }
  if ( !v4 )
  {
    *(_QWORD *)v1 = a1;
    *(_BYTE *)(v1 + 8) = 0;
    SecureObject = 0;
    goto LABEL_11;
  }
LABEL_7:
  SecureObject = XilEndpoint_CreateSecureObject(v1);
  if ( SecureObject >= 0 )
  {
    *(_BYTE *)(v1 + 16) = *(_BYTE *)(v1 + 24);
    *(_QWORD *)(v1 + 8) = a1;
    return 0;
  }
  Debug_FreAssertMsg(
    (__int64)"XilEndpoint_CreateSecureObject failed",
    0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
    314);
LABEL_11:
  if ( SecureObject < 0 )
    XilEndpoint_FreeResources(v1);
  return (unsigned int)SecureObject;
}
