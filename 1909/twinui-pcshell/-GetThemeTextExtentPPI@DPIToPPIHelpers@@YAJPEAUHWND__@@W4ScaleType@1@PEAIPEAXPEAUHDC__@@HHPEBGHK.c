/*
 * XREFs of ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x180438F30
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x180436980 (s_DrawThemeTextPPIAware.c)
 *     s_OnMeasureItem @ 0x1804378F0 (s_OnMeasureItem.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x180438DDC (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 */

HRESULT __fastcall DPIToPPIHelpers::GetThemeTextExtentPPI(
        __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        HDC a5,
        __int64 a6,
        int a7,
        const WCHAR *a8,
        int a9,
        int a10,
        __int64 a11,
        struct tagRECT *a12,
        struct tagRECT *a13)
{
  int v14; // ebx
  HRESULT result; // eax
  __int64 v19; // [rsp+28h] [rbp-E0h]
  DTTOPTS v20; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int128 v21; // [rsp+C0h] [rbp-48h] BYREF

  v14 = 0;
  v21 = 0uLL;
  if ( a12 )
    v21 = (unsigned __int128)*a12;
  memset_0(&v20, 0, sizeof(v20));
  v20.dwSize = 72;
  if ( a11 )
    v14 = *(_DWORD *)(a11 + 4);
  v20.dwFlags = v14 | 0x200;
  result = DPIToPPIHelpers::DrawThemeTextExPPI(a1, a2, a3, a4, a5, v19, a7, a8, a9, a10 | 0x400, (LPRECT)&v21, &v20);
  *a13 = (struct tagRECT)v21;
  return result;
}
