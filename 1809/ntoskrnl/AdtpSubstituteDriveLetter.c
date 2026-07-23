/*
 * XREFs of AdtpSubstituteDriveLetter @ 0x14074EC14
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     AdtpLookupDriveLetter @ 0x14074EC80 (AdtpLookupDriveLetter.c)
 */

void *__fastcall AdtpSubstituteDriveLetter(UNICODE_STRING *a1)
{
  void *result; // rax
  wchar_t *Buffer; // r9
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // [rsp+38h] [rbp+10h]
  wchar_t v6; // [rsp+40h] [rbp+18h]

  result = (void *)AdtpLookupDriveLetter(a1);
  if ( (_BYTE)result )
  {
    Buffer = a1->Buffer;
    v4 = a1->Length - v5;
    *Buffer = v6;
    Buffer[1] = 58;
    result = memmove(Buffer + 2, (char *)Buffer + v5, v4);
    a1->Length = v4 + 4;
  }
  return result;
}
