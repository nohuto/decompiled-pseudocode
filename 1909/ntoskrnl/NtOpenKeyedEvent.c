/*
 * XREFs of NtOpenKeyedEvent @ 0x140917F20
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtOpenKeyedEvent(PHANDLE OutHandle, ACCESS_MASK AccessMask, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  NTSTATUS result; // eax
  void *v7; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)OutHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *OutHandle = 0LL;
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)ExpKeyedEventObjectType,
             PreviousMode,
             0LL,
             AccessMask,
             0LL,
             &v7);
  if ( result >= 0 )
    *OutHandle = v7;
  return result;
}
