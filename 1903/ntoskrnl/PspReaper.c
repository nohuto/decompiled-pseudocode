/*
 * XREFs of PspReaper @ 0x1400E3500
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeEnumerateKernelStackSegments @ 0x1400E35A8 (KeEnumerateKernelStackSegments.c)
 *     KeDeleteThread @ 0x1400E3698 (KeDeleteThread.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

signed __int64 PspReaper()
{
  _QWORD *v0; // rbx
  volatile signed __int32 *v1; // rdi
  void *v2; // rcx
  signed __int64 result; // rax

  do
  {
    v0 = (_QWORD *)_InterlockedExchange64(&PsReaperListHead, 1LL);
    do
    {
      v1 = (volatile signed __int32 *)(v0 - 197);
      KeDeleteThread(v0 - 197);
      v2 = (void *)v0[38];
      if ( v2 )
      {
        ExFreePoolWithTag(v2, 0);
        *((_QWORD *)v1 + 235) = 0LL;
      }
      if ( _InterlockedExchangeAdd(v1 + 457, 0xFFFFFFFF) == 1 )
      {
        KeEnumerateKernelStackSegments(v0 - 197, PspDeleteKernelStack, 0LL);
        *((_QWORD *)v1 + 5) = 0LL;
      }
      v0 = (_QWORD *)*v0;
      ObfDereferenceObjectWithTag((PVOID)v1, 0x746C6644u);
    }
    while ( v0 && v0 != (_QWORD *)1 );
    result = _InterlockedCompareExchange64(&PsReaperListHead, 0LL, 1LL);
  }
  while ( result != 1 );
  return result;
}
