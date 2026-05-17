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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x180103DE0 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010D1EC (RtlpHpLargeAllocationDestroy.c)
 */

unsigned int *__fastcall RtlpHpHeapDestroy(__int64 a1)
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
  unsigned int *result; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-29h] BYREF
  __int64 v20; // [rsp+28h] [rbp-21h] BYREF
  __int128 v21; // [rsp+30h] [rbp-19h] BYREF
  __int128 v22; // [rsp+40h] [rbp-9h] BYREF
  __int128 v23; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v24[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v25; // [rsp+66h] [rbp+1Dh]
  __int64 v26; // [rsp+80h] [rbp+37h]

  v1 = a1 + 72;
  v19 = a1;
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
  v11 = v19 + 672;
  while ( *(_QWORD *)v11 )
  {
    RtlpHpVsSubsegmentCleanup(v19 + 640, v11 ^ *(_QWORD *)v11);
    RtlpHpVsSubsegmentFree(v19 + 640, v12, 1LL);
  }
  RtlpHpLfhContextCleanup(v19 + 832);
  RtlpHpSegContextCleanup(v19 + 256);
  RtlpHpSegContextCleanup(v19 + 448);
  v13 = *(_OWORD *)v19;
  v20 = *(_QWORD *)(v19 + 248) - v19;
  v2 = (*(_BYTE *)(v19 + 30) & 1) == 0;
  v21 = v13;
  if ( v2 )
  {
    v23 = *(_OWORD *)v19;
    RtlpHpFreeVA((unsigned __int64 *)&v19, (unsigned __int64 *)&v20, BYTE1(v21) < 2u ? 16809984 : 0x8000, &v23);
  }
  else
  {
    v22 = *(_OWORD *)v19;
    RtlpHpMetadataFree(v19, &v22);
  }
  RtlpHpRegisterEnvironment(&v21, 0);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    RtlpHeapLogRangeDestroy(v19);
  result = RtlGetCurrentServiceSessionId();
  v16 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v17 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v17 = 2147353472LL;
  }
  if ( *(_BYTE *)v17 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 550;
      v18 = *(unsigned __int8 *)v16;
      v26 = v19;
      v25 = 4131;
      return (unsigned int *)NtTraceEvent(v18, 1026LL, 8LL, v24);
    }
  }
  return result;
}
