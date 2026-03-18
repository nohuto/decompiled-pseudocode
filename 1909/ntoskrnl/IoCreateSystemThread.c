/*
 * XREFs of IoCreateSystemThread @ 0x14071D340
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall IoCreateSystemThread(
        _WORD *Object,
        __int64 a2,
        int a3,
        __int128 *a4,
        ULONG_PTR a5,
        __int64 a6,
        ULONG_PTR BugCheckParameter2,
        __int64 a8)
{
  _QWORD *Pool_0; // rax
  void *v13; // rdi
  int SystemThread; // esi

  if ( (unsigned __int16)(*Object - 3) > 1u )
    KeBugCheckEx(0x148u, 0LL, BugCheckParameter2, (ULONG_PTR)Object, 0LL);
  Pool_0 = IopVerifierExAllocatePool_0(PagedPool, 0x18uLL);
  v13 = Pool_0;
  if ( !Pool_0 )
    return 3221225626LL;
  *Pool_0 = Object;
  Pool_0[1] = BugCheckParameter2;
  Pool_0[2] = a8;
  ObfReferenceObject(Object);
  SystemThread = PsCreateSystemThreadEx(a2, a3, a4, a5, a6, (__int64)IopThreadStart, (__int64)v13, 0LL, 0LL);
  if ( SystemThread < 0 )
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)SystemThread;
}
