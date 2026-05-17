/*
 * XREFs of RtlpLockStack @ 0x180086658
 * Callers:
 *     RtlLockCurrentThread @ 0x1800865A0 (RtlLockCurrentThread.c)
 * Callees:
 *     NtLockVirtualMemory @ 0x1800A23B0 (NtLockVirtualMemory.c)
 */

__int64 RtlpLockStack()
{
  struct _TEB *v0; // rdx
  char *StackBase; // rax
  unsigned __int64 v2; // r8
  unsigned __int64 i; // rcx
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  StackBase = (char *)v0->NtTib.StackBase;
  v2 = (unsigned __int64)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  for ( i = (unsigned __int64)(StackBase - 4096); i >= v2; i -= 4096LL )
    ;
  v6 = (__int64)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  v5 = &StackBase[-v2];
  return NtLockVirtualMemory(-1LL, &v6, &v5, 1LL);
}
