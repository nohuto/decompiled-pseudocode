/*
 * XREFs of LdrpSearchPath @ 0x18002A61C
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x180029BD8 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18002A580 (LdrpAllocateUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1800411E0 (RtlCopyUnicodeString.c)
 *     LdrpComputeLazyDllPath @ 0x180054250 (LdrpComputeLazyDllPath.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     LdrpFreeUnicodeString @ 0x1800713F4 (LdrpFreeUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x1800714F8 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     EtwEventWriteNoRegistration @ 0x180086E80 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E0668 (RtlpLookupSafeCurDirList.c)
 */

__int64 __fastcall LdrpSearchPath(
        const UNICODE_STRING *a1,
        __int64 a2,
        char a3,
        wchar_t **a4,
        _WORD *a5,
        _UNICODE_STRING *a6,
        UNICODE_STRING *a7,
        bool *a8,
        __int64 a9)
{
  unsigned int v9; // ebx
  const UNICODE_STRING *v13; // rdi
  PCWCH *v14; // r13
  int UnicodeString; // edi
  unsigned int v16; // r9d
  wchar_t *v17; // rdx
  wchar_t *v18; // r8
  wchar_t *v19; // rcx
  int v20; // r10d
  unsigned int v21; // eax
  wchar_t *v22; // rax
  wchar_t *Buffer; // rdx
  wchar_t *v24; // r14
  wchar_t *v25; // rsi
  wchar_t *v26; // rax
  bool v27; // r15
  wchar_t v28; // cx
  int v29; // eax
  wchar_t **v30; // r15
  _DWORD *v31; // r14
  _QWORD *v33; // rax
  _QWORD *v34; // r13
  _QWORD *v35; // r15
  PCWCH *v36; // r10
  unsigned __int16 v37; // cx
  unsigned __int16 v38; // ax
  _UNICODE_STRING *Heap; // rax
  int Length; // eax
  const EVENT_DESCRIPTOR *v41; // rdx
  _DWORD *v42; // rdx
  int v43; // r10d
  _QWORD *v44; // r8
  unsigned __int16 v46; // [rsp+32h] [rbp-97h]
  _UNICODE_STRING *v48; // [rsp+48h] [rbp-81h]
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-71h] BYREF
  _UNICODE_STRING *v50; // [rsp+68h] [rbp-61h]
  wchar_t *v51; // [rsp+70h] [rbp-59h]
  wchar_t **v52; // [rsp+78h] [rbp-51h]
  bool *v53; // [rsp+80h] [rbp-49h]
  __int64 v54; // [rsp+88h] [rbp-41h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  PCWCH v56; // [rsp+A0h] [rbp-29h]
  int v57; // [rsp+A8h] [rbp-21h]
  int v58; // [rsp+ACh] [rbp-1Dh]
  wchar_t *v59; // [rsp+B0h] [rbp-19h]
  int v60; // [rsp+B8h] [rbp-11h]
  int v61; // [rsp+BCh] [rbp-Dh]

  v9 = 0;
  v50 = a6;
  v13 = a1;
  v14 = 0LL;
  v53 = a8;
  v54 = a9;
  v52 = a4;
  v48 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1225,
      (unsigned int)"LdrpSearchPath",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( !*(_QWORD *)a2 )
  {
    UnicodeString = LdrpComputeLazyDllPath(a2);
    if ( UnicodeString < 0 )
      goto LABEL_49;
    v13 = a1;
  }
  v16 = 0;
  if ( a4 )
  {
    v17 = *a4;
    if ( *a4 )
    {
      v19 = a4[1];
      v18 = *(wchar_t **)(a2 + 16);
      goto LABEL_11;
    }
  }
  v18 = *(wchar_t **)(a2 + 16);
  v17 = v18;
  if ( v18 )
    goto LABEL_10;
  do
  {
    v17 = *(wchar_t **)a2;
LABEL_10:
    v19 = v17;
LABEL_11:
    if ( *v19 )
    {
      do
      {
        v20 = (int)v19;
        while ( *v19 && *v19 != 59 )
          ++v19;
        v21 = (_DWORD)v19 - v20;
        if ( (int)v19 - v20 <= v16 )
          v21 = v16;
        v16 = v21;
        v22 = v19 + 1;
        if ( *v19 != 59 )
          v22 = v19;
        v19 = v22;
      }
      while ( *v22 );
    }
  }
  while ( v17 == v18 && !a3 );
  UnicodeString = LdrpAllocateUnicodeString((__int64)&Destination, v13->Length + v16 + 2);
  if ( UnicodeString < 0 )
    goto LABEL_49;
  Buffer = Destination.Buffer;
  v51 = Destination.Buffer;
  if ( a4 && (v24 = *a4) != 0LL )
  {
    v25 = a4[1];
  }
  else
  {
    v24 = *(wchar_t **)(a2 + 16);
    if ( !v24 )
      v24 = *(wchar_t **)a2;
    v25 = v24;
  }
  while ( 1 )
  {
    while ( *v25 )
    {
      if ( *v25 == 59 )
      {
        ++v25;
      }
      else
      {
        v26 = Buffer;
        v27 = v25 == *(wchar_t **)(a2 + 8);
        while ( 1 )
        {
          v28 = *v25;
          if ( !*v25 )
            break;
          if ( v28 == 59 )
            goto LABEL_34;
          *v26++ = v28;
          ++v25;
        }
        if ( *v25 == 59 )
LABEL_34:
          ++v25;
        if ( v26 != Buffer )
        {
          if ( *(v26 - 1) != 92 && *(v26 - 1) != 47 )
          {
            *v26 = 92;
            LOWORD(v26) = (_WORD)v26 + 2;
          }
          Destination.Length = (_WORD)v26 - (_WORD)Buffer;
          RtlAppendUnicodeStringToString(&Destination, a1);
          v29 = LdrpResolveDllName(&Destination.Length, (__int64)a5, v50, a7, 0);
          UnicodeString = v29;
          if ( v27 )
          {
            if ( v29 < 0 )
              goto LABEL_53;
            v33 = (_QWORD *)RtlpLookupSafeCurDirList();
            v34 = v33;
            if ( v33 )
            {
              v35 = (_QWORD *)*v33;
              if ( (_QWORD *)*v33 != v33 )
              {
                v36 = (PCWCH *)a7;
                v37 = a7->Length >> 1;
                v46 = v37;
                do
                {
                  v38 = *((_WORD *)v35 + 8) >> 1;
                  if ( v37 > v38 )
                  {
                    if ( !RtlCompareUnicodeStrings(v36[1], v38, (PCWCH)v35[3], v38, 1u) )
                    {
                      v14 = (PCWCH *)v48;
                      goto LABEL_40;
                    }
                    v37 = v46;
                    v36 = (PCWCH *)a7;
                  }
                  v35 = (_QWORD *)*v35;
                }
                while ( v35 != v34 );
              }
            }
            Heap = (_UNICODE_STRING *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, a7->Length + 18LL);
            v48 = Heap;
            v14 = (PCWCH *)Heap;
            if ( Heap )
            {
              Heap->Length = 0;
              Heap->MaximumLength = a7->Length;
              Heap->Buffer = &Heap[1].Length;
              RtlCopyUnicodeString(Heap, a7);
              v14[1][(unsigned __int64)a7->Length >> 1] = 0;
            }
            UnicodeString = -1073741515;
          }
LABEL_40:
          if ( UnicodeString >= 0 )
            goto LABEL_41;
LABEL_53:
          if ( UnicodeString != -1073741515
            && UnicodeString != -1073741790
            && UnicodeString != -1073741757
            && UnicodeString != -1073741715 )
          {
            goto LABEL_41;
          }
          Buffer = v51;
          *a5 = 0;
        }
      }
    }
    if ( v24 != *(wchar_t **)(a2 + 16) || a3 )
      break;
    v24 = *(wchar_t **)a2;
    v25 = *(wchar_t **)a2;
  }
  UnicodeString = -1073741515;
LABEL_41:
  if ( v14 )
  {
    if ( UnicodeString < 0
      || RtlCompareUnicodeStrings(
           a7->Buffer,
           (unsigned __int64)a7->Length >> 1,
           v14[1],
           (unsigned __int64)*(unsigned __int16 *)v14 >> 1,
           1u) )
    {
      UserData.Reserved = 0;
      v58 = 0;
      UserData.Ptr = *(_QWORD *)(LdrpImageEntry + 80);
      UserData.Size = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v56 = v14[1];
      v57 = *(unsigned __int16 *)v14 + 2;
      if ( UnicodeString >= 0 )
      {
        v59 = a7->Buffer;
        Length = a7->Length;
        v61 = 0;
        v60 = Length + 2;
      }
      v41 = (const EVENT_DESCRIPTOR *)&CurDirDllLoadFailureWarning;
      if ( UnicodeString < 0 )
        v41 = &CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration(&UserLoaderGuid, v41, (UnicodeString >> 31) + 3, &UserData);
    }
    RtlFreeHeap(LdrpHeap, 0, v14);
  }
  LdrpFreeUnicodeString(&Destination);
  if ( UnicodeString >= 0 )
  {
    v30 = v52;
    if ( v52 )
    {
      *v52 = v24;
      v30[1] = v25;
    }
    if ( v53 )
      *v53 = v24 == *(wchar_t **)(a2 + 16);
  }
  v31 = (_DWORD *)v54;
  if ( v54 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
  {
    v42 = (_DWORD *)(a2 + 40);
    v43 = 0;
    if ( *(_WORD *)(a2 + 112) )
    {
      v44 = (_QWORD *)(a2 + 64);
      do
      {
        if ( (unsigned __int64)v25 <= *v44 )
          break;
        ++v9;
        v43 |= 16 << *v42;
        ++v44;
        ++v42;
      }
      while ( v9 < *(unsigned __int16 *)(a2 + 112) );
    }
    *v31 = v43;
  }
LABEL_49:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1543,
      (unsigned int)"LdrpSearchPath",
      4,
      "Status: 0x%08lx\n",
      UnicodeString);
  return (unsigned int)UnicodeString;
}
