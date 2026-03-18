/*
 * XREFs of DwmChildRectChange @ 0x1C0072D4C
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00098F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     OffsetChildren @ 0x1C0073D44 (OffsetChildren.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C007CFE4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00731D4 (_AdjustWindowRectExForDpi.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     GreIsWindowResizeInProgress @ 0x1C0076644 (GreIsWindowResizeInProgress.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

LONG_PTR __fastcall DwmChildRectChange(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  INT v3; // r12d
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
  int v19; // r15d
  int *v20; // rcx
  int v21; // r10d
  int v22; // ecx
  int v23; // r14d
  int v24; // eax
  int v25; // r11d
  int v26; // eax
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  int v30; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int128 v32; // xmm1
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *ThreadWin32Thread; // rax
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rbx
  __int64 *v39; // rax
  struct _KTHREAD *v40; // rdi
  __int64 v41; // rbx
  __int64 *v42; // rax
  int v43; // eax
  INT ScaledLogPixels; // edi
  __int64 v45; // rdi
  LONG_PTR result; // rax
  void *v47; // rbx
  __m128i v48; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B0h]
  __int128 v51; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v52; // [rsp+68h] [rbp-98h] BYREF
  __m128i v53; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v54[28]; // [rsp+90h] [rbp-70h] BYREF

  v3 = 0;
  v4 = (__int64 *)a1;
  if ( a1 )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 80);
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
      a1 = *(_QWORD *)(a1 + 80);
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
      v49 = 0LL;
      v50 = 0LL;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v9 + 288) & 0xF) == 0
          && (v16 = *(_QWORD *)(v4[2] + 448)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 52LL) & 1) != 0 )
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
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v4);
      }
      AdjustWindowRectExForDpi((unsigned int)&v49, *(_DWORD *)(v9 + 28), a3, *(_DWORD *)(v9 + 24), WindowDpiLastNotify);
      v3 = v50;
      v17 = v12 - v50;
      v18 = v11 - v49;
      v19 = v10.m128i_i32[3] - HIDWORD(v50);
      if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v4[5] + 104)) )
      {
        v22 = *v20;
        if ( v21 >= *(_DWORD *)(v9 + 108) )
          v21 = *(_DWORD *)(v9 + 108);
        if ( v17 <= *(_DWORD *)(v9 + 112) )
          v17 = *(_DWORD *)(v9 + 112);
        if ( v19 <= *(_DWORD *)(v9 + 116) )
          v19 = *(_DWORD *)(v9 + 116);
        if ( v18 >= v22 )
          v18 = v22;
      }
      v23 = *(_DWORD *)(v9 + 88);
      v24 = v18;
      a1 = *(unsigned int *)(v9 + 96);
      if ( v18 <= v23 )
        v24 = *(_DWORD *)(v9 + 88);
      if ( v24 >= (int)a1 )
      {
        v18 = *(_DWORD *)(v9 + 96);
      }
      else if ( v18 <= v23 )
      {
        v18 = *(_DWORD *)(v9 + 88);
      }
      v25 = *(_DWORD *)(v9 + 92);
      v26 = v25;
      v27 = *(_DWORD *)(v9 + 100);
      v48.m128i_i32[0] = v18;
      if ( v21 > v25 )
        v26 = v21;
      if ( v26 >= v27 )
      {
        v28 = *(_DWORD *)(v9 + 100);
      }
      else
      {
        v28 = *(_DWORD *)(v9 + 92);
        if ( v21 > v25 )
          v28 = v21;
      }
      v48.m128i_i32[1] = v28;
      v29 = *(_DWORD *)(v9 + 96);
      if ( v17 < (int)a1 )
        v29 = v17;
      if ( v29 <= v23 )
      {
        a1 = (unsigned int)v23;
      }
      else if ( v17 < (int)a1 )
      {
        a1 = (unsigned int)v17;
      }
      v30 = *(_DWORD *)(v9 + 100);
      if ( v19 < v27 )
        v30 = v19;
      if ( v30 <= v25 )
      {
        v27 = *(_DWORD *)(v9 + 92);
      }
      else if ( v19 < v27 )
      {
        v27 = v19;
      }
      v48.m128i_i32[3] = v27;
      if ( v18 > (int)a1 )
        a1 = (unsigned int)v18;
      v48.m128i_i32[2] = a1;
      if ( v28 > v27 )
        v48.m128i_i32[3] = v28;
      v10 = v48;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v32 = *(_OWORD *)(v9 + 104);
  v51 = *(_OWORD *)(v9 + 88);
  v52 = v32;
  v53 = v10;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, v9) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v37 = KeGetCurrentThread();
        v38 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
        {
          v39 = (__int64 *)PsGetThreadWin32Thread(v37);
          if ( v39 )
            v38 = *v39;
        }
        if ( *(_QWORD *)(v38 + 448) )
        {
          v40 = KeGetCurrentThread();
          v41 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
          {
            v42 = (__int64 *)PsGetThreadWin32Thread(v40);
            if ( v42 )
              v41 = *v42;
          }
          v34 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v41 + 448) + 8LL) + 52LL);
          if ( (v34 & 1) != 0 )
          {
            v34 = v4[5];
            v43 = *(_DWORD *)(v34 + 288);
            if ( (v43 & 0xF) == 0 && (v43 & 0x40000000) != 0 )
            {
              v34 = *(unsigned __int16 *)(v34 + 284);
              if ( (_WORD)v34 != 96 )
              {
                ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v34);
                ScaleDPIRect((unsigned int)&v51, (unsigned int)&v51, ScaledLogPixels, 96, 0LL, 0LL);
                ScaleDPIRect((unsigned int)&v52, (unsigned int)&v52, (unsigned __int16)ScaledLogPixels, 96, 0LL, 0LL);
                ScaleDPIRect((unsigned int)&v53, (unsigned int)&v53, (unsigned __int16)ScaledLogPixels, 96, 0LL, 0LL);
                v3 = EngMulDiv(v3, ScaledLogPixels, 96);
              }
            }
          }
        }
      }
    }
  }
  v45 = *v4;
  result = ReferenceDwmApiPort(v34, v33, v35);
  v47 = (void *)result;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( result )
  {
    memset(v54, 0, 0x68uLL);
    v54[0] = 6815808;
    *(_OWORD *)&v54[13] = v51;
    LOWORD(v54[1]) = 0x8000;
    *(__m128i *)&v54[21] = v53;
    v54[10] = 1073741845;
    *(_QWORD *)&v54[11] = v45;
    *(_OWORD *)&v54[17] = v52;
    v54[25] = v3;
    EtwUpdateEvent(v45);
    LpcRequestPort(v47, v54);
    return ObfDereferenceObject(v47);
  }
  return result;
}
