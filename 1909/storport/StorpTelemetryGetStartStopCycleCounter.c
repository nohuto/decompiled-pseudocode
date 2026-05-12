/*
 * XREFs of StorpTelemetryGetStartStopCycleCounter @ 0x1C0023D70
 * Callers:
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C0023EA0 (StorpTelemetrySendUnitScsiDiagnostics.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C001BBE0 (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall StorpTelemetryGetStartStopCycleCounter(__int64 a1, __int16 a2, __int64 a3)
{
  NTSTATUS result; // eax

  switch ( a2 )
  {
    case 1:
      if ( *(_BYTE *)(a1 + 3) == 6 )
        return RtlStringCchPrintfW(
                 (NTSTRSAFE_PWSTR)(a3 + 2),
                 0x20uLL,
                 L"Year: %c%c%c%c Week: %c%c",
                 *(unsigned __int8 *)(a1 + 4),
                 *(unsigned __int8 *)(a1 + 5),
                 *(unsigned __int8 *)(a1 + 6),
                 *(unsigned __int8 *)(a1 + 7),
                 *(unsigned __int8 *)(a1 + 8),
                 *(unsigned __int8 *)(a1 + 9));
      break;
    case 3:
      if ( *(_BYTE *)(a1 + 3) == 4 )
      {
        result = _byteswap_ulong(*(_DWORD *)(a1 + 4));
        *(_DWORD *)(a3 + 72) = result;
      }
      break;
    case 4:
      if ( *(_BYTE *)(a1 + 3) == 4 )
      {
        result = _byteswap_ulong(*(_DWORD *)(a1 + 4));
        *(_DWORD *)(a3 + 68) = result;
      }
      break;
    case 5:
      if ( *(_BYTE *)(a1 + 3) == 4 )
      {
        result = _byteswap_ulong(*(_DWORD *)(a1 + 4));
        *(_DWORD *)(a3 + 80) = result;
      }
      break;
    default:
      if ( a2 == 6 && *(_BYTE *)(a1 + 3) == 4 )
      {
        result = _byteswap_ulong(*(_DWORD *)(a1 + 4));
        *(_DWORD *)(a3 + 76) = result;
      }
      break;
  }
  return result;
}
