/*
 * XREFs of LdrpGetRcConfig @ 0x180018940
 * Callers:
 *     LdrpResReportResourceAccessInternal @ 0x18000A590 (LdrpResReportResourceAccessInternal.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800173F0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrIsResItemExist @ 0x180018610 (LdrIsResItemExist.c)
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180059CD4 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D030 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x18007D284 (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     LdrpGetFromMUIMemCache @ 0x18001ABAC (LdrpGetFromMUIMemCache.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F014 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180059490 (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int v10; // eax
  _DWORD *v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-40h] BYREF

  v4 = -1;
  v11 = 0LL;
  if ( !a4 )
    goto LABEL_5;
  v7 = LdrpGetFromMUIMemCache(BaseOfImage);
  v11 = (_DWORD *)v7;
  v8 = (_DWORD *)v7;
  if ( v7 != -1 )
  {
    if ( v7 )
      return v8;
LABEL_5:
    v13[1] = 1LL;
    v13[0] = L"MUI";
    v13[2] = 0LL;
    v10 = LdrpSearchResourceSection_U((_DWORD)BaseOfImage, (unsigned int)v13, 3, 33554480, (__int64)&v12);
    if ( v10 >= 0 )
    {
      v10 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
      if ( v10 >= 0 )
      {
        v8 = v11;
        if ( *v11 == -20054323 )
          goto LABEL_8;
        v10 = -1073741701;
      }
    }
    v8 = 0LL;
LABEL_8:
    if ( a3 )
    {
      if ( v8 )
        v4 = (int)v8;
      LdrpSetAlternateResourceModuleHandle((_DWORD)BaseOfImage, 0, 0, v4, 0, 2, v10, 0LL);
    }
    return v8;
  }
  return 0LL;
}
