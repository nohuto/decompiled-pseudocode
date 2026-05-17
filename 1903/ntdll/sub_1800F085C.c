/*
 * XREFs of sub_1800F085C @ 0x1800F085C
 * Callers:
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     sub_180102188 @ 0x180102188 (sub_180102188.c)
 *     sub_1801028F0 @ 0x1801028F0 (sub_1801028F0.c)
 *     sub_180104440 @ 0x180104440 (sub_180104440.c)
 * Callees:
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x18009CE20 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009CEC0 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x18009D120 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009D140 (ZwTerminateThread.c)
 *     sub_1801042F4 @ 0x1801042F4 (sub_1801042F4.c)
 *     sub_1801043F4 @ 0x1801043F4 (sub_1801043F4.c)
 */

__int64 __fastcall sub_1800F085C(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int VirtualMemory; // ebx
  __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-29h]
  __int64 v10; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  __int128 v13; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v12 = 96LL;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_11;
  VirtualMemory = sub_180005760(a1, 0LL, 3, 0, 0LL, 0LL, v9, (__int64)sub_1800F03F0, 0LL, &v14, &v13);
  if ( VirtualMemory < 0 )
    goto LABEL_8;
  if ( *(_QWORD *)a2 )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_8;
  }
  VirtualMemory = ZwWriteVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_8;
  if ( v11 != 96 )
  {
    VirtualMemory = -2147483635;
LABEL_8:
    v6 = v14;
    goto LABEL_9;
  }
  v8 = sub_1801042F4(a1, &v10);
  v6 = v14;
  VirtualMemory = v8;
  if ( v8 < 0 || (VirtualMemory = ZwResumeThread(), VirtualMemory < 0) )
  {
    v2 = v10;
LABEL_9:
    if ( v6 )
    {
      ZwTerminateThread();
      ZwClose();
    }
    goto LABEL_11;
  }
  ZwWaitForSingleObject();
  v2 = v10;
  if ( v10 )
  {
    sub_1801043F4(v10);
    v2 = 0LL;
  }
  ZwClose();
  v6 = 0LL;
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    if ( v11 != 96 )
    {
      VirtualMemory = -2147483635;
      goto LABEL_11;
    }
    VirtualMemory = *(_DWORD *)(a2 + 28);
    goto LABEL_9;
  }
LABEL_11:
  if ( v2 )
    sub_1801043F4(v2);
  return (unsigned int)VirtualMemory;
}
