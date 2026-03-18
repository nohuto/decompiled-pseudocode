/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138
 * Callers:
 *     xxxSendInput @ 0x1C001E64C (xxxSendInput.c)
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C001B4E0 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001F58C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CheckGrantedAccess @ 0x1C005FC14 (CheckGrantedAccess.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C0114088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  unsigned __int64 v17; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  int v19; // edx
  int v20; // r10d
  BOOL v21; // ecx
  int v22; // r9d
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // edx
  __int64 v26; // rdx
  __int16 v27; // ax
  int v28; // esi
  BOOL v29; // r12d
  __int16 v30; // ax
  __int64 v31; // rcx
  INT v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  ULONG v36; // eax
  int v37; // ecx
  int v38; // r9d
  ULONG v39; // eax
  int v40; // r9d
  int v41; // ecx
  int v42; // ecx
  __m128i v43; // xmm6
  int v44; // ebx
  int v45; // eax
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v52; // xmm6
  int v53; // eax
  int v54; // eax
  unsigned int aa; // [rsp+38h] [rbp-61h]
  int v56; // [rsp+40h] [rbp-59h] BYREF
  __int64 v57; // [rsp+44h] [rbp-55h] BYREF
  int v58; // [rsp+4Ch] [rbp-4Dh]
  LARGE_INTEGER v59; // [rsp+50h] [rbp-49h]
  char v60[16]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v61; // [rsp+68h] [rbp-31h] BYREF
  __int128 v62; // [rsp+70h] [rbp-29h]

  aa = a2;
  v61 = 0LL;
  v62 = 0uLL;
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
  {
    v36 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v36);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = 21;
LABEL_56:
      WPP_RECORDER_SF_(v37, 2, 20, v38, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
    }
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 888LL), 32LL)
    && PsGetCurrentProcess(v13, v12, v14, v15) != gpepCSRSS )
  {
    v39 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v39);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = 22;
      goto LABEL_56;
    }
    return 0LL;
  }
  v16 = gptiBlockInput;
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 23;
LABEL_62:
      WPP_RECORDER_SF_(v16, 2, 20, v40, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 24;
      goto LABEL_62;
    }
    return 1LL;
  }
  v17 = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, a, a2);
  if ( a5 )
  {
    PerformanceCounter.QuadPart = a6;
  }
  else
  {
    v17 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  v59 = PerformanceCounter;
  ((void (__fastcall *)(_QWORD, _QWORD))InputTraceLogging::Mouse::InjectInput)(
    2LL,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  v20 = a4 & 0x40000;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 416LL);
  v21 = (a4 & 0x40000) != 0;
  v22 = a4 & 0x10000;
  v23 = v21 + 1;
  if ( (a4 & 0x10000) == 0 )
    v23 = (a4 & 0x40000) != 0;
  if ( v23 > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_D(v21, v19, 20, 25, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids, a4);
    }
    return 0LL;
  }
  v24 = 0LL;
  v25 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v25 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v25 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    if ( a3 > 32766 )
    {
      v24 = 0x7FFFLL;
    }
    else
    {
      v24 = (unsigned int)a3;
      if ( a3 < -32768 )
        v24 = 4294934528LL;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      v41 = v25 | 0x80;
      if ( (a3 & 1) == 0 )
        v41 = a4 & 0x187E;
      v25 = v41;
      if ( (a3 & 2) != 0 )
        v25 = v41 | 0x200;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v42 = v25 | 0x100;
      if ( (a3 & 1) == 0 )
        v42 = v25;
      v25 = v42;
      if ( (a3 & 2) != 0 )
        v25 = v42 | 0x400;
    }
  }
  v26 = v25 >> 1;
  LOWORD(v61) = -2;
  v27 = (a4 & 0x8000) != 0;
  WORD1(v61) = v27;
  if ( (a4 & 0x4000) != 0 )
  {
    v27 |= 2u;
    WORD1(v61) = v27;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v27 |= 8u;
    WORD1(v61) = v27;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v27 |= 0x20u;
    WORD1(v61) = v27;
  }
  v28 = 16;
  if ( v22 )
  {
    v27 |= 0x10u;
    WORD1(v61) = v27;
  }
  if ( v20 )
    WORD1(v61) = v27 | 0x40;
  v29 = 0;
  HIDWORD(v61) = v26;
  v30 = WORD1(v26);
  if ( !v20 )
    v29 = v22 == 0;
  v31 = 49153LL;
  if ( (_DWORD)v24 )
    v30 = v24;
  HIWORD(v61) = v30;
  if ( (a4 & 0xC001) != 0xC001
    || (W32GetCurrentThreadDpiAwarenessContext(49153LL, v26, v24, 64LL) & 0xF) == 2
    || (v31 = gpDispInfo, *(_DWORD *)*gpDispInfo <= 1u) )
  {
    v32 = aa;
  }
  else
  {
    v43 = *(__m128i *)GetScreenRect(v60);
    v44 = _mm_cvtsi128_si32(v43);
    v45 = v44 + EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v43, 8)) - v44, 0xFFFF);
    v46 = _mm_cvtsi128_si32(_mm_srli_si128(v43, 4));
    v56 = v45;
    v58 = 0;
    v57 = (unsigned int)(v46 + EngMulDiv(aa, _mm_cvtsi128_si32(_mm_srli_si128(v43, 12)) - v46, 0xFFFF));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50);
    LogicalToPhysicalDPIPoint((char *)&v57 + 4, &v56, CurrentThreadDpiAwarenessContext, 0LL);
    v52 = *(__m128i *)(*gpDispInfo + 24LL);
    v53 = _mm_cvtsi128_si32(v52);
    a = EngMulDiv(HIDWORD(v57) - v53, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v52, 8)) - v53);
    v54 = _mm_cvtsi128_si32(_mm_srli_si128(v52, 4));
    v32 = EngMulDiv(v58 - v54, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v52, 12)) - v54);
    aa = v32;
  }
  HIDWORD(v62) = a7;
  LODWORD(v62) = 0;
  *(_QWORD *)((char *)&v62 + 4) = __PAIR64__(v32, a);
  if ( gdwInAtomicOperation )
  {
    v31 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v31);
  if ( (a4 & 1) != 0 )
  {
    if ( !v29 )
      v28 = 18;
  }
  else
  {
    *(_QWORD *)((char *)&v62 + 4) = 0LL;
    WORD1(v61) &= ~1u;
    v28 = 24;
  }
  if ( (unsigned __int8)Enforced(v33) && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) < 0 )
    v28 |= 0x40u;
  v34 = v28 | 0x100;
  if ( a8 )
    v34 = v28;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
    0LL,
    &v61,
    v17,
    (LARGE_INTEGER)v59.QuadPart,
    v34);
  if ( a8 )
    ProcessMouseEvent();
  EnterCrit(0LL, 1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v17, a, aa);
  return 1LL;
}
