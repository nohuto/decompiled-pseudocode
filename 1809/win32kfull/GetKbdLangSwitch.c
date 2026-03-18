/*
 * XREFs of GetKbdLangSwitch @ 0x1C00BEDE0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h] BYREF

  FastGetProfileIntW(a1, 25LL, L"Hotkey", 1LL, &v2, 0);
  gbGraveKeyToggle = 0;
  if ( v2 == 4 && ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 && (DefaultLocaleId & 0x3FF) == 0x1E )
    gbGraveKeyToggle = 1;
  return 1LL;
}
