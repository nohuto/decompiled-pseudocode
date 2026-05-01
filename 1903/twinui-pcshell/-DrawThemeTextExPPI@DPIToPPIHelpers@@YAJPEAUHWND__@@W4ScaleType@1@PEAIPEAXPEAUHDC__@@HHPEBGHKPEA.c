/*
 * XREFs of ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x18041973C
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x1804172E0 (s_DrawThemeTextPPIAware.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x180419890 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2ae8870d6bc816a04ba0e39f1c502364___ @ 0x1804194A0 (DPIToPPIHelpers--DrawThemeTextExLambda__lambda_2ae8870d6bc816a04ba0e39f1c502364___.c)
 */

HRESULT __fastcall DPIToPPIHelpers::DrawThemeTextExPPI(
        __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        HDC hdc,
        __int64 a6,
        int a7,
        LPCWSTR a8,
        int a9,
        DWORD a10,
        LPRECT a11,
        DTTOPTS *a12)
{
  HDC v12; // rdi
  const WCHAR *v13; // r14
  struct tagRECT *v14; // r15
  DTTOPTS *v16; // r12
  HGDIOBJ CurrentObject; // rbx
  __int64 v19; // r8
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A8h]
  __int128 v22; // [rsp+70h] [rbp-98h]
  __int64 *v23; // [rsp+80h] [rbp-88h]
  __int64 v24[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v25; // [rsp+98h] [rbp-70h]
  __int64 *v26; // [rsp+A8h] [rbp-60h]
  _DWORD pv[24]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+168h] [rbp+60h] BYREF
  int v29; // [rsp+170h] [rbp+68h] BYREF
  __int64 v30; // [rsp+178h] [rbp+70h] BYREF

  v30 = a3;
  v29 = a2;
  v28 = a1;
  v12 = hdc;
  v13 = a8;
  v14 = a11;
  v16 = a12;
  CurrentObject = GetCurrentObject(hdc, 6u);
  if ( !CurrentObject )
    return -2147024882;
  memset_0(pv, 0, 0x5CuLL);
  if ( GetObjectW(CurrentObject, 92, pv) <= 0 )
    return -2147467259;
  v20 = pv[0];
  *(_QWORD *)&v21 = &v29;
  *((_QWORD *)&v21 + 1) = &v20;
  *(_QWORD *)&v22 = pv;
  *((_QWORD *)&v22 + 1) = &v28;
  v23 = &v30;
  *(_OWORD *)v24 = v21;
  v25 = v22;
  v26 = &v30;
  return DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2ae8870d6bc816a04ba0e39f1c502364___(
           a4,
           v12,
           v19,
           a7,
           v13,
           a9,
           a10,
           v14,
           v16,
           (LPARAM)v24);
}
