/*
 * XREFs of MultiByteToWideChar_0 @ 0x180088683
 * Callers:
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1801DE128 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall MultiByteToWideChar_0(
        UINT CodePage,
        DWORD dwFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpWideCharStr,
        int cchWideChar)
{
  return MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}
