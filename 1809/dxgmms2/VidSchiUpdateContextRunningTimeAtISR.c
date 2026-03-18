/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x1C000A9D0
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000A720 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000A950 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E2EC (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C002E7A4 (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     McTemplateK0piixqq @ 0x1C002BABC (McTemplateK0piixqq.c)
 */

_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // r15
  __int64 v5; // r14
  bool v6; // si
  LARGE_INTEGER v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  _BOOL8 result; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  signed __int32 v21; // eax
  __int64 v22; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h]

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD **)(v1 + 96);
  if ( *(_QWORD *)(v1 + 488) )
    v3 = *(_QWORD *)(v1 + 488);
  v5 = v4[3];
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 436), 0, 0) == 1;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = v7.QuadPart - *(_QWORD *)(v1 + 456);
  v24 = (v8 * (unsigned __int128)0x989680uLL) >> 64;
  v9 = 10000000 * v8;
  if ( is_mul_ok(v8, 0x989680uLL) )
  {
    if ( PerformanceFrequency.QuadPart == 10000000 )
      v10 = v9 / 0x989680;
    else
      v10 = 10000000 * v8 / PerformanceFrequency.QuadPart;
  }
  else
  {
    v9 = v8 / PerformanceFrequency.QuadPart;
    v10 = 10000000 * (v8 / PerformanceFrequency.QuadPart)
        + 10000000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  }
  *(_QWORD *)(v1 + 448) += v10;
  v4[327] += v10;
  v11 = *(_QWORD *)(v1 + 96);
  if ( (*(_DWORD *)(v11 + 12) & 8) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v12 = *(unsigned __int16 *)(v11 + 4);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 24LL)
                    + 8LL * *(unsigned int *)(*(_QWORD *)(v11 + 24) + 4LL));
    v9 = *(_QWORD *)(v13 + 8);
    if ( (unsigned int)v12 < *(_DWORD *)(v13 + 80) )
      v9 += 8 * v12;
    v14 = *(_QWORD **)v9;
  }
  *v14 += v10;
  LODWORD(v15) = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v5 + 5920), v10);
  *(LARGE_INTEGER *)(v1 + 456) = v7;
  if ( v6
    || (*(_DWORD *)(v5 + 1936) & 4) != 0
    && (v15 = gulPriorityToYieldPriorityBand, !gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)]) )
  {
    v19 = *(_QWORD *)(v3 + 440) - v10;
    *(_QWORD *)(v3 + 440) = v19;
    if ( v6 && v19 <= 0 )
    {
      v20 = *(_QWORD *)(v1 + 488);
      v21 = 1;
      if ( v20 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 436), 2, 1);
        v15 = *(int **)(v1 + 488);
        v21 = 0;
      }
      else
      {
        v15 = (int *)v1;
      }
      _InterlockedCompareExchange(v15 + 109, 2, v21);
      v6 = 0;
    }
  }
  if ( bTracingEnabled )
  {
    v16 = *(_QWORD *)(v1 + 56);
    if ( !v16 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v16) = v1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      McTemplateK0piixqq(
        (_DWORD)v15,
        v10,
        v9,
        v16,
        *(_QWORD *)(v1 + 448),
        *(_QWORD *)(v1 + 440),
        v4[250],
        *(_DWORD *)(v1 + 436),
        2);
    v17 = *(_QWORD *)(v1 + 488);
    if ( v17 )
    {
      v22 = *(_QWORD *)(v17 + 56);
      if ( !v22 || (*(_DWORD *)(v17 + 112) & 0x40) != 0 )
        v22 = *(_QWORD *)(v1 + 488);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        McTemplateK0piixqq(
          *(_QWORD *)(v17 + 448),
          v17,
          v9,
          v22,
          *(_QWORD *)(v17 + 448),
          *(_QWORD *)(v17 + 440),
          v4[250],
          *(_DWORD *)(v17 + 436),
          2);
    }
  }
  result = v6;
  a1[3] = *(_QWORD *)(v3 + 440);
  a1[2] = *(_QWORD *)(v1 + 448);
  return result;
}
