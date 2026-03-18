/*
 * XREFs of xxxDragObject @ 0x1C022F198
 * Callers:
 *     NtUserDragObject @ 0x1C0213060 (NtUserDragObject.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00D1A24 (xxxSetCapture.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C012C4E4 (-zzzShowCursor@@YAH_N@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EFE0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, __int64 *a2, int a3, __int64 a4, struct tagCURSOR *a5)
{
  unsigned int v8; // ebx
  struct tagCURSOR *v9; // rdi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  struct tagCURSOR *v14; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 *i; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  struct tagCURSOR *DropObject; // rax
  __int64 v34; // rdx
  struct tagCURSOR *v35; // rcx
  __int64 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // r8
  unsigned int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // [rsp+58h] [rbp-B0h]
  __int64 *BugCheckParameter2; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+70h] [rbp-98h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h]
  _QWORD v52[6]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v53[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v54[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v55[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v56[3]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v57[48]; // [rsp+118h] [rbp+10h] BYREF

  memset(v52, 0, sizeof(v52));
  memset(v57, 0, sizeof(v57));
  v8 = 0;
  v48 = 1;
  v9 = 0LL;
  BugCheckParameter2 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v11 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v56, (__int64)Win32FreePool);
    v13 = 0LL;
    if ( a2 )
      v13 = *a2;
    *(_QWORD *)v11 = v13;
    *(_DWORD *)(v11 + 16) = a3;
    *(_QWORD *)(v11 + 24) = a4;
    if ( a5 )
      v14 = zzzSetCursor(a5);
    else
      v14 = *(struct tagCURSOR **)(*(_QWORD *)(gptiCurrent + 432LL) + 376LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
    v53[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v53;
    v53[1] = v14;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
    if ( a2 )
    {
      for ( i = a2; (*(_BYTE *)(i[5] + 31) & 0xC0) == 0x40; i = (__int64 *)i[10] )
        ;
      v54[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v54;
      v54[1] = i;
      _InterlockedIncrement((volatile signed __int32 *)i + 2);
      xxxInternalUpdateWindow((struct tagWND *)i, 1u);
      ThreadUnlock1(v18, v17);
    }
    if ( gpqForeground )
    {
      v19 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v19 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
        {
          v20 = 33;
          if ( *(_QWORD *)(v19 + 16) == gptiCurrent )
            v19 = (__int64)a2;
          else
            v20 = 49;
          xxxWindowEvent(0x80000004, v19, 0, 3, v20);
        }
      }
    }
    xxxWindowEvent(0xEu, (__int64)a2, 0, 0, 0);
    xxxSetCapture((__int64)a2);
    LOBYTE(v21) = 1;
    zzzShowCursor(v21, v22);
    v25 = 1;
    v50 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v50;
    v51 = 0LL;
    while ( *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage((__int64)v52, 0LL, 0x200u, 0x20Eu, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((__int64)v52, 0LL, 0x23u, 0x23u, 1, 0)
           && !(unsigned int)xxxInternalGetMessage((__int64)v52, 0LL, 0x100u, 0x109u, 1, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v27, v26);
          ThreadUnlock1(v29, v28);
          goto LABEL_67;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage((__int64)v57, 0LL, 0x100u, 0x109u, 1, 0) )
        ;
      if ( *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a2 || LODWORD(v52[1]) == 256 && v52[2] == 27LL )
      {
        v9 = *(struct tagCURSOR **)(*(_QWORD *)gasyscur + 5528LL);
        if ( v9 )
          zzzSetCursor(*(struct tagCURSOR **)(*(_QWORD *)gasyscur + 5528LL));
        break;
      }
      v31 = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(v11 + 48) = *(_OWORD *)v11;
      v32 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(v11 + 64) = v31;
      *(_OWORD *)(v11 + 80) = v32;
      *(_QWORD *)(v11 + 32) = *(_QWORD *)((char *)&v52[4] + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v11);
      v9 = DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(struct tagCURSOR **)(*(_QWORD *)gasyscur + 5528LL);
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9);
      if ( a2 )
      {
        v35 = *(struct tagCURSOR **)(*(_QWORD *)gasyscur + 5528LL);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(a2, 0x22Du, v9 != v35, v11, 0, 0, 0LL, 1, 1);
      }
      LOBYTE(v34) = 1;
      if ( BugCheckParameter2 == (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), v34) )
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
        LOBYTE(v23) = 1;
        v36 = HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), v23);
        BugCheckParameter2 = (__int64 *)v36;
        ThreadUnlock1(v38, v37);
        v50 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v50;
        v51 = v36;
        if ( v36 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v36 + 8), 1u);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)v36, 0x22Eu, 1uLL, v11, 0, 0, 0LL, 1, 1);
        }
      }
      if ( LODWORD(v52[1]) == 162 || LODWORD(v52[1]) == 514 )
      {
        v25 = 0;
        v48 = 0;
      }
      else
      {
        v25 = v48;
      }
      if ( !v25 )
        break;
    }
    ThreadUnlock1(v24, v23);
    if ( v25 )
      v9 = *(struct tagCURSOR **)(*(_QWORD *)gasyscur + 5528LL);
    xxxReleaseCapture();
    zzzShowCursor(0LL, v39);
    zzzSetCursor(v14);
    ThreadUnlock1(v41, v40);
    if ( v9 == *(struct tagCURSOR **)(*(_QWORD *)gasyscur + 5528LL) || (v42 = ValidateHwnd(*(_QWORD *)(v11 + 8))) == 0 )
    {
      v44 = 0;
    }
    else
    {
      v55[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v55;
      v55[1] = v42;
      _InterlockedIncrement((volatile signed __int32 *)(v42 + 8));
      v43 = 0LL;
      *(_DWORD *)(*(_QWORD *)(v42 + 16) + 488LL) |= 0x20u;
      if ( a2 )
        v43 = *a2;
      _InterlockedIncrement(&glSendMessage);
      v44 = xxxSendTransformableMessageTimeout((__int64 *)v42, 0x22Au, v43, v11, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v46, v45);
    }
    if ( gpqForeground )
    {
      v47 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v47 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          xxxWindowEvent(0x80000005, v47, 0, 4, 0x21u);
      }
    }
    xxxWindowEvent(0xFu, (__int64)a2, 0, 0, 0);
    v8 = v44;
LABEL_67:
    PopAndFreeAlwaysW32ThreadLock((__int64)v56, v30);
    return v8;
  }
  return result;
}
