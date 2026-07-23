/*
 * XREFs of AdtpBuildUserAccountControlString @ 0x1408F188C
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall AdtpBuildUserAccountControlString(
        ULONG Value,
        ULONG a2,
        UNICODE_STRING *a3,
        _BYTE *a4,
        PUNICODE_STRING Destination,
        _BYTE *a6,
        PUNICODE_STRING DestinationString,
        _BYTE *a8)
{
  unsigned int v8; // ebx
  int v12; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v14; // rax
  ULONG v15; // r15d
  ULONG v16; // ebp
  int v17; // ecx
  int v18; // eax
  unsigned __int16 v19; // di
  wchar_t *v20; // rax
  unsigned int v21; // esi
  int v22; // edi
  UNICODE_STRING String; // [rsp+20h] [rbp-78h] BYREF
  ULONG Valuea; // [rsp+30h] [rbp-68h]
  _BYTE *v26; // [rsp+38h] [rbp-60h]
  char v27; // [rsp+40h] [rbp-58h] BYREF

  v8 = 0;
  *a4 = 0;
  *a6 = 0;
  v12 = 0;
  *a8 = 0;
  v26 = a6;
  *(_DWORD *)&a3->Length = 1441792;
  Valuea = a2;
  String.Buffer = (wchar_t *)&v27;
  *(_DWORD *)&String.Length = 1310720;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x6B416553u);
  a3->Buffer = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *a4 = 1;
  *(_DWORD *)&Destination->Length = 1441792;
  v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x6B416553u);
  Destination->Buffer = v14;
  if ( !v14 )
    return (unsigned int)-1073741801;
  *v26 = 1;
  RtlAppendUnicodeToString(a3, L"0x");
  RtlIntegerToUnicodeString(Value, 0x10u, &String);
  RtlAppendUnicodeStringToString(a3, &String);
  RtlAppendUnicodeToString(Destination, L"0x");
  v15 = Valuea;
  RtlIntegerToUnicodeString(Valuea, 0x10u, &String);
  RtlAppendUnicodeStringToString(Destination, &String);
  v16 = v15 ^ Value;
  if ( !v16 )
  {
    RtlInitUnicodeString(DestinationString, L"-");
    return v8;
  }
  v17 = 1;
  do
  {
    v18 = v12++;
    if ( (v17 & v16) == 0 )
      v12 = v18;
    v17 *= 2;
  }
  while ( v17 );
  v19 = 32 * v12 + 2;
  DestinationString->Length = 0;
  DestinationString->MaximumLength = v19;
  v20 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v19, 0x6B416553u);
  DestinationString->Buffer = v20;
  if ( v20 )
  {
    *a8 = 1;
    v21 = 0;
    v22 = 1;
    do
    {
      if ( !v22 )
        break;
      if ( (v22 & v16) != 0 && RtlIntegerToUnicodeString(v21 + ((v15 & v22) != 0 ? 2080 : 2048), 0xAu, &String) >= 0 )
      {
        RtlAppendUnicodeToString(DestinationString, L"\r\n\t\t%%");
        RtlAppendUnicodeStringToString(DestinationString, &String);
      }
      ++v21;
      v22 *= 2;
    }
    while ( v21 < 0x20 );
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
