/*
 * XREFs of sub_18004B17C @ 0x18004B17C
 * Callers:
 *     sub_18004B4D4 @ 0x18004B4D4 (sub_18004B4D4.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     sub_180049E98 @ 0x180049E98 (sub_180049E98.c)
 *     sub_18004B360 @ 0x18004B360 (sub_18004B360.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     sub_18010313C @ 0x18010313C (sub_18010313C.c)
 *     sub_1801033C4 @ 0x1801033C4 (sub_1801033C4.c)
 */

PVOID __fastcall sub_18004B17C(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  ULONG_PTR v5; // rcx
  ULONG Protect; // eax
  int v7; // eax
  __int64 v8; // r15
  ULONG v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 UserModeGlobalLogger; // rcx
  PVOID v13; // rdx
  PVOID v14; // rcx
  int v16; // [rsp+70h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+50h] BYREF
  ULONG_PTR v19; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0, 0, &v16, 4LL) >= 0 && v16 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v5 = 0LL;
    v4 = v2 & 1;
  }
  else
  {
    v3 = qword_1801636A0[0];
    v4 = v2 & 1;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v5 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  BaseAddress = 0LL;
  RegionSize = v5;
  Protect = sub_18004733C((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v7 = qword_1801636A0[0];
  if ( v4 )
    v7 = 1;
  v8 = 48LL * (unsigned int)(v7 - 1);
  v19 = (v8 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v9 = sub_18004733C((_DWORD *)a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v19, 0x1000u, v9) < 0 )
  {
    RegionSize = 0LL;
    sub_180048120(v10, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1801033C4(a1, (int)BaseAddress, v19, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v11);
    sub_18010313C(a1, BaseAddress, v19, 9LL);
  }
  sub_18004B360(a1, v2, BaseAddress);
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 568LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddress + 3) + 576LL) += v19;
  *((_QWORD *)BaseAddress + 6) = (char *)BaseAddress + RegionSize;
  v13 = BaseAddress;
  *((_QWORD *)BaseAddress + 5) = (char *)BaseAddress + v19;
  v14 = BaseAddress;
  *((_QWORD *)BaseAddress + 4) = (char *)BaseAddress + v8 + 3312;
  if ( (dword_180166070 & 3) == 0 )
  {
    dword_180166070 |= 1u;
    sub_180049E98((__int64)v14, (__int64)v13);
  }
  *((_DWORD *)BaseAddress + 168) = v2;
  return BaseAddress;
}
