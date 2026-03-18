/*
 * XREFs of AslPathWildcardFindNext @ 0x1409278C4
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x1409230B0 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x1409272DC (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyNW @ 0x140165EF8 (RtlStringCbCopyNW.c)
 *     ZwQueryDirectoryFile @ 0x1401C0770 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ULongLongMult @ 0x1402812BC (ULongLongMult.c)
 *     RtlStringCbCatNW @ 0x140345B00 (RtlStringCbCatNW.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140928538 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x140928844 (AslpPathWildcardFreeMatchNode.c)
 */

__int64 __fastcall AslPathWildcardFindNext(wchar_t *a1, ULONGLONG a2, ULONGLONG *a3)
{
  __int64 v5; // rcx
  wchar_t *FileInformation; // r12
  NTSTATUS v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int16 *v10; // rsi
  ULONGLONG v11; // rcx
  ULONGLONG v12; // rcx
  ULONGLONG v13; // rcx
  ULONGLONG v14; // rax
  ULONGLONG v15; // rax
  __int64 v16; // r9
  ULONGLONG v17; // rcx
  char *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r9
  ULONGLONG v21; // rcx
  unsigned __int64 v22; // r8
  ULONGLONG v23; // rcx
  ULONGLONG v24; // rdx
  ULONGLONG v25; // r15
  size_t v26; // rsi
  void *v27; // r14
  PVOID PoolWithTag; // rax
  void *v29; // rbx
  size_t v30; // r8
  NTSTATUS v31; // eax
  ULONGLONG v32; // rcx
  ULONGLONG v33; // rcx
  ULONGLONG v34; // rax
  ULONGLONG v35; // rax
  __int64 v36; // r9
  ULONGLONG v37; // rcx
  char *v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // r9
  ULONGLONG v41; // rcx
  unsigned __int64 v42; // r8
  ULONGLONG v43; // rcx
  ULONGLONG v44; // rdx
  PVOID v45; // rax
  int v46; // eax
  const wchar_t *v47; // r14
  int matched; // eax
  ULONGLONG v49; // r13
  unsigned __int64 v50; // r9
  ULONGLONG v51; // rcx
  __int64 v52; // r14
  ULONGLONG v53; // r14
  size_t v54; // rsi
  void *v55; // r15
  PVOID v56; // rax
  void *v57; // rbx
  size_t v58; // r8
  ULONGLONG v59; // rcx
  UNICODE_STRING *v60; // rdx
  size_t v61; // rdx
  wchar_t *v62; // rax
  size_t v63; // rax
  size_t v64; // rcx
  __int64 v65; // r8
  char *v66; // rax
  __int16 v67; // r9
  _WORD *v68; // rax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ULONGLONG v70; // [rsp+70h] [rbp-90h] BYREF
  ULONGLONG v71; // [rsp+78h] [rbp-88h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+80h] [rbp-80h] BYREF
  ULONGLONG v73; // [rsp+88h] [rbp-78h] BYREF
  ULONGLONG v74; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v75; // [rsp+98h] [rbp-68h] BYREF
  ULONGLONG v76; // [rsp+A0h] [rbp-60h] BYREF
  ULONGLONG v77; // [rsp+A8h] [rbp-58h] BYREF
  ULONGLONG v78; // [rsp+B0h] [rbp-50h] BYREF
  ULONGLONG v79; // [rsp+B8h] [rbp-48h] BYREF
  ULONGLONG v80; // [rsp+C0h] [rbp-40h] BYREF
  ULONGLONG v81; // [rsp+C8h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v83[6]; // [rsp+E0h] [rbp-20h] BYREF
  ULONGLONG Size; // [rsp+158h] [rbp+58h] BYREF
  ULONGLONG pullResult; // [rsp+160h] [rbp+60h] BYREF
  ULONGLONG v87; // [rsp+168h] [rbp+68h] BYREF

  Size = a2;
  if ( a3 == (ULONGLONG *)-1LL )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v83, 0, 0x20uLL);
  FileInformation = (wchar_t *)AslAlloc(v5, 0x268uLL);
  if ( !FileInformation )
    return (unsigned int)-1073741801;
  v8 = a3[4];
  if ( !v8 )
  {
LABEL_108:
    v7 = -2147483642;
    goto LABEL_109;
  }
  v9 = a3[4];
  while ( 1 )
  {
    v10 = 0LL;
    if ( v8 - 1 < v9 )
    {
      if ( ULongLongMult(a3[3], v8 - 1, &pullResult) < 0
        || (v11 = a3[7], v10 = (unsigned __int16 *)(v11 + pullResult), v11 + pullResult < v11) )
      {
        v10 = 0LL;
      }
    }
    if ( !v10 )
    {
      AslLogCallPrintf(1LL);
      v7 = -1073741595;
      goto LABEL_132;
    }
    if ( *((_QWORD *)v10 + 3) )
      break;
    AslLogCallPrintf(1LL);
    v12 = a3[4];
    if ( !v12 )
      goto LABEL_106;
    if ( ULongLongMult(a3[3], v12 - 1, &v87) < 0 || (v13 = a3[7], v14 = v13 + v87, v13 + v87 < v13) )
      v14 = 0LL;
    if ( !v14 )
    {
LABEL_23:
      AslLogCallPrintf(1LL);
LABEL_106:
      AslLogCallPrintf(1LL);
      goto LABEL_107;
    }
    AslpPathWildcardFreeMatchNode(v14);
    v15 = a3[4];
    if ( !v15 )
      goto LABEL_107;
    if ( ULongLongMult(a3[3], v15 - 1, &v70) < 0 )
      goto LABEL_107;
    v17 = a3[7];
    v18 = (char *)(v17 + v70);
    if ( v17 + v70 < v17 )
      goto LABEL_107;
    v19 = a3[4] - v16 - 1;
    Size = v19;
    if ( v19 )
    {
      if ( ULongLongMult(v19, a3[3], &Size) < 0 )
        goto LABEL_107;
      if ( ULongLongMult(a3[3], v20 + 1, &v71) < 0 )
        goto LABEL_107;
      v21 = a3[7];
      if ( v21 + v71 < v21 )
        goto LABEL_107;
      v19 = Size;
      memmove(v18, (const void *)(v21 + v71), Size);
    }
    memset(&v18[v19], 0, a3[3]);
    v22 = --a3[4];
    if ( v22 <= 0x10 )
      goto LABEL_107;
    v23 = a3[5];
    v24 = a3[3];
    if ( v24 * v23 < 0x400 )
      goto LABEL_107;
    if ( v22 >= v23 >> 2 )
      goto LABEL_107;
    v25 = v23 >> 1;
    if ( ULongLongMult(v23, v24, &v73) < 0 || ULongLongMult(v25, a3[3], &NumberOfBytes) < 0 )
      goto LABEL_107;
    v26 = NumberOfBytes;
    v27 = (void *)a3[7];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
    v29 = PoolWithTag;
    if ( !v27 )
    {
LABEL_63:
      if ( v29 )
      {
        memset(v29, 0, v26);
LABEL_70:
        if ( v29 )
        {
          a3[7] = (ULONGLONG)v29;
          a3[5] = v25;
        }
        goto LABEL_107;
      }
      goto LABEL_107;
    }
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v26);
      v30 = v73;
LABEL_67:
      if ( v30 >= v26 )
        v30 = v26;
      memmove(v29, v27, v30);
      ExFreePoolWithTag(v27, 0x72615452u);
      goto LABEL_70;
    }
LABEL_107:
    v8 = a3[4];
    v9 = v8;
    if ( !v8 )
      goto LABEL_108;
  }
  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 2));
  v31 = ZwQueryDirectoryFile(
          *((HANDLE *)v10 + 3),
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
      goto LABEL_106;
    if ( ULongLongMult(a3[3], v32 - 1, &v74) < 0 || (v33 = a3[7], v34 = v33 + v74, v33 + v74 < v33) )
      v34 = 0LL;
    if ( !v34 )
      goto LABEL_23;
    AslpPathWildcardFreeMatchNode(v34);
    v35 = a3[4];
    if ( !v35 )
      goto LABEL_107;
    if ( ULongLongMult(a3[3], v35 - 1, &v75) < 0 )
      goto LABEL_107;
    v37 = a3[7];
    v38 = (char *)(v37 + v75);
    if ( v37 + v75 < v37 )
      goto LABEL_107;
    v39 = a3[4] - v36 - 1;
    Size = v39;
    if ( v39 )
    {
      if ( ULongLongMult(v39, a3[3], &Size) < 0 )
        goto LABEL_107;
      if ( ULongLongMult(a3[3], v40 + 1, &v76) < 0 )
        goto LABEL_107;
      v41 = a3[7];
      if ( v41 + v76 < v41 )
        goto LABEL_107;
      v39 = Size;
      memmove(v38, (const void *)(v41 + v76), Size);
    }
    memset(&v38[v39], 0, a3[3]);
    v42 = --a3[4];
    if ( v42 <= 0x10 )
      goto LABEL_107;
    v43 = a3[5];
    v44 = a3[3];
    if ( v44 * v43 < 0x400 )
      goto LABEL_107;
    if ( v42 >= v43 >> 2 )
      goto LABEL_107;
    v25 = v43 >> 1;
    if ( ULongLongMult(v43, v44, &v78) < 0 || ULongLongMult(v25, a3[3], &v77) < 0 )
      goto LABEL_107;
    v26 = v77;
    v27 = (void *)a3[7];
    v45 = ExAllocatePoolWithTag(PagedPool, v77, 0x72615452u);
    v29 = v45;
    if ( !v27 )
      goto LABEL_63;
    if ( v45 )
    {
      memset(v45, 0, v26);
      v30 = v78;
      goto LABEL_67;
    }
    goto LABEL_107;
  }
  v46 = *((_DWORD *)FileInformation + 15);
  if ( v46 != 4 )
    goto LABEL_75;
  v47 = FileInformation + 47;
  if ( FileInformation[47] == 46 )
  {
    if ( FileInformation[48] == 46 )
      goto LABEL_107;
LABEL_75:
    v47 = FileInformation + 47;
    if ( v46 == 2 && *v47 == 46 )
      goto LABEL_107;
  }
  matched = AslpPathWildcardAllocMatchNode(v83, (PCUNICODE_STRING)v10, v47, *((_DWORD *)FileInformation + 15));
  if ( matched != -1073741197 )
  {
    if ( matched == -1073741565 || matched == -1073741638 )
      goto LABEL_107;
    if ( matched < 0 )
      goto LABEL_106;
    v49 = a3[4];
    v50 = a3[5];
    if ( v49 < v50 )
      goto LABEL_101;
    v51 = v49 + 1;
    if ( v49 + 1 <= v50 )
    {
      v7 = -2147024809;
      goto LABEL_84;
    }
    v52 = a3[6] - 1;
    if ( v52 + v51 < v51 )
    {
      v7 = -2147483637;
    }
    else
    {
      v53 = (v52 + v51) & ~v52;
      if ( ULongLongMult(a3[5], a3[3], &v80) < 0 || ULongLongMult(v53, a3[3], &v79) < 0 )
      {
        v7 = -2147483637;
      }
      else
      {
        v54 = v79;
        v55 = (void *)a3[7];
        v56 = ExAllocatePoolWithTag(PagedPool, v79, 0x72615452u);
        v57 = v56;
        if ( !v55 )
        {
          if ( v56 )
          {
            memset(v56, 0, v54);
            goto LABEL_97;
          }
          goto LABEL_99;
        }
        if ( !v56 )
          goto LABEL_99;
        memset(v56, 0, v54);
        v58 = v80;
        if ( v80 >= v54 )
          v58 = v54;
        memmove(v57, v55, v58);
        ExFreePoolWithTag(v55, 0x72615452u);
LABEL_97:
        if ( v57 )
        {
          a3[7] = (ULONGLONG)v57;
          v7 = 0;
          a3[5] = v53;
        }
        else
        {
LABEL_99:
          v7 = -2147024882;
        }
      }
      if ( !v7 )
      {
LABEL_101:
        if ( ULongLongMult(a3[3], v49, &v81) < 0 || (v59 = a3[7], v60 = (UNICODE_STRING *)(v59 + v81), v59 + v81 < v59) )
        {
          v7 = -2147483637;
        }
        else
        {
          v7 = 0;
          *v60 = v83[0];
          v60[1] = v83[1];
          ++a3[4];
        }
      }
    }
LABEL_84:
    if ( v7 < 0 )
      goto LABEL_132;
    goto LABEL_107;
  }
  v7 = RtlStringCbCopyNW(a1, 0x208uLL, *((STRSAFE_PCNZWCH *)v10 + 1), *v10);
  if ( v7 >= 0 )
  {
    if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)*v10 >> 1) - 2) == 92 )
      goto LABEL_129;
    v62 = a1;
    v61 = 260LL;
    do
    {
      if ( !*v62 )
        break;
      ++v62;
      --v61;
    }
    while ( v61 );
    v7 = v61 == 0 ? 0xC000000D : 0;
    if ( v61 )
      v63 = 260 - v61;
    else
      v63 = 0LL;
    if ( v61 )
    {
      v61 = (size_t)&a1[v63];
      v64 = 260 - v63;
      if ( 260 != v63 )
      {
        v65 = 1LL;
        v66 = (char *)L"\\" - v61;
        do
        {
          if ( !v65 )
            break;
          v67 = *(_WORD *)&v66[v61];
          if ( !v67 )
            break;
          *(_WORD *)v61 = v67;
          --v65;
          v61 += 2LL;
          --v64;
        }
        while ( v64 );
      }
      v68 = (_WORD *)(v61 - 2);
      if ( v64 )
        v68 = (_WORD *)v61;
      v7 = v64 == 0 ? 0x80000005 : 0;
      *v68 = 0;
    }
    if ( v7 >= 0 )
    {
LABEL_129:
      v7 = RtlStringCbCatNW(a1, v61, v47, *((unsigned int *)FileInformation + 15));
      if ( v7 >= 0 )
      {
        v7 = 0;
        goto LABEL_109;
      }
    }
  }
LABEL_132:
  AslLogCallPrintf(1LL);
LABEL_109:
  ExFreePoolWithTag(FileInformation, 0x74705041u);
  return (unsigned int)v7;
}
