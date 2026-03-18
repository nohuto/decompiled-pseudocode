/*
 * XREFs of GetKbdLangSwitch @ 0x1C013CADC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  int v2; // [rsp+48h] [rbp+10h]
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h] BYREF

  FastGetProfileIntW(a1, 25LL, L"Hotkey");
  LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 0;
  if ( v2 == 4 && ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 && (DefaultLocaleId & 0x3FF) == 0x1E )
    LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 1;
  return 1LL;
}
