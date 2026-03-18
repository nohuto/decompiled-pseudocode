/*
 * XREFs of ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C0141038
 * Callers:
 *     bInitStockFontsInternal @ 0x1C0380404 (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C0380900 (bInitOneStockFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C038095C (InitializeDefaultFamilyFonts.c)
 *     hfontInitDefaultGuiFont @ 0x1C0380A90 (hfontInitDefaultGuiFont.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bQueryValueKey(PCWSTR SourceString, HANDLE KeyHandle, PVOID KeyValueInformation, ULONG Length)
{
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, SourceString);
  return ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, Length, &ResultLength) >= 0;
}
