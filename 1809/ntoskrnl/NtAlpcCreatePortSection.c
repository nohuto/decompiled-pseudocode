/*
 * XREFs of NtAlpcCreatePortSection @ 0x14061C620
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpDeleteBlob @ 0x140619BF4 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSection @ 0x14061BF74 (AlpcpCreateSection.c)
 */

NTSTATUS __cdecl NtAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  NTSTATUS v11; // ebx
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  HANDLE v15; // r9
  PVOID v16; // rsi
  ULONG_PTR v17; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0xFFFBFFFF) != 0 )
    goto LABEL_2;
  if ( (Flags & 0x40000) != 0 )
  {
    if ( SectionHandle )
    {
LABEL_2:
      v11 = -1073741811;
      goto LABEL_17;
    }
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)AlpcSectionHandle < 0x7FFFFFFF0000LL )
      v14 = (__int64)AlpcSectionHandle;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    if ( (unsigned __int64)ActualSectionSize < 0x7FFFFFFF0000LL )
      v13 = (__int64)ActualSectionSize;
    *(_QWORD *)v13 = *(_QWORD *)v13;
  }
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v15 = SectionHandle;
    v16 = Object;
    v11 = AlpcpCreateSection((char *)Object, v12, 1, v15, SectionSize, &BugCheckParameter2);
    if ( v11 >= 0 )
    {
      v17 = BugCheckParameter2;
      *AlpcSectionHandle = *(HANDLE *)(BugCheckParameter2 + 24);
      *ActualSectionSize = *(_QWORD *)(v17 + 8);
      AlpcpDereferenceBlobEx(v17, 1);
    }
    ObfDereferenceObject(v16);
  }
LABEL_17:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v11;
}
