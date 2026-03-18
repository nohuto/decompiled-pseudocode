/*
 * XREFs of NtExtendSection @ 0x140624D10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MmExtendSection @ 0x140624DB0 (MmExtendSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  NTSTATUS v8; // [rsp+60h] [rbp+18h]
  LONGLONG QuadPart; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)NewMaximumSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewMaximumSize < 0x7FFFFFFF0000LL )
      v6 = (__int64)NewMaximumSize;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    QuadPart = NewMaximumSize->QuadPart;
  }
  else
  {
    QuadPart = NewMaximumSize->QuadPart;
  }
  result = ObReferenceObjectByHandle(SectionHandle, 0x10u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = MmExtendSection(Object, &QuadPart, 0LL);
    ObfDereferenceObject(Object);
    NewMaximumSize->QuadPart = QuadPart;
    return v8;
  }
  return result;
}
