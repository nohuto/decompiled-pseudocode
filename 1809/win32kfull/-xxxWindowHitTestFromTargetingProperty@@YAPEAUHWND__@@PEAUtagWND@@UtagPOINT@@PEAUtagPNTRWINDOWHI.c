/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01EF1DC
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EF578 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C002B790 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072410 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxWindowHitTest2 @ 0x1C00DEEE8 (xxxWindowHitTest2.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C01ED5F0 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01EDFCC (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

HWND __fastcall xxxWindowHitTestFromTargetingProperty(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        int a5,
        struct tagRECT *a6)
{
  HWND v8; // r15
  int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int128 *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // r13
  BOOL v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // r12d
  _DWORD *v21; // r14
  HWND v22; // rax
  struct tagWND *v23; // r12
  struct tagPOINT v25; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h]
  struct tagPOINT v28; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v29; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v30; // [rsp+78h] [rbp-88h]
  int *v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  int *v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B4h] [rbp-4Ch]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+C0h] [rbp-40h]
  struct tagPOINT *v40; // [rsp+C8h] [rbp-38h]
  struct tagRECT v41; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v42[4]; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v43; // [rsp+100h] [rbp+0h] BYREF
  int v44; // [rsp+110h] [rbp+10h] BYREF
  __int64 v45; // [rsp+114h] [rbp+14h]
  __int128 v46; // [rsp+11Ch] [rbp+1Ch]
  __int128 v47; // [rsp+12Ch] [rbp+2Ch]
  int v48; // [rsp+13Ch] [rbp+3Ch]

  v31 = a4;
  v25 = (struct tagPOINT)a2;
  v30 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*(_QWORD *)(a1 + 16) == gptiCurrent || *(_QWORD *)(a1 + 248) == gptiCurrent) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v42[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v42;
    v42[1] = a1;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    EtwTraceTouchTargetingPointerTargetStart();
    v11 = (__int128 *)*((_QWORD *)a3 + 5);
    v44 = *((unsigned __int16 *)a3 + 4);
    v45 = *((_QWORD *)v11 + 4);
    v46 = v11[1];
    v47 = *v11;
    v48 = *((_DWORD *)v11 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout((__int64 *)a1, 0x24Du, 0LL, (__int64)&v44, 0, 0, 0LL, 1, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v14, v13);
    v15 = (v12 >> 20) & 0xFFF;
    if ( v15 <= 0xFFDu )
    {
      if ( v15 >= (unsigned int)a3[16] && *((_QWORD *)a3 + 7) )
      {
        if ( (a3[44] & 1) == 0 )
          return v8;
        v26.x = v25.x + a3[12];
        v26.y = v25.y + a3[13];
        v16 = PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), *(_QWORD *)&v26);
      }
      else
      {
        v16 = 1;
      }
      if ( v16 )
      {
        v17 = (v12 >> 10) & 0x3FF;
        v26.x = v17;
        if ( (unsigned int)v17 > 0x1FF )
          v26.x = v17 - 1024;
        v18 = v17 - 1024;
        if ( (unsigned int)v17 <= 0x1FF )
          v18 = (v12 >> 10) & 0x3FF;
        v19 = v12 & 0x3FF;
        v27 = v18;
        v26.y = v19;
        if ( v19 > 0x1FF )
          v26.y = v19 - 1024;
        v20 = v19 - 1024;
        if ( v19 <= 0x1FF )
          v20 = v19;
        if ( (unsigned int)OffsetInContact(v25, *((const struct tagTOUCHTARGETINGCONTACT **)a3 + 5), v26) )
        {
          v25.y += v20;
          v25.x += v27;
          if ( a3[21] )
          {
            v28 = v25;
            LogicalToPhysicalDPIPoint(&v28, &v25, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 0LL);
            v21 = a3 + 8;
            v32 = *a3;
            v33 = *((_QWORD *)a3 + 1);
            v34 = *((_QWORD *)a3 + 2);
            v36 = a3[9];
            v40 = &v29;
            v29 = v28;
            v35 = a3 + 8;
            v37 = 0;
            v38 = 0LL;
            v39 = 0;
            v22 = xxxDCEWindowHitTest2Internal((struct tagWND *)a1, v28, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)&v32);
          }
          else
          {
            v21 = a3 + 8;
            v22 = (HWND)xxxWindowHitTest2((const struct tagWND *)a1, *(_QWORD *)&v25, a3 + 8, a3[9]);
          }
          v8 = v22;
          if ( v22 )
          {
            v23 = (struct tagWND *)ValidateHwnd(v22);
            if ( v23 )
            {
              if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)a1) )
                v15 = 0;
              else
                *v21 = 1;
              v43 = *v30;
              TransformRectBetweenCoordinateSpaces(&v43, v30, v23, a1);
              v41 = v43;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v23, v15, &v26, 0LL, 1, &v41, 1);
              if ( !v15 || !*(_QWORD *)(a1 + 88) )
                v9 = 0;
              *v31 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
