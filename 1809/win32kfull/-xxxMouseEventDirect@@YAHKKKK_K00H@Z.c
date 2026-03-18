/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00ACE38
 * Callers:
 *     xxxSendInput @ 0x1C00AE874 (xxxSendInput.c)
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C00AA204 (CheckGrantedAccess.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00AD214 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     IsGpqForegroundAccessible @ 0x1C00AFFBC (IsGpqForegroundAccessible.c)
 *     GetScreenRect @ 0x1C00B9150 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a1,
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
  __int64 v16; // r8
  unsigned __int64 v17; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  int v19; // r10d
  int v20; // r9d
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int16 v26; // ax
  int v27; // r14d
  bool v28; // zf
  __int64 v29; // r9
  BOOL v30; // r12d
  __int16 v31; // ax
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  ULONG v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  int v42; // ecx
  __m128i v43; // xmm6
  int v44; // ebx
  int v45; // eax
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v50; // xmm6
  int v51; // eax
  int v52; // eax
  unsigned int v53; // [rsp+38h] [rbp-71h]
  unsigned int a; // [rsp+3Ch] [rbp-6Dh]
  _DWORD v55[2]; // [rsp+48h] [rbp-61h] BYREF
  _DWORD v56[2]; // [rsp+50h] [rbp-59h] BYREF
  LARGE_INTEGER v57; // [rsp+58h] [rbp-51h]
  _BYTE v58[16]; // [rsp+60h] [rbp-49h] BYREF
  __int16 v59; // [rsp+70h] [rbp-39h] BYREF
  __int16 v60; // [rsp+72h] [rbp-37h]
  int v61; // [rsp+74h] [rbp-35h]
  int v62; // [rsp+78h] [rbp-31h]
  unsigned __int64 v63; // [rsp+7Ch] [rbp-2Dh]
  int v64; // [rsp+84h] [rbp-25h]

  a = a1;
  v53 = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)
    && PsGetCurrentProcess(v13, v12, v14, v15) != gpepCSRSS )
  {
    v37 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v37, v38, v39, v40);
    return 0LL;
  }
  if ( !gptiBlockInput || gptiBlockInput == gptiCurrent )
  {
    if ( (a4 & 0x100000) == 0 )
    {
      if ( !(unsigned int)IsGpqForegroundAccessible(1LL) )
      {
        MSGLUA_GPQFOREGROUND();
        return 1LL;
      }
      goto LABEL_6;
    }
    if ( (a4 & 0x1FF) == 0 )
    {
LABEL_6:
      v16 = a2;
      v17 = a5;
      EtwTraceBeginInjectMouse((unsigned int)a5, a1, v16);
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
      v57 = PerformanceCounter;
      ((void (__fastcall *)(_QWORD, _QWORD))InputTraceLogging::Mouse::InjectInput)(
        3LL,
        (LARGE_INTEGER)PerformanceCounter.QuadPart);
      v19 = a4 & 0x40000;
      gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
      v20 = a4 & 0x10000;
      v21 = ((a4 & 0x40000) != 0) + 1;
      if ( (a4 & 0x10000) == 0 )
        v21 = (a4 & 0x40000) != 0;
      v22 = v21 + 1;
      if ( (a4 & 0x80000) == 0 )
        v22 = v21;
      if ( v22 <= 1 )
      {
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
          if ( (a4 & 0x80) != 0 )
          {
            v41 = v24 | 0x80;
            if ( (a3 & 1) == 0 )
              v41 = a4 & 0x187E;
            v24 = v41;
            if ( (a3 & 2) != 0 )
              v24 = v41 | 0x200;
          }
          if ( (a4 & 0x100) != 0 )
          {
            v42 = v24 | 0x100;
            if ( (a3 & 1) == 0 )
              v42 = v24;
            v24 = v42;
            if ( (a3 & 2) != 0 )
              v24 = v42 | 0x400;
          }
        }
        v25 = v24 >> 1;
        v59 = -2;
        v26 = (a4 & 0x8000) != 0;
        v60 = v26;
        if ( (a4 & 0x4000) != 0 )
        {
          v26 |= 2u;
          v60 = v26;
        }
        if ( (a4 & 0x2000) != 0 )
        {
          v26 |= 8u;
          v60 = v26;
        }
        if ( (a4 & 0x20000) != 0 )
        {
          v26 |= 0x20u;
          v60 = v26;
        }
        v27 = 16;
        if ( v20 )
        {
          v26 |= 0x10u;
          v60 = v26;
        }
        v28 = v20 == 0;
        v29 = 64LL;
        if ( v19 )
        {
          v26 |= 0x40u;
          v60 = v26;
        }
        v30 = 0;
        if ( !v19 )
          v30 = v28;
        if ( (a4 & 0x80000) != 0 )
          v60 = v26 | 0x80;
        v61 = v25;
        v31 = WORD1(v25);
        v32 = 49153LL;
        if ( (_DWORD)v23 )
          v31 = v23;
        HIWORD(v61) = v31;
        if ( (a4 & 0xC001) == 0xC001 && (W32GetCurrentThreadDpiAwarenessContext(49153LL, v25) & 0xF) != 2 )
        {
          v32 = gpDispInfo;
          if ( *(_DWORD *)*gpDispInfo > 1u )
          {
            v43 = *(__m128i *)GetScreenRect(v58);
            v44 = _mm_cvtsi128_si32(v43);
            v45 = v44 + EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v43, 8)) - v44, 0xFFFF);
            v46 = _mm_cvtsi128_si32(_mm_srli_si128(v43, 4));
            v55[0] = v45;
            v55[1] = v46 + EngMulDiv(v53, _mm_cvtsi128_si32(_mm_srli_si128(v43, 12)) - v46, 0xFFFF);
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v48, v47);
            LogicalToPhysicalDPIPoint(v56, v55, CurrentThreadDpiAwarenessContext, 0LL);
            v50 = *(__m128i *)(*gpDispInfo + 24LL);
            v51 = _mm_cvtsi128_si32(v50);
            a = EngMulDiv(v56[0] - v51, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v50, 8)) - v51);
            v52 = _mm_cvtsi128_si32(_mm_srli_si128(v50, 4));
            v53 = EngMulDiv(v56[1] - v52, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v50, 12)) - v52);
          }
        }
        v63 = __PAIR64__(v53, a);
        v64 = a7;
        v62 = 0;
        if ( gdwInAtomicOperation )
        {
          v32 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v32, gdwInAtomicOperation, v23, v29);
        if ( (a4 & 1) != 0 )
        {
          if ( !v30 )
            v27 = 18;
        }
        else
        {
          v63 = 0LL;
          v60 &= ~1u;
          v27 = 24;
        }
        v33 = v27 | 0xA0;
        if ( (a4 & 0x100000) == 0 )
          v33 = v27;
        v34 = v33;
        if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) < 0 )
          v34 = v33 | 0x40;
        v35 = v34 | 0x100;
        if ( a8 )
          v35 = v34;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
          0LL,
          &v59,
          v17,
          (LARGE_INTEGER)v57.QuadPart,
          v35);
        if ( a8 )
          ProcessMouseEvent();
        EnterCrit(0LL, 1LL);
        if ( (gdwPUDFlags & 0x100) != 0 )
          ResetAccessibilityCountersOnMouseInput();
        EtwTraceEndInjectMouse((unsigned int)v17, a, v53);
        return 1LL;
      }
      return 0LL;
    }
  }
  return 1LL;
}
