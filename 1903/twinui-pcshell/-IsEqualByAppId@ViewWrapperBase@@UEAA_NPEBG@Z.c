/*
 * XREFs of ?IsEqualByAppId@ViewWrapperBase@@UEAA_NPEBG@Z @ 0x180298700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ViewWrapperBase::IsEqualByAppId(HSTRING *this, const unsigned __int16 *a2)
{
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax

  StringLen = WindowsGetStringLen(this[18]);
  StringRawBuffer = WindowsGetStringRawBuffer(this[18], 0LL);
  return CompareStringOrdinal(StringRawBuffer, StringLen, a2, -1, 1) == 2;
}
