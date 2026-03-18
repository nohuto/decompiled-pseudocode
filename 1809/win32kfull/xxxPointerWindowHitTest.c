/*
 * XREFs of xxxPointerWindowHitTest @ 0x1C01F0930
 * Callers:
 *     EditionPointerWindowHitTest @ 0x1C01EF9C0 (EditionPointerWindowHitTest.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsThreadDesktopComposed @ 0x1C0043B10 (IsThreadDesktopComposed.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C01ED7F8 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01ED96C (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EF578 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01EF8FC (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x1C0243080 (TouchTargetingCreateContact.c)
 */

HWND __fastcall xxxPointerWindowHitTest(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        struct tagPOINT *a11)
{
  HWND v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  struct tagRECT *v18; // rcx
  __int128 v19; // xmm0
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm0
  struct tagWND *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  struct tagPOINT v32[2]; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v33; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[4]; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v35; // [rsp+94h] [rbp-6Ch]
  __int128 v36; // [rsp+9Ch] [rbp-64h]
  __int128 v37; // [rsp+ACh] [rbp-54h]
  int v38; // [rsp+BCh] [rbp-44h]
  _QWORD v39[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v40[3]; // [rsp+D8h] [rbp-28h] BYREF
  struct tagRECT v41; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v42; // [rsp+100h] [rbp+0h] BYREF

  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, a9 + 8) )
  {
    v14 = Win32AllocPool(192LL, 1920103253LL);
    if ( v14 )
    {
      v16 = Win32AllocPool(184LL, 1920103253LL);
      if ( v16 )
      {
        PushW32ThreadLock(v14, v40, (__int64)Win32FreePool);
        PushW32ThreadLock(v16, v39, (__int64)Win32FreePool);
        if ( gSqmIsOptedIn )
          WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 1000LL);
        *a11 = 0LL;
        *(_QWORD *)(v14 + 184) = 0LL;
        v41 = 0LL;
        v42 = 0LL;
        v32[0] = 0LL;
        if ( (unsigned int)_GetDeviceRects(a9 + 8, &v41, &v42) )
        {
          *(_OWORD *)&v32[0].x = v42;
          v33 = v41;
          _SetHimetricToPixelRatio(&v33, v32, v14);
          v18 = &v41;
        }
        else
        {
          v18 = (struct tagRECT *)v32[0];
        }
        v19 = *(_OWORD *)(a9 + 112);
        v20 = *(_DWORD *)(a9 + 108);
        v35 = a6;
        v36 = v19;
        v37 = v19;
        if ( (v20 & 2) != 0 )
          v38 = *(_DWORD *)(a9 + 144);
        else
          v38 = 0;
        TouchTargetingCreateContact(v34, v18, v17, v14);
        *(_DWORD *)v16 = a3;
        *(_QWORD *)(v16 + 8) = a4;
        *(_QWORD *)(v16 + 16) = a5;
        *(_QWORD *)(v16 + 24) = a10;
        *(_DWORD *)(v16 + 32) = *a7;
        *(_DWORD *)(v16 + 36) = a8;
        *(_QWORD *)(v16 + 40) = v14;
        *(struct tagPOINT *)(v16 + 48) = *a11;
        *(_QWORD *)(v16 + 56) = 0LL;
        *(_DWORD *)(v16 + 64) = 0;
        *(_DWORD *)(v16 + 84) = IsThreadDesktopComposed((__int64)a1);
        *(_DWORD *)(v16 + 88) = v21;
        *(_QWORD *)(v16 + 96) = v21;
        *(_QWORD *)(v16 + 168) = v21;
        *(_QWORD *)(v16 + 176) = v21;
        v32[0] = a6;
        v22 = Win32AllocPool(192LL, 1920103253LL);
        *(_QWORD *)&v41.left = v22;
        if ( v22 )
        {
          v23 = *(_OWORD **)(v16 + 40);
          *(_OWORD *)v22 = *v23;
          *(_OWORD *)(v22 + 16) = v23[1];
          *(_OWORD *)(v22 + 32) = v23[2];
          *(_OWORD *)(v22 + 48) = v23[3];
          *(_OWORD *)(v22 + 64) = v23[4];
          *(_OWORD *)(v22 + 80) = v23[5];
          *(_OWORD *)(v22 + 96) = v23[6];
          v24 = v23[7];
          v23 += 8;
          *(_OWORD *)(v22 + 112) = v24;
          *(_OWORD *)(v22 + 128) = *v23;
          *(_OWORD *)(v22 + 144) = v23[1];
          *(_OWORD *)(v22 + 160) = v23[2];
          *(_OWORD *)(v22 + 176) = v23[3];
          v25 = TopLevelTouchTarget(
                  a2,
                  (struct tagTOUCHTARGETINGCONTACT *)v22,
                  v32,
                  a11,
                  *(_DWORD *)(v16 + 84),
                  *(_QWORD *)(a9 + 88),
                  0LL,
                  0LL,
                  0LL);
          v26 = *(_QWORD *)&v41.left;
          *(_QWORD *)(v16 + 168) = v25;
          Win32FreePool(v26);
        }
        v33 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
        xxxWindowHitTestWithTargeting((__int64)a2, a6, v16, &v33, 0);
        if ( *(_DWORD *)(v16 + 180) )
        {
          v13 = xxxWindowHitTestWithoutTargeting(a1, a2, a3, a4, a5, a6, a7, a8);
        }
        else
        {
          *a7 = *(_DWORD *)(v16 + 32);
          *a11 = *(struct tagPOINT *)(v16 + 48);
          v13 = *(HWND *)(v16 + 56);
          TTSqm(*(struct tagPOINT *)(v16 + 48), (const struct tagTOUCHTARGETINGCONTACT *)v14);
        }
        PopAndFreeAlwaysW32ThreadLock((__int64)v39, v27);
        PopAndFreeAlwaysW32ThreadLock((__int64)v40, v28);
        goto LABEL_25;
      }
      Win32FreePool(v14);
    }
    return 0LL;
  }
  if ( gSqmIsOptedIn && *(_DWORD *)(a9 + 8) == 2 && (*(_DWORD *)(a9 + 20) & 0x10000) != 0 )
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 0LL);
  v13 = xxxWindowHitTestWithoutTargeting(a1, a2, a3, a4, a5, a6, a7, a8);
LABEL_25:
  EtwTraceTouchTargetingWindowHitTestStop();
  return v13;
}
