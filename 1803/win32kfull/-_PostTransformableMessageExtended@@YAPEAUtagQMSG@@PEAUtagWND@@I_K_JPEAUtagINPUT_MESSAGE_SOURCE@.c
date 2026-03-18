/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530
 * Callers:
 *     _PostMessageExtended @ 0x1C003D9F8 (_PostMessageExtended.c)
 *     NtUserPostMessage @ 0x1C0041200 (NtUserPostMessage.c)
 *     _PostTransformableMessage @ 0x1C0061C04 (_PostTransformableMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C006E9FC (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0212AC4 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     _PostThreadMessage @ 0x1C001B5D0 (_PostThreadMessage.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0041E60 (TransformMessageBetweenCoordinateSpaces.c)
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     PostUpdateKeyStateEvent @ 0x1C00C073C (PostUpdateKeyStateEvent.c)
 *     ProcessSuspendedPostMessage @ 0x1C0102B40 (ProcessSuspendedPostMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxDDETrackPostHook @ 0x1C01D06BC (xxxDDETrackPostHook.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  struct tagINPUT_MESSAGE_SOURCE *v6; // rbx
  struct tagWND *v8; // rsi
  struct tagINPUT_MESSAGE_SOURCE **v9; // rax
  unsigned __int64 result; // rax
  _DWORD *v11; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // r12d
  unsigned int v24; // edi
  __int64 v25; // rdi
  unsigned int DLT; // eax
  __int64 v27; // rcx
  tagObjLock *DomainLockRef; // r15
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // r14
  _DWORD *v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  _QWORD *v40; // rax
  struct _KEVENT *v41; // rcx
  tagObjLock *v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rcx
  tagObjLock *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct tagINPUT_MESSAGE_SOURCE **v50; // [rsp+70h] [rbp-19h]
  tagObjLock *v51; // [rsp+80h] [rbp-9h]
  _QWORD v52[3]; // [rsp+88h] [rbp-1h] BYREF
  unsigned int v53; // [rsp+E8h] [rbp+5Fh] BYREF
  __int64 v54; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v55; // [rsp+F8h] [rbp+6Fh] BYREF

  v55 = a4;
  v54 = a3;
  v53 = a2;
  v6 = a5;
  v8 = (struct tagWND *)a1;
  if ( !a5 )
  {
    SetUnavailableInputSource(&a5);
    a4 = v55;
    a2 = v53;
  }
  v9 = &a5;
  if ( v6 )
    v9 = (struct tagINPUT_MESSAGE_SOURCE **)v6;
  v50 = v9;
  if ( (unsigned int)a2 < 0x400
    && ((a1 = 512LL, (MessageTable[(unsigned int)a2] & 0x200) != 0) || (_DWORD)a2 == 537 && (a3 & 0x8000) != 0)
    || (_DWORD)a2 == 536 && (a3 & 0x8000) != 0 )
  {
    UserSetLastError(1159LL, a2);
    return 0LL;
  }
  v11 = 0LL;
  if ( v8 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, a2, a3, a4, 2, 0LL, 0, 0);
    return 1LL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( !v8 )
  {
    LOBYTE(v11) = (unsigned int)PostThreadMessage(v13, v53, v54, v55) != 0;
    return (unsigned __int64)v11;
  }
  v16 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 416LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v20 = v53;
  v21 = CurrentProcessWin32Process;
  if ( v16 == CurrentProcessWin32Process )
    goto LABEL_36;
  if ( v53 > 0xD0 )
  {
    if ( v53 == 272 )
    {
LABEL_35:
      UserSetLastError(5LL, v18);
      return 0LL;
    }
    if ( v53 != 353 && v53 != 424 && v53 != 563 && v53 != 648 )
    {
LABEL_36:
      v23 = 0;
      if ( v53 - 992 <= 8 )
      {
        v52[0] = *(_QWORD *)(v13 + 408);
        *(_QWORD *)(v13 + 408) = v52;
        v52[1] = v8;
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
        v24 = xxxDDETrackPostHook(&v53, v8, 0);
        if ( v24 != 2 )
        {
          ThreadUnlock1(v19, v18, v20);
          return v24;
        }
        v23 = 1;
      }
      v25 = *((_QWORD *)v8 + 2);
      DLT = DLT_POST::getDLT(v19, v18, v20, v21);
      DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
      v51 = DomainLockRef;
      if ( v25 + 840 == gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
      tagObjLock::LockShared(DomainLockRef);
      tagObjLock::LockExclusive((tagObjLock *)(v25 + 840));
      v30 = v53;
      if ( v53 - 912 <= 0xF || v53 == 30 )
      {
        v29 = *(_QWORD *)(v25 + 808);
        if ( v29 )
        {
          if ( *(_DWORD *)(v29 + 24) == v53 && *(_QWORD *)(v29 + 16) == *(_QWORD *)v8 )
          {
            DelQEntry((_QWORD *)(v25 + 800), (_QWORD *)v29);
            v30 = v53;
          }
        }
      }
      if ( v30 - 256 > 9 )
      {
        if ( v30 == 576 )
        {
          if ( !HMValidateHandle(v55, 20) )
            goto LABEL_52;
        }
        else if ( v30 == 281 && !HMValidateHandle(v55, 21) )
        {
          goto LABEL_52;
        }
      }
      else
      {
        PostUpdateKeyStateEvent(*(_QWORD *)(v25 + 424));
      }
      if ( (*(_DWORD *)(v25 + 1200) & 0x20) == 0
        || v25 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29)
        || (unsigned int)ProcessSuspendedPostMessage(v25, v8, v53, v54, v55) )
      {
        v33 = 0;
        if ( *(_DWORD *)(v25 + 816) < gUserPostMessageLimit )
        {
          v37 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v36 = v37;
          if ( v37 )
          {
            memset(v37, 0, 0xA0uLL);
            v39 = 8;
            if ( *(_DWORD *)(v25 + 820) != 2 )
              v39 = 4;
            v36[25] |= v39;
            v40 = *(_QWORD **)(v25 + 808);
            if ( v40 )
            {
              *v40 = v36;
              *((_QWORD *)v36 + 1) = *(_QWORD *)(v25 + 808);
            }
            else
            {
              *(_QWORD *)(v25 + 800) = v36;
            }
            *(_QWORD *)(v25 + 808) = v36;
            ++*(_DWORD *)(v25 + 816);
            if ( a6 && (unsigned int)IsWindowDesktopComposed(v8) )
              TransformMessageBetweenCoordinateSpaces(v53, 0, (unsigned int)&v54, (unsigned int)&v55, (__int64)v8, 0LL);
            StoreQMessage(
              v36,
              v8,
              v53,
              v54,
              v55,
              0,
              0LL,
              0,
              0LL,
              0,
              v50,
              *(_DWORD *)(*((_QWORD *)v8 + 5) + 288LL),
              0LL,
              0LL);
            v35 = v53;
            if ( v53 == 576 || v53 == 281 )
            {
              v34 = 3LL * (unsigned __int16)v55;
              v35 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v55);
              if ( v35 )
                HMChangeOwnerThread(v35, v25);
            }
            if ( (*(_DWORD *)(v25 + 480) & 1) == 0 )
            {
              v34 = 264LL;
              *(_WORD *)(*(_QWORD *)(v25 + 440) + 6LL) |= 0x108u;
              *(_WORD *)(*(_QWORD *)(v25 + 440) + 4LL) |= 0x108u;
              if ( (*(_WORD *)(*(_QWORD *)(v25 + 440) + 10LL) & 0x108) != 0 )
                KeSetEvent(*(PRKEVENT *)(v25 + 720), 2, 0);
            }
            if ( v53 == 786 )
            {
              if ( (*(_DWORD *)(v25 + 1200) & 0x40000) != 0 )
              {
                v41 = *(struct _KEVENT **)(v25 + 1368);
                if ( v41 )
                  KeSetEvent(v41, 1, 0);
              }
              SetWakeBit(v25, 0x80u);
            }
            v33 = 1;
          }
          else
          {
            UserSetLastError(8LL, v38);
            v36 = 0LL;
          }
        }
        else
        {
          UserSetLastError(1816LL, v29);
          v36 = 0LL;
        }
        v42 = *(tagObjLock **)(v25 + 424);
        v43 = DLT_QUEUE::getDLT(v35, v34);
        v45 = (tagObjLock *)GetDomainLockRef(v43);
        if ( v42 == (tagObjLock *)gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44);
        tagObjLock::LockShared(v45);
        tagObjLock::LockExclusive(v42);
        v46 = *(_QWORD *)(v25 + 424);
        if ( v25 == *(_QWORD *)(v46 + 64) )
          *(_QWORD *)(v46 + 72) = v36;
        tagObjLock::UnLock(v42);
        tagObjLock::UnLock(v45);
        if ( v23 )
          ThreadUnlock1(v48, v47, v49);
        if ( v33 )
          v11 = v36;
LABEL_92:
        tagObjLock::UnLock((tagObjLock *)(v25 + 840));
        tagObjLock::UnLock(v51);
        return (unsigned __int64)v11;
      }
LABEL_52:
      if ( v23 )
        ThreadUnlock1(v31, v29, v32);
      goto LABEL_92;
    }
LABEL_31:
    if ( !gbEnforceUIPI || (v18 = gpepCSRSS, *(_QWORD *)v16 == gpepCSRSS) )
    {
      if ( *(_DWORD *)(v16 + 772) != *(_DWORD *)(CurrentProcessWin32Process + 772)
        || *(_DWORD *)(v16 + 776) != *(_DWORD *)(CurrentProcessWin32Process + 776) )
      {
        goto LABEL_35;
      }
    }
    goto LABEL_36;
  }
  if ( v53 == 208 )
    goto LABEL_31;
  switch ( v53 )
  {
    case 0xCu:
    case 0xBCu:
      goto LABEL_31;
    case 0xDu:
    case 0xC4u:
    case 0xCCu:
      v18 = *(_QWORD *)(*((_QWORD *)v8 + 14) + 8LL);
      v19 = gpsi;
      if ( *(_WORD *)(gpsi + 870LL) != *(_WORD *)(v18 + 2) || (*(_BYTE *)(*((_QWORD *)v8 + 5) + 28LL) & 0x20) == 0 )
        goto LABEL_36;
      UserSetLastError(5LL, v18);
      UserSetLastError(5LL, v22);
      result = 0LL;
      break;
    case 0x4Eu:
      goto LABEL_35;
    default:
      goto LABEL_36;
  }
  return result;
}
