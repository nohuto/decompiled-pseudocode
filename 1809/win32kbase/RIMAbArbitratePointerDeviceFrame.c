/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C011913C (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0129108 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01296D4 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C01106B8 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD **v3; // r14
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  _QWORD *v11; // rbx
  __int64 *v12; // rax

  v2 = *(_QWORD *)(a2 + 480);
  v3 = (_QWORD **)((char *)a1 + 448);
  v6 = 1;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x1Cu, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  if ( gDeviceArbitrationType )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired((__int64)a1, v7, v8);
    rimAbUpdateDeadzonesAndResurrectContacts((__int64)a1, a2, v9);
    v11 = *v3;
    while ( v11 != v3 )
    {
      v12 = v11 - 1;
      v11 = (_QWORD *)*v11;
      if ( *v12 != v2 )
        v6 &= rimAbSuppressLowerRankActivityForFrame(a1, *v12, v2);
    }
    rimAbSuppressLowerRankActivityInFrame((__int64)a1, v2, v10);
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x1Eu, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids, v6);
  }
  else
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x1Du, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  }
  return v6;
}
