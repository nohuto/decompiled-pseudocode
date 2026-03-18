/*
 * XREFs of UsbDevice_TransferEventHandler @ 0x1C003C24C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Endpoint_TransferEventHandler @ 0x1C001B8E8 (Endpoint_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D740 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqq @ 0x1C003D808 (WPP_RECORDER_SF_ddqq.c)
 */

void __fastcall UsbDevice_TransferEventHandler(__int64 a1, __int64 a2, char a3, int a4)
{
  __m128i **v7; // rdx
  int v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+30h] [rbp-28h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      *(unsigned __int8 *)(a2 + 15),
      HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
      a4);
  v7 = *(__m128i ***)(a1 + 8LL * (HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F) + 168);
  if ( v7 )
  {
    Endpoint_TransferEventHandler(a2, v7, a3);
  }
  else if ( (*(_BYTE *)a2 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
    v8 = *(unsigned __int8 *)(a2 + 15);
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      3u,
      0xCu,
      0x43u,
      (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
      v8,
      v9,
      a2);
  }
}
