/*
 * XREFs of AslPathWildcardFindFirst @ 0x1408EB7A8
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUShortAdd @ 0x14011CE8C (RtlUShortAdd.c)
 *     RtlStringCbCopyNW @ 0x140155EDC (RtlStringCbCopyNW.c)
 *     wcsncmp @ 0x140197940 (wcsncmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslDoesFileExistNtPath @ 0x1408EA8C4 (AslDoesFileExistNtPath.c)
 *     AslPathCleanUstr @ 0x1408EB1DC (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x1408EBD84 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408ECAB0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1408ECCCC (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1408ECDAC (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x1408ECDF8 (AslpPathWildcardMakeLeaves.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(NTSTRSAFE_PWSTR pszDest, char *a2, const wchar_t *a3, _QWORD *a4)
{
  _QWORD *v4; // r12
  WCHAR *v8; // r13
  int matched; // ebx
  __int64 v10; // rcx
  size_t v11; // rbx
  wchar_t *v12; // rax
  int Leaves; // eax
  __int64 v14; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v16; // r15
  HRESULT v17; // eax
  ULONGLONG v18; // r10
  int v19; // r9d
  size_t v20; // rsi
  void *v21; // r14
  PVOID v22; // rax
  void *v23; // rbx
  size_t v24; // r8
  void *v25; // rcx
  ULONGLONG v26; // r10
  ULONGLONG v27; // r9
  ULONGLONG v28; // rcx
  __int64 v29; // r14
  ULONGLONG v30; // r14
  HRESULT v31; // eax
  size_t v32; // r12
  PVOID PoolWithTag; // rbx
  size_t v34; // r8
  unsigned __int64 v35; // rdx
  UNICODE_STRING *v36; // rcx
  ULONGLONG pullResult; // [rsp+38h] [rbp-39h] BYREF
  _DWORD *v38; // [rsp+40h] [rbp-31h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING v42[5]; // [rsp+70h] [rbp-1h] BYREF
  char *pusResult; // [rsp+E0h] [rbp+6Fh] BYREF
  _QWORD *v45; // [rsp+F0h] [rbp+7Fh]

  v45 = a4;
  pusResult = a2;
  v4 = a4;
  if ( !pszDest )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v38 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = 0LL;
  LOWORD(pusResult) = 0;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  memset(v42, 0, 0x20uLL);
  *v4 = 0LL;
  *pszDest = 0;
  if ( RtlCreateUnicodeString(&DestinationString, a3) )
  {
    matched = AslPathCleanUstr(&DestinationString.Length);
    if ( matched < 0 )
      goto LABEL_11;
    matched = RtlUShortAdd(DestinationString.Length, 4u, (USHORT *)&pusResult);
    if ( matched < 0 )
      goto LABEL_11;
    v11 = (unsigned __int16)pusResult;
    v12 = (wchar_t *)AslAlloc(v10, (unsigned __int16)pusResult);
    v8 = v12;
    if ( !v12 )
    {
LABEL_14:
      matched = -1073741801;
      goto LABEL_68;
    }
    matched = RtlStringCbCopyNW(v12, v11, DestinationString.Buffer, DestinationString.Length);
    if ( matched < 0 )
      goto LABEL_11;
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      matched = -1073741767;
      goto LABEL_9;
    }
    if ( Leaves == 1 )
    {
      Buffer = DestinationString.Buffer;
      *v4 = -1LL;
      if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        matched = -2147483642;
        goto LABEL_68;
      }
      matched = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
      if ( matched >= 0 )
      {
        matched = 0;
        goto LABEL_68;
      }
      goto LABEL_11;
    }
    v38 = AslAlloc(v14, 0x40uLL);
    v16 = v38;
    if ( !v38 )
      goto LABEL_14;
    *v38 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v16 + 1) = v8;
    v8 = 0LL;
    memset(v16 + 4, 0, 0x30uLL);
    *((_QWORD *)v16 + 2) = 0LL;
    *((_QWORD *)v16 + 6) = 16LL;
    *((_QWORD *)v16 + 4) = 0LL;
    *((_QWORD *)v16 + 5) = 0LL;
    *((_QWORD *)v16 + 7) = 0LL;
    *((_QWORD *)v16 + 3) = 32LL;
    v17 = ULongLongMult(0LL, 0x20uLL, &pullResult);
    v19 = -2147483637;
    if ( v17 < 0 || ULongLongMult(v18, *((_QWORD *)v16 + 3), (ULONGLONG *)&pusResult) < 0 )
    {
      matched = v19;
LABEL_37:
      v25 = (void *)*((_QWORD *)v16 + 7);
      if ( v25 )
        ExFreePoolWithTag(v25, 0x72615452u);
      memset(v16 + 4, 0, 0x30uLL);
      AslLogCallPrintf(1LL);
LABEL_40:
      if ( matched >= 0 )
      {
        RtlInitUnicodeString(&SourceString, *((PCWSTR *)v16 + 1));
        matched = AslpPathWildcardAllocMatchNode(v42, &SourceString, 0LL, 0);
        if ( matched >= 0 )
        {
          v26 = *((_QWORD *)v16 + 4);
          v27 = *((_QWORD *)v16 + 5);
          pullResult = v26;
          if ( v26 < v27 )
            goto LABEL_64;
          v28 = v26 + 1;
          if ( v26 + 1 <= v27 )
          {
            matched = -2147024809;
            goto LABEL_45;
          }
          v29 = *((_QWORD *)v16 + 6) - 1LL;
          if ( v29 + v28 < v28 )
            goto LABEL_49;
          v30 = (v29 + v28) & ~v29;
          v31 = ULongLongMult(v27, *((_QWORD *)v16 + 3), (ULONGLONG *)&SourceString.Length);
          if ( v31 < 0 || ULongLongMult(v30, *((_QWORD *)v16 + 3), &NumberOfBytes) < 0 )
          {
            matched = -2147483637;
            goto LABEL_63;
          }
          v32 = NumberOfBytes;
          pusResult = (char *)*((_QWORD *)v16 + 7);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
          if ( pusResult )
          {
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, v32);
              v34 = *(_QWORD *)&SourceString.Length;
              if ( *(_QWORD *)&SourceString.Length >= v32 )
                v34 = v32;
              memmove(PoolWithTag, pusResult, v34);
              ExFreePoolWithTag(pusResult, 0x72615452u);
              goto LABEL_60;
            }
          }
          else if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v32);
LABEL_60:
            *((_QWORD *)v16 + 7) = PoolWithTag;
            matched = 0;
            *((_QWORD *)v16 + 5) = v30;
LABEL_62:
            v4 = v45;
            v26 = pullResult;
LABEL_63:
            if ( matched )
              goto LABEL_45;
LABEL_64:
            if ( ULongLongMult(*((_QWORD *)v16 + 3), v26, (ULONGLONG *)&pusResult) >= 0 )
            {
              v35 = *((_QWORD *)v16 + 7);
              if ( (unsigned __int64)&pusResult[v35] >= v35 )
              {
                v36 = (UNICODE_STRING *)&pusResult[v35];
                *v36 = v42[0];
                v36[1] = v42[1];
                ++*((_QWORD *)v16 + 4);
                matched = 0;
LABEL_45:
                if ( matched >= 0 )
                {
                  memset(v42, 0, 0x20uLL);
                  *v4 = v16;
                  matched = AslPathWildcardFindNext(pszDest);
                  goto LABEL_68;
                }
                goto LABEL_11;
              }
            }
LABEL_49:
            matched = -2147483637;
            goto LABEL_45;
          }
          matched = -2147024882;
          goto LABEL_62;
        }
      }
LABEL_11:
      AslLogCallPrintf(1LL);
      goto LABEL_68;
    }
    v20 = (size_t)pusResult;
    v21 = (void *)*((_QWORD *)v16 + 7);
    v22 = ExAllocatePoolWithTag(PagedPool, (SIZE_T)pusResult, 0x72615452u);
    v23 = v22;
    if ( v21 )
    {
      if ( !v22 )
      {
LABEL_36:
        matched = -2147024882;
        goto LABEL_37;
      }
      memset(v22, 0, v20);
      v24 = pullResult;
      if ( pullResult >= v20 )
        v24 = v20;
      memmove(v23, v21, v24);
      ExFreePoolWithTag(v21, 0x72615452u);
    }
    else if ( v22 )
    {
      memset(v22, 0, v20);
    }
    if ( v23 )
    {
      *((_QWORD *)v16 + 7) = v23;
      *((_QWORD *)v16 + 5) = 16LL;
      matched = 0;
      goto LABEL_40;
    }
    goto LABEL_36;
  }
  matched = -1073741801;
LABEL_9:
  AslLogCallPrintf(1LL);
LABEL_68:
  RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74705041u);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v38);
    AslpPathWildcardFreeMatchNode(v42);
    *v4 = 0LL;
  }
  return (unsigned int)matched;
}
