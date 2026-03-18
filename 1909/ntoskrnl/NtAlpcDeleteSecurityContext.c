/*
 * XREFs of NtAlpcDeleteSecurityContext @ 0x14065ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x14065F4F0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteBlob @ 0x14065F99C (AlpcpDeleteBlob.c)
 */

__int64 __fastcall NtAlpcDeleteSecurityContext(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  PVOID v6; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle(*((_QWORD *)Object + 2) + 40LL, a3, &AlpcSecurityType);
      v8 = v7;
      if ( v7 )
      {
        if ( v6 == *(PVOID *)(v7 + 24) )
        {
          if ( (unsigned __int8)AlpcpDeleteBlob(v7) )
            AlpcpDereferenceBlobEx(v8);
          else
            v5 = -1073741738;
        }
        else
        {
          v5 = -1073741790;
        }
        AlpcpDereferenceBlobEx(v8);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
