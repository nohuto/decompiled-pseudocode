/*
 * XREFs of DwmChildRectChange @ 0x1C0032E90
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0010034 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     OffsetWindow @ 0x1C002C110 (OffsetWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0031684 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     _AdjustWindowRectExForDpi @ 0x1C0033330 (_AdjustWindowRectExForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     ScaleDPIRect @ 0x1C0035AD0 (ScaleDPIRect.c)
 *     GreIsWindowResizeInProgress @ 0x1C00F7694 (GreIsWindowResizeInProgress.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

LONG_PTR __fastcall DwmChildRectChange(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  INT v3; // r14d
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // xmm2
  int v11; // ebx
  int v12; // edi
  unsigned __int64 v13; // xmm0_8
  bool v14; // zf
  unsigned int WindowDpiLastNotify; // eax
  __int64 v16; // rax
  int v17; // edi
  int v18; // ebx
  int v19; // r9d
  int v20; // r8d
  int v21; // eax
  int v22; // eax
  int v23; // r15d
  int v24; // r10d
  int v25; // r11d
  int v26; // ebx
  int v27; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int128 v29; // xmm1
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *ThreadWin32Thread; // rax
  struct _KTHREAD *v34; // rdi
  __int64 v35; // rbx
  __int64 *v36; // rax
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rbx
  __int64 *v39; // rax
  int v40; // eax
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v42; // rbx
  INT v43; // edi
  __int64 v44; // rdi
  LONG_PTR result; // rax
  void *v46; // rbx
  __m128i v47; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  __int128 v51; // [rsp+68h] [rbp-98h] BYREF
  __int128 v52; // [rsp+78h] [rbp-88h] BYREF
  __m128i v53; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v54[28]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0;
  v4 = (__int64 *)a1;
  if ( a1 )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 104);
      if ( v5 )
      {
        a3 = *(_QWORD *)(a1 + 24);
        v6 = 0LL;
        if ( a3 )
        {
          v7 = *(_QWORD *)(a3 + 8);
          if ( v7 )
            v6 = *(_QWORD *)(v7 + 24);
        }
        if ( v5 == v6 )
          break;
      }
      a1 = *(_QWORD *)(a1 + 104);
    }
    while ( v5 );
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( (*(_WORD *)(v8 + 42) & 0x3FFF) != 0x29D && *(char *)(v8 + 25) < 0 )
        GreIsWindowResizeInProgress(*(HWND *)a1);
    }
  }
  v9 = v4[5];
  v10 = *(__m128i *)(v9 + 88);
  v11 = _mm_cvtsi128_si32(v10);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
  if ( v11 < v12 )
  {
    v13 = _mm_srli_si128(v10, 8).m128i_u64[0];
    a1 = HIDWORD(v13);
    if ( v10.m128i_i32[1] < SHIDWORD(v13) )
    {
      v14 = (*(_DWORD *)(v9 + 232) & 0x8000000) == 0;
      v48 = 0LL;
      v49 = 0LL;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v9 + 288) & 0xF) == 0
          && (v16 = *(_QWORD *)(v4[2] + 448)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(v4[2] + 416) + 284LL);
        }
      }
      else
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(v4, v9, a3);
      }
      AdjustWindowRectExForDpi((unsigned int)&v48, *(_DWORD *)(v9 + 28), a3, *(_DWORD *)(v9 + 24), WindowDpiLastNotify);
      v9 = v4[5];
      v3 = v49;
      v17 = v12 - v49;
      v18 = v11 - v48;
      v19 = v10.m128i_i32[1] - HIDWORD(v48);
      a1 = (unsigned int)(v10.m128i_i32[3] - HIDWORD(v49));
      v20 = *(_DWORD *)(v9 + 104);
      if ( v20 < *(_DWORD *)(v9 + 112) && *(_DWORD *)(v9 + 108) < *(_DWORD *)(v9 + 116) )
      {
        if ( v18 >= v20 )
          v18 = *(_DWORD *)(v9 + 104);
        if ( v19 >= *(_DWORD *)(v9 + 108) )
          v19 = *(_DWORD *)(v9 + 108);
        if ( v17 <= *(_DWORD *)(v9 + 112) )
          v17 = *(_DWORD *)(v9 + 112);
        v21 = *(_DWORD *)(v9 + 116);
        if ( (int)a1 <= v21 )
          a1 = (unsigned int)v21;
      }
      v22 = *(_DWORD *)(v9 + 96);
      v23 = v22;
      a3 = *(unsigned int *)(v9 + 88);
      v24 = *(_DWORD *)(v9 + 100);
      v25 = v24;
      if ( v18 <= (int)a3 )
        v18 = *(_DWORD *)(v9 + 88);
      if ( v18 < v22 )
        v23 = v18;
      v26 = *(_DWORD *)(v9 + 92);
      v47.m128i_i32[0] = v23;
      if ( v19 <= v26 )
        v19 = *(_DWORD *)(v9 + 92);
      if ( v19 < v24 )
        v25 = v19;
      v47.m128i_i32[1] = v25;
      if ( v17 >= v22 )
        v17 = *(_DWORD *)(v9 + 96);
      v27 = a1;
      if ( v17 > (int)a3 )
        a3 = (unsigned int)v17;
      if ( (int)a1 >= v24 )
        v27 = *(_DWORD *)(v9 + 100);
      if ( v27 <= v26 )
      {
        a1 = (unsigned int)v26;
      }
      else if ( (int)a1 >= v24 )
      {
        a1 = (unsigned int)v24;
      }
      v47.m128i_i32[3] = a1;
      if ( v23 > (int)a3 )
        a3 = (unsigned int)v23;
      v47.m128i_i32[2] = a3;
      if ( v25 > (int)a1 )
        v47.m128i_i32[3] = v25;
      v10 = v47;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v29 = *(_OWORD *)(v9 + 104);
  v51 = *(_OWORD *)(v9 + 88);
  v52 = v29;
  v53 = v10;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, v9, a3) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v34 = KeGetCurrentThread();
        v35 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v31, v30, v32) )
        {
          v36 = (__int64 *)PsGetThreadWin32Thread(v34);
          if ( v36 )
            v35 = *v36;
        }
        if ( *(_QWORD *)(v35 + 448) )
        {
          v37 = KeGetCurrentThread();
          v38 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v31, v30, v32) )
          {
            v39 = (__int64 *)PsGetThreadWin32Thread(v37);
            if ( v39 )
              v38 = *v39;
          }
          v31 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v38 + 448) + 8LL) + 64LL);
          if ( (v31 & 1) != 0 )
          {
            v31 = v4[5];
            v40 = *(_DWORD *)(v31 + 288);
            if ( (v40 & 0xF) == 0 && (v40 & 0x40000000) != 0 )
            {
              v31 = *(unsigned __int16 *)(v31 + 284);
              if ( (_WORD)v31 != 96 )
              {
                v50 = 0LL;
                ScaledLogPixels = GreGetScaledLogPixels(v31);
                v42 = v50;
                v43 = ScaledLogPixels;
                ScaleDPIRect((unsigned int)&v51, (unsigned int)&v51, ScaledLogPixels, 96, v50, v50);
                ScaleDPIRect((unsigned int)&v52, (unsigned int)&v52, (unsigned __int16)v43, 96, v42, v42);
                ScaleDPIRect((unsigned int)&v53, (unsigned int)&v53, (unsigned __int16)v43, 96, v42, v42);
                v3 = EngMulDiv(v3, v43, 96);
              }
            }
          }
        }
      }
    }
  }
  v44 = *v4;
  result = ReferenceDwmApiPort(v31, v30, v32);
  v46 = (void *)result;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( result )
  {
    memset(v54, 0, 0x68uLL);
    v54[0] = 6815808;
    *(_OWORD *)&v54[13] = v51;
    LOWORD(v54[1]) = 0x8000;
    *(__m128i *)&v54[21] = v53;
    v54[10] = 1073741845;
    *(_QWORD *)&v54[11] = v44;
    *(_OWORD *)&v54[17] = v52;
    v54[25] = v3;
    EtwUpdateEvent(v44);
    LpcRequestPort(v46, v54);
    return ObfDereferenceObject(v46);
  }
  return result;
}
