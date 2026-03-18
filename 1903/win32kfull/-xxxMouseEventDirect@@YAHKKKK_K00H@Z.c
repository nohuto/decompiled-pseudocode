/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C011C2DC
 * Callers:
 *     xxxSendInput @ 0x1C001E7BC (xxxSendInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001DB9C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CheckGrantedAccess @ 0x1C00BE534 (CheckGrantedAccess.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C011C684 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     GetScreenRect @ 0x1C012D034 (GetScreenRect.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C013A088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  int v19; // r10d
  _BOOL8 v20; // rcx
  int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int16 v26; // ax
  int v27; // esi
  BOOL v28; // r12d
  __int16 v29; // ax
  __int64 v30; // rcx
  INT v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  ULONG v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // ecx
  int v40; // r9d
  ULONG v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // r9d
  int v46; // ecx
  int v47; // ecx
  __m128i v48; // xmm6
  int v49; // ebx
  int v50; // eax
  int v51; // ebx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v57; // xmm6
  int v58; // eax
  int v59; // eax
  unsigned int aa; // [rsp+38h] [rbp-61h]
  int v61; // [rsp+40h] [rbp-59h] BYREF
  __int64 v62; // [rsp+44h] [rbp-55h] BYREF
  int v63; // [rsp+4Ch] [rbp-4Dh]
  LARGE_INTEGER v64; // [rsp+50h] [rbp-49h]
  char v65[16]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v66; // [rsp+68h] [rbp-31h] BYREF
  __int128 v67; // [rsp+70h] [rbp-29h]

  aa = a2;
  v66 = 0LL;
  v67 = 0uLL;
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
  {
    v35 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v35, v36, v37, v38);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 21;
LABEL_56:
      WPP_RECORDER_SF_(v39, 2, 20, v40, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
    }
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)
    && PsGetCurrentProcess(v13, v12, v14, v15) != gpepCSRSS )
  {
    v41 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v41, v42, v43, v44);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 22;
      goto LABEL_56;
    }
    return 0LL;
  }
  v16 = gptiBlockInput;
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = 23;
LABEL_62:
      WPP_RECORDER_SF_(v16, 2, 20, v45, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = 24;
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
  v64 = PerformanceCounter;
  ((void (__fastcall *)(_QWORD, _QWORD))InputTraceLogging::Mouse::InjectInput)(
    2LL,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  v19 = a4 & 0x40000;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 416LL);
  v20 = (a4 & 0x40000) != 0;
  v21 = a4 & 0x10000;
  v22 = v20 + 1;
  if ( (a4 & 0x10000) == 0 )
    v22 = (a4 & 0x40000) != 0;
  if ( v22 > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(v20, 2u, 0x14u, 0x19u, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids, a4);
    return 0LL;
  }
  v23 = 0LL;
  v24 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v24 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v24 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    if ( a3 > 32766 )
    {
      v23 = 0x7FFFLL;
    }
    else
    {
      v23 = (unsigned int)a3;
      if ( a3 < -32768 )
        v23 = 4294934528LL;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      v46 = v24 | 0x80;
      if ( (a3 & 1) == 0 )
        v46 = a4 & 0x187E;
      v24 = v46;
      if ( (a3 & 2) != 0 )
        v24 = v46 | 0x200;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v47 = v24 | 0x100;
      if ( (a3 & 1) == 0 )
        v47 = v24;
      v24 = v47;
      if ( (a3 & 2) != 0 )
        v24 = v47 | 0x400;
    }
  }
  v25 = v24 >> 1;
  LOWORD(v66) = -2;
  v26 = (a4 & 0x8000) != 0;
  WORD1(v66) = v26;
  if ( (a4 & 0x4000) != 0 )
  {
    v26 |= 2u;
    WORD1(v66) = v26;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v26 |= 8u;
    WORD1(v66) = v26;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v26 |= 0x20u;
    WORD1(v66) = v26;
  }
  v27 = 16;
  if ( v21 )
  {
    v26 |= 0x10u;
    WORD1(v66) = v26;
  }
  if ( v19 )
    WORD1(v66) = v26 | 0x40;
  v28 = 0;
  HIDWORD(v66) = v25;
  v29 = WORD1(v25);
  if ( !v19 )
    v28 = v21 == 0;
  v30 = 49153LL;
  if ( (_DWORD)v23 )
    v29 = v23;
  HIWORD(v66) = v29;
  if ( (a4 & 0xC001) != 0xC001
    || (W32GetCurrentThreadDpiAwarenessContext(49153LL, v25, v23, 64LL) & 0xF) == 2
    || (v30 = gpDispInfo, *(_DWORD *)*gpDispInfo <= 1u) )
  {
    v31 = aa;
  }
  else
  {
    v48 = *(__m128i *)GetScreenRect(v65);
    v49 = _mm_cvtsi128_si32(v48);
    v50 = v49 + EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v48, 8)) - v49, 0xFFFF);
    v51 = _mm_cvtsi128_si32(_mm_srli_si128(v48, 4));
    v61 = v50;
    v63 = 0;
    v62 = (unsigned int)(v51 + EngMulDiv(aa, _mm_cvtsi128_si32(_mm_srli_si128(v48, 12)) - v51, 0xFFFF));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v53, v52, v54, v55);
    LogicalToPhysicalDPIPoint((char *)&v62 + 4, &v61, CurrentThreadDpiAwarenessContext, 0LL);
    v57 = *(__m128i *)(*gpDispInfo + 24LL);
    v58 = _mm_cvtsi128_si32(v57);
    a = EngMulDiv(HIDWORD(v62) - v58, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v57, 8)) - v58);
    v59 = _mm_cvtsi128_si32(_mm_srli_si128(v57, 4));
    v31 = EngMulDiv(v63 - v59, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v57, 12)) - v59);
    aa = v31;
  }
  HIDWORD(v67) = a7;
  LODWORD(v67) = 0;
  *(_QWORD *)((char *)&v67 + 4) = __PAIR64__(v31, a);
  if ( gdwInAtomicOperation )
  {
    v30 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v30);
  if ( (a4 & 1) != 0 )
  {
    if ( !v28 )
      v27 = 18;
  }
  else
  {
    *(_QWORD *)((char *)&v67 + 4) = 0LL;
    WORD1(v66) &= ~1u;
    v27 = 24;
  }
  if ( (unsigned __int8)Enforced(v32) && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) < 0 )
    v27 |= 0x40u;
  v33 = v27 | 0x100;
  if ( a8 )
    v33 = v27;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
    0LL,
    &v66,
    v17,
    (LARGE_INTEGER)v64.QuadPart,
    v33);
  if ( a8 )
    ProcessMouseEvent();
  EnterCrit(0LL, 1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v17, a, aa);
  return 1LL;
}
