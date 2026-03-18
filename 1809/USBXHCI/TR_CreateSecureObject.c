/*
 * XREFs of TR_CreateSecureObject @ 0x1C0023FEC
 * Callers:
 *     TR_Create @ 0x1C0061390 (TR_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000AA20 (CommonBuffer_AcquireShadowBuffer.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r15
  _DWORD *v4; // rdi
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h]
  __int64 v13; // [rsp+48h] [rbp-19h]
  _QWORD v14[8]; // [rsp+58h] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v2 + 473) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2004);
    v2 = *(_QWORD *)(a1 + 40);
  }
  v3 = *(_QWORD *)(v2 + 120);
  v4 = CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
  if ( v4 )
  {
    memset(v14, 0, sizeof(v14));
    v6 = *(_QWORD *)(a1 + 56);
    v14[3] = 0LL;
    LODWORD(v14[4]) = 39;
    if ( *(_BYTE *)(v6 + 1336) )
    {
      v7 = *(_QWORD *)(v6 + 1312);
    }
    else
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected code path hit",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        32);
      v7 = 0LL;
    }
    LODWORD(v14[6]) = *(_DWORD *)(a1 + 64);
    HIDWORD(v14[6]) = *(_DWORD *)(a1 + 20);
    v14[5] = v7;
    v8 = *(_QWORD *)(a1 + 40);
    LOBYTE(v14[7]) = (*(_QWORD *)(v8 + 272) & 0x4000000000000LL) != 0;
    v5 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v8 + 112), (unsigned int)v14, 64, (unsigned int)&v11, 24);
    if ( v5 < 0 )
      goto LABEL_16;
    if ( v11 >= 0 )
    {
      *(_QWORD *)(a1 + 288) = v12;
      *((_QWORD *)v4 + 3) = v13;
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v9 = *(_QWORD **)(a1 + 216);
      if ( *v9 != a1 + 208 )
        __fastfail(3u);
      *((_QWORD *)v4 + 1) = v9;
      *(_QWORD *)v4 = a1 + 208;
      *v9 = v4;
      *(_QWORD *)(a1 + 216) = v4;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    }
    else
    {
      v5 = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        0x18u,
        (__int64)&WPP_c0473ac1803d3d5f2d8c1e2b9467d5ec_Traceguids,
        v11);
      Debug_FreAssertMsg(
        (__int64)"TransferRingCreate Failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
        2061);
    }
    if ( v5 < 0 )
LABEL_16:
      CommonBuffer_ReleaseBuffer(v3, v4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
