/*
 * XREFs of PspSetupUserStack @ 0x14060EA90
 * Callers:
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401C0490 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlCreateUserStack @ 0x14060EBB0 (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1406C9784 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, char *a4)
{
  char v8; // al
  char v9; // bl
  int UserStack; // edi
  __int64 v11; // r11
  ULONG_PTR v13; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v16[48]; // [rsp+40h] [rbp-78h] BYREF

  memset(v16, 0, sizeof(v16));
  v8 = *a4;
  v9 = 0;
  if ( (*a4 & 1) != 0 )
    goto LABEL_7;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v16);
  UserStack = RtlCreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), 4096, v13, a3);
  if ( UserStack >= 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 2128) & 0x40) != 0 )
      v11 = 0LL;
    else
      v11 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
    if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
    {
      UserStack = PspWow64SetupCpuArea(a3 + 16, BugCheckParameter1);
      if ( UserStack < 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_11;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v11 - 40;
    KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
    v8 = *a4;
    v9 = 2;
LABEL_7:
    *a4 = v9 | v8 & 0xFD;
    return 0LL;
  }
LABEL_11:
  KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  return (unsigned int)UserStack;
}
