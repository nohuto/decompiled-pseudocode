/*
 * XREFs of AslPathSplit @ 0x14067F7B8
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x14067D760 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x1400F5114 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsrchr @ 0x140197A00 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathSplit(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR a4,
        int a5,
        NTSTRSAFE_PWSTR a6)
{
  unsigned int v8; // ebp
  wchar_t *v10; // rax
  STRSAFE_PCNZWCH v11; // rdi
  NTSTATUS v12; // ebx
  const wchar_t *v13; // r8
  wchar_t *v14; // rax
  const wchar_t *v15; // rbp
  size_t v16; // rdi
  int v18; // r8d
  const char *v19; // r9
  wchar_t pszDesta[264]; // [rsp+30h] [rbp-258h] BYREF

  *pszDest = 0;
  v8 = cchDest;
  pszDesta[0] = 0;
  *a6 = 0;
  *a4 = 0;
  v10 = wcsrchr(pszSrc, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = RtlStringCchCopyNW(pszDest, v8, pszSrc, v10 - pszSrc + 1);
    if ( v12 < 0 )
    {
      v18 = 1199;
LABEL_14:
      v19 = "RtlStringCchCopyNW failed [%x]";
      goto LABEL_15;
    }
  }
  else
  {
    v11 = pszSrc;
  }
  v13 = v11 + 1;
  if ( *v11 != 92 )
    v13 = v11;
  v12 = RtlStringCchCopyW(pszDesta, 0x105uLL, v13);
  if ( v12 < 0 )
  {
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 1219;
    goto LABEL_15;
  }
  v14 = wcsrchr(pszDesta, 0x2Eu);
  v15 = v14;
  if ( !v14 )
  {
    v12 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
    if ( v12 >= 0 )
      return 0;
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 1246;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"AslPathSplit", v18, (_DWORD)v19);
    return (unsigned int)v12;
  }
  v16 = v14 - pszDesta;
  v12 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v16);
  if ( v12 < 0 )
  {
    v18 = 1232;
    goto LABEL_14;
  }
  a4[v16] = 0;
  v12 = RtlStringCchCopyW(a6, 0x104uLL, v15);
  if ( v12 < 0 )
  {
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 1239;
    goto LABEL_15;
  }
  return 0;
}
