/*
 * XREFs of SdbpCreateSearchDBContext @ 0x14067D760
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14067F9BC (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x140724020 (SdbpCheckKObject.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400F5038 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslPathSplit @ 0x14067F7B8 (AslPathSplit.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t **a2)
{
  wchar_t *v4; // rsi
  __int64 v5; // rcx
  const wchar_t *v6; // rbx
  __int64 v7; // rax
  unsigned int v9; // r14d
  wchar_t *v10; // rbp
  __int64 v11; // rcx
  wchar_t *v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  wchar_t *v15; // rcx
  wchar_t v16; // ax
  __int64 v17; // rcx
  _WORD *v18; // rax
  int v19; // [rsp+20h] [rbp-478h]
  wchar_t pszSrc[264]; // [rsp+40h] [rbp-458h] BYREF
  wchar_t v21[264]; // [rsp+250h] [rbp-248h] BYREF

  memset(v21, 0, 0x208uLL);
  v4 = 0LL;
  memset(pszSrc, 0, 0x208uLL);
  if ( !a2 )
  {
    v10 = (wchar_t *)AslAlloc(v5, 4LL);
    v14 = 2LL;
    v15 = v10;
    while ( v14 != -2147483644 )
    {
      v16 = *(wchar_t *)((char *)v15 + (char *)L"." - (char *)v10);
      if ( !v16 )
        break;
      *v15++ = v16;
      if ( !--v14 )
      {
        --v15;
        break;
      }
    }
    *v15 = 0;
    v4 = (wchar_t *)AslAlloc(v15, 2LL);
    *v4 = 0;
    v18 = (_WORD *)AslAlloc(v17, 2LL);
    *v18 = 0;
    a1[3] = v18;
    goto LABEL_9;
  }
  v6 = *a2;
  v7 = -1LL;
  while ( v6[++v7] != 0 )
    ;
  v9 = v7 + 1;
  v10 = (wchar_t *)AslAlloc(v5, 2LL * (unsigned int)(v7 + 1));
  if ( !v10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchDBContext",
      212,
      (unsigned int)"Unable to allocate memory for directory path");
    return 0LL;
  }
  if ( (int)AslPathSplit(v6, v10, v9, pszSrc, v19, v21) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchDBContext",
      223,
      (unsigned int)"Unable to parse executable path for \"%ws\"");
  }
  else
  {
    v12 = (wchar_t *)AslAlloc(v11, 520LL);
    v4 = v12;
    if ( v12 )
    {
      if ( RtlStringCchCopyW(v12, 0x104uLL, pszSrc) >= 0 && RtlStringCchCatW(v4, 0x104uLL, v21) >= 0 )
      {
LABEL_9:
        a1[1] = a2;
        result = 1LL;
        a1[7] = 0LL;
        a1[4] = v10;
        a1[5] = v4;
        a1[6] = 0LL;
        a1[9] = 0LL;
        a1[8] = 0LL;
        a1[11] = 0LL;
        return result;
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCreateSearchDBContext",
        229,
        (unsigned int)"Unable to allocate memory for full name");
    }
  }
  ExFreePoolWithTag(v10, 0x74705041u);
  if ( !v4 )
    return 0LL;
  ExFreePoolWithTag(v4, 0x74705041u);
  return 0LL;
}
