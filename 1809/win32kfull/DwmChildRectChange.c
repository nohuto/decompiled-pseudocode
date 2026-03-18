/*
 * XREFs of DwmChildRectChange @ 0x1C00A746C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     OffsetWindow @ 0x1C006F138 (OffsetWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0077E2C (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00C7DC8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C001CA24 (ScaleDPIRect.c)
 *     GreIsWindowResizeInProgress @ 0x1C0074940 (GreIsWindowResizeInProgress.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00A7904 (_AdjustWindowRectExForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

LONG_PTR __fastcall DwmChildRectChange(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  INT v3; // r14d
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
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
  __int32 v18; // edi
  __int32 v19; // ebx
  int v20; // r9d
  int v21; // r8d
  int v22; // eax
  __int32 v23; // eax
  __int32 v24; // r15d
  __int32 v25; // r8d
  int v26; // r10d
  int v27; // r11d
  int v28; // ebx
  int v29; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __m128i v31; // xmm1
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *ThreadWin32Thread; // rax
  struct _KTHREAD *v35; // rdi
  __int64 v36; // rbx
  __int64 *v37; // rax
  struct _KTHREAD *v38; // rdi
  __int64 v39; // rbx
  __int64 *v40; // rax
  int v41; // eax
  unsigned __int16 ScaledLogPixels; // ax
  INT v43; // edi
  __int64 v44; // rdi
  void *v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128i v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __m128i v52; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v53; // [rsp+68h] [rbp-98h] BYREF
  __m128i v54; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v55[28]; // [rsp+90h] [rbp-70h] BYREF

  v3 = 0;
  v4 = (__int64 *)a1;
  v49 = 0;
  if ( !a1 )
    goto LABEL_13;
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
  if ( !a1
    || (v8 = *(_QWORD *)(a1 + 40), (*(_WORD *)(v8 + 42) & 0x2FFF) == 0x29D)
    || *(char *)(v8 + 25) >= 0
    || (result = GreIsWindowResizeInProgress(*(HWND *)a1, &v49), !(_DWORD)result)
    || !v49 )
  {
LABEL_13:
    v10 = v4[5];
    v11 = *(__m128i *)(v10 + 88);
    v12 = _mm_cvtsi128_si32(v11);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    if ( v12 < v13 )
    {
      v14 = _mm_srli_si128(v11, 8).m128i_u64[0];
      a1 = HIDWORD(v14);
      if ( v11.m128i_i32[1] < SHIDWORD(v14) )
      {
        v15 = (*(_DWORD *)(v10 + 232) & 0x8000000) == 0;
        v50 = 0LL;
        v51 = 0LL;
        if ( v15 )
        {
          if ( (*(_DWORD *)(v10 + 288) & 0xF) == 0
            && (v17 = *(_QWORD *)(v4[2] + 456)) != 0
            && (*(_DWORD *)(**(_QWORD **)(v17 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96;
          }
          else
          {
            WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(v4[2] + 424) + 284LL);
          }
        }
        else
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(v4);
        }
        AdjustWindowRectExForDpi(
          (unsigned int)&v50,
          *(_DWORD *)(v10 + 28),
          a3,
          *(_DWORD *)(v10 + 24),
          WindowDpiLastNotify);
        v10 = v4[5];
        v3 = v51;
        v18 = v13 - v51;
        v19 = v12 - v50;
        v20 = v11.m128i_i32[1] - HIDWORD(v50);
        a1 = (unsigned int)(v11.m128i_i32[3] - HIDWORD(v51));
        v21 = *(_DWORD *)(v10 + 104);
        if ( v21 < *(_DWORD *)(v10 + 112) && *(_DWORD *)(v10 + 108) < *(_DWORD *)(v10 + 116) )
        {
          if ( v19 >= v21 )
            v19 = *(_DWORD *)(v10 + 104);
          if ( v20 >= *(_DWORD *)(v10 + 108) )
            v20 = *(_DWORD *)(v10 + 108);
          if ( v18 <= *(_DWORD *)(v10 + 112) )
            v18 = *(_DWORD *)(v10 + 112);
          v22 = *(_DWORD *)(v10 + 116);
          if ( (int)a1 <= v22 )
            a1 = (unsigned int)v22;
        }
        v23 = *(_DWORD *)(v10 + 96);
        v24 = v23;
        v25 = *(_DWORD *)(v10 + 88);
        v26 = *(_DWORD *)(v10 + 100);
        v27 = v26;
        if ( v19 <= v25 )
          v19 = *(_DWORD *)(v10 + 88);
        if ( v19 < v23 )
          v24 = v19;
        v28 = *(_DWORD *)(v10 + 92);
        v48.m128i_i32[0] = v24;
        if ( v20 <= v28 )
          v20 = *(_DWORD *)(v10 + 92);
        if ( v20 < v26 )
          v27 = v20;
        v48.m128i_i32[1] = v27;
        if ( v18 >= v23 )
          v18 = *(_DWORD *)(v10 + 96);
        v29 = a1;
        if ( v18 > v25 )
          v25 = v18;
        if ( (int)a1 >= v26 )
          v29 = *(_DWORD *)(v10 + 100);
        if ( v29 <= v28 )
        {
          a1 = (unsigned int)v28;
        }
        else if ( (int)a1 >= v26 )
        {
          a1 = (unsigned int)v26;
        }
        v48.m128i_i32[3] = a1;
        if ( v24 > v25 )
          v25 = v24;
        v48.m128i_i32[2] = v25;
        if ( v27 > (int)a1 )
          v48.m128i_i32[3] = v27;
        v11 = v48;
      }
    }
    CurrentThread = KeGetCurrentThread();
    v31 = *(__m128i *)(v10 + 104);
    v52 = *(__m128i *)(v10 + 88);
    v53 = v31;
    v54 = v11;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, v10) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v35 = KeGetCurrentThread();
          v36 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v33, v32) )
          {
            v37 = (__int64 *)PsGetThreadWin32Thread(v35);
            if ( v37 )
              v36 = *v37;
          }
          if ( *(_QWORD *)(v36 + 456) )
          {
            v38 = KeGetCurrentThread();
            v39 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v33, v32) )
            {
              v40 = (__int64 *)PsGetThreadWin32Thread(v38);
              if ( v40 )
                v39 = *v40;
            }
            v33 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v39 + 456) + 8LL) + 64LL);
            if ( (v33 & 1) != 0 )
            {
              v33 = v4[5];
              v41 = *(_DWORD *)(v33 + 288);
              if ( (v41 & 0xF) == 0 && (v41 & 0x40000000) != 0 )
              {
                v33 = *(unsigned __int16 *)(v33 + 284);
                if ( (_WORD)v33 != 96 )
                {
                  ScaledLogPixels = GreGetScaledLogPixels(v33);
                  v43 = ScaledLogPixels;
                  ScaleDPIRect(&v52, &v52, ScaledLogPixels, 0x60u, 0LL, 0LL);
                  ScaleDPIRect(&v53, &v53, v43, 0x60u, 0LL, 0LL);
                  ScaleDPIRect(&v54, &v54, v43, 0x60u, 0LL, 0LL);
                  v3 = EngMulDiv(v3, v43, 96);
                }
              }
            }
          }
        }
      }
    }
    v44 = *v4;
    result = ReferenceDwmApiPort(v33, v32);
    v45 = (void *)result;
    _InterlockedIncrement64(&g_cDWMWindowUniqueness);
    if ( result )
    {
      memset(v55, 0, 0x68uLL);
      v55[0] = 6815808;
      *(__m128i *)&v55[13] = v52;
      LOWORD(v55[1]) = 0x8000;
      *(__m128i *)&v55[21] = v54;
      v55[10] = 1073741845;
      *(_QWORD *)&v55[11] = v44;
      *(__m128i *)&v55[17] = v53;
      v55[25] = v3;
      EtwUpdateEvent(v44, 1073741845LL, v46, v47);
      LpcRequestPort(v45, v55);
      return ObfDereferenceObject(v45);
    }
  }
  return result;
}
