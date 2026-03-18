/*
 * XREFs of DwmChildRectChange @ 0x1C0092168
 * Callers:
 *     OffsetWindow @ 0x1C0025CA0 (OffsetWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C002B214 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D9874 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     GreIsWindowResizeInProgress @ 0x1C0090F04 (GreIsWindowResizeInProgress.c)
 *     _AdjustWindowRectExForDpi @ 0x1C0092608 (_AdjustWindowRectExForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

LONG_PTR __fastcall DwmChildRectChange(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  INT v4; // r14d
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  LONG_PTR result; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm2
  int v12; // ebx
  int v13; // edi
  unsigned __int64 v14; // xmm0_8
  bool v15; // zf
  unsigned int WindowDpiLastNotify; // eax
  __int64 v17; // rax
  int v18; // edi
  int v19; // ebx
  int v20; // r8d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // r15d
  int v25; // r10d
  int v26; // r11d
  int v27; // ebx
  int v28; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int128 v30; // xmm1
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v35; // r9
  struct _KTHREAD *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r9
  __int64 *v39; // rax
  struct _KTHREAD *v40; // rdi
  __int64 v41; // rbx
  __int64 *v42; // rax
  int v43; // eax
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v45; // rbx
  INT v46; // edi
  __int64 v47; // rdi
  void *v48; // rbx
  _DWORD v49[4]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v50; // [rsp+40h] [rbp-C0h]
  __int64 v51; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+68h] [rbp-98h] BYREF
  __int128 v55; // [rsp+78h] [rbp-88h] BYREF
  __m128i v56; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v57[28]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0;
  v5 = (__int64 *)a1;
  v49[0] = 0;
  if ( !a1 )
    goto LABEL_13;
  do
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( v6 )
    {
      a3 = *(_QWORD *)(a1 + 24);
      v7 = 0LL;
      if ( a3 )
      {
        a4 = *(_QWORD *)(a3 + 8);
        if ( a4 )
          v7 = *(_QWORD *)(a4 + 24);
      }
      if ( v6 == v7 )
        break;
    }
    a1 = *(_QWORD *)(a1 + 104);
  }
  while ( v6 );
  if ( !a1
    || (v8 = *(_QWORD *)(a1 + 40), (*(_WORD *)(v8 + 42) & 0x3FFF) == 0x29D)
    || *(char *)(v8 + 25) >= 0
    || (result = GreIsWindowResizeInProgress(*(HWND *)a1, v49), !(_DWORD)result)
    || !v49[0] )
  {
LABEL_13:
    v10 = v5[5];
    v11 = *(__m128i *)(v10 + 88);
    v12 = _mm_cvtsi128_si32(v11);
    v50 = v11;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    v50.m128i_i32[0] = v12;
    v50.m128i_i32[2] = v13;
    if ( v12 < v13 )
    {
      v14 = _mm_srli_si128(v11, 8).m128i_u64[0];
      a1 = HIDWORD(v14);
      if ( v11.m128i_i32[1] < SHIDWORD(v14) )
      {
        v15 = (*(_DWORD *)(v10 + 232) & 0x8000000) == 0;
        v51 = 0LL;
        v52 = 0LL;
        if ( v15 )
        {
          if ( (*(_DWORD *)(v10 + 288) & 0xF) == 0
            && (v17 = *(_QWORD *)(v5[2] + 448)) != 0
            && (*(_DWORD *)(**(_QWORD **)(v17 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96;
          }
          else
          {
            WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(v5[2] + 416) + 284LL);
          }
        }
        else
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(v5);
        }
        AdjustWindowRectExForDpi(
          (unsigned int)&v51,
          *(_DWORD *)(v10 + 28),
          a3,
          *(_DWORD *)(v10 + 24),
          WindowDpiLastNotify);
        v10 = v5[5];
        v4 = v52;
        v18 = v13 - v52;
        v19 = v12 - v51;
        a4 = (unsigned int)(v50.m128i_i32[1] - HIDWORD(v51));
        a1 = (unsigned int)(v50.m128i_i32[3] - HIDWORD(v52));
        v20 = *(_DWORD *)(v10 + 104);
        if ( v20 < *(_DWORD *)(v10 + 112) && *(_DWORD *)(v10 + 108) < *(_DWORD *)(v10 + 116) )
        {
          v21 = *(_DWORD *)(v10 + 108);
          if ( v19 >= v20 )
            v19 = *(_DWORD *)(v10 + 104);
          if ( (int)a4 >= v21 )
            a4 = (unsigned int)v21;
          if ( v18 <= *(_DWORD *)(v10 + 112) )
            v18 = *(_DWORD *)(v10 + 112);
          v22 = *(_DWORD *)(v10 + 116);
          if ( (int)a1 <= v22 )
            a1 = (unsigned int)v22;
        }
        v23 = *(_DWORD *)(v10 + 96);
        v24 = v23;
        a3 = *(unsigned int *)(v10 + 88);
        v25 = *(_DWORD *)(v10 + 100);
        v26 = v25;
        if ( v19 <= (int)a3 )
          v19 = *(_DWORD *)(v10 + 88);
        if ( v19 < v23 )
          v24 = v19;
        v27 = *(_DWORD *)(v10 + 92);
        v50.m128i_i32[0] = v24;
        if ( (int)a4 <= v27 )
          a4 = (unsigned int)v27;
        if ( (int)a4 < v25 )
          v26 = a4;
        v50.m128i_i32[1] = v26;
        if ( v18 >= v23 )
          v18 = v23;
        v28 = a1;
        if ( v18 > (int)a3 )
          a3 = (unsigned int)v18;
        if ( (int)a1 >= v25 )
          v28 = v25;
        if ( v28 <= v27 )
        {
          a1 = (unsigned int)v27;
        }
        else if ( (int)a1 >= v25 )
        {
          a1 = (unsigned int)v25;
        }
        v50.m128i_i32[3] = a1;
        if ( v24 > (int)a3 )
          a3 = (unsigned int)v24;
        v50.m128i_i32[2] = a3;
        if ( v26 > (int)a1 )
          v50.m128i_i32[3] = v26;
        v11 = v50;
      }
    }
    CurrentThread = KeGetCurrentThread();
    v30 = *(_OWORD *)(v10 + 104);
    v54 = *(_OWORD *)(v10 + 88);
    v55 = v30;
    v56 = v11;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, v10, a3, a4) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v36 = KeGetCurrentThread();
          v37 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v31, v33, v35) )
          {
            v39 = (__int64 *)PsGetThreadWin32Thread(v36);
            if ( v39 )
              v37 = *v39;
          }
          if ( *(_QWORD *)(v37 + 448) )
          {
            v40 = KeGetCurrentThread();
            v41 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v31, v33, v38) )
            {
              v42 = (__int64 *)PsGetThreadWin32Thread(v40);
              if ( v42 )
                v41 = *v42;
            }
            v32 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v41 + 448) + 8LL) + 64LL);
            if ( (v32 & 1) != 0 )
            {
              v32 = v5[5];
              v43 = *(_DWORD *)(v32 + 288);
              if ( (v43 & 0xF) == 0 && (v43 & 0x40000000) != 0 )
              {
                v32 = *(unsigned __int16 *)(v32 + 284);
                if ( (_WORD)v32 != 96 )
                {
                  v53 = 0LL;
                  ScaledLogPixels = GreGetScaledLogPixels(v32);
                  v45 = v53;
                  v46 = ScaledLogPixels;
                  ScaleDPIRect((unsigned int)&v54, (unsigned int)&v54, ScaledLogPixels, 96, v53, v53);
                  ScaleDPIRect((unsigned int)&v55, (unsigned int)&v55, (unsigned __int16)v46, 96, v45, v45);
                  ScaleDPIRect((unsigned int)&v56, (unsigned int)&v56, (unsigned __int16)v46, 96, v45, v45);
                  v4 = EngMulDiv(v4, v46, 96);
                }
              }
            }
          }
        }
      }
    }
    v47 = *v5;
    result = ReferenceDwmApiPort(v32, v31, v33);
    v48 = (void *)result;
    _InterlockedIncrement64(&g_cDWMWindowUniqueness);
    if ( result )
    {
      memset(v57, 0, 0x68uLL);
      v57[0] = 6815808;
      *(_OWORD *)&v57[13] = v54;
      LOWORD(v57[1]) = 0x8000;
      *(__m128i *)&v57[21] = v56;
      v57[10] = 1073741845;
      *(_QWORD *)&v57[11] = v47;
      *(_OWORD *)&v57[17] = v55;
      v57[25] = v4;
      EtwUpdateEvent(v47);
      LpcRequestPort(v48, v57);
      return ObfDereferenceObject(v48);
    }
  }
  return result;
}
