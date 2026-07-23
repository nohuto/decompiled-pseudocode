/*
 * XREFs of PiDmInitializeComparisonObject @ 0x140599AE8
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x1405990E4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x140599A58 (PiDmLookupObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F2D80 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x140599BE0 (RtlHashUnicodeString.c)
 */

NTSTATUS __fastcall PiDmInitializeComparisonObject(wchar_t *a1, int a2, __int64 a3)
{
  wchar_t *v3; // r9
  NTSTATUS result; // eax
  __int64 v7; // rdx
  wchar_t *v8; // rax
  __int16 v9; // cx
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // dx
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)(a3 + 28) = a2;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  result = 0;
  if ( !a1 )
    goto LABEL_15;
  v7 = 0x7FFFLL;
  v8 = a1;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  result = v7 == 0 ? 0xC000000D : 0;
  v9 = v7 ? 0x7FFF - v7 : 0;
  if ( v7 )
  {
    Length = 2 * v9;
    String.Buffer = a1;
    String.Length = Length;
    v3 = a1;
    MaximumLength = Length + 2;
    String.MaximumLength = Length + 2;
  }
  else
  {
LABEL_15:
    MaximumLength = String.MaximumLength;
    Length = String.Length;
  }
  if ( result >= 0 )
  {
    if ( a2 == 3 )
    {
      if ( Length <= 8u )
        return -1073741772;
      String.Length = Length - 8;
      String.Buffer = v3 + 4;
      String.MaximumLength = MaximumLength - 8;
    }
    return RtlHashUnicodeString(&String, 1u, 0, (PULONG)(a3 + 24));
  }
  return result;
}
