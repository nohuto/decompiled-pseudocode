/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C0009750
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00084C0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0004BD0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0005EA0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0008AF0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A930 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0010A98 (VidSchiDecrementDeviceReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C001182C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C00146D8 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
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
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rbx
  bool v20; // r10
  unsigned int v21; // eax
  _VIDMM_GLOBAL_ALLOC_NONPAGED *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r8
  __int64 v28; // r8
  _QWORD *v29; // rdx
  KSPIN_LOCK *v30; // rdi
  _QWORD *v31; // rax
  LARGE_INTEGER v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 **v40; // rax
  LARGE_INTEGER v41; // rcx
  unsigned __int128 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int128 v44; // rtt
  unsigned __int64 v45; // rcx
  void *v46; // rcx
  __int64 v47; // rcx
  void (__fastcall *v48)(_QWORD); // rax
  __int64 v49; // rcx
  void (__fastcall *v50)(_QWORD); // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  union _LARGE_INTEGER v53; // [rsp+A0h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v55; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v56; // [rsp+B8h] [rbp+20h]

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
    v20 = !*(_DWORD *)(v10 + 1276) && !*(_BYTE *)(v11 + 51);
    a4 = (_DWORD *)(v8 + 472);
    v21 = *(_DWORD *)(v8 + 472);
    if ( v21 > 0x10 )
    {
      if ( *(_DWORD *)(v11 + 724) )
      {
LABEL_59:
        if ( *(_QWORD *)(a1 + 48) )
        {
LABEL_62:
          VidSchiUpdateContextStatus(a1, 3LL, 14956LL);
          return 3LL;
        }
        v38 = (__int64 *)(a1 + 40);
        v39 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 2872LL;
        v40 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 2880LL);
        if ( *v40 == (__int64 *)v39 )
        {
          *v38 = v39;
          *(_QWORD *)(a1 + 48) = v40;
          *v40 = v38;
          *(_QWORD *)(v39 + 8) = v38;
          goto LABEL_62;
        }
LABEL_95:
        __fastfail(3u);
      }
    }
    else
    {
      v11 = 0LL;
      if ( v21 )
      {
        do
        {
          if ( (v22 = *(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)&a4[2 * (unsigned int)v11 + 2] + 96LL), !v20)
            || (v23 = *(_DWORD *)v22, (*(_DWORD *)v22 & 0x20000000) != 0) && v23 < 0
            || (v23 & 0x80000) != 0
            || (v23 & 0x100) != 0 )
          {
            if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v22) )
              goto LABEL_59;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *a4 );
      }
    }
  }
  v12 = *(_DWORD *)(v4 + 11192) != -1;
  v13 = *(_DWORD *)(a1 + 636);
  v55 = 0LL;
  if ( (v13 & 0xF) != 0 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 112) & 0x10) == 0 )
    goto LABEL_21;
  v14 = *(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(v14 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 200), 0, 0) )
    goto LABEL_21;
  if ( VidSchiCheckPreemptionPolicy(a1, &v55, v11, (int)a4) )
  {
    v6 = 4;
LABEL_20:
    if ( v12 )
    {
      v47 = *(_QWORD *)(a1 + 640);
      if ( (*(_DWORD *)(v47 + 80) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v4 + 11192) != -1 )
        {
          v48 = *(void (__fastcall **)(_QWORD))(v7 + 2456);
          if ( v48 )
          {
            v48(*(_QWORD *)(v7 + 2496));
            v47 = *(_QWORD *)(a1 + 640);
          }
        }
        *(_DWORD *)(v47 + 80) |= 0x10u;
      }
      if ( !*(_BYTE *)(v4 + 11196) )
      {
        VidSchiUpdateContextStatus(a1, 8LL, 15123LL);
        return 3LL;
      }
    }
LABEL_21:
    v17 = *(_QWORD *)(a1 + 96);
    v18 = *(_QWORD *)(v17 + 216);
    if ( v18 != a1 )
    {
      VidSchiProfilePerformanceTick(
        3LL,
        *(_QWORD *)(v17 + 24),
        *(_QWORD *)(a1 + 96),
        (__int64)a4,
        a1,
        0LL,
        0LL,
        *(_QWORD *)(v17 + 216));
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 72)) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 892) )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v51[3] = 281LL;
          v51[4] = 3840LL;
          v51[5] = a1;
          v51[6] = 0LL;
          v51[7] = 0LL;
          WdLogEvent5_WdCriticalError(v51);
          __debugbreak();
        }
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
      }
      *(_QWORD *)(v17 + 216) = a1;
      if ( v18 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v18 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 72), 0xFFFFFFFF) == 1 )
        {
          v25 = *(_QWORD *)(v18 + 96);
          if ( *(_QWORD *)(v25 + 224) == v18 )
            *(_QWORD *)(v25 + 224) = 0LL;
          v26 = *(_QWORD *)(v18 + 8);
          if ( *(_QWORD *)(v26 + 8) != v18 + 8 )
            goto LABEL_95;
          v27 = *(_QWORD **)(v18 + 16);
          if ( *v27 != v18 + 8 )
            goto LABEL_95;
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          v28 = *(_QWORD *)(v18 + 24);
          if ( *(_QWORD *)(v28 + 8) != v18 + 24 )
            goto LABEL_95;
          v29 = *(_QWORD **)(v18 + 32);
          if ( *v29 != v18 + 24 )
            goto LABEL_95;
          *v29 = v28;
          v30 = (KSPIN_LOCK *)(v24 + 1656);
          *(_QWORD *)(v28 + 8) = v29;
          while ( 1 )
          {
            v31 = VidSchiInterlockedRemoveHeadListIfExist(v30, (_QWORD **)(v18 + 704), (_DWORD *)(v18 + 720));
            if ( !v31 )
              break;
            ExFreePoolWithTag(v31 - 1, 0);
          }
          if ( (*(_DWORD *)(v18 + 112) & 0x100) != 0 )
          {
            while ( 1 )
            {
              v52 = VidSchiInterlockedRemoveHeadListIfExist(v30, (_QWORD **)(v18 + 728), (_DWORD *)(v18 + 744));
              if ( !v52 )
                break;
              ExFreePoolWithTag(v52 - 1, 0);
            }
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v18);
          v46 = *(void **)(v18 + 976);
          if ( v46 )
            ExFreePoolWithTag(v46, 0);
          VidSchiDecrementDeviceReference(*(PVOID *)(v18 + 104));
          ExFreePoolWithTag((PVOID)v18, 0);
        }
      }
    }
    return v6;
  }
  v15 = v55;
  if ( v55 != -1 )
  {
    v53.QuadPart = 0LL;
    v41 = KeQueryPerformanceCounter(&v53);
    v42 = (unsigned __int64)v41.QuadPart * (unsigned __int128)0x989680uLL;
    v56 = *((_QWORD *)&v42 + 1);
    if ( is_mul_ok(v41.QuadPart, 0x989680uLL) )
    {
      v44 = v42;
      v43 = v42 % (unsigned __int64)v53.QuadPart;
      v45 = v44 / (unsigned __int64)v53.QuadPart;
    }
    else
    {
      v43 = 10000000 * (v41.QuadPart % (unsigned __int64)v53.QuadPart) % v53.QuadPart;
      v45 = 10000000 * (v41.QuadPart / (unsigned __int64)v53.QuadPart)
          + 10000000 * (v41.QuadPart % (unsigned __int64)v53.QuadPart) / v53.QuadPart;
    }
    *(_QWORD *)(v4 + 128) = v45 + v15;
    *(_QWORD *)(v4 + 136) = *(_QWORD *)(v4 + 96);
    v36 = WdLogNewEntry5_WdEvent(v45, v43);
    *(_QWORD *)(v36 + 24) = *(unsigned __int16 *)(v4 + 4);
    v37 = *(_QWORD *)(v4 + 136);
    goto LABEL_54;
  }
  if ( !*(_DWORD *)(v4 + 2864)
    && (*(_DWORD *)(v4 + 2844) > 1u
     || (v16 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560)) != 0 && a1 != v16) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v32 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v32.QuadPart, 0x989680uLL) )
    {
      if ( PerformanceFrequency.QuadPart == 10000000 )
        v33 = 10000000 * v32.QuadPart / 0x989680uLL;
      else
        v33 = (unsigned __int64)(10000000 * v32.QuadPart) / PerformanceFrequency.QuadPart;
    }
    else
    {
      v33 = 10000000 * (v32.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
          + 10000000 * (v32.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
    }
    v34 = *(_QWORD *)(v4 + 96);
    v35 = v33 + *(_QWORD *)(a1 + 472);
    *(_QWORD *)(v4 + 128) = v35;
    *(_QWORD *)(v4 + 144) = v34;
    v36 = WdLogNewEntry5_WdEvent(v35, v33);
    *(_QWORD *)(v36 + 24) = *(unsigned __int16 *)(v4 + 4);
    v37 = *(_QWORD *)(v4 + 144);
LABEL_54:
    *(_QWORD *)(v36 + 32) = v37;
    WdLogEvent5_WdEvent(v36);
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
    v49 = *(_QWORD *)(a1 + 640);
    if ( (*(_DWORD *)(v49 + 80) & 0x10) == 0 )
    {
      if ( *(_DWORD *)(v4 + 11192) != -1 )
      {
        v50 = *(void (__fastcall **)(_QWORD))(v7 + 2456);
        if ( v50 )
        {
          v50(*(_QWORD *)(v7 + 2496));
          v49 = *(_QWORD *)(a1 + 640);
        }
      }
      *(_DWORD *)(v49 + 80) |= 0x10u;
    }
  }
  return 2LL;
}
