/*
 * XREFs of NtAlpcCreatePortSection @ 0x14068A860
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x14064BD0C (AlpcpDeleteBlob.c)
 *     AlpcpCreateSection @ 0x14068A9E8 (AlpcpCreateSection.c)
 */

__int64 __fastcall NtAlpcCreatePortSection(HANDLE Handle, int a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS Section; // ebx
  PVOID v13; // rsi
  ULONG_PTR v14; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0xFFFBFFFF) != 0 || (a2 & 0x40000) != 0 && a3 )
  {
    Section = -1073741811;
  }
  else
  {
    if ( PreviousMode )
    {
      v10 = 0x7FFFFFFF0000LL;
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a5;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a6;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    Section = ObReferenceObjectByHandle(
                Handle,
                1u,
                AlpcPortObjectType,
                KeGetCurrentThread()->PreviousMode,
                &Object,
                0LL);
    if ( Section >= 0 )
    {
      v13 = Object;
      Section = AlpcpCreateSection(Object, a4, (__int64)&BugCheckParameter2);
      if ( Section >= 0 )
      {
        v14 = BugCheckParameter2;
        *a5 = *(_QWORD *)(BugCheckParameter2 + 24);
        *a6 = *(_QWORD *)(v14 + 8);
        AlpcpDereferenceBlobEx(v14, 1);
      }
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)Section;
}
