/*
 * XREFs of xxxPointerWindowHitTest @ 0x1C0206BD0
 * Callers:
 *     EditionPointerWindowHitTest @ 0x1C0205DF0 (EditionPointerWindowHitTest.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsThreadDesktopComposed @ 0x1C00C94A0 (IsThreadDesktopComposed.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0203ED4 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0204048 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205968 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C0205CFC (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x1C025BE70 (TouchTargetingCreateContact.c)
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
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r8
  struct tagRECT *v20; // rcx
  __int128 v21; // xmm0
  int v22; // eax
  struct tagTHREADINFO *v23; // r14
  __int64 v24; // r8
  __int64 v25; // rax
  _OWORD *v26; // rcx
  __int128 v27; // xmm0
  struct tagWND *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagPOINT v38; // [rsp+68h] [rbp-98h] BYREF
  __int128 v39; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v40; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v41[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v42[3]; // [rsp+A8h] [rbp-58h] BYREF
  int v43; // [rsp+C0h] [rbp-40h] BYREF
  struct tagPOINT v44; // [rsp+C4h] [rbp-3Ch]
  __int128 v45; // [rsp+CCh] [rbp-34h]
  __int128 v46; // [rsp+DCh] [rbp-24h]
  int v47; // [rsp+ECh] [rbp-14h]
  struct tagRECT v48; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v49; // [rsp+100h] [rbp+0h] BYREF

  v38 = (struct tagPOINT)a1;
  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, a9 + 8) )
  {
    v14 = Win32AllocPool(192LL, 1920103253LL);
    if ( v14 )
    {
      v16 = Win32AllocPool(184LL, 1920103253LL);
      if ( v16 )
      {
        memset(v42, 0, sizeof(v42));
        memset(v41, 0, sizeof(v41));
        PushW32ThreadLock(v14, v42, (__int64)Win32FreePool, v17);
        PushW32ThreadLock(v16, v41, (__int64)Win32FreePool, v18);
        if ( gSqmIsOptedIn )
          WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 1000LL);
        *a11 = 0LL;
        *(_QWORD *)(v14 + 184) = 0LL;
        v48 = 0LL;
        v49 = 0LL;
        *(_QWORD *)&v39 = 0LL;
        v43 = 0;
        if ( (unsigned int)_GetDeviceRects(a9 + 8, &v48, &v49) )
        {
          v39 = v49;
          v40 = v48;
          _SetHimetricToPixelRatio(&v40, &v39, v14);
          v20 = &v48;
        }
        else
        {
          v20 = (struct tagRECT *)v39;
        }
        v21 = *(_OWORD *)(a9 + 112);
        v22 = *(_DWORD *)(a9 + 108);
        v44 = a6;
        v45 = v21;
        v46 = v21;
        if ( (v22 & 2) != 0 )
          v47 = *(_DWORD *)(a9 + 144);
        else
          v47 = 0;
        TouchTargetingCreateContact(&v43, v20, v19, v14);
        v23 = (struct tagTHREADINFO *)v38;
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
        *(_DWORD *)(v16 + 84) = IsThreadDesktopComposed((__int64)v23);
        *(_DWORD *)(v16 + 88) = v24;
        *(_QWORD *)(v16 + 96) = v24;
        *(_QWORD *)(v16 + 168) = v24;
        *(_QWORD *)(v16 + 176) = v24;
        v38 = a6;
        v25 = Win32AllocPool(192LL, 1920103253LL);
        *(_QWORD *)&v39 = v25;
        if ( v25 )
        {
          v26 = *(_OWORD **)(v16 + 40);
          *(_OWORD *)v25 = *v26;
          *(_OWORD *)(v25 + 16) = v26[1];
          *(_OWORD *)(v25 + 32) = v26[2];
          *(_OWORD *)(v25 + 48) = v26[3];
          *(_OWORD *)(v25 + 64) = v26[4];
          *(_OWORD *)(v25 + 80) = v26[5];
          *(_OWORD *)(v25 + 96) = v26[6];
          v27 = v26[7];
          v26 += 8;
          *(_OWORD *)(v25 + 112) = v27;
          *(_OWORD *)(v25 + 128) = *v26;
          *(_OWORD *)(v25 + 144) = v26[1];
          *(_OWORD *)(v25 + 160) = v26[2];
          *(_OWORD *)(v25 + 176) = v26[3];
          v28 = TopLevelTouchTarget(a2, (struct tagTOUCHTARGETINGCONTACT *)v25, &v38, a11, *(_DWORD *)(v16 + 84));
          v29 = v39;
          *(_QWORD *)(v16 + 168) = v28;
          Win32FreePool(v29);
        }
        v40 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
        xxxWindowHitTestWithTargeting((__int64)a2, a6, v16, &v40, 0);
        if ( *(_DWORD *)(v16 + 180) )
        {
          v13 = xxxWindowHitTestWithoutTargeting(v23, a2, a3, a4, a5, a6, a7, a8);
        }
        else
        {
          *a7 = *(_DWORD *)(v16 + 32);
          *a11 = *(struct tagPOINT *)(v16 + 48);
          v13 = *(HWND *)(v16 + 56);
          TTSqm(*(struct tagPOINT *)(v16 + 48), (const struct tagTOUCHTARGETINGCONTACT *)v14);
        }
        PopAndFreeAlwaysW32ThreadLock((__int64)v41, v30, v31, v32);
        PopAndFreeAlwaysW32ThreadLock((__int64)v42, v33, v34, v35);
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
