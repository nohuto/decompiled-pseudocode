// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x1401CAB40
 * Callers:
 *     KiIdleLoop @ 0x1401C75D0 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x1401CA960 (KxDispatchInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateSpeculationControl @ 0x1400EA240 (KiUpdateSpeculationControl.c)
 *     EtwTraceContextSwap @ 0x1401470B0 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14028DA10 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x1402A4290 (KiClearLastBranchRecordStack.c)
 *     KiResetProcessorTraceBuffer @ 0x1402A6020 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x1402AB1D0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x1402AB310 (KiSaveThreadIptState.c)
 *     KeCheckAndApplyBamQos @ 0x1402AEB40 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1402AF180 (KiCheckAndApplyCacheIsolation.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

bool __fastcall SwapContext(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  ULONG_PTR v7; // rbp
  unsigned __int64 v9; // rax
  ULONG64 v10; // rax
  __int64 v13; // rcx
  unsigned __int8 BpbTrappedRetpolineExitSpecCtrl; // al
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // rcx
  unsigned int v31; // ebp
  _BYTE v32[32]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v33; // [rsp+28h] [rbp-10h]

  _m_prefetchw((const void *)(v3 + 113));
  v33 = a1;
  if ( *(_BYTE *)(v3 + 113) )
  {
    v31 = 0;
    do
    {
      if ( (++v31 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v31);
      }
      _mm_pause();
    }
    while ( *(_BYTE *)(v3 + 113) );
  }
  *(_BYTE *)(v3 + 113) = 1;
  _disable();
  v4 = __rdtsc();
  v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - *(_QWORD *)(v1 + 23488);
  *(_QWORD *)(v1 + 23608) += v5;
  *(_QWORD *)(v1 + 23488) += v5;
  v6 = v5;
  if ( *(_BYTE *)(v1 + 6) )
  {
    *(_BYTE *)(v1 + 6) = 0;
    if ( *(_QWORD *)(v1 + 24) != v3 )
      HalRequestSoftwareInterrupt(2LL);
  }
  if ( (*(_BYTE *)(v3 + 2) & 0x36) != 0 )
  {
    KiBeginThreadAccountingPeriod(v1, (struct _KTHREAD *)v3, v6);
  }
  else
  {
    --*(_BYTE *)(v1 + 32);
    _enable();
  }
  ++*(_DWORD *)(v1 + 11580);
  v7 = KeFeatureBits;
  if ( KiCacheIsoBitmap && (KeFeatureBits & 0x100000000000LL) != 0 )
    KiCheckAndApplyCacheIsolation(v1, v3);
  if ( *(_QWORD *)(v1 + 24) != v3 && ((*(_DWORD *)(v3 + 120) ^ *(_DWORD *)(v1 + 236)) & 3) != 0 )
    KeCheckAndApplyBamQos(v1, v3);
  _RCX = *(_DWORD **)(v2 + 96);
  v9 = *(_DWORD *)(v2 + 592) & 0xFFFFFFFD;
  if ( (*(_QWORD *)(v2 + 592) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
  {
    if ( (v7 & 0x4000000000LL) != 0 )
    {
      __asm { xsaves  byte ptr [rcx] }
    }
    else if ( (v7 & 0x8000) != 0 )
    {
      _xsaveopt(_RCX, v9);
    }
    else if ( (v7 & 0x800000) != 0 )
    {
      _xsave(_RCX, v9);
    }
    else
    {
      _fxsave(_RCX);
    }
  }
  _RCX[6] = _mm_getcsr();
  if ( (v9 & 0x100) != 0 && (_DWORD)KiIptMsrMask )
    KiSaveThreadIptState(v2);
  *(_QWORD *)(v2 + 88) = v32;
  if ( *(char *)(v2 + 3) < 0 )
  {
    v10 = __readmsr(0xC0000102);
    if ( v10 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_QWORD *)(*(_QWORD *)(v2 + 496) + 128LL) = v10;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 544) + 1064LL) )
    *(_QWORD *)(v2 + 1968) = __readmsr(0xC0000100);
  if ( _bittestandreset(MK_FP(__GS__, 2131LL), 0) )
    *(_BYTE *)(v2 + 127) |= 2u;
  if ( _bittestandreset((signed __int32 *)(v3 + 127), 1u) )
    __writegsbyte(0x853u, KeGetPcr()->Prcb.BpbRetpolineState | 1);
  v13 = *(_QWORD *)(v3 + 544);
  LOBYTE(v13) = (*(_BYTE *)(v1 + 254) | v13) & 0xC2;
  if ( v13 == *(_QWORD *)(v2 + 544) )
  {
    if ( (KeGetPcr()->Prcb.BpbRetpolineState & 3) == 1 )
    {
      _disable();
      BpbTrappedRetpolineExitSpecCtrl = KeGetPcr()->Prcb.BpbTrappedRetpolineExitSpecCtrl;
      if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbTrappedRetpolineExitSpecCtrl )
      {
        __writegsbyte(0x27Au, BpbTrappedRetpolineExitSpecCtrl);
        __writemsr(0x48u, BpbTrappedRetpolineExitSpecCtrl);
      }
      if ( (KeGetPcr()->Prcb.BpbTrappedBpbState & 0x10) != 0 )
        __writemsr(0x49u, 1uLL);
      else
        _mm_lfence();
      __writegsbyte(0x853u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
      _enable();
    }
  }
  else
  {
    LOBYTE(v13) = v13 & 0xC0;
    KiUpdateSpeculationControl(v13);
  }
  v15 = *(_QWORD *)(v3 + 184);
  if ( v15 != *(_QWORD *)(v2 + 184) )
  {
    _interlockedbittestandset64(
      (volatile signed __int32 *)(v15 + 8LL * *(unsigned __int8 *)(v1 + 208) + 280),
      *(unsigned __int8 *)(v1 + 209));
    v16 = *(_QWORD *)(v15 + 40);
    if ( (KiKvaShadow & 1) != 0 )
    {
      _disable();
      if ( (v16 & 2) != 0 )
      {
        v16 |= 0x8000000000000000uLL;
        *(_DWORD *)(v1 + 28312) |= 1u;
      }
      *(_QWORD *)(v1 + 28288) = v16;
      v16 &= ~0x8000000000000000uLL;
      *(_DWORD *)(v1 + 28312) &= ~2u;
      if ( _bittest((const signed __int32 *)(v15 + 648), 0) )
        *(_DWORD *)(v1 + 28312) ^= 3u;
      _enable();
    }
    if ( (HvlEnlightenments & 1) != 0 )
    {
      HvlSwitchVirtualAddressSpace(v16);
    }
    else
    {
      __writecr3(v16);
      if ( (KiKvaShadow & 1) != 0 && (v16 & 2) == 0 )
      {
        v17 = __readcr4();
        v17 ^= 0x80uLL;
        __writecr4(v17);
        __writecr4(v17 ^ 0x80);
      }
    }
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v2 + 184) + 8LL * *(unsigned __int8 *)(v1 + 208) + 280),
      *(unsigned __int8 *)(v1 + 209));
  }
  v18 = *(_QWORD *)(v3 + 40);
  if ( (KiKvaShadow & 1) != 0 )
    *(_QWORD *)(v1 + 28296) = v18;
  else
    *(_QWORD *)(*(_QWORD *)(v1 - 376) + 4LL) = v18;
  *(_QWORD *)(v1 + 40) = v18;
  if ( v18 >= 0 )
    KeBugCheckEx(0x1CEu, v2, v3, 0LL, 0LL);
  if ( KiCpuTracingFlags )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(v2, v3);
    if ( (KiCpuTracingFlags & 2) != 0 )
      KiClearLastBranchRecordStack();
    if ( (KiCpuTracingFlags & 4) != 0 )
      KiResetProcessorTraceBuffer();
  }
  v19 = *(_QWORD *)(v3 + 592) | MEMORY[0xFFFFF780000005F0] & *(_QWORD *)(v2 + 592);
  *(_BYTE *)(v2 + 113) = 0;
  _RCX = *(unsigned int **)(v3 + 96);
  v21 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v21 )
  {
    if ( (v7 & 0x20000000000LL) != 0 && (v21 & 1) != 0 )
      __asm { fninit }
    if ( (v7 & 0x4000000000LL) != 0 )
    {
      __asm { xrstors byte ptr [rcx] }
    }
    else if ( (v7 & 0x800000) != 0 )
    {
      _xrstor(_RCX, (unsigned int)v21);
    }
    else
    {
      _fxrstor(_RCX);
    }
  }
  _mm_setcsr(_RCX[6]);
  if ( (v21 & 0x100) != 0 && (_DWORD)KiIptMsrMask )
    KiRestoreThreadIptState(v3);
  if ( !_bittest((const signed __int32 *)(v3 + 116), 0xAu) )
  {
    v22 = *(_DWORD *)(v3 + 1968);
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 544) + 1064LL) )
      v22 = *(_DWORD *)(v3 + 240) + 0x2000;
    v23 = *(_QWORD *)(v1 - 384);
    *(_WORD *)(v23 + 82) = v22;
    v24 = HIWORD(v22);
    *(_BYTE *)(v23 + 84) = v24;
    *(_BYTE *)(v23 + 87) = BYTE1(v24);
    __writemsr(0xC0000100, *(_QWORD *)(v3 + 1968));
    if ( (__GS__ & (unsigned __int16)(__ES__ & __DS__)) != 43 )
    {
      __DS__ = 43;
      _disable();
      __asm { swapgs }
      __asm { swapgs }
      _enable();
    }
    v25 = *(_QWORD *)(v3 + 240);
    v26 = *(_DWORD *)(v3 + 244);
    *(_QWORD *)(v1 - 336) = v25;
    if ( (*(_BYTE *)(v3 + 3) & 0x84) != 0 )
    {
      if ( *(char *)(v3 + 3) >= 0 )
      {
        LODWORD(v25) = *(_DWORD *)(v3 + 1976);
        v26 = *(_DWORD *)(v3 + 1980);
      }
      else
      {
        v27 = *(_QWORD *)(v3 + 496);
        LODWORD(v25) = *(_DWORD *)(v27 + 128);
        v26 = *(_DWORD *)(v27 + 132);
      }
    }
    __writemsr(0xC0000102, __PAIR64__(v26, v25));
  }
  if ( (*(_DWORD *)(v1 + 11884) & 0x10001) != 0 )
    KeBugCheckEx(0xB8u, v2, v3, 0LL, 0LL);
  ++*(_DWORD *)(v3 + 340);
  v28 = *(_BYTE *)(v3 + 193) == 1;
  if ( *(_BYTE *)(v3 + 193) == 1 )
  {
    v28 = (*(_WORD *)(v3 + 486) | v33) == 0;
    if ( *(_WORD *)(v3 + 486) | v33 )
    {
      HalRequestSoftwareInterrupt(1LL);
      return ((unsigned __int64)v32 | v29) == 0;
    }
  }
  return v28;
}
