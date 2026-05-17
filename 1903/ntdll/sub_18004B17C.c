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

__int64 __fastcall sub_18004B17C(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+58h] BYREF

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
  v17 = 0LL;
  v18 = v5;
  v6 = sub_18004733C(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v18, 0x2000, v6) < 0 )
    return 0LL;
  v7 = qword_1801636A0[0];
  if ( v4 )
    v7 = 1;
  v8 = 48LL * (unsigned int)(v7 - 1);
  v19 = (v8 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v9 = sub_18004733C(a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v17, 0LL, &v19, 4096, v9) < 0 )
  {
    v18 = 0LL;
    sub_180048120(v10, &v17, &v18, 0x8000LL);
    return 0LL;
  }
  v11 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    sub_1801033C4(a1, v17, v19, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v11);
    sub_18010313C(a1, v17, v19, 9LL);
  }
  sub_18004B360(a1, v2, v17);
  *(_QWORD *)(*(_QWORD *)(v17 + 24) + 568LL) += v18;
  *(_QWORD *)(*(_QWORD *)(v17 + 24) + 576LL) += v19;
  *(_QWORD *)(v17 + 48) = v17 + v18;
  v13 = v17;
  *(_QWORD *)(v17 + 40) = v17 + v19;
  v14 = v17;
  *(_QWORD *)(v17 + 32) = v8 + v17 + 3312;
  if ( (dword_180166070 & 3) == 0 )
  {
    dword_180166070 |= 1u;
    sub_180049E98(v14, v13);
  }
  *(_DWORD *)(v17 + 672) = v2;
  return v17;
}
