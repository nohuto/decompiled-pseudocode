/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x1408D6B80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067CC90 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x14067D050 (RtlxUnicodeStringToOemSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING Value)
{
  unsigned __int16 v2; // ax
  wchar_t *v4; // r8
  unsigned __int16 v5; // ax
  wchar_t *v6; // rdx
  ULONG v7; // eax
  unsigned __int16 v8; // bx
  int v9; // ebx
  ULONG v10; // eax
  unsigned __int16 v11; // bx
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // ebx
  _STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  int v16; // [rsp+38h] [rbp-50h]
  _STRING v17; // [rsp+40h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-38h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-28h] BYREF
  ULONG v20; // [rsp+70h] [rbp-18h]
  ULONG v21; // [rsp+74h] [rbp-14h]
  char PreviousMode; // [rsp+A0h] [rbp+18h]

  DestinationString.Buffer = 0LL;
  v17.Buffer = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    UnicodeString = *VariableName;
    v2 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v2 )
      return -1073741670;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (wchar_t *)((char *)UnicodeString.Buffer + v2);
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((unsigned __int8)Value & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    SourceString = *Value;
    v5 = _mm_cvtsi128_si32((__m128i)SourceString);
    if ( !v5 )
      return -1073741670;
    if ( ((__int64)SourceString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (wchar_t *)((char *)SourceString.Buffer + v5);
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
  v7 = RtlxUnicodeStringToOemSize(&UnicodeString);
  v8 = v7;
  v20 = v7;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v8;
  v9 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v16 = v9;
  if ( v9 >= 0 )
  {
    v10 = RtlxUnicodeStringToOemSize(&SourceString);
    v11 = v10;
    v21 = v10;
    v17.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
    if ( v17.Buffer )
    {
      v17.MaximumLength = v11;
      v12 = RtlUnicodeStringToAnsiString(&v17, &SourceString, 0);
      v16 = v12;
      if ( v12 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        v14 = HalSetEnvironmentVariable(DestinationString.Buffer, v17.Buffer);
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v17.Buffer, 0);
        return v14 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v17.Buffer, 0);
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
