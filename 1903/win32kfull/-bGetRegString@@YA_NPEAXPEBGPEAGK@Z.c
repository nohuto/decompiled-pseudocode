/*
 * XREFs of ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00E71A8
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00E6F48 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 * Callees:
 *     memmove @ 0x1C0166500 (memmove.c)
 */

char __fastcall bGetRegString(HANDLE KeyHandle, const unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int64 v5; // rcx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = 260;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, a3, Length, &Length) < 0 )
    return 0;
  if ( *((_DWORD *)a3 + 1) != 1 )
    return 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( (v5 & 1) != 0 || (unsigned int)v5 < 2 || a3[(v5 >> 1) + 5] )
    return 0;
  memmove(a3, a3 + 6, (unsigned int)v5);
  return 1;
}
