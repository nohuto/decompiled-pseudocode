/*
 * XREFs of AslPathWildcardFindNext @ 0x1408EBD84
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x1408EB7A8 (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyNW @ 0x140155EDC (RtlStringCbCopyNW.c)
 *     ZwQueryDirectoryFile @ 0x1401B8990 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     RtlStringCbCatNW @ 0x140324360 (RtlStringCbCatNW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408ECAB0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1408ECDAC (AslpPathWildcardFreeMatchNode.c)
 */

__int64 __fastcall AslPathWildcardFindNext(NTSTRSAFE_PWSTR pszDest, __int64 a2, ULONGLONG *a3)
{
  __int64 v6; // rcx
  wchar_t *FileInformation; // r15
  NTSTATUS v8; // ebx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int16 *v11; // rsi
  ULONGLONG v12; // rdx
  ULONGLONG v13; // rcx
  ULONGLONG v14; // rdx
  ULONGLONG v15; // rax
  ULONGLONG v16; // rax
  __int64 v17; // r9
  ULONGLONG v18; // rdx
  char *v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r9
  ULONGLONG v22; // rdx
  unsigned __int64 v23; // r8
  ULONGLONG v24; // rcx
  ULONGLONG v25; // r15
  size_t v26; // rsi
  void *v27; // r14
  PVOID PoolWithTag; // rax
  void *v29; // rbx
  size_t v30; // r8
  NTSTATUS v31; // eax
  ULONGLONG v32; // rcx
  ULONGLONG v33; // rdx
  ULONGLONG v34; // rax
  ULONGLONG v35; // rax
  __int64 v36; // r9
  ULONGLONG v37; // rdx
  char *v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // r9
  ULONGLONG v41; // rdx
  unsigned __int64 v42; // r8
  ULONGLONG v43; // rcx
  ULONGLONG v44; // rdx
  PVOID v45; // rax
  int v46; // eax
  int matched; // eax
  ULONGLONG v48; // r13
  unsigned __int64 v49; // r9
  ULONGLONG v50; // rcx
  __int64 v51; // r14
  ULONGLONG v52; // r14
  size_t v53; // rsi
  void *v54; // r15
  PVOID v55; // rax
  void *v56; // rbx
  size_t v57; // r8
  ULONGLONG v58; // rdx
  UNICODE_STRING *v59; // rcx
  wchar_t *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rax
  char *v65; // r8
  wchar_t v66; // r9
  wchar_t *v67; // rax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ULONGLONG v69; // [rsp+70h] [rbp-90h] BYREF
  ULONGLONG v70; // [rsp+78h] [rbp-88h] BYREF
  ULONGLONG v71; // [rsp+80h] [rbp-80h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+88h] [rbp-78h] BYREF
  ULONGLONG v73; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v74; // [rsp+98h] [rbp-68h] BYREF
  ULONGLONG v75; // [rsp+A0h] [rbp-60h] BYREF
  ULONGLONG v76; // [rsp+A8h] [rbp-58h] BYREF
  ULONGLONG v77; // [rsp+B0h] [rbp-50h] BYREF
  ULONGLONG v78; // [rsp+B8h] [rbp-48h] BYREF
  ULONGLONG v79; // [rsp+C0h] [rbp-40h] BYREF
  ULONGLONG v80; // [rsp+C8h] [rbp-38h] BYREF
  ULONGLONG v81; // [rsp+D0h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v83[2]; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t *v84; // [rsp+158h] [rbp+58h]
  ULONGLONG Size; // [rsp+160h] [rbp+60h] BYREF
  ULONGLONG pullResult; // [rsp+168h] [rbp+68h] BYREF

  if ( a3 == (ULONGLONG *)-1LL )
    return 2147483654LL;
  if ( !pszDest )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v83, 0, sizeof(v83));
  v84 = (wchar_t *)AslAlloc(v6, 0x268uLL);
  FileInformation = v84;
  if ( !v84 )
    return (unsigned int)-1073741801;
  v9 = a3[4];
  if ( !v9 )
  {
LABEL_51:
    v8 = -2147483642;
    goto LABEL_52;
  }
  v10 = a3[4];
  while ( 1 )
  {
    v11 = 0LL;
    if ( v9 - 1 < v10 )
    {
      if ( ULongLongMult(a3[3], v9 - 1, &pullResult) < 0 || (v12 = a3[7], v12 + pullResult < v12) )
        v11 = 0LL;
      else
        v11 = (unsigned __int16 *)(v12 + pullResult);
    }
    if ( !v11 )
    {
      AslLogCallPrintf(1LL);
      v8 = -1073741595;
      goto LABEL_137;
    }
    if ( *((_QWORD *)v11 + 3) )
      break;
    AslLogCallPrintf(1LL);
    v13 = a3[4];
    if ( !v13 )
      goto LABEL_25;
    if ( ULongLongMult(a3[3], v13 - 1, &v69) < 0 || (v14 = a3[7], v14 + v69 < v14) )
      v15 = 0LL;
    else
      v15 = v14 + v69;
    if ( !v15 )
    {
LABEL_24:
      AslLogCallPrintf(1LL);
LABEL_25:
      AslLogCallPrintf(1LL);
      goto LABEL_50;
    }
    AslpPathWildcardFreeMatchNode(v15);
    v16 = a3[4];
    if ( !v16 )
      goto LABEL_50;
    if ( ULongLongMult(a3[3], v16 - 1, &v70) < 0 )
      goto LABEL_50;
    v18 = a3[7];
    if ( v18 + v70 < v18 )
      goto LABEL_50;
    v19 = (char *)(v18 + v70);
    v20 = a3[4] - v17 - 1;
    Size = v20;
    if ( v20 )
    {
      if ( ULongLongMult(v20, a3[3], &Size) < 0 )
        goto LABEL_50;
      if ( ULongLongMult(a3[3], v21 + 1, &v71) < 0 )
        goto LABEL_50;
      v22 = a3[7];
      if ( v22 + v71 < v22 )
        goto LABEL_50;
      v20 = Size;
      memmove(v19, (const void *)(v22 + v71), Size);
    }
    memset(&v19[v20], 0, a3[3]);
    v23 = --a3[4];
    if ( v23 > 0x10 )
    {
      v24 = a3[5];
      if ( v24 * a3[3] >= 0x400 && v23 < v24 >> 2 )
      {
        v25 = v24 >> 1;
        if ( ULongLongMult(v24, a3[3], &v73) >= 0 && ULongLongMult(v25, a3[3], &NumberOfBytes) >= 0 )
        {
          v26 = NumberOfBytes;
          v27 = (void *)a3[7];
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
          v29 = PoolWithTag;
          if ( !v27 )
            goto LABEL_40;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v26);
            v30 = v73;
            goto LABEL_44;
          }
        }
LABEL_49:
        FileInformation = v84;
      }
    }
LABEL_50:
    v9 = a3[4];
    v10 = v9;
    if ( !v9 )
      goto LABEL_51;
  }
  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v11 + 2));
  v31 = ZwQueryDirectoryFile(
          *((HANDLE *)v11 + 3),
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          FileInformation,
          0x268u,
          FileBothDirectoryInformation,
          1u,
          &DestinationString,
          0);
  if ( v31 < 0 )
  {
    if ( v31 != -2147483642 && v31 != -1073741809 )
    {
      AslLogCallPrintf(1LL);
      AslLogCallPrintf(2LL);
    }
    v32 = a3[4];
    if ( !v32 )
      goto LABEL_25;
    if ( ULongLongMult(a3[3], v32 - 1, &v74) < 0 || (v33 = a3[7], v33 + v74 < v33) )
      v34 = 0LL;
    else
      v34 = v33 + v74;
    if ( !v34 )
      goto LABEL_24;
    AslpPathWildcardFreeMatchNode(v34);
    v35 = a3[4];
    if ( !v35 )
      goto LABEL_50;
    if ( ULongLongMult(a3[3], v35 - 1, &v75) < 0 )
      goto LABEL_50;
    v37 = a3[7];
    if ( v37 + v75 < v37 )
      goto LABEL_50;
    v38 = (char *)(v37 + v75);
    v39 = a3[4] - v36 - 1;
    Size = v39;
    if ( v39 )
    {
      if ( ULongLongMult(v39, a3[3], &Size) < 0 )
        goto LABEL_50;
      if ( ULongLongMult(a3[3], v40 + 1, &v76) < 0 )
        goto LABEL_50;
      v41 = a3[7];
      if ( v41 + v76 < v41 )
        goto LABEL_50;
      v39 = Size;
      memmove(v38, (const void *)(v41 + v76), Size);
    }
    memset(&v38[v39], 0, a3[3]);
    v42 = --a3[4];
    if ( v42 > 0x10 )
    {
      v43 = a3[5];
      v44 = a3[3];
      if ( v44 * v43 >= 0x400 && v42 < v43 >> 2 )
      {
        v25 = v43 >> 1;
        if ( ULongLongMult(v43, v44, &v78) < 0 || ULongLongMult(v25, a3[3], &v77) < 0 )
          goto LABEL_49;
        v26 = v77;
        v27 = (void *)a3[7];
        v45 = ExAllocatePoolWithTag(PagedPool, v77, 0x72615452u);
        v29 = v45;
        if ( v27 )
        {
          if ( !v45 )
            goto LABEL_49;
          memset(v45, 0, v26);
          v30 = v78;
LABEL_44:
          if ( v30 >= v26 )
            v30 = v26;
          memmove(v29, v27, v30);
          ExFreePoolWithTag(v27, 0x72615452u);
        }
        else
        {
LABEL_40:
          if ( !v29 )
            goto LABEL_49;
          memset(v29, 0, v26);
        }
        if ( v29 )
        {
          a3[7] = (ULONGLONG)v29;
          a3[5] = v25;
        }
        goto LABEL_49;
      }
    }
    goto LABEL_50;
  }
  v46 = *((_DWORD *)FileInformation + 15);
  if ( v46 == 4 && FileInformation[47] == 46 && FileInformation[48] == 46 )
    goto LABEL_50;
  if ( v46 == 2 )
  {
    LOWORD(v46) = 2;
    if ( FileInformation[47] == 46 )
      goto LABEL_50;
  }
  matched = AslpPathWildcardAllocMatchNode(v83, (PCUNICODE_STRING)v11, FileInformation + 47, v46);
  if ( matched != -1073741197 )
  {
    if ( matched == -1073741565 || matched == -1073741638 )
      goto LABEL_50;
    if ( matched < 0 )
      goto LABEL_25;
    v48 = a3[4];
    v49 = a3[5];
    if ( v48 < v49 )
      goto LABEL_109;
    v50 = v48 + 1;
    if ( v48 + 1 <= v49 )
    {
      v8 = -2147024809;
      goto LABEL_113;
    }
    v51 = a3[6] - 1;
    if ( v51 + v50 < v50 )
      goto LABEL_112;
    v52 = (v51 + v50) & ~v51;
    if ( ULongLongMult(a3[5], a3[3], &v80) < 0 )
    {
      v8 = -2147483637;
      goto LABEL_108;
    }
    if ( ULongLongMult(v52, a3[3], &v79) < 0 )
    {
      v8 = -2147483637;
      goto LABEL_108;
    }
    v53 = v79;
    v54 = (void *)a3[7];
    v55 = ExAllocatePoolWithTag(PagedPool, v79, 0x72615452u);
    v56 = v55;
    if ( !v54 )
    {
      if ( v55 )
      {
        memset(v55, 0, v53);
        goto LABEL_104;
      }
      goto LABEL_106;
    }
    if ( !v55 )
      goto LABEL_106;
    memset(v55, 0, v53);
    v57 = v80;
    if ( v80 >= v53 )
      v57 = v53;
    memmove(v56, v54, v57);
    ExFreePoolWithTag(v54, 0x72615452u);
LABEL_104:
    if ( v56 )
    {
      a3[7] = (ULONGLONG)v56;
      v8 = 0;
      a3[5] = v52;
    }
    else
    {
LABEL_106:
      v8 = -2147024882;
    }
    FileInformation = v84;
LABEL_108:
    if ( !v8 )
    {
LABEL_109:
      if ( ULongLongMult(a3[3], v48, &v81) >= 0 )
      {
        v58 = a3[7];
        if ( v58 + v81 >= v58 )
        {
          v59 = (UNICODE_STRING *)(v58 + v81);
          *v59 = v83[0];
          v59[1] = v83[1];
          ++a3[4];
          v8 = 0;
          goto LABEL_113;
        }
      }
LABEL_112:
      v8 = -2147483637;
    }
LABEL_113:
    if ( v8 < 0 )
      goto LABEL_137;
    goto LABEL_50;
  }
  v8 = RtlStringCbCopyNW(pszDest, 0x208uLL, *((STRSAFE_PCNZWCH *)v11 + 1), *v11);
  if ( v8 >= 0 )
  {
    if ( *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1) - 2) == 92 )
      goto LABEL_134;
    v60 = pszDest;
    v61 = 260LL;
    do
    {
      if ( !*v60 )
        break;
      ++v60;
      --v61;
    }
    while ( v61 );
    v8 = -1073741811;
    if ( v61 )
    {
      v8 = 0;
      v62 = 260 - v61;
    }
    else
    {
      v62 = 0LL;
    }
    if ( v61 )
    {
      v60 = &pszDest[v62];
      v63 = 260 - v62;
      if ( 260 != v62 )
      {
        v64 = 1LL;
        v65 = (char *)((char *)L"\\" - (char *)v60);
        do
        {
          if ( !v64 )
            break;
          v66 = *(wchar_t *)((char *)v60 + (_QWORD)v65);
          if ( !v66 )
            break;
          *v60 = v66;
          --v64;
          ++v60;
          --v63;
        }
        while ( v63 );
      }
      v67 = v60 - 1;
      v8 = -2147483643;
      if ( v63 )
      {
        v67 = v60;
        v8 = 0;
      }
      *v67 = 0;
    }
    if ( v8 >= 0 )
    {
LABEL_134:
      v8 = RtlStringCbCatNW(pszDest, (size_t)v60, FileInformation + 47, *((unsigned int *)FileInformation + 15));
      if ( v8 >= 0 )
      {
        v8 = 0;
        goto LABEL_52;
      }
    }
  }
LABEL_137:
  AslLogCallPrintf(1LL);
LABEL_52:
  ExFreePoolWithTag(FileInformation, 0x74705041u);
  return (unsigned int)v8;
}
