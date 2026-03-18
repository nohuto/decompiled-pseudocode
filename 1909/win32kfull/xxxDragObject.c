/*
 * XREFs of xxxDragObject @ 0x1C02472D4
 * Callers:
 *     NtUserDragObject @ 0x1C022A820 (NtUserDragObject.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D290 (xxxSetCapture.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023F14 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C003B1B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0109C54 (-zzzShowCursor@@YAH_N@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247108 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, struct tagWND *a2, int a3, __int64 a4, struct tagCURSOR *a5)
{
  unsigned int v7; // ebx
  __int64 *v8; // r12
  struct tagCURSOR *v9; // rsi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  struct tagCURSOR *v15; // r13
  __int64 ThreadWin32Thread; // rax
  struct tagWND *i; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct tagWND *v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r13d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  struct tagCURSOR *DropObject; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  struct tagCURSOR *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 *v48; // rsi
  int v49; // edx
  int v50; // ecx
  unsigned __int64 v51; // r8
  unsigned int v52; // esi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  struct tagWND *v56; // rdx
  int v57; // [rsp+58h] [rbp-B0h]
  struct tagCURSOR *v58; // [rsp+60h] [rbp-A8h]
  __int64 v59; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h]
  __int64 v62; // [rsp+88h] [rbp-80h] BYREF
  struct tagCURSOR *v63; // [rsp+90h] [rbp-78h]
  __int64 v64; // [rsp+98h] [rbp-70h]
  __int64 v65; // [rsp+A0h] [rbp-68h] BYREF
  struct tagWND *v66; // [rsp+A8h] [rbp-60h]
  __int64 v67; // [rsp+B0h] [rbp-58h]
  __int64 v68; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-48h]
  __int64 v70; // [rsp+C8h] [rbp-40h]
  _QWORD v71[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v72[6]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v73[48]; // [rsp+118h] [rbp+10h] BYREF

  memset(v72, 0, sizeof(v72));
  memset(v73, 0, sizeof(v73));
  v57 = 1;
  v7 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v8 = 0LL;
  v65 = 0LL;
  v9 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  memset(v71, 0, sizeof(v71));
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v11 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v71, (__int64)Win32FreePool);
    v14 = 0LL;
    if ( a2 )
      v14 = *(_QWORD *)a2;
    *(_QWORD *)v11 = v14;
    *(_DWORD *)(v11 + 16) = a3;
    *(_QWORD *)(v11 + 24) = a4;
    if ( a5 )
      v15 = zzzSetCursor(a5);
    else
      v15 = *(struct tagCURSOR **)(*(_QWORD *)(gptiCurrent + 424LL) + 384LL);
    v58 = v15;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
    v62 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v62;
    v63 = v15;
    if ( v15 )
      HMLockObject(v15);
    if ( a2 )
    {
      for ( i = a2; (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0xC0) == 0x40; i = (struct tagWND *)*((_QWORD *)i + 13) )
        ;
      v65 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v65;
      v66 = i;
      HMLockObject(i);
      xxxInternalUpdateWindow(i, 1u);
      ThreadUnlock1(v19, v18, v20);
    }
    if ( gpqForeground )
    {
      v21 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v21 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
        {
          v22 = 33;
          if ( *((_QWORD *)v21 + 2) == gptiCurrent )
            v21 = a2;
          else
            v22 = 49;
          xxxWindowEvent(0x80000004, v21, 0LL, 3, v22);
        }
      }
    }
    xxxWindowEvent(0xEu, a2, 0LL, 0, 0);
    xxxSetCapture((__int64)a2);
    zzzShowCursor(1);
    v26 = 1;
    v59 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v59;
    v60 = 0LL;
    while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage((int)v72, 0, 512, 526, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((int)v72, 0, 35, 35, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((int)v72, 0, 256, 265, 1, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v28, v27, v29);
          ThreadUnlock1(v31, v30, v32);
          goto LABEL_69;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage((int)v73, 0, 256, 265, 1, 0) )
        ;
      if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a2
        || LODWORD(v72[1]) == 256 && v72[2] == 27LL )
      {
        v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        if ( v9 )
          zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 5528LL));
        break;
      }
      v35 = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(v11 + 48) = *(_OWORD *)v11;
      v36 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(v11 + 64) = v35;
      *(_OWORD *)(v11 + 80) = v36;
      *(_QWORD *)(v11 + 32) = *(_QWORD *)((char *)&v72[4] + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v11);
      v9 = DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9);
      if ( a2 )
      {
        v40 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (__int64 *)a2,
          0x22Du,
          v9 != v40,
          (struct _LARGE_STRING *)v11,
          0,
          0,
          0LL,
          1u,
          1);
      }
      LOBYTE(v38) = 1;
      if ( v8 == (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), v38, v39) )
      {
        if ( v8 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v8, 0x22Fu, 0LL, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1u, 1);
        }
      }
      else
      {
        if ( v8 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v8, 0x22Eu, 0LL, (struct _LARGE_STRING *)(v11 + 48), 0, 0, 0LL, 1u, 1);
        }
        LOBYTE(v23) = 1;
        v8 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), v23, v25);
        ThreadUnlock1(v42, v41, v43);
        v59 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v59;
        v60 = v8;
        if ( v8 )
        {
          HMLockObject(v8);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(v8, 0x22Eu, 1uLL, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1u, 1);
        }
      }
      if ( LODWORD(v72[1]) == 162 || LODWORD(v72[1]) == 514 )
      {
        v26 = 0;
        v57 = 0;
      }
      else
      {
        v26 = v57;
      }
      if ( !v26 )
        break;
    }
    ThreadUnlock1(v24, v23, v25);
    if ( v26 )
      v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
    xxxReleaseCapture();
    zzzShowCursor(0);
    zzzSetCursor(v58);
    ThreadUnlock1(v45, v44, v46);
    if ( v9 == *(struct tagCURSOR **)(gasyscur[0] + 5528LL)
      || (v47 = ValidateHwnd(*(_QWORD *)(v11 + 8)), (v48 = (__int64 *)v47) == 0LL) )
    {
      v52 = 0;
    }
    else
    {
      v68 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v68;
      v69 = v47;
      HMLockObject(v47);
      *(_DWORD *)(v48[2] + 480) |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(v50, v49, 2, 10, (__int64)&WPP_4a7f761aeefa38c90d4109168db176ff_Traceguids, v48[2]);
      v51 = 0LL;
      if ( a2 )
        v51 = *(_QWORD *)a2;
      _InterlockedIncrement(&glSendMessage);
      v52 = xxxSendTransformableMessageTimeout(v48, 0x22Au, v51, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1u, 1);
      ThreadUnlock1(v54, v53, v55);
    }
    if ( gpqForeground )
    {
      v56 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v56 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
          xxxWindowEvent(0x80000005, v56, 0LL, 4, 33);
      }
    }
    xxxWindowEvent(0xFu, a2, 0LL, 0, 0);
    v7 = v52;
LABEL_69:
    PopAndFreeAlwaysW32ThreadLock((__int64)v71, v33, v34);
    return v7;
  }
  return result;
}
