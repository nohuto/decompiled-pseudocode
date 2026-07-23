/*
 * XREFs of PspSetupUserStack @ 0x1405F9DD0
 * Callers:
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x1405F9EDC (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1406A94D8 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(_KPROCESS *a1, __int64 a2, struct _INITIAL_TEB *a3, char *a4, unsigned int a5)
{
  char v5; // al
  char v6; // bl
  SIZE_T v11; // rdi
  NTSTATUS UserStack; // edi
  __int64 v13; // r11
  ULONG_PTR v15; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v18[48]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *a4;
  v6 = 0;
  if ( (*a4 & 1) != 0 )
    goto LABEL_9;
  v11 = 4096LL;
  if ( a5 )
    v11 = ((unsigned __int64)a5 << 56) | 0x1000;
  KiStackAttachProcess(a1, 0LL, (__int64)v18);
  UserStack = RtlCreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), v11, v15, a3);
  if ( UserStack < 0 )
    goto LABEL_13;
  if ( (a1[2].UserTime & 0x40) != 0 )
    v13 = 0LL;
  else
    v13 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
  if ( !a1[1].ActiveProcessors.Bitmap[7] || (UserStack = PspWow64SetupCpuArea(&a3->StackBase, a1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = (char *)a3->StackBase - v13 - 40;
    KiUnstackDetachProcess((__int64)v18, 0LL);
    v5 = *a4;
    v6 = 2;
LABEL_9:
    *a4 = v6 | v5 & 0xFD;
    return 0LL;
  }
  BaseAddress = a3->AllocatedStackBase;
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_13:
  KiUnstackDetachProcess((__int64)v18, 0LL);
  return (unsigned int)UserStack;
}
