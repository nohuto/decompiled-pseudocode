/*
 * XREFs of DwmSyncHitTestQuery @ 0x1C000E2A0
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0069C40 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C020489C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0017338 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall DwmSyncHitTestQuery(
        PVOID Object,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  signed int v13; // edi
  int v14; // eax
  _BYTE v16[688]; // [rsp+20h] [rbp-E0h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    v13 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v16, 0, sizeof(v16));
      *(_DWORD *)v16 = 6029364;
      *(_WORD *)&v16[4] = 0x8000;
      *(_QWORD *)&v16[64] = a5;
      *(_QWORD *)&v16[72] = a6;
      *(_DWORD *)&v16[80] = a7;
      *(_DWORD *)&v16[40] = 1073741849;
      *(_QWORD *)&v16[44] = a2;
      *(_DWORD *)&v16[52] = a3;
      *(_QWORD *)&v16[56] = a4;
      v14 = LpcRequestWaitReplyPortEx(Object, v16, v16);
      v13 = SyncLpcCheckNtStatus(v14, (struct _PORT_MESSAGE *)v16);
      if ( v13 >= 0 )
      {
        *a8 = *(_DWORD *)&v16[84];
        *a9 = *(_DWORD *)&v16[88];
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
