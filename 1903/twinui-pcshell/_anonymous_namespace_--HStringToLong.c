/*
 * XREFs of _anonymous_namespace_::HStringToLong @ 0x1801AD7D4
 * Callers:
 *     _anonymous_namespace_::HStringToHWND @ 0x1801AD79C (_anonymous_namespace_--HStringToHWND.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleDecoderEntry @ 0x1801ADA34 (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleDecoderEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::HStringToLong(HSTRING *a1, int *a2)
{
  HSTRING v2; // rcx
  const wchar_t *StringRawBuffer; // rax
  int v5; // eax
  UINT32 length; // [rsp+30h] [rbp+8h] BYREF
  wchar_t *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1;
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v2, &length);
  if ( !length )
    return 0;
  if ( !StringRawBuffer )
    return 0;
  EndPtr = 0LL;
  v5 = wcstol(StringRawBuffer, &EndPtr, 10);
  if ( *EndPtr )
    return 0;
  *a2 = v5;
  return 1;
}
