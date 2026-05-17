/*
 * XREFs of RtlLockCurrentThread @ 0x180082180
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockStack @ 0x180082238 (RtlpLockStack.c)
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x18009EF80 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A0720 (ZwUnlockVirtualMemory.c)
 */

__int64 RtlLockCurrentThread()
{
  struct _TEB *v0; // rbx
  unsigned int LockCount; // eax
  int VirtualMemory; // edi
  __int64 result; // rax
  _QWORD v4[6]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( LockCount )
  {
    v0->LockCount = LockCount + 1;
    return 0LL;
  }
  VirtualMemory = ZwQueryVirtualMemory(-1LL, v0, 0LL, v4, 48LL, 0LL);
  if ( VirtualMemory < 0 )
    return (unsigned int)VirtualMemory;
  v6 = v4[0];
  v5 = v4[3];
  result = NtLockVirtualMemory(-1LL, &v6, &v5, 1LL);
  if ( (int)result < 0 )
    return result;
  VirtualMemory = RtlpLockStack();
  if ( VirtualMemory < 0 )
  {
    ZwUnlockVirtualMemory(-1LL, &v6, &v5, 1LL);
    return (unsigned int)VirtualMemory;
  }
  v0->LockCount = 1;
  return 0LL;
}
