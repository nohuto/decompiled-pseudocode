/*
 * XREFs of RtlpHpHeapDestroy @ 0x1800652CC
 * Callers:
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180063D90 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 *     RtlpHpRegisterEnvironment @ 0x180064418 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpSegContextCleanup @ 0x180065550 (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhContextCleanup @ 0x1800655B0 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x180065640 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180065688 (RtlpHpVsSubsegmentCleanup.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x180103DE0 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010D1EC (RtlpHpLargeAllocationDestroy.c)
 */

int __fastcall RtlpHpHeapDestroy(__int64 a1)
{
  __int64 v1; // rdi
  bool v2; // zf
  unsigned __int64 v4; // rcx
  char v5; // al
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  __int128 v13; // xmm0
  __int64 v14; // rcx
  struct _PEB *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
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
    RtlpHpVsSubsegmentFree((char *)BaseAddress + 640, v12, 1LL);
  }
  RtlpHpLfhContextCleanup((char *)BaseAddress + 832);
  RtlpHpSegContextCleanup((char *)BaseAddress + 256);
  RtlpHpSegContextCleanup((char *)BaseAddress + 448);
  v13 = *(_OWORD *)BaseAddress;
  RegionSize = *((_QWORD *)BaseAddress + 31) - (_QWORD)BaseAddress;
  v2 = (*((_BYTE *)BaseAddress + 30) & 1) == 0;
  v22 = v13;
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
    v14 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    RtlpHeapLogRangeDestroy(BaseAddress);
  LODWORD(v15) = RtlGetCurrentServiceSessionId();
  v16 = 2147353472LL;
  if ( (_DWORD)v15 )
  {
    v15 = NtCurrentPeb();
    v17 = (__int64)v15->SharedData + 550;
  }
  else
  {
    v17 = 2147353472LL;
  }
  if ( *(_BYTE *)v17 )
  {
    v15 = NtCurrentPeb();
    if ( (v15->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 550;
      v18 = (void *)*(unsigned __int8 *)v16;
      v27 = BaseAddress;
      v26 = 4131;
      LODWORD(v15) = NtTraceEvent(v18, 0x402u, 8u, Fields);
    }
  }
  return (int)v15;
}
