/*
 * XREFs of RtlDuplicateUnicodeString @ 0x180077A90
 * Callers:
 *     sub_18010FC5C @ 0x18010FC5C (sub_18010FC5C.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlValidateUnicodeString @ 0x180077BD0 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl RtlDuplicateUnicodeString(ULONG Flags, PUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r12
  USHORT Length; // di
  WCHAR *v7; // r14
  NTSTATUS result; // eax
  USHORT v9; // bx
  WCHAR *v10; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( (v5 & 1) != 0 && Length == 0xFFFE )
    return -1073741562;
  if ( (v5 & 1) != 0 )
    v9 = Length + 2;
  else
    v9 = Length;
  if ( (v5 & 2) == 0 && !Length )
    v9 = 0;
  if ( !v9 )
    goto LABEL_20;
  v10 = (WCHAR *)sub_18006D6B8(v9);
  v7 = v10;
  if ( v10 )
  {
    if ( Length )
      memmove(v10, StringIn->Buffer, Length);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v9;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  return -1073741801;
}
