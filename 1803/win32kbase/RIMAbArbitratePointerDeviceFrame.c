/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0100AF4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C00E6DD8 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD **v3; // r14
  unsigned int v6; // edi
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  int v10; // edx

  v2 = *(_QWORD *)(a2 + 480);
  v3 = (_QWORD **)(a1 + 432);
  v6 = 1;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x1Cu,
    (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
  if ( gDeviceArbitrationType )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired(a1, v7);
    rimAbUpdateDeadzonesAndResurrectContacts(a1, a2);
    v8 = *v3;
    while ( v8 != v3 )
    {
      v9 = v8 - 1;
      v8 = (_QWORD *)*v8;
      if ( *v9 != v2 )
        v6 &= rimAbSuppressLowerRankActivityForFrame(a1, *v9, v2);
    }
    rimAbSuppressLowerRankActivityInFrame(a1, v2);
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      20,
      30,
      (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
      v6);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x1Du,
      (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
  }
  return v6;
}
