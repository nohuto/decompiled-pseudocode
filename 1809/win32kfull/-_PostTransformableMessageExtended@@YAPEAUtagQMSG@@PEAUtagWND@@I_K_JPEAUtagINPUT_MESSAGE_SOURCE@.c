/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40
 * Callers:
 *     _PostMessageExtended @ 0x1C002663C (_PostMessageExtended.c)
 *     NtUserPostMessage @ 0x1C00298E0 (NtUserPostMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B398C (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _PostTransformableMessage @ 0x1C00D03E8 (_PostTransformableMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C023C2D0 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C002A620 (TransformMessageBetweenCoordinateSpaces.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C00D5A24 (PostUpdateKeyStateEvent.c)
 *     ProcessSuspendedPostMessage @ 0x1C0124C00 (ProcessSuspendedPostMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     xxxDDETrackPostHook @ 0x1C01F4DF4 (xxxDDETrackPostHook.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  struct tagWND *v7; // rsi
  unsigned __int64 result; // rax
  _DWORD *v9; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r12d
  unsigned int v21; // edi
  __int64 v22; // rdi
  unsigned int DLT; // eax
  __int64 v24; // rcx
  tagObjLock *DomainLockRef; // r15
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r13d
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // r14
  _DWORD *v35; // rax
  int v36; // eax
  _QWORD *v37; // rax
  struct _KEVENT *v38; // rcx
  tagObjLock *v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // rcx
  tagObjLock *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  tagObjLock *v46; // [rsp+80h] [rbp-9h]
  _QWORD v47[3]; // [rsp+88h] [rbp-1h] BYREF
  unsigned int v48; // [rsp+E8h] [rbp+5Fh] BYREF
  __int64 v49; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v50; // [rsp+F8h] [rbp+6Fh] BYREF

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v7 = (struct tagWND *)a1;
  if ( !a5 )
  {
    SetUnavailableInputSource(&a5);
    a2 = v48;
  }
  if ( (unsigned int)a2 < 0x400
    && ((a1 = 512LL, (MessageTable[(unsigned int)a2] & 0x200) != 0) || (_DWORD)a2 == 537 && (a3 & 0x8000) != 0)
    || (_DWORD)a2 == 536 && (a3 & 0x8000) != 0 )
  {
    UserSetLastError(1159LL);
    return 0LL;
  }
  v9 = 0LL;
  if ( v7 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, a2, a3);
    return 1LL;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( !v7 )
  {
    LOBYTE(v9) = (unsigned int)PostThreadMessage(v11, v48, v49, v50) != 0;
    return (unsigned __int64)v9;
  }
  v14 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 424LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v18 = v48;
  v19 = CurrentProcessWin32Process;
  if ( v14 == CurrentProcessWin32Process )
    goto LABEL_34;
  if ( v48 > 0xD0 )
  {
    if ( v48 == 272 )
    {
LABEL_33:
      UserSetLastError(5LL);
      return 0LL;
    }
    if ( v48 != 353 && v48 != 424 && v48 != 563 && v48 != 648 )
    {
LABEL_34:
      v20 = 0;
      if ( v48 - 992 <= 8 )
      {
        v47[0] = *(_QWORD *)(v11 + 416);
        *(_QWORD *)(v11 + 416) = v47;
        v47[1] = v7;
        _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
        v21 = xxxDDETrackPostHook(&v48, v7, 0);
        if ( v21 != 2 )
        {
          ThreadUnlock1(v17, v16);
          return v21;
        }
        v20 = 1;
      }
      v22 = *((_QWORD *)v7 + 2);
      DLT = DLT_POST::getDLT(v17, v16, v18, v19);
      DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
      v46 = DomainLockRef;
      if ( v22 + 848 == gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
      tagObjLock::LockShared(DomainLockRef);
      tagObjLock::LockExclusive((tagObjLock *)(v22 + 848));
      v27 = v48;
      v28 = *(_QWORD *)v7;
      if ( v48 - 912 <= 0xF || v48 == 30 )
      {
        v26 = *(_QWORD *)(v22 + 816);
        if ( v26 )
        {
          if ( *(_DWORD *)(v26 + 24) == v48 && *(_QWORD *)(v26 + 16) == v28 )
          {
            DelQEntry(v22 + 808, v26, 1LL);
            v27 = v48;
          }
        }
      }
      if ( v27 - 256 > 9 )
      {
        if ( v27 == 576 )
        {
          LOBYTE(v26) = 20;
          if ( !HMValidateHandle(v50, v26) )
            goto LABEL_50;
        }
        else if ( v27 == 281 )
        {
          LOBYTE(v26) = 21;
          if ( !HMValidateHandle(v50, v26) )
            goto LABEL_50;
        }
      }
      else
      {
        PostUpdateKeyStateEvent(*(_QWORD *)(v22 + 432), v26, v28);
      }
      if ( (*(_DWORD *)(v22 + 1208) & 0x20) == 0
        || v22 == W32GetThreadWin32Thread(KeGetCurrentThread())
        || (unsigned int)ProcessSuspendedPostMessage(v22, v7, v48, v49, v50) )
      {
        v31 = 0;
        if ( *(_DWORD *)(v22 + 824) < gUserPostMessageLimit )
        {
          v35 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v34 = v35;
          if ( v35 )
          {
            memset(v35, 0, 0xA8uLL);
            v36 = 8;
            if ( *(_DWORD *)(v22 + 828) != 2 )
              v36 = 4;
            v34[25] |= v36;
            v37 = *(_QWORD **)(v22 + 816);
            if ( v37 )
            {
              *v37 = v34;
              *((_QWORD *)v34 + 1) = *(_QWORD *)(v22 + 816);
            }
            else
            {
              *(_QWORD *)(v22 + 808) = v34;
            }
            *(_QWORD *)(v22 + 816) = v34;
            ++*(_DWORD *)(v22 + 824);
            if ( a6 && (unsigned int)IsWindowDesktopComposed(v7) )
              TransformMessageBetweenCoordinateSpaces(v48, 0, (unsigned int)&v49, (unsigned int)&v50, (__int64)v7, 0LL);
            StoreQMessage(v34, v7, v48);
            v33 = v48;
            if ( v48 == 576 || v48 == 281 )
            {
              v32 = 3LL * (unsigned __int16)v50;
              v33 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v50);
              if ( v33 )
                HMChangeOwnerThread(v33, v22);
            }
            if ( (*(_DWORD *)(v22 + 488) & 1) == 0 )
            {
              v32 = 264LL;
              *(_WORD *)(*(_QWORD *)(v22 + 448) + 6LL) |= 0x108u;
              *(_WORD *)(*(_QWORD *)(v22 + 448) + 4LL) |= 0x108u;
              if ( (*(_WORD *)(*(_QWORD *)(v22 + 448) + 10LL) & 0x108) != 0 )
                KeSetEvent(*(PRKEVENT *)(v22 + 736), 2, 0);
            }
            if ( v48 == 786 )
            {
              if ( (*(_DWORD *)(v22 + 1208) & 0x40000) != 0 )
              {
                v38 = *(struct _KEVENT **)(v22 + 1360);
                if ( v38 )
                  KeSetEvent(v38, 1, 0);
              }
              SetWakeBit(v22, 128LL);
            }
            v31 = 1;
          }
          else
          {
            UserSetLastError(8LL);
            v34 = 0LL;
          }
        }
        else
        {
          UserSetLastError(1816LL);
          v34 = 0LL;
        }
        v39 = *(tagObjLock **)(v22 + 432);
        v40 = DLT_QUEUE::getDLT(v33, v32);
        v42 = (tagObjLock *)GetDomainLockRef(v40);
        if ( v39 == (tagObjLock *)gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v41);
        tagObjLock::LockShared(v42);
        tagObjLock::LockExclusive(v39);
        v43 = *(_QWORD *)(v22 + 432);
        if ( v22 == *(_QWORD *)(v43 + 64) )
          *(_QWORD *)(v43 + 72) = v34;
        tagObjLock::UnLock(v39);
        tagObjLock::UnLock(v42);
        if ( v20 )
          ThreadUnlock1(v45, v44);
        if ( v31 )
          v9 = v34;
LABEL_90:
        tagObjLock::UnLock((tagObjLock *)(v22 + 848));
        tagObjLock::UnLock(v46);
        return (unsigned __int64)v9;
      }
LABEL_50:
      if ( v20 )
        ThreadUnlock1(v30, v29);
      goto LABEL_90;
    }
LABEL_29:
    if ( !gbEnforceUIPI || (v16 = gpepCSRSS, *(_QWORD *)v14 == gpepCSRSS) )
    {
      if ( *(_DWORD *)(v14 + 780) != *(_DWORD *)(CurrentProcessWin32Process + 780)
        || *(_DWORD *)(v14 + 784) != *(_DWORD *)(CurrentProcessWin32Process + 784) )
      {
        goto LABEL_33;
      }
    }
    goto LABEL_34;
  }
  if ( v48 == 208 )
    goto LABEL_29;
  switch ( v48 )
  {
    case 0xCu:
    case 0xBCu:
      goto LABEL_29;
    case 0xDu:
    case 0xC4u:
    case 0xCCu:
      v16 = *(_QWORD *)(*((_QWORD *)v7 + 14) + 8LL);
      v17 = gpsi;
      if ( *(_WORD *)(gpsi + 870LL) != *(_WORD *)(v16 + 2) || (*(_BYTE *)(*((_QWORD *)v7 + 5) + 28LL) & 0x20) == 0 )
        goto LABEL_34;
      UserSetLastError(5LL);
      UserSetLastError(5LL);
      result = 0LL;
      break;
    case 0x4Eu:
      goto LABEL_33;
    default:
      goto LABEL_34;
  }
  return result;
}
