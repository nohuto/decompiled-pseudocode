/*
 * XREFs of RtlNormalizeString @ 0x18007D7F0
 * Callers:
 *     sub_18002B144 @ 0x18002B144 (sub_18002B144.c)
 * Callees:
 *     sub_18007D870 @ 0x18007D870 (sub_18007D870.c)
 *     sub_18007DC6C @ 0x18007DC6C (sub_18007DC6C.c)
 */

NTSTATUS __cdecl RtlNormalizeString(
        ULONG NormForm,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  int v5; // ebp
  int v7; // esi
  PLONG v8; // rbx
  NTSTATUS result; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = (int)DestinationString;
  v7 = (int)SourceString;
  if ( !SourceString )
    return -1073741811;
  if ( SourceStringLength < -1 )
    return -1073741811;
  if ( !NormForm )
    return -1073741811;
  v8 = DestinationStringLength;
  if ( *DestinationStringLength < 0 )
    return -1073741811;
  result = sub_18007DC6C(NormForm, &v10);
  if ( result >= 0 )
    return sub_18007D870(v10, v7, SourceStringLength, v5, (__int64)v8);
  return result;
}
