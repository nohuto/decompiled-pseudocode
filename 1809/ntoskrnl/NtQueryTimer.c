/*
 * XREFs of NtQueryTimer @ 0x1408D0C40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeQueryTimerDueTime @ 0x1402907B8 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG Length,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  PULONG v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rdi
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  if ( TimerInformationClass )
    return -1073741821;
  if ( Length != 16 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)TimerInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerInformation < 0x7FFFFFFF0000LL )
      v10 = (__int64)TimerInformation;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 15) = *(_BYTE *)(v10 + 15);
    v11 = ResultLength;
    if ( ResultLength )
    {
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ResultLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = ResultLength;
  }
  v14 = ObReferenceObjectByHandle(TimerHandle, 1u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v15 = *((_DWORD *)Object + 1);
    v16 = MEMORY[0xFFFFF78000000008];
    v17 = KeQueryTimerDueTime((__int64)Object, v12, v13) - v16;
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *((_BYTE *)TimerInformation + 8) = v15;
      *(_QWORD *)TimerInformation = v17;
      if ( v11 )
        *v11 = 16;
    }
    else
    {
      *((_BYTE *)TimerInformation + 8) = v15;
      *(_QWORD *)TimerInformation = v17;
      if ( v11 )
        *v11 = 16;
    }
  }
  return v14;
}
