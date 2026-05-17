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

__int64 __fastcall sub_18007013C(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rsi
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[4];
  v4 = a1 + 5;
  v7 = v3 + a2;
  if ( (unsigned __int64)(v3 + a2) <= a1[5] )
  {
LABEL_2:
    *a3 = v3;
    result = 0LL;
    a1[4] = v7;
    return result;
  }
  v9 = a1[3];
  v13 = (v7 - *v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = sub_18004733C(v9, 1);
  result = ZwAllocateVirtualMemory(-1LL, v4, 0LL, &v13, 4096, v10);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1[3] + 576LL) += v13;
    v11 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      sub_1801033C4(a1[3], *v4, v13, 16 * *(_QWORD *)(a1[3] + 192LL), *(unsigned __int8 *)v11);
      sub_18010313C(a1[3], *v4, v13, 9LL);
    }
    *v4 += v13;
    v3 = a1[4];
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}
