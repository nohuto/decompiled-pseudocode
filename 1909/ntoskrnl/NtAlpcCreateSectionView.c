/*
 * XREFs of NtAlpcCreateSectionView @ 0x14065CF30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSectionView @ 0x14065D26C (AlpcpCreateSectionView.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x14065F4F0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x14065F968 (AlpcpDeleteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // di
  __int64 v8; // rcx
  int SectionView; // ebx
  PVOID v10; // r15
  void *v11; // r14
  ULONG_PTR v12; // rdi
  PVOID Object[6]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  memset(&Object[2], 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_22;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ViewAttributes < 0x7FFFFFFF0000LL )
      v8 = (__int64)ViewAttributes;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 31) = *(_BYTE *)(v8 + 31);
    *(_OWORD *)&Object[2] = *(_OWORD *)&ViewAttributes->Flags;
    *(_OWORD *)&Object[4] = *(_OWORD *)&ViewAttributes->ViewBase;
  }
  else
  {
    *(_OWORD *)&Object[2] = *(_OWORD *)&ViewAttributes->Flags;
    *(_OWORD *)&Object[4] = *(_OWORD *)&ViewAttributes->ViewBase;
  }
  if ( LODWORD(Object[2]) || !Object[5] || Object[4] )
  {
LABEL_22:
    SectionView = -1073741811;
  }
  else
  {
    SectionView = ObReferenceObjectByHandle(
                    PortHandle,
                    1u,
                    AlpcPortObjectType,
                    KeGetCurrentThread()->PreviousMode,
                    Object,
                    0LL);
    if ( SectionView >= 0 )
    {
      v10 = Object[0];
      v11 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, Object[3], &AlpcSectionType);
      Object[1] = v11;
      if ( v11 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v11, (ULONG_PTR)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v12 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v12 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v12);
          }
          else
          {
            v12 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v12 + 48);
          }
          AlpcpDereferenceBlobEx(v12);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v11);
      }
      else
      {
        SectionView = -1073741816;
      }
      ObfDereferenceObject(v10);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return SectionView;
}
