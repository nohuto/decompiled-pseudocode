/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C005B7C4
 * Callers:
 *     xxxSendInput @ 0x1C005D570 (xxxSendInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsGpqForegroundAccessible @ 0x1C005DF64 (IsGpqForegroundAccessible.c)
 *     CheckGrantedAccess @ 0x1C005E558 (CheckGrantedAccess.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  int v17; // r10d
  int v18; // r9d
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // edx
  __int16 v24; // ax
  int v25; // esi
  __int64 v26; // rcx
  BOOL v27; // r14d
  __int16 v28; // ax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  ULONG v33; // eax
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // ecx
  __int64 v39; // [rsp+38h] [rbp-30h]
  __int16 v40; // [rsp+40h] [rbp-28h] BYREF
  __int16 v41; // [rsp+42h] [rbp-26h]
  unsigned int v42; // [rsp+44h] [rbp-24h]
  int v43; // [rsp+48h] [rbp-20h]
  unsigned int v44; // [rsp+4Ch] [rbp-1Ch]
  unsigned int v45; // [rsp+50h] [rbp-18h]
  int v46; // [rsp+54h] [rbp-14h]

  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 880LL), 32LL)
    && PsGetCurrentProcess(v13, v12) != gpepCSRSS )
  {
    v33 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v33, v34);
    return 0LL;
  }
  if ( !gptiBlockInput || gptiBlockInput == gptiCurrent )
  {
    if ( (a4 & 0x100000) != 0 )
    {
      if ( (a4 & 0x1FF) == 0 )
      {
LABEL_6:
        v14 = a2;
        v15 = a5;
        EtwTraceBeginInjectMouse((unsigned int)a5, a1, v14);
        if ( a5 )
        {
          v16 = a6;
        }
        else
        {
          v15 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          v16 = MilliSecsToQpcCount(v15);
        }
        v39 = v16;
        v17 = a4 & 0x40000;
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 416LL);
        v18 = a4 & 0x10000;
        v19 = ((a4 & 0x40000) != 0) + 1;
        if ( (a4 & 0x10000) == 0 )
          v19 = (a4 & 0x40000) != 0;
        v20 = v19 + 1;
        if ( (a4 & 0x80000) == 0 )
          v20 = v19;
        if ( v20 <= 1 )
        {
          v21 = 0LL;
          v22 = a4 & 0x187E;
          if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
          {
            v22 = a4 & 0x7E;
          }
          else if ( (a4 & 0x1800) == 0x1800 )
          {
            v22 = a4 & 0x7E;
          }
          else if ( (a4 & 0x1800) != 0 )
          {
            if ( a3 > 32766 )
            {
              v21 = 0x7FFFLL;
            }
            else
            {
              v21 = (unsigned int)a3;
              if ( a3 < -32768 )
                v21 = 4294934528LL;
            }
          }
          else if ( (a3 & 0xFFFFFFFC) == 0 )
          {
            if ( (a4 & 0x80) != 0 )
            {
              v35 = v22 | 0x80;
              if ( (a3 & 1) == 0 )
                v35 = a4 & 0x187E;
              v22 = v35;
              if ( (a3 & 2) != 0 )
                v22 = v35 | 0x200;
            }
            if ( (a4 & 0x100) != 0 )
            {
              v36 = v22 | 0x100;
              if ( (a3 & 1) == 0 )
                v36 = v22;
              v22 = v36;
              if ( (a3 & 2) != 0 )
                v22 = v36 | 0x400;
            }
          }
          v23 = v22 >> 1;
          v40 = -2;
          v24 = (a4 & 0x8000) != 0;
          v41 = v24;
          if ( (a4 & 0x4000) != 0 )
          {
            v24 |= 2u;
            v41 = v24;
          }
          if ( (a4 & 0x2000) != 0 )
          {
            v24 |= 8u;
            v41 = v24;
          }
          if ( (a4 & 0x20000) != 0 )
          {
            v24 |= 0x20u;
            v41 = v24;
          }
          v25 = 16;
          if ( v18 )
          {
            v24 |= 0x10u;
            v41 = v24;
          }
          v26 = v18 == 0;
          if ( v17 )
          {
            v24 |= 0x40u;
            v41 = v24;
          }
          v27 = 0;
          if ( !v17 )
            v27 = v18 == 0;
          if ( (a4 & 0x80000) != 0 )
          {
            v26 = 128LL;
            v41 = v24 | 0x80;
          }
          v42 = v23;
          v28 = HIWORD(v23);
          if ( (_DWORD)v21 )
            v28 = v21;
          v43 = 0;
          HIWORD(v42) = v28;
          v44 = a1;
          v45 = a2;
          v46 = a7;
          if ( gdwInAtomicOperation )
          {
            v26 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v26, gdwInAtomicOperation, v21, 64LL);
          if ( (a4 & 1) != 0 )
          {
            if ( !v27 )
              v25 = 18;
          }
          else
          {
            v44 = 0;
            v45 = 0;
            v25 = 24;
            v41 &= ~1u;
          }
          v29 = v25 | 0xA0;
          if ( (a4 & 0x100000) == 0 )
            v29 = v25;
          v30 = v29;
          if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) < 0 )
            v30 = v29 | 0x40;
          v31 = v30 | 0x100;
          if ( a8 )
            v31 = v30;
          SynthesizeMouseInput(0LL, &v40, v15, v39, v31);
          if ( a8 )
            ProcessMouseEvent();
          EnterCrit(0LL, 1LL);
          if ( (gdwPUDFlags & 0x100) != 0 )
            ResetAccessibilityCountersOnMouseInput();
          EtwTraceEndInjectMouse((unsigned int)v15, a1, a2);
          return 1LL;
        }
        return 0LL;
      }
    }
    else
    {
      if ( (unsigned int)IsGpqForegroundAccessible(1LL) )
        goto LABEL_6;
      MSGLUA_GPQFOREGROUND();
    }
    return 1LL;
  }
  return 1LL;
}
