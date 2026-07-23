/*
 * XREFs of NtQueryBootOptions @ 0x1408D5C10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224FC (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  __int64 v5; // rcx
  ULONG v6; // ebx
  NTSTATUS v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // eax
  int v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  ULONG v14[2]; // [rsp+34h] [rbp-44h] BYREF
  ULONG v15; // [rsp+3Ch] [rbp-3Ch] BYREF
  ULONG v16; // [rsp+40h] [rbp-38h] BYREF
  ULONG v17; // [rsp+44h] [rbp-34h]
  char PreviousMode; // [rsp+90h] [rbp+18h]

  v14[0] = 0;
  v15 = 0;
  v16 = 0;
  if ( dword_14040ADF0 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BootOptionsLength < 0x7FFFFFFF0000LL )
      v5 = (__int64)BootOptionsLength;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v6 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v17 = v6;
    if ( v6 )
      ProbeForWrite(BootOptions, v6, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v6 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v17 = v6;
  }
  if ( v6 >= 0x16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v13 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            L"Timeout",
                            (__int64)&EfiBootVariablesGuid,
                            (__int64)v14,
                            &v13,
                            0LL);
    v7 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v14[0] = -2;
LABEL_24:
      v13 = 4;
      v11 = IoGetEnvironmentVariableEx(L"BootCurrent", (__int64)&EfiBootVariablesGuid, (__int64)&v15, &v13, 0LL);
      v7 = v11;
      if ( v11 == -1073741789 || v11 == -1073741568 )
      {
        v15 = -2;
LABEL_30:
        v13 = 2;
        v12 = IoGetEnvironmentVariableEx(L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)&v16, &v13, 0LL);
        v7 = v12;
        if ( v12 == -1073741789 || v12 == -1073741568 )
        {
          v16 = -2;
          v7 = 0;
        }
        else if ( !v12 && v13 > 2 )
        {
          v16 = (unsigned __int16)v16;
        }
        goto LABEL_36;
      }
      if ( !v11 )
      {
        if ( v13 > 2 )
          v15 = (unsigned __int16)v15;
        goto LABEL_30;
      }
LABEL_36:
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_37;
    }
    if ( EnvironmentVariable != -1073741568 )
    {
      if ( EnvironmentVariable )
        goto LABEL_36;
      if ( v13 <= 2 )
      {
LABEL_21:
        if ( v14[0] != 0xFFFF )
          goto LABEL_24;
        goto LABEL_22;
      }
      v10 = v14[0];
      if ( v14[0] != -1 )
      {
        if ( v14[0] > 0xFFFE )
          v10 = 65534;
        v14[0] = v10;
        goto LABEL_21;
      }
    }
LABEL_22:
    v14[0] = -1;
    goto LABEL_24;
  }
  v7 = -1073741789;
LABEL_37:
  if ( !v7 )
  {
    if ( BootOptions )
    {
      BootOptions->Version = 1;
      BootOptions->Length = 22;
      BootOptions->Timeout = v14[0];
      BootOptions->CurrentBootEntryId = v15;
      BootOptions->NextBootEntryId = v16;
      BootOptions->HeadlessRedirection[0] = 0;
    }
  }
  *BootOptionsLength = 22;
  return v7;
}
