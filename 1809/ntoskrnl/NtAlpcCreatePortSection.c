/*
 * XREFs of NtAlpcCreatePortSection @ 0x14061B620
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     AlpcpDeleteBlob @ 0x140618BF4 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140618C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSection @ 0x14061AF74 (AlpcpCreateSection.c)
 */

__int64 __fastcall NtAlpcCreatePortSection(HANDLE Handle, int a2, void *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  int v11; // ebx
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // r9
  PVOID v16; // rsi
  ULONG_PTR v17; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0xFFFBFFFF) != 0 )
    goto LABEL_2;
  if ( (a2 & 0x40000) != 0 )
  {
    if ( a3 )
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
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a5;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a6;
    *(_QWORD *)v13 = *(_QWORD *)v13;
  }
  v11 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v15 = a3;
    v16 = Object;
    v11 = AlpcpCreateSection((char *)Object, v12, 1, v15, a4, &BugCheckParameter2);
    if ( v11 >= 0 )
    {
      v17 = BugCheckParameter2;
      *a5 = *(_QWORD *)(BugCheckParameter2 + 24);
      *a6 = *(_QWORD *)(v17 + 8);
      AlpcpDereferenceBlobEx(v17, 1);
    }
    ObfDereferenceObject(v16);
  }
LABEL_17:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
