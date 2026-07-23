/*
 * XREFs of RtlpHpHeapDestroy @ 0x18004FBB4
 * Callers:
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 *     RtlpHpHeapCreate @ 0x18004C4C0 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeVA @ 0x180048170 (RtlpHpFreeVA.c)
 *     RtlpHpRegisterEnvironment @ 0x18004CD90 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpMetadataFree @ 0x18004F730 (RtlpHpMetadataFree.c)
 *     RtlpHpSegContextCleanup @ 0x18004FDE8 (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x180050C9C (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x1800514A8 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1800514F0 (RtlpHpVsSubsegmentCleanup.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x1801015A4 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010ACF4 (RtlpHpLargeAllocationDestroy.c)
 */

int __fastcall RtlpHpHeapDestroy(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // rcx
  char v5; // al
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int128 v12; // xmm0
  __int64 v13; // rcx
  struct _PEB *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r11
  void *v18; // rcx
  PVOID BaseAddress; // [rsp+20h] [rbp-29h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-21h] BYREF
  __int128 v22; // [rsp+30h] [rbp-19h] BYREF
  __int128 v23; // [rsp+40h] [rbp-9h] BYREF
  __int128 v24; // [rsp+50h] [rbp+7h] BYREF
  _BYTE Fields[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v26; // [rsp+66h] [rbp+1Dh]
  PVOID v27; // [rsp+80h] [rbp+37h]

  v1 = a1 + 72;
  BaseAddress = (PVOID)a1;
  v2 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      RtlpHpLargeAllocationDestroy(v4, a1);
      if ( !v10 )
        break;
      v4 = v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v11 = (unsigned __int64)BaseAddress + 672;
  while ( *(_QWORD *)v11 )
  {
    RtlpHpVsSubsegmentCleanup((char *)BaseAddress + 640, v11 ^ *(_QWORD *)v11);
    RtlpHpVsSubsegmentFree((char *)BaseAddress + 640, v17, 1LL);
  }
  RtlpHpLfhContextCleanup((char *)BaseAddress + 832);
  RtlpHpSegContextCleanup((char *)BaseAddress + 256);
  RtlpHpSegContextCleanup((char *)BaseAddress + 448);
  v12 = *(_OWORD *)BaseAddress;
  RegionSize = *((_QWORD *)BaseAddress + 31) - (_QWORD)BaseAddress;
  v2 = (*((_BYTE *)BaseAddress + 30) & 1) == 0;
  v22 = v12;
  if ( v2 )
  {
    v24 = *(_OWORD *)BaseAddress;
    RtlpHpFreeVA(&BaseAddress, &RegionSize, BYTE1(v22) < 2u ? 16809984 : 0x8000, &v24);
  }
  else
  {
    v23 = *(_OWORD *)BaseAddress;
    RtlpHpMetadataFree((__int64)BaseAddress, &v23);
  }
  RtlpHpRegisterEnvironment(&v22, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v13 = 2147353480LL;
  if ( *(_BYTE *)v13 )
    RtlpHeapLogRangeDestroy(BaseAddress);
  LODWORD(v14) = RtlGetCurrentServiceSessionId();
  v15 = 2147353472LL;
  if ( (_DWORD)v14 )
  {
    v14 = NtCurrentPeb();
    v16 = (__int64)v14->SharedData + 550;
  }
  else
  {
    v16 = 2147353472LL;
  }
  if ( *(_BYTE *)v16 )
  {
    v14 = NtCurrentPeb();
    if ( (v14->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      v18 = (void *)*(unsigned __int8 *)v15;
      v27 = BaseAddress;
      v26 = 4131;
      LODWORD(v14) = NtTraceEvent(v18, 0x402u, 8u, Fields);
    }
  }
  return (int)v14;
}
