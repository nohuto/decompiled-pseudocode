/*
 * XREFs of IopCheckIfNotNativeDriver @ 0x14085317C
 * Callers:
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140165948 (RtlStringCbCopyNW.c)
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     wcsstr @ 0x1401A28C0 (wcsstr.c)
 *     IopIsNotNativeDriverImage @ 0x14085381C (IopIsNotNativeDriverImage.c)
 */

char __fastcall IopCheckIfNotNativeDriver(int a1, __int64 a2)
{
  wchar_t *v2; // rbx
  _WORD *v4; // rbx

  v2 = *(wchar_t **)(a2 + 8);
  if ( a1 != -1073741772 )
    return IopIsNotNativeDriverImage(a2);
  if ( !v2 )
    return 0;
  while ( wcsnicmp(v2, L"\\System32\\drivers\\", 0x12uLL) )
  {
    v2 = wcsstr(v2 + 1, L"\\");
    if ( !v2 )
      return 0;
  }
  RtlStringCbCopyNW(
    v2 + 1,
    *(unsigned __int16 *)(a2 + 2) - (unsigned __int64)(unsigned __int16)((_WORD)v2 - *(_WORD *)(a2 + 8)),
    L"SysWow64",
    0x10uLL);
  v4 = v2 + 9;
  *v4 = 92;
  if ( v4 )
    return IopIsNotNativeDriverImage(a2);
  else
    return 0;
}
