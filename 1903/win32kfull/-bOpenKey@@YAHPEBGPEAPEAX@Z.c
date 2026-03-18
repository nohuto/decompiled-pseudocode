/*
 * XREFs of ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00E7498
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00E6F48 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitStockFontsInternal @ 0x1C038226C (bInitStockFontsInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C03828F8 (hfontInitDefaultGuiFont.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

_BOOL8 __fastcall bOpenKey(PCWSTR SourceString, PHANDLE KeyHandle)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, 0, &ObjectAttributes) >= 0;
}
