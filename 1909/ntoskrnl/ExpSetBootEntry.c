/*
 * XREFs of ExpSetBootEntry @ 0x14090E998
 * Callers:
 *     NtAddBootEntry @ 0x140910880 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x1409119A0 (NtModifyBootEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     strcmp @ 0x1401A1E20 (strcmp.c)
 *     swprintf_s @ 0x1401A52F0 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x1401C4410 (ZwTranslateFilePath.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x14085AAD4 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14085ADC0 (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x14090E968 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1409106B4 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x140910810 (ExpVerifyWindowsOsOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned int i; // r15d
  PVOID v5; // r12
  PVOID v6; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v8; // rax
  unsigned int v9; // ebx
  SIZE_T v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  char *PoolWithTag; // rax
  char *v15; // rdi
  unsigned __int64 v16; // r14
  int v17; // esi
  int EnvironmentVariable; // ebx
  __int64 v19; // rsi
  _FILE_PATH *v20; // r13
  char *v21; // rsi
  int v22; // eax
  unsigned int v23; // r14d
  _FILE_PATH *v24; // rax
  _FILE_PATH *v25; // rsi
  ULONG Length; // eax
  ULONG v27; // eax
  ULONG v28; // esi
  size_t v29; // rbx
  PVOID v30; // rax
  void *v31; // r14
  size_t v32; // r8
  _WORD *v33; // rbx
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // r14
  char *v37; // rbx
  char *v38; // r14
  _FILE_PATH *v39; // r8
  struct _KTHREAD *v40; // rax
  ULONG OutputFilePathLength; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v43; // [rsp+3Ch] [rbp-CCh] BYREF
  PVOID v44; // [rsp+40h] [rbp-C8h]
  PFILE_PATH InputFilePath; // [rsp+50h] [rbp-B8h]
  PVOID P; // [rsp+58h] [rbp-B0h]
  ULONG v47; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int Size; // [rsp+64h] [rbp-A4h]
  int v50; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v51; // [rsp+70h] [rbp-98h]
  PVOID v52; // [rsp+78h] [rbp-90h]
  unsigned int v53; // [rsp+80h] [rbp-88h]
  char *v54; // [rsp+88h] [rbp-80h]
  void *Src; // [rsp+90h] [rbp-78h]
  _DWORD *v56; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-58h]
  wchar_t Dst[12]; // [rsp+B8h] [rbp-50h] BYREF

  v56 = (_DWORD *)a3;
  v52 = 0LL;
  i = 0;
  v5 = 0LL;
  InputFilePath = 0LL;
  v6 = 0LL;
  P = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)(a2 + 1);
    if ( (unsigned __int64)(a2 + 1) >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(_DWORD *)v8;
    v53 = *(_DWORD *)v8;
  }
  else
  {
    v9 = a2[1];
    v53 = v9;
  }
  if ( v9 < 0x1C )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = v9;
    v12 = (unsigned __int64)a2 + v9;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      v13 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
      v9 = v53;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v11 = v9;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
  v15 = PoolWithTag;
  v52 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v11);
  v16 = (unsigned __int64)&v15[v11];
  v17 = a1;
  if ( *(_DWORD *)v15 != 1
    || !a1 && *((_DWORD *)v15 + 2) > 0xFFFFu
    || (*((_DWORD *)v15 + 3) &= 0x13u, Size = *((_DWORD *)v15 + 4), (Size & 1) != 0)
    || (v51 = *((_DWORD *)v15 + 5), (v51 & 3) != 0) )
  {
    EnvironmentVariable = -1073741811;
LABEL_93:
    v31 = v44;
    goto LABEL_94;
  }
  v19 = *((unsigned int *)v15 + 6);
  if ( (unsigned int)v19 > v9 || (v54 = &v15[v19 + 28], (unsigned __int64)v54 >= v16) )
  {
    EnvironmentVariable = -1073741811;
    goto LABEL_92;
  }
  if ( (unsigned int)v19 >= 8 && !strcmp(v15 + 28, "WINDOWS") )
  {
    if ( (unsigned int)v19 <= 0x14 )
    {
      EnvironmentVariable = -1073741811;
LABEL_91:
      v5 = InputFilePath;
      goto LABEL_92;
    }
    EnvironmentVariable = ExpVerifyWindowsOsOptions(v15 + 28, (unsigned int)v19);
    if ( EnvironmentVariable < 0 )
      goto LABEL_91;
    v50 = 1;
    v20 = (_FILE_PATH *)&v15[*((unsigned int *)v15 + 11) + 28];
  }
  else
  {
    v50 = 0;
    v20 = 0LL;
  }
  v21 = &v15[Size];
  Src = v21;
  v22 = ExpSafeWcslen(v21, v16);
  if ( v22 == -1 )
  {
    EnvironmentVariable = -1073741811;
    v6 = P;
    v5 = P;
LABEL_92:
    v17 = a1;
    goto LABEL_93;
  }
  Size = 2 * v22 + 2;
  InputFilePath = (PFILE_PATH)&v15[v51];
  EnvironmentVariable = ExpVerifyFilePath(InputFilePath);
  if ( EnvironmentVariable < 0 )
    goto LABEL_90;
  if ( v54 > v21 || (v23 = Size, &v21[Size] > (char *)InputFilePath) )
  {
    EnvironmentVariable = -1073741811;
    goto LABEL_90;
  }
  if ( InputFilePath->Type == 4 )
  {
    Length = InputFilePath->Length;
    P = InputFilePath;
  }
  else
  {
    OutputFilePathLength = 0;
    EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, 0LL, (ULONG)&OutputFilePathLength);
    if ( EnvironmentVariable != -1073741789 )
      goto LABEL_90;
    v24 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
    v25 = v24;
    P = v24;
    if ( !v24 )
    {
      EnvironmentVariable = -1073741670;
      v6 = 0LL;
      goto LABEL_91;
    }
    memset(v24, 0, OutputFilePathLength);
    v43 = OutputFilePathLength;
    EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, v25, (ULONG)&v43);
    if ( EnvironmentVariable < 0 )
    {
      v6 = v25;
      goto LABEL_91;
    }
    Length = OutputFilePathLength;
  }
  v27 = Length - 12;
  OutputFilePathLength = v27;
  v47 = 0;
  if ( !v50 || v20->Type == 4 )
  {
    v28 = *((_DWORD *)v15 + 6);
  }
  else
  {
    EnvironmentVariable = ZwTranslateFilePath(v20, 4u, 0LL, (ULONG)&v47);
    if ( EnvironmentVariable != -1073741789 )
      goto LABEL_90;
    v28 = v47 + *((_DWORD *)v15 + 6) - v20->Length;
    v27 = OutputFilePathLength;
  }
  v51 = v23 + 6 + v28 + v27;
  v29 = v51;
  v30 = ExAllocatePoolWithTag(NonPagedPoolNx, v51, 0x72766E45u);
  v31 = v30;
  v44 = v30;
  if ( v30 )
  {
    v32 = v29;
    v33 = v30;
    memset(v30, 0, v32);
    *(_DWORD *)v33 = 0;
    v34 = *((_DWORD *)v15 + 3);
    v35 = 0;
    if ( (v34 & 1) != 0 )
    {
      *(_DWORD *)v33 = 1;
      v34 = *((_DWORD *)v15 + 3);
      v35 = 1;
    }
    if ( (v34 & 0x10) != 0 )
      *(_DWORD *)v33 = v35 | 8;
    v33[2] = OutputFilePathLength;
    v36 = Size;
    memmove(v33 + 3, Src, Size);
    v37 = (char *)v33 + v36 + 6;
    memmove(v37, (char *)P + 12, OutputFilePathLength);
    v38 = &v37[OutputFilePathLength];
    if ( !v50 || v20->Type == 4 )
    {
      memmove(&v37[OutputFilePathLength], v15 + 28, v28);
      goto LABEL_67;
    }
    memmove(&v37[OutputFilePathLength], v15 + 28, *((unsigned int *)v15 + 11));
    *((_DWORD *)v38 + 3) = v28;
    v39 = (_FILE_PATH *)&v38[*((unsigned int *)v15 + 11)];
    v43 = v47;
    EnvironmentVariable = ZwTranslateFilePath(v20, 4u, v39, (ULONG)&v47);
    if ( !EnvironmentVariable )
    {
LABEL_67:
      v40 = KeGetCurrentThread();
      --v40->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      if ( a1 )
      {
        for ( i = 0; i <= 0xFFFF; ++i )
        {
          swprintf_s(Dst, 9uLL, L"Boot%04x", i);
          v43 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v43, 0LL);
          if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04X", i);
            v43 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v43, 0LL);
          }
          if ( EnvironmentVariable == -1073741568 )
            break;
          if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
          {
            v15 = (char *)v52;
            goto LABEL_78;
          }
        }
        v15 = (char *)v52;
        if ( i <= 0xFFFF )
          goto LABEL_86;
        EnvironmentVariable = -1073741670;
      }
      else
      {
        v15 = (char *)v52;
        i = *((_DWORD *)v52 + 2);
        swprintf_s(Dst, 9uLL, L"Boot%04X", i);
        v43 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v43, 0LL);
        if ( EnvironmentVariable == -1073741568
          && ((2 * ((*((_DWORD *)v15 + 2) | (2 * *((_DWORD *)v15 + 2))) & 0xC4444444)) & *((_DWORD *)v15 + 2)) != 0 )
        {
          swprintf_s(Dst, 9uLL, L"Boot%04x");
          v43 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v43, 0LL);
        }
        if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
        {
LABEL_86:
          v31 = v44;
          EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, (__int64)v44, v51, 1);
          goto LABEL_79;
        }
      }
LABEL_78:
      v31 = v44;
LABEL_79:
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegion();
      goto LABEL_57;
    }
LABEL_90:
    v6 = P;
    goto LABEL_91;
  }
  EnvironmentVariable = -1073741670;
LABEL_57:
  v6 = P;
  v5 = InputFilePath;
  v17 = a1;
LABEL_94:
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  if ( v6 && v6 != v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v17 && v56 && EnvironmentVariable >= 0 )
    *v56 = i;
  return (unsigned int)EnvironmentVariable;
}
