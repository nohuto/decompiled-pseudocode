/*
 * XREFs of USBParseGetDatarangesAndModes @ 0x1C002D400
 * Callers:
 *     <none>
 * Callees:
 *     USBParseGetInterfaceIdforPin @ 0x1C002B034 (USBParseGetInterfaceIdforPin.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C002CA14 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002CE9C (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002D100 (USBParseGetMIDIStreamingDatarange.c)
 */

__int64 __fastcall USBParseGetDatarangesAndModes(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        GUID *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r12
  _DWORD *v12; // rsi
  _DWORD *v13; // r15
  __int64 v15; // rcx
  struct _USB_CONFIGURATION_DESCRIPTOR *v16; // rbp
  LONG InterfaceIdforPin; // ebx
  __int64 result; // rax

  v10 = a7;
  v12 = a8;
  v13 = a9;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v16 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v15 + 40);
  *a7 = 0;
  *v12 = 0;
  *v13 = 0;
  if ( a6 )
    *a6 = 232;
  InterfaceIdforPin = USBParseGetInterfaceIdforPin(v15, a2, &a8);
  if ( InterfaceIdforPin == -1 )
    return 3221225858LL;
  result = USBParseCountFormatsForAudioStreamingInterface(v16, InterfaceIdforPin, v10, v12, &a7);
  if ( (int)result >= 0 && a4 )
  {
    if ( (_DWORD)a7 == 2 )
    {
      result = USBParseGetAudioStreamingDataranges(a1, v16, InterfaceIdforPin, a3, (__int64)a4);
    }
    else if ( (_DWORD)a7 == 3 )
    {
      result = USBParseGetMIDIStreamingDatarange(a1, v16, (int)a8, InterfaceIdforPin, a3, a4);
    }
  }
  if ( *v12 )
  {
    *v13 = 1;
    if ( a5 )
      *a5 = AUDIO_SIGNALPROCESSINGMODE_RAW;
  }
  return result;
}
