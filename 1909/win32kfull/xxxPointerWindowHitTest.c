/*
 * XREFs of xxxPointerWindowHitTest @ 0x1C0206920
 * Callers:
 *     EditionPointerWindowHitTest @ 0x1C0205B40 (EditionPointerWindowHitTest.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsThreadDesktopComposed @ 0x1C006AB70 (IsThreadDesktopComposed.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0203C24 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0203D98 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02056B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C0205A4C (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x1C025B738 (TouchTargetingCreateContact.c)
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
  struct tagTHREADINFO *v21; // r14
  __int64 v22; // r8
  __int64 v23; // rax
  _OWORD *v24; // rcx
  __int128 v25; // xmm0
  struct tagWND *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  struct tagPOINT v34; // [rsp+68h] [rbp-98h] BYREF
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v36; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v37[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v38[3]; // [rsp+A8h] [rbp-58h] BYREF
  int v39; // [rsp+C0h] [rbp-40h] BYREF
  struct tagPOINT v40; // [rsp+C4h] [rbp-3Ch]
  __int128 v41; // [rsp+CCh] [rbp-34h]
  __int128 v42; // [rsp+DCh] [rbp-24h]
  int v43; // [rsp+ECh] [rbp-14h]
  struct tagRECT v44; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v45; // [rsp+100h] [rbp+0h] BYREF

  v34 = (struct tagPOINT)a1;
  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, a9 + 8) )
  {
    v14 = Win32AllocPool(192LL, 1920103253LL);
    if ( v14 )
    {
      v16 = Win32AllocPool(184LL, 1920103253LL);
      if ( v16 )
      {
        memset(v38, 0, sizeof(v38));
        memset(v37, 0, sizeof(v37));
        PushW32ThreadLock(v14, v38, (__int64)Win32FreePool);
        PushW32ThreadLock(v16, v37, (__int64)Win32FreePool);
        if ( gSqmIsOptedIn )
          WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 1000LL);
        *a11 = 0LL;
        *(_QWORD *)(v14 + 184) = 0LL;
        v44 = 0LL;
        v45 = 0LL;
        *(_QWORD *)&v35 = 0LL;
        v39 = 0;
        if ( (unsigned int)_GetDeviceRects(a9 + 8, &v44, &v45) )
        {
          v35 = v45;
          v36 = v44;
          _SetHimetricToPixelRatio(&v36, &v35, v14);
          v18 = &v44;
        }
        else
        {
          v18 = (struct tagRECT *)v35;
        }
        v19 = *(_OWORD *)(a9 + 112);
        v20 = *(_DWORD *)(a9 + 108);
        v40 = a6;
        v41 = v19;
        v42 = v19;
        if ( (v20 & 2) != 0 )
          v43 = *(_DWORD *)(a9 + 144);
        else
          v43 = 0;
        TouchTargetingCreateContact(&v39, v18, v17, v14);
        v21 = (struct tagTHREADINFO *)v34;
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
        *(_DWORD *)(v16 + 84) = IsThreadDesktopComposed((__int64)v21);
        *(_DWORD *)(v16 + 88) = v22;
        *(_QWORD *)(v16 + 96) = v22;
        *(_QWORD *)(v16 + 168) = v22;
        *(_QWORD *)(v16 + 176) = v22;
        v34 = a6;
        v23 = Win32AllocPool(192LL, 1920103253LL);
        *(_QWORD *)&v35 = v23;
        if ( v23 )
        {
          v24 = *(_OWORD **)(v16 + 40);
          *(_OWORD *)v23 = *v24;
          *(_OWORD *)(v23 + 16) = v24[1];
          *(_OWORD *)(v23 + 32) = v24[2];
          *(_OWORD *)(v23 + 48) = v24[3];
          *(_OWORD *)(v23 + 64) = v24[4];
          *(_OWORD *)(v23 + 80) = v24[5];
          *(_OWORD *)(v23 + 96) = v24[6];
          v25 = v24[7];
          v24 += 8;
          *(_OWORD *)(v23 + 112) = v25;
          *(_OWORD *)(v23 + 128) = *v24;
          *(_OWORD *)(v23 + 144) = v24[1];
          *(_OWORD *)(v23 + 160) = v24[2];
          *(_OWORD *)(v23 + 176) = v24[3];
          v26 = TopLevelTouchTarget(a2, (struct tagTOUCHTARGETINGCONTACT *)v23, &v34, a11, *(_DWORD *)(v16 + 84));
          v27 = v35;
          *(_QWORD *)(v16 + 168) = v26;
          Win32FreePool(v27);
        }
        v36 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
        xxxWindowHitTestWithTargeting((__int64)a2, a6, v16, &v36, 0);
        if ( *(_DWORD *)(v16 + 180) )
        {
          v13 = xxxWindowHitTestWithoutTargeting(v21, a2, a3, a4, a5, a6, a7, a8);
        }
        else
        {
          *a7 = *(_DWORD *)(v16 + 32);
          *a11 = *(struct tagPOINT *)(v16 + 48);
          v13 = *(HWND *)(v16 + 56);
          TTSqm(*(struct tagPOINT *)(v16 + 48), (const struct tagTOUCHTARGETINGCONTACT *)v14);
        }
        PopAndFreeAlwaysW32ThreadLock((__int64)v37, v28, v29);
        PopAndFreeAlwaysW32ThreadLock((__int64)v38, v30, v31);
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
