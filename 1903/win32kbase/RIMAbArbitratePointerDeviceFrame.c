/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C013C218
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C013EDA0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C014194C (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0155C04 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0155DF4 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01562B0 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C013B5F8 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C013B7D4 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013BB8C (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013BEAC (rimAbUpdateDeadzonesAndResurrectContacts.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD **v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // esi
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r8
  _QWORD *v11; // rbx
  __int64 *v12; // rax
  int v13; // edx

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      28,
      (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  v5 = (_QWORD **)((char *)a1 + 448);
  v6 = *(_QWORD *)(v3 + 480);
  v7 = 1;
  if ( !gDeviceArbitrationType )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v7;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 29, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
    goto LABEL_13;
  }
  rimAbRemoveGlobalPenDeadzoneIfExpired((__int64)a1, a2, a3);
  rimAbUpdateDeadzonesAndResurrectContacts((__int64)a1, v3, v9);
  v11 = *v5;
  while ( v11 != v5 )
  {
    v12 = v11 - 1;
    v11 = (_QWORD *)*v11;
    if ( *v12 != v6 )
      v7 &= rimAbSuppressLowerRankActivityForFrame(a1, *v12, v6);
  }
  rimAbSuppressLowerRankActivityInFrame((__int64)a1, v6, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v13, 1, 30, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids, v7);
LABEL_13:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        1,
        31,
        (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
    }
  }
  return v7;
}
