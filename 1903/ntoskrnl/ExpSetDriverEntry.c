/*
 * XREFs of ExpSetDriverEntry @ 0x14090F718
 * Callers:
 *     NtAddDriverEntry @ 0x140910E50 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x140911F70 (NtModifyDriverEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x1401C3890 (ZwTranslateFilePath.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x14085B3D4 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14085B6C0 (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x14090EF08 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x140910C54 (ExpVerifyFilePath.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, _DWORD *a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  unsigned int v5; // r14d
  _FILE_PATH *v6; // r15
  _FILE_PATH *v7; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v9; // rax
  unsigned int v10; // ecx
  SIZE_T v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  int EnvironmentVariable; // ebx
  __int64 v19; // rax
  char *v20; // rsi
  int v21; // eax
  __int64 v22; // r8
  size_t v23; // r13
  _FILE_PATH *v24; // rax
  _FILE_PATH *v25; // rbx
  ULONG Length; // eax
  size_t v27; // rbx
  PVOID v28; // rax
  size_t v29; // r8
  _WORD *v30; // rbx
  struct _KTHREAD *v31; // rax
  ULONG v32; // [rsp+34h] [rbp-A4h] BYREF
  ULONG OutputFilePathLength; // [rsp+38h] [rbp-A0h] BYREF
  _DWORD *v34; // [rsp+40h] [rbp-98h]
  size_t Size; // [rsp+48h] [rbp-90h]
  _FILE_PATH *v36; // [rsp+50h] [rbp-88h]
  int v38; // [rsp+5Ch] [rbp-7Ch]
  PVOID v39; // [rsp+60h] [rbp-78h]
  PVOID P; // [rsp+68h] [rbp-70h]
  unsigned int v41; // [rsp+70h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  wchar_t Dst[12]; // [rsp+90h] [rbp-48h] BYREF

  v3 = (_DWORD *)a3;
  v34 = (_DWORD *)a3;
  v38 = a1;
  v39 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)(a2 + 1);
    if ( (unsigned __int64)(a2 + 1) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v9;
    v41 = *(_DWORD *)v9;
  }
  else
  {
    v10 = a2[1];
    v41 = v10;
  }
  if ( v10 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v10;
    v13 = (unsigned __int64)a2 + v10;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      v14 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v12 = v10;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x72766E45u);
  v16 = PoolWithTag;
  v39 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v12);
  v17 = (unsigned __int64)v16 + v12;
  if ( *v16 == 1 )
  {
    if ( !v38 && v16[2] > 0xFFFFu
      || (v19 = (unsigned int)v16[3], (v19 & 1) != 0)
      || (v16[4] & 3) != 0
      || (v20 = (char *)v16 + v19, v21 = ExpSafeWcslen((_DWORD *)((char *)v16 + v19), v17), v21 == -1) )
    {
      EnvironmentVariable = -1073741811;
    }
    else
    {
      LODWORD(Size) = 2 * v21 + 2;
      v6 = (_FILE_PATH *)((char *)v16 + v22);
      EnvironmentVariable = ExpVerifyFilePath((char *)v16 + v22);
      if ( EnvironmentVariable >= 0 )
      {
        v23 = (unsigned int)Size;
        if ( &v20[(unsigned int)Size] > (char *)v6 )
        {
          EnvironmentVariable = -1073741811;
LABEL_63:
          v7 = v36;
          goto LABEL_64;
        }
        if ( v6->Type == 4 )
        {
          Length = v6->Length;
          v36 = v6;
        }
        else
        {
          OutputFilePathLength = 0;
          EnvironmentVariable = ZwTranslateFilePath(v6, 4u, 0LL, (ULONG)&OutputFilePathLength);
          if ( EnvironmentVariable != -1073741789 )
            goto LABEL_63;
          v24 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
          v25 = v24;
          v36 = v24;
          if ( !v24 )
          {
            EnvironmentVariable = -1073741670;
            v7 = 0LL;
            goto LABEL_64;
          }
          memset(v24, 0, OutputFilePathLength);
          v32 = OutputFilePathLength;
          EnvironmentVariable = ZwTranslateFilePath(v6, 4u, v25, (ULONG)&v32);
          if ( EnvironmentVariable < 0 )
            goto LABEL_63;
          Length = OutputFilePathLength;
        }
        OutputFilePathLength = Length - 12;
        LODWORD(Size) = Size + 6 + Length - 12;
        v27 = (unsigned int)Size;
        v28 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72766E45u);
        P = v28;
        if ( v28 )
        {
          v29 = v27;
          v30 = v28;
          memset(v28, 0, v29);
          v30[2] = OutputFilePathLength;
          memmove(v30 + 3, v20, v23);
          memmove((char *)v30 + v23 + 6, v36->FilePath, OutputFilePathLength);
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
          if ( v38 )
          {
            v5 = 0;
            while ( 1 )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04x", v5);
              v32 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v32, 0LL);
              if ( EnvironmentVariable == -1073741568 && ((2 * ((v5 | (2 * v5)) & 0xC4444444)) & v5) != 0 )
              {
                swprintf_s(Dst, 0xBuLL, L"Driver%04X", v5);
                v32 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v32, 0LL);
              }
              if ( EnvironmentVariable == -1073741568 )
              {
                v16 = v39;
                goto LABEL_60;
              }
              if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                break;
              if ( ++v5 > 0xFFFF )
              {
                EnvironmentVariable = -1073741670;
                break;
              }
            }
            v16 = v39;
          }
          else
          {
            v16 = v39;
            v5 = *((_DWORD *)v39 + 2);
            swprintf_s(Dst, 0xBuLL, L"Driver%04X", v5);
            v32 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v32, 0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((v16[2] | (2 * v16[2])) & 0xC4444444)) & v16[2]) != 0 )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04x");
              v32 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v32, 0LL);
            }
            if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
LABEL_60:
              EnvironmentVariable = IoSetEnvironmentVariableEx(
                                      Dst,
                                      (__int64)&EfiDriverVariablesGuid,
                                      (__int64)P,
                                      Size,
                                      1);
          }
          ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
          KeLeaveCriticalRegion();
        }
        else
        {
          EnvironmentVariable = -1073741670;
        }
        goto LABEL_63;
      }
    }
LABEL_64:
    v3 = v34;
    goto LABEL_65;
  }
  EnvironmentVariable = -1073741811;
LABEL_65:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v16, 0);
  if ( v38 && v3 && EnvironmentVariable >= 0 )
    *v3 = v5;
  return (unsigned int)EnvironmentVariable;
}
