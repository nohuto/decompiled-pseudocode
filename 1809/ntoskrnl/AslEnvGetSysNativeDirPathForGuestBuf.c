/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x1408ED134
 * Callers:
 *     SdbpGetPathAppraiser @ 0x1408E9D10 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1408EB4D4 (AslPathCombine.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1408ED390 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        _WORD *a5)
{
  __int64 v8; // r8
  wchar_t *v9; // rdx
  wchar_t v10; // ax
  wchar_t *v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  wchar_t *v14; // rax
  int v15; // ebx
  __int64 v16; // rax
  wchar_t *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // r8
  wchar_t v21; // r9
  wchar_t *v22; // rax
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  *pszDest = 0;
  if ( a5 && *a5 != a4 )
  {
    memset(pszSrc, 0, sizeof(pszSrc));
    v8 = 64LL;
    v9 = pszSrc;
    do
    {
      if ( v8 == -2147483582 )
        break;
      v10 = *(wchar_t *)((char *)v9 + (char *)L"\\SystemRoot" - (char *)pszSrc);
      if ( !v10 )
        break;
      *v9++ = v10;
      --v8;
    }
    while ( v8 );
    v11 = v9 - 1;
    v12 = -2147483643;
    if ( v8 )
    {
      v11 = v9;
      v12 = 0;
    }
    *v11 = 0;
    if ( v8 )
    {
      v13 = 64LL;
      v14 = pszSrc;
      do
      {
        if ( !*v14 )
          break;
        ++v14;
        --v13;
      }
      while ( v13 );
      v15 = -1073741811;
      if ( v13 )
        v15 = 0;
      v16 = 64 - v13;
      if ( v13 )
      {
        v17 = &pszSrc[v16];
        v18 = 64 - v16;
        if ( 64 != v16 )
        {
          v19 = 2147483646LL;
          v20 = (char *)((char *)L"\\SysNative" - (char *)v17);
          do
          {
            if ( !v19 )
              break;
            v21 = *(wchar_t *)((char *)v17 + (_QWORD)v20);
            if ( !v21 )
              break;
            *v17 = v21;
            --v19;
            ++v17;
            --v18;
          }
          while ( v18 );
        }
        v22 = v17 - 1;
        v15 = -2147483643;
        if ( v18 )
        {
          v22 = v17;
          v15 = 0;
        }
        *v22 = 0;
      }
      if ( v15 >= 0 )
      {
LABEL_28:
        if ( a3 && *a3 )
        {
          v12 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
          if ( v12 < 0 )
            goto LABEL_33;
          return (unsigned int)v12;
        }
        v12 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
        if ( v12 >= 0 )
          return (unsigned int)v12;
LABEL_33:
        AslLogCallPrintf(1LL);
        return (unsigned int)v12;
      }
      AslLogCallPrintf(1LL);
      v12 = -1073741811;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    if ( v12 < 0 )
      goto LABEL_33;
    goto LABEL_28;
  }
  return AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)a5);
}
