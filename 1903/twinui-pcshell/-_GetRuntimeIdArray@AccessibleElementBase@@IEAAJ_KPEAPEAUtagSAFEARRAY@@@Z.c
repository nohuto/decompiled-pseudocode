/*
 * XREFs of ?_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z @ 0x180376818
 * Callers:
 *     ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x180375B30 (-GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

__int64 __fastcall AccessibleElementBase::_GetRuntimeIdArray(
        AccessibleElementBase *this,
        __int64 a2,
        struct tagSAFEARRAY **a3)
{
  unsigned int v3; // ebx
  SAFEARRAY *v5; // rcx
  unsigned int v6; // eax
  HRESULT v7; // eax
  HRESULT v8; // edi
  LONG rgIndices; // [rsp+20h] [rbp-30h] BYREF
  SAFEARRAY *psa; // [rsp+28h] [rbp-28h]
  _DWORD v12[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v12[2] = a2;
  v3 = 0;
  *a3 = 0LL;
  v12[0] = 3;
  v12[1] = HIDWORD(a2);
  psa = SafeArrayCreateVector(3u, 0, 3u);
  v5 = psa;
  if ( psa )
  {
    rgIndices = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = SafeArrayPutElement(v5, &rgIndices, &v12[v6]);
      v8 = v7;
      if ( v7 < 0 )
        break;
      v6 = rgIndices + 1;
      rgIndices = v6;
      if ( v6 >= 3 )
      {
        *a3 = psa;
        return v3;
      }
      v5 = psa;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v7);
    v3 = v8;
    SafeArrayDestroy(psa);
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)0x8007000ELL);
  }
  return v3;
}
