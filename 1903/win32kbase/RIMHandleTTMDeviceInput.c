/*
 * XREFs of RIMHandleTTMDeviceInput @ 0x1C014D638
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     RIMIsInputSuppressed @ 0x1C014D6DC (RIMIsInputSuppressed.c)
 */

__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1)
{
  __int64 v1; // r9
  int v2; // eax
  __int64 v3; // r9

  if ( gbTtmEnabled
    && !*(_DWORD *)(a1 + 1296)
    && (*(_DWORD *)(a1 + 200) & 0x40) == 0
    && !(unsigned int)RIMIsInputSuppressed(a1) )
  {
    v2 = RimDeviceTypeToRimInputType(v1, *(unsigned __int8 *)(v1 + 48));
    TtmNotifyDeviceInput(2LL, v3, (v2 & gWakeOnDeviceTypes) != 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D((_DWORD)gRimLog, 4, 1, 15, (__int64)&WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids, 0);
  return 0LL;
}
