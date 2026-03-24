/*
 * XREFs of PspSetupUserStack @ 0x1405F8DD0
 * Callers:
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401B8550 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x1405F8EDC (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1406A8238 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, char *a4)
{
  char v4; // al
  char v5; // bl
  int UserStack; // edi
  __int64 v11; // r11
  ULONG_PTR v13; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v16[48]; // [rsp+40h] [rbp-78h] BYREF

  v4 = *a4;
  v5 = 0;
  if ( (*a4 & 1) != 0 )
    goto LABEL_7;
  KiStackAttachProcess(a1, 0LL, (__int64)v16);
  UserStack = RtlCreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), 4096, v13, a3);
  if ( UserStack >= 0 )
  {
    if ( (a1[2].UserTime & 0x40) != 0 )
      v11 = 0LL;
    else
      v11 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
    if ( a1[1].ActiveProcessors.Bitmap[7] )
    {
      UserStack = PspWow64SetupCpuArea(a3 + 16, a1);
      if ( UserStack < 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_11;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v11 - 40;
    KiUnstackDetachProcess((__int64)v16, 0LL);
    v4 = *a4;
    v5 = 2;
LABEL_7:
    *a4 = v5 | v4 & 0xFD;
    return 0LL;
  }
LABEL_11:
  KiUnstackDetachProcess((__int64)v16, 0LL);
  return (unsigned int)UserStack;
}
