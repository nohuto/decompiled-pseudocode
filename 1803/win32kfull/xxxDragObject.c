/*
 * XREFs of xxxDragObject @ 0x1C0206058
 * Callers:
 *     NtUserDragObject @ 0x1C01ECD30 (NtUserDragObject.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0060550 (xxxSetCapture.c)
 *     zzzShowCursor @ 0x1C010BEA4 (zzzShowCursor.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0205EA8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 *i; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  struct tagCURSOR *DropObject; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  HWND v45; // r8
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  int v51; // [rsp+58h] [rbp-B0h]
  __int64 *BugCheckParameter2; // [rsp+60h] [rbp-A8h]
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-90h]
  _QWORD v55[6]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v56[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v57[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v58[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v59[3]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v60[48]; // [rsp+118h] [rbp+10h] BYREF

  memset(v55, 0, sizeof(v55));
  memset(v60, 0, sizeof(v60));
  v8 = 0;
  v51 = 1;
  v9 = 0LL;
  BugCheckParameter2 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v11 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v59, (__int64)Win32FreePool);
    v13 = 0LL;
    if ( a2 )
      v13 = *a2;
    *(_QWORD *)v11 = v13;
    *(_DWORD *)(v11 + 16) = a3;
    *(_QWORD *)(v11 + 24) = a4;
    if ( a5 )
      v14 = zzzSetCursor(a5);
    else
      v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 376LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
    v56[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v56;
    v56[1] = v14;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    if ( a2 )
    {
      for ( i = a2; (*(_BYTE *)(i[5] + 31) & 0xC0) == 0x40; i = (__int64 *)i[10] )
        ;
      v57[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v57;
      v57[1] = i;
      _InterlockedIncrement((volatile signed __int32 *)i + 2);
      xxxInternalUpdateWindow((struct tagWND *)i, 1u);
      ThreadUnlock1(v18, v17, v19);
    }
    if ( gpqForeground )
    {
      v20 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v20 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
        {
          v21 = 33;
          if ( *(_QWORD *)(v20 + 16) == gptiCurrent )
            v20 = (__int64)a2;
          else
            v21 = 49;
          xxxWindowEvent(0x80000004, v20, 0, 3, v21);
        }
      }
    }
    xxxWindowEvent(0xEu, (__int64)a2, 0, 0, 0);
    xxxSetCapture((__int64)a2);
    zzzShowCursor(1);
    v25 = 1;
    v53 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v53;
    v54 = 0LL;
    while ( *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage((int)v55, 0, 512, 526, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((int)v55, 0, 35, 35, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((int)v55, 0, 256, 265, 1, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v27, v26, v28);
          ThreadUnlock1(v30, v29, v31);
          goto LABEL_67;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage((int)v60, 0, 256, 265, 1, 0) )
        ;
      if ( *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a2 || LODWORD(v55[1]) == 256 && v55[2] == 27LL )
      {
        v9 = *(_QWORD *)&gasyscur[84];
        if ( v9 )
          zzzSetCursor(*(_QWORD *)&gasyscur[84]);
        break;
      }
      v32 = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(v11 + 48) = *(_OWORD *)v11;
      v33 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(v11 + 64) = v32;
      *(_OWORD *)(v11 + 80) = v33;
      *(_QWORD *)(v11 + 32) = *(_QWORD *)((char *)&v55[4] + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v11);
      v9 = (__int64)DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(_QWORD *)&gasyscur[84];
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9);
      if ( a2 )
      {
        v36 = *(_QWORD *)&gasyscur[84];
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(a2, 0x22Du, (HWND)(v9 != v36), v11, 0, 0, 0LL, 1, 1);
      }
      LOBYTE(v35) = 1;
      if ( BugCheckParameter2 == (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), v35) )
      {
        if ( BugCheckParameter2 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x22Fu, 0LL, v11, 0, 0, 0LL, 1, 1);
        }
      }
      else
      {
        if ( BugCheckParameter2 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x22Eu, 0LL, v11 + 48, 0, 0, 0LL, 1, 1);
        }
        LOBYTE(v22) = 1;
        v37 = HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), v22);
        BugCheckParameter2 = (__int64 *)v37;
        ThreadUnlock1(v39, v38, v40);
        v53 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v53;
        v54 = v37;
        if ( v37 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v37 + 8), 1u);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)v37, 0x22Eu, (HWND)1, v11, 0, 0, 0LL, 1, 1);
        }
      }
      if ( LODWORD(v55[1]) == 162 || LODWORD(v55[1]) == 514 )
      {
        v25 = 0;
        v51 = 0;
      }
      else
      {
        v25 = v51;
      }
      if ( !v25 )
        break;
    }
    ThreadUnlock1(v23, v22, v24);
    if ( v25 )
      v9 = *(_QWORD *)&gasyscur[84];
    xxxReleaseCapture();
    zzzShowCursor(0);
    zzzSetCursor(v14);
    ThreadUnlock1(v42, v41, v43);
    if ( v9 == *(_QWORD *)&gasyscur[84] || (v44 = ValidateHwnd(*(_QWORD *)(v11 + 8))) == 0 )
    {
      v46 = 0;
    }
    else
    {
      v58[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v58;
      v58[1] = v44;
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
      v45 = 0LL;
      *(_DWORD *)(*(_QWORD *)(v44 + 16) + 480LL) |= 0x20u;
      if ( a2 )
        v45 = (HWND)*a2;
      _InterlockedIncrement(&glSendMessage);
      v46 = xxxSendTransformableMessageTimeout((__int64 *)v44, 0x22Au, v45, v11, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v48, v47, v49);
    }
    if ( gpqForeground )
    {
      v50 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v50 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
          xxxWindowEvent(0x80000005, v50, 0, 4, 33);
      }
    }
    xxxWindowEvent(0xFu, (__int64)a2, 0, 0, 0);
    v8 = v46;
LABEL_67:
    PopAndFreeAlwaysW32ThreadLock((__int64)v59);
    return v8;
  }
  return result;
}
