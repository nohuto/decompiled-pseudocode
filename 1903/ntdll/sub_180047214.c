/*
 * XREFs of sub_180047214 @ 0x180047214
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_1800445F8 @ 0x1800445F8 (sub_1800445F8.c)
 *     sub_18004622C @ 0x18004622C (sub_18004622C.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_1800EFD8C @ 0x1800EFD8C (sub_1800EFD8C.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_180106954 @ 0x180106954 (sub_180106954.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     sub_180047C74 @ 0x180047C74 (sub_180047C74.c)
 *     sub_1800480CC @ 0x1800480CC (sub_1800480CC.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     sub_18010313C @ 0x18010313C (sub_18010313C.c)
 *     sub_1801033C4 @ 0x1801033C4 (sub_1801033C4.c)
 */

char __fastcall sub_180047214(__int64 a1, __int64 a2)
{
  ULONG Protect; // eax
  NTSTATUS v5; // ebx
  __int64 v6; // rbx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v12; // r8
  ULONG_PTR v13; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+20h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+30h] BYREF

  sub_1800480CC(a1, a2, &BaseAddress, &RegionSize);
  if ( (unsigned int)sub_180047C74(RegionSize, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664), a1, a1 + 376) )
  {
    Protect = sub_18004733C(a1, 1LL);
    v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, Protect);
    if ( v5 >= 0 )
    {
      v6 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_18010313C(a1, BaseAddress, RegionSize, 8LL);
      *(_QWORD *)(a1 + 664) -= RegionSize;
      --*(_DWORD *)(a1 + 660);
      if ( RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        v8 = 2147353472LL;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v6 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        sub_1801033C4(a1, (int)BaseAddress, RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v6);
      }
      v9 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
      else
        v10 = 2147353482LL;
      if ( *(_BYTE *)v10 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        sub_1801033C4(a1, (int)BaseAddress, RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v9);
      }
      ++*(_DWORD *)(a1 + 624);
      if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
        goto LABEL_13;
      v12 = (char *)BaseAddress;
      v13 = RegionSize >> 2;
      if ( !(RegionSize >> 2) )
        goto LABEL_13;
      if ( ((unsigned __int8)BaseAddress & 4) != 0 )
      {
        *(_DWORD *)BaseAddress = -17891602;
        if ( !--v13 )
        {
LABEL_13:
          *(_BYTE *)(a2 + 10) &= 0x17u;
          return 1;
        }
        v12 += 4;
      }
      memset64(v12, 0xFEEEFEEEFEEEFEEEuLL, v13 >> 1);
      if ( (v13 & 1) != 0 )
        *(_DWORD *)&v12[4 * v13 - 4] = -17891602;
      goto LABEL_13;
    }
  }
  else
  {
    v5 = -1073741523;
  }
  ++*(_DWORD *)(a1 + 636);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v5,
    (const void *)a1,
    BaseAddress,
    RegionSize);
  return 0;
}
