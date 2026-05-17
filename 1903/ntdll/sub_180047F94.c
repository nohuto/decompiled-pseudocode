/*
 * XREFs of sub_180047F94 @ 0x180047F94
 * Callers:
 *     sub_180047ED4 @ 0x180047ED4 (sub_180047ED4.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800480CC @ 0x1800480CC (sub_1800480CC.c)
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_1801031E8 @ 0x1801031E8 (sub_1801031E8.c)
 *     sub_180103318 @ 0x180103318 (sub_180103318.c)
 */

__int64 __fastcall sub_180047F94(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF
  const void *v16; // [rsp+68h] [rbp+28h] BYREF

  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 8);
  v15 = v4;
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v13 = (_DWORD *)(a2 + 32);
    v14 = (unsigned __int64)(16 * v4 - 32) >> 2;
    if ( v14 )
    {
      if ( ((unsigned __int8)v13 & 4) != 0 )
      {
        --v14;
        *v13 = -17891602;
        v13 = (_DWORD *)(a2 + 36);
      }
      memset64(v13, 0xFEEEFEEEFEEEFEEEuLL, v14 >> 1);
      a1 = 0LL;
      if ( (v14 & 1) != 0 )
        v13[v14 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  result = qword_180166970 ^ *(_QWORD *)(v3 + 360);
  if ( !result )
  {
    result = sub_1800480CC(a1, a2, &v16, &v15);
    if ( (_BYTE)result )
    {
      v7 = sub_180048120(v6, &v16, &v15, 0x4000LL);
      if ( v7 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        result = DbgPrint(
                   "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                   v7,
                   (const void *)v3,
                   v16,
                   v15);
      }
      else
      {
        v8 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v9 = 2147353472LL;
        if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_180103318(v3, v16, v15, 7LL);
        *(_QWORD *)(v3 + 664) += v15;
        ++*(_DWORD *)(v3 + 628);
        ++*(_DWORD *)(v3 + 660);
        ++*(_DWORD *)(v3 + 644);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v10 = 2147353472LL;
        if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          sub_1801031E8(v3, (_DWORD)v16, v15, 16 * *(_QWORD *)(v3 + 192), 0, 0LL, *(unsigned __int8 *)v8);
        }
        result = (__int64)RtlGetCurrentServiceSessionId();
        v11 = 2147353482LL;
        if ( (_DWORD)result )
        {
          result = (__int64)NtCurrentPeb();
          v12 = *(_QWORD *)(result + 144) + 560LL;
        }
        else
        {
          v12 = 2147353482LL;
        }
        if ( *(_BYTE *)v12 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
          result = sub_1801031E8(
                     v3,
                     (_DWORD)v16,
                     v15,
                     16 * (unsigned int)*(_QWORD *)(v3 + 192),
                     0,
                     0LL,
                     *(unsigned __int8 *)v11);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(v3 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    result = *(unsigned int *)(v3 + 136);
    *(_DWORD *)(a2 + 8) ^= result;
  }
  return result;
}
