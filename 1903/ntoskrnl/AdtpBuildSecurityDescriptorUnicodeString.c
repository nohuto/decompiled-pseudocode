/*
 * XREFs of AdtpBuildSecurityDescriptorUnicodeString @ 0x1405B2190
 * Callers:
 *     AdtpPackageParameters @ 0x140132AB8 (AdtpPackageParameters.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1405B20D4 (AdtpBuildSecurityDescriptorChangeString.c)
 * Callees:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140001010 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x140135BD8 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildSecurityDescriptorUnicodeString(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        char *a7)
{
  int v9; // eax
  void *v10; // r12
  NTSTATUS v11; // esi
  const WCHAR *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  PVOID PoolWithTag; // rdi
  char v19; // al
  __int16 v21; // bx
  void *Src; // [rsp+30h] [rbp-98h] BYREF
  int v23; // [rsp+38h] [rbp-90h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h]
  char *v25; // [rsp+48h] [rbp-80h]
  wchar_t pszDest[16]; // [rsp+50h] [rbp-78h] BYREF

  v25 = a7;
  v24 = a5;
  Src = 0LL;
  if ( !a4 && !a3 )
    return 3221225485LL;
  v9 = SeConvertSecurityDescriptorToStringSecurityDescriptor(a2, 1LL, a1, &Src, &v23);
  v10 = Src;
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( v9 == -1073741801 )
      goto LABEL_11;
    v12 = pszDest;
    v11 = 0;
    if ( StringCchPrintfW(pszDest, 0x10uLL, L"<0x%08X>", (unsigned int)v9) < 0 )
      v12 = L"-";
  }
  else
  {
    v12 = (const WCHAR *)Src;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( v12[v14] );
  v15 = v14 + 1;
  if ( 2 * (unsigned __int64)v15 > 0xFFFF )
  {
    v11 = RtlStringCbPrintfW(pszDest, 0x10uLL, L"%%%%%u", 1829LL);
    if ( v11 < 0 )
      goto LABEL_11;
    v12 = pszDest;
    do
      ++v13;
    while ( pszDest[v13] );
    v15 = v13 + 1;
  }
  v16 = (unsigned int)*a6;
  if ( (unsigned int)v16 + v15 >= 0x400 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v15, 0x6B416553u);
    if ( !PoolWithTag )
    {
      v11 = -1073741801;
      goto LABEL_11;
    }
    v19 = 1;
  }
  else
  {
    v17 = v24;
    *a6 = v16 + v15;
    PoolWithTag = (PVOID)(v17 + 2 * v16);
    v19 = 0;
  }
  *v25 = v19;
  memmove(PoolWithTag, v12, 2LL * v15);
  if ( a4 )
  {
    *a4 = PoolWithTag;
    a4[1] = 2 * v15;
  }
  else
  {
    *(_QWORD *)(a3 + 8) = PoolWithTag;
    v21 = 2 * (v15 - 1);
    *(_WORD *)a3 = v21;
    *(_WORD *)(a3 + 2) = v21 + 2;
  }
LABEL_11:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v11;
}
