/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C0008630
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003A10 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0004DE0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0010F84 (VidSchiDecrementDeviceReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012A9C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0015624 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rbx
  bool v19; // r10
  unsigned int v20; // eax
  _VIDMM_GLOBAL_ALLOC_NONPAGED *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r8
  __int64 v27; // r8
  _QWORD *v28; // rdx
  KSPIN_LOCK *v29; // rdi
  _QWORD *v30; // rax
  LARGE_INTEGER v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  LARGE_INTEGER v37; // rcx
  unsigned __int128 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int128 v40; // rtt
  unsigned __int64 v41; // rcx
  __int64 *v42; // rdx
  __int64 v43; // rcx
  __int64 **v44; // rax
  void *v45; // rcx
  __int64 v46; // rcx
  void (__fastcall *v47)(_QWORD); // rax
  __int64 v48; // rcx
  void (__fastcall *v49)(_QWORD); // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // [rsp+A0h] [rbp+8h] BYREF
  union _LARGE_INTEGER v53; // [rsp+A8h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v55; // [rsp+B8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = 1;
  v7 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v7 + 2404) || (*(_BYTE *)(v7 + 2428) & 1) != 0 )
    goto LABEL_21;
  v8 = *(_QWORD *)(a1 + 640);
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v9 + 104);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
  if ( !*(_BYTE *)(v10 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 200), 0, 0)
    && !*(_DWORD *)(v11 + 2404)
    && !*(_DWORD *)(v8 + 48)
    && (*(_DWORD *)(v8 + 64) & 8) == 0 )
  {
    v19 = !*(_DWORD *)(v10 + 1272) && !*(_BYTE *)(v11 + 51);
    a4 = (_DWORD *)(v8 + 472);
    v20 = *(_DWORD *)(v8 + 472);
    if ( v20 > 0x10 )
    {
      if ( *(_DWORD *)(v11 + 724) )
      {
LABEL_62:
        if ( *(_QWORD *)(a1 + 48) )
        {
LABEL_65:
          VidSchiUpdateContextStatus(a1, 3LL, 14833LL);
          return 3LL;
        }
        v42 = (__int64 *)(a1 + 40);
        v43 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 2872LL;
        v44 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 2880LL);
        if ( *v44 == (__int64 *)v43 )
        {
          *v42 = v43;
          *(_QWORD *)(a1 + 48) = v44;
          *v44 = v42;
          *(_QWORD *)(v43 + 8) = v42;
          goto LABEL_65;
        }
LABEL_95:
        __fastfail(3u);
      }
    }
    else
    {
      v11 = 0LL;
      if ( v20 )
      {
        do
        {
          if ( (v21 = *(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)&a4[2 * (unsigned int)v11 + 2] + 96LL), !v19)
            || (v22 = *(_DWORD *)v21, (*(_DWORD *)v21 & 0x20000000) != 0) && v22 < 0
            || (v22 & 0x80000) != 0
            || (v22 & 0x100) != 0 )
          {
            if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v21) )
              goto LABEL_62;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *a4 );
      }
    }
  }
  v12 = *(_DWORD *)(v4 + 11192) != -1;
  v52 = 0LL;
  if ( (*(_DWORD *)(a1 + 636) & 0xF) != 0 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 112) & 0x10) == 0 )
    goto LABEL_21;
  v13 = *(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(v13 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 200), 0, 0) )
    goto LABEL_21;
  if ( VidSchiCheckPreemptionPolicy(a1, &v52, v11, (int)a4) )
  {
    v6 = 4;
LABEL_20:
    if ( v12 )
    {
      v46 = *(_QWORD *)(a1 + 640);
      if ( (*(_DWORD *)(v46 + 80) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v4 + 11192) != -1 )
        {
          v47 = *(void (__fastcall **)(_QWORD))(v7 + 2456);
          if ( v47 )
          {
            v47(*(_QWORD *)(v7 + 2496));
            v46 = *(_QWORD *)(a1 + 640);
          }
        }
        *(_DWORD *)(v46 + 80) |= 0x10u;
      }
      if ( !*(_BYTE *)(v4 + 11196) )
      {
        VidSchiUpdateContextStatus(a1, 8LL, 15000LL);
        return 3LL;
      }
    }
LABEL_21:
    v16 = *(_QWORD *)(a1 + 96);
    v17 = *(_QWORD *)(v16 + 216);
    if ( v17 != a1 )
    {
      VidSchiProfilePerformanceTick(
        3LL,
        *(_QWORD *)(v16 + 24),
        *(_QWORD *)(a1 + 96),
        (__int64)a4,
        a1,
        0LL,
        0LL,
        *(_QWORD *)(v16 + 216));
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 72)) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 892) )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v50[3] = 281LL;
          v50[4] = 3840LL;
          v50[5] = a1;
          v50[6] = 0LL;
          v50[7] = 0LL;
          WdLogEvent5_WdCriticalError(v50);
          __debugbreak();
        }
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
      }
      *(_QWORD *)(v16 + 216) = a1;
      if ( v17 )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(v17 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 72), 0xFFFFFFFF) == 1 )
        {
          v24 = *(_QWORD *)(v17 + 96);
          if ( *(_QWORD *)(v24 + 224) == v17 )
            *(_QWORD *)(v24 + 224) = 0LL;
          v25 = *(_QWORD *)(v17 + 8);
          if ( *(_QWORD *)(v25 + 8) != v17 + 8 )
            goto LABEL_95;
          v26 = *(_QWORD **)(v17 + 16);
          if ( *v26 != v17 + 8 )
            goto LABEL_95;
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          v27 = *(_QWORD *)(v17 + 24);
          if ( *(_QWORD *)(v27 + 8) != v17 + 24 )
            goto LABEL_95;
          v28 = *(_QWORD **)(v17 + 32);
          if ( *v28 != v17 + 24 )
            goto LABEL_95;
          *v28 = v27;
          v29 = (KSPIN_LOCK *)(v23 + 1656);
          *(_QWORD *)(v27 + 8) = v28;
          while ( 1 )
          {
            v30 = VidSchiInterlockedRemoveHeadListIfExist(v29, (_QWORD **)(v17 + 704), (_DWORD *)(v17 + 720));
            if ( !v30 )
              break;
            ExFreePoolWithTag(v30 - 1, 0);
          }
          if ( (*(_DWORD *)(v17 + 112) & 0x100) != 0 )
          {
            while ( 1 )
            {
              v51 = VidSchiInterlockedRemoveHeadListIfExist(v29, (_QWORD **)(v17 + 728), (_DWORD *)(v17 + 744));
              if ( !v51 )
                break;
              ExFreePoolWithTag(v51 - 1, 0);
            }
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v17);
          v45 = *(void **)(v17 + 976);
          if ( v45 )
            ExFreePoolWithTag(v45, 0);
          VidSchiDecrementDeviceReference(*(PVOID *)(v17 + 104));
          ExFreePoolWithTag((PVOID)v17, 0);
        }
      }
    }
    return v6;
  }
  v14 = v52;
  if ( v52 != -1 )
  {
    v37 = KeQueryPerformanceCounter(&v53);
    v38 = (unsigned __int64)v37.QuadPart * (unsigned __int128)0x989680uLL;
    v55 = *((_QWORD *)&v38 + 1);
    if ( is_mul_ok(v37.QuadPart, 0x989680uLL) )
    {
      v40 = v38;
      v39 = v38 % (unsigned __int64)v53.QuadPart;
      v41 = v40 / (unsigned __int64)v53.QuadPart;
    }
    else
    {
      v39 = 10000000 * (v37.QuadPart % (unsigned __int64)v53.QuadPart) % v53.QuadPart;
      v41 = 10000000 * (v37.QuadPart / (unsigned __int64)v53.QuadPart)
          + 10000000 * (v37.QuadPart % (unsigned __int64)v53.QuadPart) / v53.QuadPart;
    }
    *(_QWORD *)(v4 + 128) = v41 + v14;
    *(_QWORD *)(v4 + 136) = *(_QWORD *)(v4 + 96);
    v35 = WdLogNewEntry5_WdEvent(v41, v39);
    *(_QWORD *)(v35 + 24) = *(unsigned __int16 *)(v4 + 4);
    v36 = *(_QWORD *)(v4 + 136);
    goto LABEL_54;
  }
  if ( !*(_DWORD *)(v4 + 2864)
    && (*(_DWORD *)(v4 + 2844) > 1u
     || (v15 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560)) != 0 && a1 != v15) )
  {
    v31 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v31.QuadPart, 0x989680uLL) )
    {
      if ( PerformanceFrequency.QuadPart == 10000000 )
        v32 = 10000000 * v31.QuadPart / 0x989680uLL;
      else
        v32 = (unsigned __int64)(10000000 * v31.QuadPart) / PerformanceFrequency.QuadPart;
    }
    else
    {
      v32 = 10000000 * (v31.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
          + 10000000 * (v31.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
    }
    v33 = *(_QWORD *)(v4 + 96);
    v34 = v32 + *(_QWORD *)(a1 + 472);
    *(_QWORD *)(v4 + 128) = v34;
    *(_QWORD *)(v4 + 144) = v33;
    v35 = WdLogNewEntry5_WdEvent(v34, v32);
    *(_QWORD *)(v35 + 24) = *(unsigned __int16 *)(v4 + 4);
    v36 = *(_QWORD *)(v4 + 144);
LABEL_54:
    *(_QWORD *)(v35 + 32) = v36;
    WdLogEvent5_WdEvent(v35);
  }
  if ( *(int *)(v4 + 2840) > 0 && *(_DWORD *)(v4 + 2856) < *(_DWORD *)(v7 + 212) && !*(_DWORD *)(v4 + 2864) )
    goto LABEL_20;
  RtlClearBitEx(v7 + 472, *(unsigned __int16 *)(v4 + 4));
  RtlCopyBitMapEx(v7 + 424, v7 + 520, 0LL);
  RtlIntersectBitMapsEx(v7 + 520, v7 + 472);
  if ( !(unsigned __int8)RtlAreBitsClearEx(v7 + 520, 0LL, *(_QWORD *)(v7 + 520)) )
    return 3LL;
  if ( v12 )
  {
    v48 = *(_QWORD *)(a1 + 640);
    if ( (*(_DWORD *)(v48 + 80) & 0x10) == 0 )
    {
      if ( *(_DWORD *)(v4 + 11192) != -1 )
      {
        v49 = *(void (__fastcall **)(_QWORD))(v7 + 2456);
        if ( v49 )
        {
          v49(*(_QWORD *)(v7 + 2496));
          v48 = *(_QWORD *)(a1 + 640);
        }
      }
      *(_DWORD *)(v48 + 80) |= 0x10u;
    }
  }
  return 2LL;
}
