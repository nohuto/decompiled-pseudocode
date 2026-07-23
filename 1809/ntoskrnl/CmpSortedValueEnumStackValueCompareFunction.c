/*
 * XREFs of CmpSortedValueEnumStackValueCompareFunction @ 0x140801D00
 * Callers:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140801848 (CmpSortedValueEnumStackAdvanceInternal.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x1407FA9AC (CmpCompareTwoCompressedNames.c)
 */

LONG __fastcall CmpSortedValueEnumStackValueCompareFunction(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int16 v4; // r10
  wchar_t *v5; // rcx
  unsigned __int16 v6; // dx
  __int16 v7; // r11
  __int16 v8; // r11
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = *(_WORD *)(*a1 + 2);
  v5 = (wchar_t *)(*a1 + 20);
  v6 = *(_WORD *)(*a2 + 2);
  String2.Buffer = (wchar_t *)(v3 + 20);
  String1.Buffer = v5;
  String1.Length = v4;
  String1.MaximumLength = v4;
  v7 = *(_WORD *)(v2 + 16);
  String2.Length = v6;
  String2.MaximumLength = v6;
  v8 = v7 & 1;
  if ( v8 )
  {
    if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
      return CmpCompareTwoCompressedNames((unsigned __int8 *)v5, v4, (unsigned __int8 *)(v3 + 20), v6);
  }
  else if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
  {
    return CmpCompareCompressedName((__int64)&String1, (unsigned __int8 *)(v3 + 20), v6, 0);
  }
  if ( v8 )
    return -(int)CmpCompareCompressedName((__int64)&String2, (unsigned __int8 *)v5, v4, 0);
  else
    return RtlCompareUnicodeString(&String1, &String2, 1u);
}
