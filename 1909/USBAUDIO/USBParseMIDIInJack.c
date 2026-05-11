/*
 * XREFs of USBParseMIDIInJack @ 0x1C002D7C0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C00289BC (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C002C614 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C002C9F4 (USBParseGetUnitString.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002D690 (USBParseGetMIDIJackStringFromDeviceID.c)
 */

__int64 __fastcall USBParseMIDIInJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v6; // rcx
  unsigned int PinIndexForStreamingTerminal; // ebx
  __int64 result; // rax
  const WCHAR *v9; // r8
  int v10; // ecx
  const WCHAR *v11; // [rsp+70h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v6, a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  result = USBParseGetUnitString(a1, a3, &v11);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    if ( !v11 && PinIndexForStreamingTerminal != -1 )
    {
      result = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v11);
      v9 = v11;
    }
    if ( (int)result >= 0 )
    {
      v10 = 2305;
      if ( a3[3] == 1 )
        v10 = 257;
      return BusApiBuildTerminalFunctionUnit(
               a1,
               (*(unsigned __int8 *)(a2 + 2) << 8) | (unsigned int)a3[4],
               0,
               0,
               0,
               0,
               0LL,
               v9,
               0LL,
               v10,
               2,
               PinIndexForStreamingTerminal);
    }
  }
  return result;
}
