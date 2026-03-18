/*
 * XREFs of FONTOBJ_pwszFontFilePaths @ 0x1C0263F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

LPWSTR __stdcall FONTOBJ_pwszFontFilePaths(FONTOBJ *pfo, ULONG *pcwc)
{
  WCHAR *v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  *pcwc = 0;
  v2 = 0LL;
  v6 = 0;
  if ( pfo )
  {
    v3 = **(_QWORD **)&pfo[1].ulStyleSize;
    if ( (*(_DWORD *)(v3 + 52) & 0x30) == 0 )
    {
      v2 = *(WCHAR **)(v3 + 24);
      *pcwc = *(_DWORD *)(v3 + 32);
    }
  }
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v2;
}
