/*
 * XREFs of PspSetupUserStack @ 0x1406105A0
 * Callers:
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401C1010 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlCreateUserStack @ 0x1406106C0 (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1406C819C (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        struct _INITIAL_TEB *a3,
        char *a4,
        unsigned int a5)
{
  char v9; // al
  char v10; // bl
  SIZE_T v11; // rdi
  NTSTATUS UserStack; // edi
  __int64 v13; // r11
  ULONG_PTR v15; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v18[48]; // [rsp+40h] [rbp-78h] BYREF

  memset(v18, 0, sizeof(v18));
  v9 = *a4;
  v10 = 0;
  if ( (*a4 & 1) != 0 )
    goto LABEL_9;
  v11 = 4096LL;
  if ( a5 )
    v11 = ((unsigned __int64)a5 << 56) | 0x1000;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v18);
  UserStack = RtlCreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), v11, v15, a3);
  if ( UserStack < 0 )
    goto LABEL_13;
  if ( (*(_DWORD *)(BugCheckParameter1 + 2128) & 0x40) != 0 )
    v13 = 0LL;
  else
    v13 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
  if ( !*(_QWORD *)(BugCheckParameter1 + 1064)
    || (UserStack = PspWow64SetupCpuArea(&a3->StackBase, BugCheckParameter1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = (char *)a3->StackBase - v13 - 40;
    KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
    v9 = *a4;
    v10 = 2;
LABEL_9:
    *a4 = v10 | v9 & 0xFD;
    return 0LL;
  }
  BaseAddress = a3->AllocatedStackBase;
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_13:
  KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
  return (unsigned int)UserStack;
}
