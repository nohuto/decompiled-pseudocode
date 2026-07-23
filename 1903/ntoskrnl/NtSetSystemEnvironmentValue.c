/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x140913170
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x140653F20 (RtlUnicodeStringToAnsiString.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x14070FB40 (RtlxUnicodeStringToAnsiSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING Value)
{
  UNICODE_STRING v2; // xmm0
  wchar_t *v4; // r8
  UNICODE_STRING v5; // xmm0
  wchar_t *v6; // rdx
  ULONG v7; // eax
  unsigned __int16 v8; // bx
  int v9; // ebx
  ULONG v10; // eax
  unsigned __int16 v11; // bx
  int v12; // ebx
  struct _KTHREAD *v13; // rax
  int v14; // ebx
  _STRING DestinationString; // [rsp+28h] [rbp-70h] BYREF
  _STRING v16; // [rsp+38h] [rbp-60h] BYREF
  int v17; // [rsp+48h] [rbp-50h]
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-38h] BYREF
  ULONG v20; // [rsp+70h] [rbp-28h]
  ULONG v21; // [rsp+74h] [rbp-24h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-18h]
  KPROCESSOR_MODE PreviousMode; // [rsp+B0h] [rbp+18h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&v16.Length = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  DestinationString.Buffer = 0LL;
  v16.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v2 = *VariableName;
    UnicodeString = v2;
    if ( !v2.Length )
      return -1073741670;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (wchar_t *)((char *)UnicodeString.Buffer + v2.Length);
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((unsigned __int8)Value & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = *Value;
    SourceString = v5;
    if ( !v5.Length )
      return -1073741670;
    if ( ((__int64)SourceString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (wchar_t *)((char *)SourceString.Buffer + v5.Length);
    if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < SourceString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    UnicodeString = *VariableName;
    SourceString = *Value;
  }
  v7 = RtlxUnicodeStringToAnsiSize(&UnicodeString);
  v8 = v7;
  v20 = v7;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v8;
  v9 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v17 = v9;
  if ( v9 >= 0 )
  {
    v10 = RtlxUnicodeStringToAnsiSize(&SourceString);
    v11 = v10;
    v21 = v10;
    v16.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
    if ( v16.Buffer )
    {
      v16.MaximumLength = v11;
      v12 = RtlUnicodeStringToAnsiString(&v16, &SourceString, 0);
      v17 = v12;
      if ( v12 >= 0 )
      {
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        v14 = HalSetEnvironmentVariable(DestinationString.Buffer, v16.Buffer);
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v16.Buffer, 0);
        return v14 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v16.Buffer, 0);
        return v12;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return -1073741670;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return v9;
  }
}
