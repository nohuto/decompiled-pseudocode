/*
 * XREFs of EngMultiByteToWideChar @ 0x1C02616A0
 * Callers:
 *     <none>
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00F6504 (ConvertToAndFromWideChar.c)
 */

INT __stdcall EngMultiByteToWideChar(
        UINT CodePage,
        LPWSTR WideCharString,
        INT cjWideCharString,
        LPSTR MultiByteString,
        INT cjMultiByteString)
{
  return ConvertToAndFromWideChar(CodePage, WideCharString, cjWideCharString, MultiByteString, cjMultiByteString, 1);
}
