/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02052F0
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02056B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0069994 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0069C40 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxWindowHitTest2 @ 0x1C00F9960 (xxxWindowHitTest2.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C0203A1C (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0204340 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

__int64 __fastcall xxxWindowHitTestFromTargetingProperty(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        int a5,
        struct tagRECT *a6)
{
  __int64 v8; // r15
  int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 v16; // r13
  BOOL v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r14d
  unsigned int v21; // r12d
  _DWORD *v22; // r14
  __int64 v23; // rax
  struct tagWND *v24; // r12
  struct tagPOINT v26; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  struct tagPOINT v29; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v30; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v31; // [rsp+78h] [rbp-88h]
  int *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  _DWORD v36[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C4h] [rbp-3Ch]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  struct tagPOINT *v44; // [rsp+D8h] [rbp-28h]
  struct tagRECT v45; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v46; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v47[12]; // [rsp+100h] [rbp+0h] BYREF

  v32 = a4;
  v26 = (struct tagPOINT)a2;
  v31 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (a1[2] == gptiCurrent || a1[33] == gptiCurrent) )
  {
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
    v33 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v33;
    v34 = a1;
    HMLockObject(a1);
    EtwTraceTouchTargetingPointerTargetStart();
    memset(v47, 0, sizeof(v47));
    v11 = *(_QWORD *)(a3 + 40);
    v47[0] = *(unsigned __int16 *)(a3 + 8);
    *(_QWORD *)&v47[1] = *(_QWORD *)(v11 + 32);
    *(_OWORD *)&v47[3] = *(_OWORD *)(v11 + 16);
    *(_OWORD *)&v47[7] = *(_OWORD *)v11;
    v47[11] = *(_DWORD *)(v11 + 40);
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (struct _LARGE_STRING *)v47, 0, 0, 0LL, 1u, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v14, v13, v15);
    v16 = (v12 >> 20) & 0xFFF;
    if ( v16 <= 0xFFDu )
    {
      if ( (unsigned int)v16 >= *(_DWORD *)(a3 + 64) && *(_QWORD *)(a3 + 56) )
      {
        if ( (*(_DWORD *)(a3 + 176) & 1) == 0 )
          return v8;
        v27.x = v26.x + *(_DWORD *)(a3 + 48);
        v27.y = v26.y + *(_DWORD *)(a3 + 52);
        v17 = PtInRect((_DWORD *)(a1[5] + 88), *(_QWORD *)&v27);
      }
      else
      {
        v17 = 1;
      }
      if ( v17 )
      {
        v18 = (v12 >> 10) & 0x3FF;
        v27.x = v18;
        if ( (unsigned int)v18 > 0x1FF )
          v27.x = v18 - 1024;
        v19 = v18 - 1024;
        if ( (unsigned int)v18 <= 0x1FF )
          v19 = (v12 >> 10) & 0x3FF;
        v20 = v12 & 0x3FF;
        v28 = v19;
        v27.y = v20;
        if ( v20 > 0x1FF )
          v27.y = v20 - 1024;
        v21 = v20 - 1024;
        if ( v20 <= 0x1FF )
          v21 = v20;
        if ( (unsigned int)OffsetInContact(v26, *(const struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v27) )
        {
          v26.y += v21;
          v26.x += v28;
          if ( *(_DWORD *)(a3 + 84) )
          {
            v29 = v26;
            LogicalToPhysicalDPIPoint(&v29, &v26, *(unsigned int *)(a1[5] + 288), 0LL);
            v22 = (_DWORD *)(a3 + 32);
            v36[0] = *(_DWORD *)a3;
            v30 = v29;
            v36[1] = 0;
            v37 = *(_QWORD *)(a3 + 8);
            v38 = *(_QWORD *)(a3 + 16);
            v40 = *(_DWORD *)(a3 + 36);
            v43 = 0LL;
            v44 = &v30;
            v39 = a3 + 32;
            v41 = 0;
            v42 = 0LL;
            v23 = (__int64)xxxDCEWindowHitTest2Internal((__int64)a1, v29, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v36);
          }
          else
          {
            v22 = (_DWORD *)(a3 + 32);
            v23 = xxxWindowHitTest2((const struct tagWND *)a1, *(_QWORD *)&v26, (int *)(a3 + 32), *(_DWORD *)(a3 + 36));
          }
          v8 = v23;
          if ( v23 )
          {
            v24 = (struct tagWND *)ValidateHwnd(v23);
            if ( v24 )
            {
              if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)a1) )
                v16 = 0;
              else
                *v22 = 1;
              v46 = *v31;
              TransformRectBetweenCoordinateSpaces(&v46, v31, v24, a1);
              v45 = v46;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v24, v16, &v27, 0LL, 1, &v45, 1);
              if ( !v16 || !a1[14] )
                v9 = 0;
              *v32 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
