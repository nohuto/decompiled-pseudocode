/*
 * XREFs of ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C0055AEC
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00558B0 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

char __fastcall bGetRegString(HANDLE KeyHandle, const unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int64 v6; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = 260;
  RtlInitUnicodeString(&ValueName, a2);
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, a3, Length, &Length) < 0 )
    return 0;
  if ( *((_DWORD *)a3 + 1) != 1 )
    return 0;
  v6 = *((unsigned int *)a3 + 2);
  if ( (v6 & 1) != 0 || (unsigned int)v6 < 2 || a3[(v6 >> 1) + 5] )
    return 0;
  memmove(a3, a3 + 6, (unsigned int)v6);
  return 1;
}
