/*
 * XREFs of XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0004CDC
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C003D3DC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilUsbDevice_QueryAttributesFromTrustlet(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  _UNKNOWN **v7; // rdx
  int v8; // r9d
  char v9; // cl
  _QWORD v11[5]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v12[9]; // [rsp+68h] [rbp-9h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v12, 0, sizeof(v12));
  PoolWithTag = *(_QWORD **)(a1 + 664);
  v4 = PoolWithTag[1];
  v5 = *(_QWORD *)(v4 + 112);
  if ( *(_BYTE *)(a1 + 657) )
  {
    if ( *(_BYTE *)(v4 + 537) && KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
        667LL);
    LOBYTE(v2) = v5 != 0;
    Debug_FreAssertMsg(
      "Secure channel must not be NULL",
      v2,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      668LL);
    v6 = *(_QWORD *)(a1 + 608);
    memset(v11, 0, 24);
    v11[3] = v6;
    v11[4] = 45LL;
    LODWORD(PoolWithTag) = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v11, 40, (unsigned int)v12, 72);
    if ( (int)PoolWithTag >= 0 )
    {
      LOBYTE(PoolWithTag) = v12[0];
      if ( SLODWORD(v12[0]) < 0 )
      {
        v7 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (char)PoolWithTag;
        v8 = 15;
        goto LABEL_8;
      }
      v9 = BYTE6(v12[0]);
      *(_WORD *)(a1 + 672) = WORD2(v12[0]);
      LOBYTE(PoolWithTag) = HIBYTE(v12[4]);
      *(_BYTE *)(a1 + 688) = HIBYTE(v12[4]);
      *(_BYTE *)(a1 + 674) = v9;
      if ( v9 )
      {
        PoolWithTag = *(_QWORD **)(a1 + 680);
        if ( PoolWithTag
          || (PoolWithTag = ExAllocatePoolWithTag(
                              *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                              0x20uLL,
                              0x49434858u),
              (*(_QWORD *)(a1 + 680) = PoolWithTag) != 0LL) )
        {
          *(_OWORD *)PoolWithTag = *(_OWORD *)((char *)v12 + 7);
          *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)((char *)&v12[2] + 7);
        }
      }
      if ( *(_BYTE *)(a1 + 674) )
      {
        PoolWithTag = *(_QWORD **)(a1 + 696);
        if ( PoolWithTag
          || (PoolWithTag = ExAllocatePoolWithTag(
                              *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                              0x20uLL,
                              0x49434858u),
              (*(_QWORD *)(a1 + 696) = PoolWithTag) != 0LL) )
        {
          *(_OWORD *)PoolWithTag = *(_OWORD *)&v12[5];
          *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)&v12[7];
        }
      }
    }
    else
    {
      v7 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 14;
LABEL_8:
        LOBYTE(v7) = 2;
        LOBYTE(PoolWithTag) = WPP_RECORDER_SF_d(
                                *(_QWORD *)(v4 + 72),
                                (_DWORD)v7,
                                12,
                                v8,
                                (__int64)&WPP_777d6bcc09283ade7749b3a182818bef_Traceguids,
                                (char)PoolWithTag);
      }
    }
  }
  return (char)PoolWithTag;
}
