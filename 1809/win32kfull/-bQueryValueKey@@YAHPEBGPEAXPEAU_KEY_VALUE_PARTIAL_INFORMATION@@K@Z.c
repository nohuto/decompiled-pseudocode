/*
 * XREFs of ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00C1F98
 * Callers:
 *     bInitStockFontsInternal @ 0x1C036D21C (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C036D724 (bInitOneStockFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C036D780 (InitializeDefaultFamilyFonts.c)
 *     hfontInitDefaultGuiFont @ 0x1C036D8B4 (hfontInitDefaultGuiFont.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bQueryValueKey(PCWSTR SourceString, HANDLE KeyHandle, PVOID KeyValueInformation, ULONG Length)
{
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           Length,
           &ResultLength) >= 0;
}
