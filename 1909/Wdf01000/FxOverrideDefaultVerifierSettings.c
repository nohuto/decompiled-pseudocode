/*
 * XREFs of FxOverrideDefaultVerifierSettings @ 0x1C0059FE0
 * Callers:
 *     FxRegistrySettingsInitialize @ 0x1C005A044 (FxRegistrySettingsInitialize.c)
 * Callees:
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0061E50 (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall FxOverrideDefaultVerifierSettings(void *Key, wchar_t *Name, bool *OverrideValue)
{
  _UNICODE_STRING valueName; // [rsp+20h] [rbp-18h] BYREF
  unsigned int value; // [rsp+58h] [rbp+20h] BYREF

  value = 0;
  *(_QWORD *)&valueName.Length = 0LL;
  valueName.Buffer = 0LL;
  RtlInitUnicodeString(&valueName, Name);
  if ( CUmdfSvcConfig::_QueryULong(Key, &valueName, &value) >= 0 )
    *OverrideValue = value != 0;
}
