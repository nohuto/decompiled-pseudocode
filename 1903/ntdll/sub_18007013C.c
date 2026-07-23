/*
 * XREFs of sub_18007013C @ 0x18007013C
 * Callers:
 *     sub_18006FF90 @ 0x18006FF90 (sub_18006FF90.c)
 *     sub_1800700E8 @ 0x1800700E8 (sub_1800700E8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     sub_18010313C @ 0x18010313C (sub_18010313C.c)
 *     sub_1801033C4 @ 0x1801033C4 (sub_1801033C4.c)
 */

NTSTATUS __fastcall sub_18007013C(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  PVOID *v4; // rsi
  __int64 v7; // rbp
  NTSTATUS result; // eax
  _DWORD *v9; // rcx
  ULONG Protect; // eax
  __int64 v11; // rdi
  __int64 UserModeGlobalLogger; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[4];
  v4 = (PVOID *)(a1 + 5);
  v7 = v3 + a2;
  if ( (unsigned __int64)(v3 + a2) <= a1[5] )
  {
LABEL_2:
    *a3 = v3;
    result = 0;
    a1[4] = v7;
    return result;
  }
  v9 = (_DWORD *)a1[3];
  RegionSize = (v7 - (_QWORD)*v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = sub_18004733C(v9, 1);
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4, 0LL, &RegionSize, 0x1000u, Protect);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1[3] + 576LL) += RegionSize;
    v11 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      sub_1801033C4(a1[3], (int)*v4, RegionSize, 16 * *(_QWORD *)(a1[3] + 192LL), (HANDLE)*(unsigned __int8 *)v11);
      sub_18010313C(a1[3], *v4, RegionSize, 9LL);
    }
    *v4 = (char *)*v4 + RegionSize;
    v3 = a1[4];
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
