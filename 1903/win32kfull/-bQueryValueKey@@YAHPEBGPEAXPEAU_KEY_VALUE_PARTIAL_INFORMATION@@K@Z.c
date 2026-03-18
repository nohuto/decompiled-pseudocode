/*
 * XREFs of ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00E7638
 * Callers:
 *     bInitStockFontsInternal @ 0x1C038226C (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C0382768 (bInitOneStockFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03827C4 (InitializeDefaultFamilyFonts.c)
 *     hfontInitDefaultGuiFont @ 0x1C03828F8 (hfontInitDefaultGuiFont.c)
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
