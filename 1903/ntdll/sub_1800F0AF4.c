/*
 * XREFs of sub_1800F0AF4 @ 0x1800F0AF4
 * Callers:
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     RtlQueryPackageIdentity @ 0x180069C40 (RtlQueryPackageIdentity.c)
 *     RtlQueryPackageClaims @ 0x180069D00 (RtlQueryPackageClaims.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x18008E310 (_wcsnicmp.c)
 */

__int64 __fastcall sub_1800F0AF4(unsigned __int16 *a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned __int64 v4; // rdx
  _WORD *i; // rcx
  const wchar_t *v6; // r14
  unsigned int v7; // edi
  size_t v8; // r15
  const wchar_t **v9; // rsi
  const wchar_t *v10; // r12
  __int64 v11; // rax
  _PS_PKG_CLAIM PkgClaim; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR PackageSize; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v15[6]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR PackageFullName[128]; // [rsp+80h] [rbp-80h] BYREF

  v15[0] = L"svchost.exe";
  v2 = 0;
  v15[1] = L"runtimebroker.exe";
  v15[2] = L"csrss.exe";
  v15[3] = L"smss.exe";
  v15[4] = L"services.exe";
  v15[5] = L"lsass.exe";
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    goto LABEL_22;
  if ( (NtCurrentPeb()->BitField & 0x10) == 0 )
  {
    if ( !a1 )
      return v2;
    v3 = 0;
    v4 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v4 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v4; --i )
    {
      if ( *i == 92 )
      {
        if ( v3 )
        {
          v6 = i + 1;
          if ( i != (_WORD *)-2LL )
          {
            v7 = 0;
            v8 = v3;
            v9 = (const wchar_t **)v15;
            while ( 1 )
            {
              v10 = *v9;
              if ( !wcsnicmp(v6, *v9, v8) )
              {
                v11 = -1LL;
                do
                  ++v11;
                while ( v10[v11] );
                if ( v8 == v11 )
                  goto LABEL_22;
              }
              ++v7;
              ++v9;
              if ( v7 >= 6 )
                goto LABEL_20;
            }
          }
        }
        break;
      }
      ++v3;
    }
LABEL_20:
    PackageSize = 256LL;
    if ( RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, 0LL, 0LL, 0LL) < 0
      || wcsnicmp(PackageFullName, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
    {
      return v2;
    }
LABEL_22:
    dword_18016273C = 0;
    return 1;
  }
  if ( RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, 0LL) < 0
    || (PkgClaim.Flags & 0x8000) == 0 )
  {
    goto LABEL_22;
  }
  return v2;
}
