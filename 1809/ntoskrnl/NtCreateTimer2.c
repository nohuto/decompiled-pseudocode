/*
 * XREFs of NtCreateTimer2 @ 0x14068B710
 * Callers:
 *     NtCreateIRTimer @ 0x140720430 (NtCreateIRTimer.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x1400FD508 (ExpExTimerAttributesAreValid.c)
 *     KeInitializeTimer2 @ 0x1400FD550 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013B020 (KeInitializeIRTimer.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x1406D0E4C (ExpCheckIRTimerAccess.c)
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int *v9; // r10
  char PreviousMode; // si
  __int64 v11; // rcx
  NTSTATUS inserted; // ecx
  _QWORD *v13; // rbx
  NTSTATUS result; // eax
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned int v16; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  if ( !ExpExTimerAttributesAreValid(Attributes) )
    return -1073741582;
  if ( v8 )
    return -1073741583;
  if ( v9 && (Attributes & 2) == 0 )
    return -1073741584;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
      v11 = (__int64)TimerHandle;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v7 = (__int64)v9;
      v16 = *(_DWORD *)v7;
    }
  }
  else if ( v9 )
  {
    v16 = *v9;
  }
  if ( (Attributes & 2) == 0 || (LOBYTE(v7) = PreviousMode, result = ExpCheckIRTimerAccess(v16, v7), result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0, PreviousMode, v15, 168, 0, 0, &Object, 0LL);
    if ( inserted >= 0 )
    {
      v13 = Object;
      if ( (Attributes & 2) != 0 )
        KeInitializeIRTimer((__int64)Object, 0LL, 0LL, (unsigned __int8 *)&v16, Attributes);
      else
        KeInitializeTimer2((__int64)Object);
      v13[17] = 0LL;
      *((_DWORD *)v13 + 40) = Attributes;
      inserted = ObInsertObjectEx(v13, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v18);
      v16 = inserted;
      if ( inserted >= 0 )
        *TimerHandle = (HANDLE)v18;
    }
    return inserted;
  }
  return result;
}
