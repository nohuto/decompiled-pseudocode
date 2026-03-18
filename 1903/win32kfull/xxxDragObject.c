/*
 * XREFs of xxxDragObject @ 0x1C0247A14
 * Callers:
 *     NtUserDragObject @ 0x1C022AE40 (NtUserDragObject.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D4EC (xxxSetCapture.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009A3E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C012EB14 (-zzzShowCursor@@YAH_N@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247848 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, struct tagWND *a2, int a3, __int64 a4, struct tagCURSOR *a5)
{
  unsigned int v7; // ebx
  __int64 *v8; // r12
  struct tagCURSOR *v9; // rsi
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  HWND v16; // rax
  struct tagCURSOR *v17; // r13
  __int64 ThreadWin32Thread; // rax
  struct tagWND *i; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct tagWND *v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r13d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r9
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  struct tagCURSOR *DropObject; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  struct tagCURSOR *v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 *v64; // rsi
  int v65; // edx
  int v66; // ecx
  HWND v67; // r8
  unsigned int v68; // esi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  struct tagWND *v72; // rdx
  int v73; // [rsp+58h] [rbp-B0h]
  struct tagCURSOR *v74; // [rsp+60h] [rbp-A8h]
  __int64 v75; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v76; // [rsp+78h] [rbp-90h]
  __int64 v77; // [rsp+80h] [rbp-88h]
  __int64 v78; // [rsp+88h] [rbp-80h] BYREF
  struct tagCURSOR *v79; // [rsp+90h] [rbp-78h]
  __int64 v80; // [rsp+98h] [rbp-70h]
  __int64 v81; // [rsp+A0h] [rbp-68h] BYREF
  struct tagWND *v82; // [rsp+A8h] [rbp-60h]
  __int64 v83; // [rsp+B0h] [rbp-58h]
  __int64 v84; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-48h]
  __int64 v86; // [rsp+C8h] [rbp-40h]
  _QWORD v87[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v88[6]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v89[48]; // [rsp+118h] [rbp+10h] BYREF

  memset(v88, 0, sizeof(v88));
  memset(v89, 0, sizeof(v89));
  v73 = 1;
  v7 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v8 = 0LL;
  v81 = 0LL;
  v9 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  memset(v87, 0, sizeof(v87));
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v12 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v87, (__int64)Win32FreePool, v11);
    v16 = 0LL;
    if ( a2 )
      v16 = *(HWND *)a2;
    *(_QWORD *)v12 = v16;
    *(_DWORD *)(v12 + 16) = a3;
    *(_QWORD *)(v12 + 24) = a4;
    if ( a5 )
      v17 = zzzSetCursor(a5, v13, v14, v15);
    else
      v17 = *(struct tagCURSOR **)(*(_QWORD *)(gptiCurrent + 424LL) + 384LL);
    v74 = v17;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
    v78 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v78;
    v79 = v17;
    if ( v17 )
      HMLockObject(v17);
    if ( a2 )
    {
      for ( i = a2; (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0xC0) == 0x40; i = (struct tagWND *)*((_QWORD *)i + 13) )
        ;
      v81 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v81;
      v82 = i;
      HMLockObject(i);
      xxxInternalUpdateWindow(i, 1u);
      ThreadUnlock1(v21, v20, v22);
    }
    if ( gpqForeground )
    {
      v23 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v23 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
        {
          v24 = 33;
          if ( *((_QWORD *)v23 + 2) == gptiCurrent )
            v23 = a2;
          else
            v24 = 49;
          xxxWindowEvent(0x80000004, v23, 0LL, 3LL, v24);
        }
      }
    }
    xxxWindowEvent(0xEu, a2, 0LL, 0LL, 0);
    xxxSetCapture((__int64)a2);
    LOBYTE(v25) = 1;
    zzzShowCursor(v25, v26, v27, v28);
    v32 = 1;
    v75 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v75;
    v76 = 0LL;
    while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage((int)v88, 0, 512, 526, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((int)v88, 0, 35, 35, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((int)v88, 0, 256, 265, 1, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v34, v33, v35);
          ThreadUnlock1(v37, v36, v38);
          goto LABEL_69;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage((int)v89, 0, 256, 265, 1, 0) )
        ;
      if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a2
        || LODWORD(v88[1]) == 256 && v88[2] == 27LL )
      {
        v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        if ( v9 )
          zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 5528LL), v29, v31, v42);
        break;
      }
      v43 = *(_OWORD *)(v12 + 16);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)v12;
      v44 = *(_OWORD *)(v12 + 32);
      *(_OWORD *)(v12 + 64) = v43;
      *(_OWORD *)(v12 + 80) = v44;
      *(_QWORD *)(v12 + 32) = *(_QWORD *)((char *)&v88[4] + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v12);
      v9 = DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9, v46, v47, v48);
      if ( a2 )
      {
        v49 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (__int64 *)a2,
          0x22Du,
          (HWND)(v9 != v49),
          (struct _LARGE_STRING *)v12,
          0,
          0,
          0LL,
          1u,
          1);
      }
      LOBYTE(v46) = 1;
      if ( v8 == (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v12 + 8), v46, v47, v48) )
      {
        if ( v8 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v8, 0x22Fu, 0LL, (struct _LARGE_STRING *)v12, 0, 0, 0LL, 1u, 1);
        }
      }
      else
      {
        if ( v8 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v8, 0x22Eu, 0LL, (struct _LARGE_STRING *)(v12 + 48), 0, 0, 0LL, 1u, 1);
        }
        LOBYTE(v29) = 1;
        v8 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v12 + 8), v29, v31, v50);
        ThreadUnlock1(v52, v51, v53);
        v75 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v75;
        v76 = v8;
        if ( v8 )
        {
          HMLockObject(v8);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(v8, 0x22Eu, (HWND)1, (struct _LARGE_STRING *)v12, 0, 0, 0LL, 1u, 1);
        }
      }
      if ( LODWORD(v88[1]) == 162 || LODWORD(v88[1]) == 514 )
      {
        v32 = 0;
        v73 = 0;
      }
      else
      {
        v32 = v73;
      }
      if ( !v32 )
        break;
    }
    ThreadUnlock1(v30, v29, v31);
    if ( v32 )
      v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
    xxxReleaseCapture();
    zzzShowCursor(0LL, v54, v55, v56);
    zzzSetCursor(v74, v57, v58, v59);
    ThreadUnlock1(v61, v60, v62);
    if ( v9 == *(struct tagCURSOR **)(gasyscur[0] + 5528LL)
      || (v63 = ValidateHwnd(*(_QWORD *)(v12 + 8)), (v64 = (__int64 *)v63) == 0LL) )
    {
      v68 = 0;
    }
    else
    {
      v84 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v84;
      v85 = v63;
      HMLockObject(v63);
      *(_DWORD *)(v64[2] + 480) |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(v66, v65, 2u, 0xAu, (__int64)&WPP_4a7f761aeefa38c90d4109168db176ff_Traceguids, v64[2]);
      v67 = 0LL;
      if ( a2 )
        v67 = *(HWND *)a2;
      _InterlockedIncrement(&glSendMessage);
      v68 = xxxSendTransformableMessageTimeout(v64, 0x22Au, v67, (struct _LARGE_STRING *)v12, 0, 0, 0LL, 1u, 1);
      ThreadUnlock1(v70, v69, v71);
    }
    if ( gpqForeground )
    {
      v72 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v72 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
          xxxWindowEvent(0x80000005, v72, 0LL, 4LL, 33);
      }
    }
    xxxWindowEvent(0xFu, a2, 0LL, 0LL, 0);
    v7 = v68;
LABEL_69:
    PopAndFreeAlwaysW32ThreadLock((__int64)v87, v39, v40, v41);
    return v7;
  }
  return result;
}
