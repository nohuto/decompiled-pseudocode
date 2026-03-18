/*
 * XREFs of AslPathWildcardFindFirst @ 0x140926D3C
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140922B10 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlUShortAdd @ 0x14011FAFC (RtlUShortAdd.c)
 *     RtlStringCchCopyW @ 0x140154604 (RtlStringCchCopyW.c)
 *     RtlStringCbCopyNW @ 0x140165948 (RtlStringCbCopyNW.c)
 *     wcsncmp @ 0x1401A2770 (wcsncmp.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ULongLongMult @ 0x14028101C (ULongLongMult.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140694F30 (RtlCreateUnicodeString.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070EABC (AslAlloc.c)
 *     AslDoesFileExistNtPath @ 0x140925D68 (AslDoesFileExistNtPath.c)
 *     AslPathCleanUstr @ 0x14092676C (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x140927324 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140927F98 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1409281CC (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1409282A4 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x1409282F0 (AslpPathWildcardMakeLeaves.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(NTSTRSAFE_PWSTR pszDest, ULONGLONG a2, const WCHAR *a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  WCHAR *v8; // r12
  int matched; // ebx
  __int64 v10; // rcx
  size_t v11; // rbx
  wchar_t *v12; // rax
  int Leaves; // eax
  __int64 v14; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  ULONGLONG v20; // r15
  size_t v21; // r14
  void *v22; // r13
  PVOID PoolWithTag; // rax
  void *v24; // rbx
  size_t v25; // r8
  void *v26; // rcx
  ULONGLONG v27; // r15
  unsigned __int64 v28; // r9
  ULONGLONG v29; // rcx
  __int64 v30; // rsi
  ULONGLONG v31; // rsi
  size_t v32; // r14
  void *v33; // r13
  PVOID v34; // rax
  void *v35; // rbx
  size_t v36; // r8
  bool v37; // sf
  ULONGLONG v38; // rcx
  UNICODE_STRING *v39; // rdx
  __int64 v40; // rdx
  _DWORD *v41; // [rsp+30h] [rbp-50h] BYREF
  ULONGLONG pullResult; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING v45[2]; // [rsp+60h] [rbp-20h] BYREF
  ULONGLONG pusResult; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v48; // [rsp+D8h] [rbp+58h]

  v48 = a4;
  pusResult = a2;
  v4 = a4;
  if ( !pszDest )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v41 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = 0LL;
  LOWORD(pusResult) = 0;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  memset(v45, 0, sizeof(v45));
  *v4 = 0LL;
  *pszDest = 0;
  if ( !RtlCreateUnicodeString(&DestinationString, a3) )
  {
    matched = -1073741801;
    goto LABEL_9;
  }
  matched = AslPathCleanUstr(&DestinationString.Length);
  if ( matched >= 0 )
  {
    matched = RtlUShortAdd(DestinationString.Length, 4u, (USHORT *)&pusResult);
    if ( matched >= 0 )
    {
      v11 = (unsigned __int16)pusResult;
      v12 = (wchar_t *)AslAlloc(v10, (unsigned __int16)pusResult);
      v8 = v12;
      if ( !v12 )
      {
        matched = -1073741801;
        goto LABEL_74;
      }
      matched = RtlStringCbCopyNW(v12, v11, DestinationString.Buffer, DestinationString.Length);
      if ( matched >= 0 )
      {
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
            goto LABEL_74;
          }
          matched = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
          if ( matched >= 0 )
          {
            matched = 0;
            goto LABEL_74;
          }
          goto LABEL_9;
        }
        v41 = AslAlloc(v14, 0x40uLL);
        v16 = v41;
        if ( !v41 )
        {
          matched = -1073741801;
LABEL_73:
          v4 = v48;
          goto LABEL_74;
        }
        *v41 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
        *((_QWORD *)v16 + 1) = v8;
        v8 = 0LL;
        memset(v16 + 4, 0, 0x30uLL);
        *((_QWORD *)v16 + 6) = 16LL;
        *((_QWORD *)v16 + 2) = 0LL;
        *((_QWORD *)v16 + 4) = 0LL;
        *((_QWORD *)v16 + 5) = 0LL;
        *((_QWORD *)v16 + 7) = 0LL;
        *((_QWORD *)v16 + 3) = 32LL;
        v17 = *((_QWORD *)v16 + 6);
        v18 = v17 - 1;
        v19 = v17 + 7;
        if ( v19 < 8 )
        {
          matched = -2147483637;
          goto LABEL_42;
        }
        v20 = v19 & ~v18;
        if ( ULongLongMult(0LL, *((_QWORD *)v16 + 3), &pullResult) < 0
          || ULongLongMult(v20, *((_QWORD *)v16 + 3), &pusResult) < 0 )
        {
          matched = -2147483637;
          goto LABEL_39;
        }
        v21 = pusResult;
        v22 = (void *)*((_QWORD *)v16 + 7);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
        v24 = PoolWithTag;
        if ( v22 )
        {
          if ( !PoolWithTag )
            goto LABEL_38;
          memset(PoolWithTag, 0, v21);
          v25 = pullResult;
          if ( pullResult >= v21 )
            v25 = v21;
          memmove(v24, v22, v25);
          ExFreePoolWithTag(v22, 0x72615452u);
        }
        else
        {
          if ( !PoolWithTag )
            goto LABEL_38;
          memset(PoolWithTag, 0, v21);
        }
        if ( v24 )
        {
          *((_QWORD *)v16 + 7) = v24;
          matched = 0;
          *((_QWORD *)v16 + 5) = v20;
          goto LABEL_39;
        }
LABEL_38:
        matched = -2147024882;
LABEL_39:
        if ( !matched )
        {
          matched = 0;
          goto LABEL_45;
        }
LABEL_42:
        v26 = (void *)*((_QWORD *)v16 + 7);
        if ( v26 )
          ExFreePoolWithTag(v26, 0x72615452u);
        memset(v16 + 4, 0, 0x30uLL);
        AslLogCallPrintf(1LL);
LABEL_45:
        if ( matched < 0
          || (RtlInitUnicodeString(&SourceString, *((PCWSTR *)v16 + 1)),
              matched = AslpPathWildcardAllocMatchNode(v45, &SourceString, 0LL, 0),
              matched < 0) )
        {
LABEL_46:
          AslLogCallPrintf(1LL);
          goto LABEL_73;
        }
        v27 = *((_QWORD *)v16 + 4);
        v28 = *((_QWORD *)v16 + 5);
        if ( v27 < v28 )
          goto LABEL_66;
        v29 = v27 + 1;
        if ( v27 + 1 <= v28 )
        {
          matched = -2147024809;
LABEL_70:
          v37 = matched < 0;
LABEL_71:
          if ( !v37 )
          {
            memset(v45, 0, sizeof(v45));
            *v48 = v16;
            matched = AslPathWildcardFindNext(pszDest, v40, v16);
            goto LABEL_73;
          }
          goto LABEL_46;
        }
        v30 = *((_QWORD *)v16 + 6) - 1LL;
        if ( v30 + v29 < v29 )
        {
LABEL_69:
          matched = -2147483637;
          goto LABEL_70;
        }
        v31 = (v30 + v29) & ~v30;
        if ( ULongLongMult(*((_QWORD *)v16 + 5), *((_QWORD *)v16 + 3), &pullResult) < 0
          || ULongLongMult(v31, *((_QWORD *)v16 + 3), &pusResult) < 0 )
        {
          matched = -2147483637;
          goto LABEL_65;
        }
        v32 = pusResult;
        v33 = (void *)*((_QWORD *)v16 + 7);
        v34 = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
        v35 = v34;
        if ( v33 )
        {
          if ( !v34 )
            goto LABEL_64;
          memset(v34, 0, v32);
          v36 = pullResult;
          if ( pullResult >= v32 )
            v36 = v32;
          memmove(v35, v33, v36);
          ExFreePoolWithTag(v33, 0x72615452u);
        }
        else
        {
          if ( !v34 )
            goto LABEL_64;
          memset(v34, 0, v32);
        }
        if ( v35 )
        {
          *((_QWORD *)v16 + 7) = v35;
          matched = 0;
          *((_QWORD *)v16 + 5) = v31;
          goto LABEL_65;
        }
LABEL_64:
        matched = -2147024882;
LABEL_65:
        v37 = matched < 0;
        if ( matched )
          goto LABEL_71;
LABEL_66:
        if ( ULongLongMult(*((_QWORD *)v16 + 3), v27, &pusResult) >= 0 )
        {
          v38 = *((_QWORD *)v16 + 7);
          v39 = (UNICODE_STRING *)(v38 + pusResult);
          if ( v38 + pusResult >= v38 )
          {
            matched = 0;
            *v39 = v45[0];
            v39[1] = v45[1];
            ++*((_QWORD *)v16 + 4);
            goto LABEL_70;
          }
        }
        goto LABEL_69;
      }
    }
  }
LABEL_9:
  AslLogCallPrintf(1LL);
LABEL_74:
  RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74705041u);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v41);
    AslpPathWildcardFreeMatchNode(v45);
    *v4 = 0LL;
  }
  return (unsigned int)matched;
}
