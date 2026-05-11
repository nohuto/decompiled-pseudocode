/*
 * XREFs of USBType1AdjustPositionWithin1Ms @ 0x1C00035F0
 * Callers:
 *     USBType1RenderBytePosition @ 0x1C00036C0 (USBType1RenderBytePosition.c)
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C00023D4 (WPP_RECORDER_SF_ii.c)
 *     USBMidiInGetCurrentTime @ 0x1C0002CFC (USBMidiInGetCurrentTime.c)
 */

unsigned __int64 __fastcall USBType1AdjustPositionWithin1Ms(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  unsigned __int64 CurrentTime; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rbx

  v4 = *(_QWORD *)(a1 + 152);
  CurrentTime = USBMidiInGetCurrentTime();
  v10 = *(_QWORD *)(a3 + 8) + a2 * (unsigned int)(a4 - *(_DWORD *)a3);
  if ( CurrentTime < v10 )
    v10 = CurrentTime;
  v11 = (CurrentTime - v10) * (unsigned int)(*(_DWORD *)(v4 + 8) * *(_DWORD *)(a1 + 104)) / (1000 * a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (CurrentTime - v10) * (unsigned int)(*(_DWORD *)(v4 + 8) * *(_DWORD *)(a1 + 104)) % (1000 * a2),
      CurrentTime - v10,
      0xAu,
      (__int64)&WPP_3fddc3560b1a3736408b317f911f507a_Traceguids,
      v11,
      CurrentTime - v10);
  return v11;
}
