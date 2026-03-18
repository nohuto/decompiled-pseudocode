/*
 * XREFs of WCSToMBEx @ 0x1C0053808
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0052E24 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     SfnIMECONTROL @ 0x1C01D9400 (SfnIMECONTROL.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00DE960 (ConvertToAndFromWideChar.c)
 */

__int64 __fastcall WCSToMBEx(unsigned __int16 a1, const WCHAR *a2, int a3, PCHAR *a4, ULONG BytesInMultiByteString)
{
  int v5; // eax
  __int64 BytesInUnicodeString; // r8
  NTSTATUS v7; // eax
  __int64 result; // rax
  __int64 v9; // rax

  v5 = a3;
  if ( !BytesInMultiByteString || !a3 || !a2 )
    return 0LL;
  if ( a3 == -1 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v5 = v9 + 1;
  }
  else if ( a3 < -1 )
  {
    return 0LL;
  }
  if ( (BytesInMultiByteString & 0x80000000) != 0 )
    return 0LL;
  BytesInUnicodeString = (unsigned int)(2 * v5);
  if ( a1 == NlsAnsiCodePage || !a1 )
  {
    v7 = RtlUnicodeToMultiByteN(*a4, BytesInMultiByteString, &BytesInMultiByteString, a2, BytesInUnicodeString);
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
      return BytesInMultiByteString;
    return 0LL;
  }
  result = ConvertToAndFromWideChar(a1, a2, BytesInUnicodeString, *a4, BytesInMultiByteString, 0);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
