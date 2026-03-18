/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400
 * Callers:
 *     _PostMessageExtended @ 0x1C001632C (_PostMessageExtended.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0017D28 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _PostTransformableMessage @ 0x1C0087904 (_PostTransformableMessage.c)
 *     NtUserPostMessage @ 0x1C00A5560 (NtUserPostMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0254FCC (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C000F6C8 (_PostThreadMessage.c)
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PostUpdateKeyStateEvent @ 0x1C0082ADC (PostUpdateKeyStateEvent.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00A2A60 (TransformMessageBetweenCoordinateSpaces.c)
 *     StoreQMessage @ 0x1C00A4BB0 (StoreQMessage.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     ProcessSuspendedPostMessage @ 0x1C012E418 (ProcessSuspendedPostMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxDDETrackPostHook @ 0x1C020BC3C (xxxDDETrackPostHook.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LARGE_STRING *a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  struct tagINPUT_MESSAGE_SOURCE *v6; // r14
  _DWORD *v7; // rbx
  struct tagWND *v9; // rsi
  struct tagINPUT_MESSAGE_SOURCE *v10; // rax
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 CurrentProcessWin32Process; // r15
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // r8
  __int64 v32; // rdi
  unsigned int DLT; // eax
  __int64 v34; // rcx
  tagDomLock *DomainLockRef; // r15
  __int64 v36; // rdx
  __int64 v37; // r9
  unsigned int v38; // ecx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int128 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int128 *v44; // rcx
  __int64 v45; // xmm1_8
  __int64 v46; // rax
  __int64 v47; // xmm1_8
  __int128 v48; // xmm0
  __int64 v49; // xmm1_8
  __int128 v50; // xmm0
  __int64 v51; // xmm1_8
  __int64 v52; // rcx
  int v53; // r13d
  _DWORD *v54; // r14
  _DWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // eax
  _QWORD *v60; // rax
  __int64 v61; // rax
  struct _KEVENT *v62; // rcx
  tagObjLock *v63; // rsi
  unsigned int v64; // eax
  __int64 v65; // rcx
  tagDomLock *v66; // r15
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // [rsp+70h] [rbp-39h] BYREF
  struct tagINPUT_MESSAGE_SOURCE *v72; // [rsp+78h] [rbp-31h]
  tagObjLock *v73; // [rsp+80h] [rbp-29h]
  tagDomLock *v74; // [rsp+88h] [rbp-21h]
  __int64 v75; // [rsp+90h] [rbp-19h] BYREF
  struct tagWND *v76; // [rsp+98h] [rbp-11h]
  __int64 v77; // [rsp+A0h] [rbp-9h]
  __int128 v78; // [rsp+A8h] [rbp-1h]
  __int64 v79; // [rsp+B8h] [rbp+Fh]
  unsigned int v80; // [rsp+108h] [rbp+5Fh] BYREF
  struct tagINPUT_MESSAGE_SOURCE *v81; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v82; // [rsp+118h] [rbp+6Fh] BYREF

  v82 = (unsigned __int64)a4;
  v81 = (struct tagINPUT_MESSAGE_SOURCE *)a3;
  v80 = a2;
  v6 = a5;
  v7 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v9 = (struct tagWND *)a1;
  v71 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v71);
    a4 = (struct _LARGE_STRING *)v82;
    a2 = v80;
  }
  v10 = (struct tagINPUT_MESSAGE_SOURCE *)&v71;
  if ( v6 )
    v10 = v6;
  v72 = v10;
  if ( (unsigned int)a2 < 0x400
    && ((a1 = 512LL, (MessageTable[(unsigned int)a2] & 0x200) != 0) || (_DWORD)a2 == 537 && (a3 & 0x8000) != 0)
    || (_DWORD)a2 == 536 && (a3 & 0x8000) != 0 )
  {
    UserSetLastError(1159LL, a2, a3, (__int64)a4);
    return 0LL;
  }
  if ( v9 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, a2, a3, a4, 2u, 0LL, 0, 0);
    return 1LL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( !v9 )
  {
    LOBYTE(v7) = (unsigned int)PostThreadMessage(v13, v80, (__int64)v81, v82) != 0;
    return (unsigned __int64)v7;
  }
  v17 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 416LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14);
  if ( v17 == CurrentProcessWin32Process )
  {
LABEL_36:
    LODWORD(v22) = v80;
    goto LABEL_37;
  }
  v22 = v80;
  if ( v80 > 0xD0 )
  {
    if ( v80 == 272 )
    {
LABEL_35:
      UserSetLastError(5LL, v18, v22, v20);
      return 0LL;
    }
    if ( v80 != 353 && v80 != 424 && v80 != 563 && v80 != 648 )
    {
LABEL_37:
      a5 = v81;
      v27 = 0;
      if ( (unsigned int)(v22 - 992) <= 8 )
      {
        v75 = *(_QWORD *)(v13 + 408);
        *(_QWORD *)(v13 + 408) = &v75;
        v76 = v9;
        HMLockObject(v9);
        v30 = xxxDDETrackPostHook(&v80, v9, 0);
        if ( v30 != 2 )
        {
          ThreadUnlock1(v29, v28, v31);
          return v30;
        }
        v27 = 1;
      }
      v32 = *((_QWORD *)v9 + 2);
      v73 = (tagObjLock *)(v32 + 848);
      DLT = DLT_POST::getDLT();
      DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
      v74 = DomainLockRef;
      if ( v32 + 848 == gObjDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
      tagDomLock::LockShared(DomainLockRef);
      tagObjLock::LockExclusive((tagObjLock *)(v32 + 848));
      v38 = v80;
      v39 = *(_QWORD *)v9;
      if ( v80 - 912 <= 0xF || v80 == 30 )
      {
        v36 = *(_QWORD *)(v32 + 808);
        if ( v36 )
        {
          if ( *(_DWORD *)(v36 + 24) == v80 && *(_QWORD *)(v36 + 16) == v39 )
          {
            DelQEntry(v32 + 800, v36, 1LL);
            v38 = v80;
          }
        }
      }
      if ( v38 - 256 > 9 )
      {
        if ( v38 == 576 )
        {
          LOBYTE(v36) = 20;
          if ( !HMValidateHandle(v82, v36, v39, v37) )
          {
LABEL_63:
            if ( v27 )
              ThreadUnlock1(v52, v36, v39);
LABEL_99:
            tagObjLock::UnLockExclusive(v73);
            tagDomLock::UnLockShared(v74);
            return (unsigned __int64)v7;
          }
        }
        else if ( v38 == 281 )
        {
          LOBYTE(v36) = 21;
          if ( !HMValidateHandle(v82, v36, v39, v37) )
            goto LABEL_63;
        }
      }
      else
      {
        v40 = *(_QWORD *)(v32 + 424);
        v41 = (__int128 *)gObjDummyLock;
        v42 = *(_QWORD *)(v40 + 104);
        if ( v42 )
          v41 = (__int128 *)(v42 + 384);
        v43 = *(_QWORD *)(v40 + 96);
        v44 = (__int128 *)gObjDummyLock;
        if ( v43 )
          v44 = (__int128 *)(v43 + 384);
        v45 = *((_QWORD *)&gpsiLock + 2);
        v46 = *(_QWORD *)(v32 + 424);
        v78 = gpsiLock;
        v79 = v45;
        v47 = *(_QWORD *)(v46 + 16);
        v78 = *(_OWORD *)v46;
        v48 = *v44;
        v79 = v47;
        v49 = *((_QWORD *)v44 + 2);
        v78 = v48;
        v50 = *v41;
        v79 = v49;
        v51 = *((_QWORD *)v41 + 2);
        v78 = v50;
        v79 = v51;
        PostUpdateKeyStateEvent(v46, (int)v41);
      }
      if ( (*(_DWORD *)(v32 + 1224) & 0x20) != 0 )
      {
        if ( v32 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v39, v37) )
        {
          a5 = v81;
        }
        else
        {
          a5 = v81;
          if ( !(unsigned int)ProcessSuspendedPostMessage(v32, v9, v80, v81, v82) )
            goto LABEL_63;
        }
      }
      v53 = 0;
      if ( *(_DWORD *)(v32 + 816) < gUserPostMessageLimit )
      {
        v55 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
        v54 = v55;
        if ( v55 )
        {
          memset(v55, 0, 0xA8uLL);
          v59 = 8;
          if ( *(_DWORD *)(v32 + 820) != 2 )
            v59 = 4;
          v54[25] |= v59;
          v60 = *(_QWORD **)(v32 + 808);
          if ( v60 )
          {
            *v60 = v54;
            *((_QWORD *)v54 + 1) = *(_QWORD *)(v32 + 808);
          }
          else
          {
            *(_QWORD *)(v32 + 800) = v54;
          }
          *(_QWORD *)(v32 + 808) = v54;
          ++*(_DWORD *)(v32 + 816);
          if ( a6 && (unsigned int)IsWindowDesktopComposed(v9) )
            TransformMessageBetweenCoordinateSpaces(v80, 0LL, (__int64)&v81, (__int16 *)&v82, (__int64)v9, 0LL);
          StoreQMessage(
            v54,
            v9,
            v80,
            a5,
            v82,
            0,
            0LL,
            0,
            0LL,
            0,
            v72,
            *(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL),
            0LL,
            0LL);
          if ( v80 == 576 || v80 == 281 )
          {
            v61 = _HMObjectFromHandle(v82);
            if ( v61 )
              HMChangeOwnerThread(v61, v32);
          }
          if ( (*(_DWORD *)(v32 + 480) & 1) == 0 )
          {
            *(_WORD *)(*(_QWORD *)(v32 + 440) + 6LL) |= 0x108u;
            *(_WORD *)(*(_QWORD *)(v32 + 440) + 4LL) |= 0x108u;
            if ( (*(_WORD *)(*(_QWORD *)(v32 + 440) + 10LL) & 0x108) != 0 )
              KeSetEvent(*(PRKEVENT *)(v32 + 728), 2, 0);
          }
          if ( v80 == 786 )
          {
            if ( (*(_DWORD *)(v32 + 1224) & 0x40000) != 0 )
            {
              v62 = *(struct _KEVENT **)(v32 + 1384);
              if ( v62 )
                KeSetEvent(v62, 1, 0);
            }
            SetWakeBit(v32, 128LL);
          }
          v53 = 1;
        }
        else
        {
          UserSetLastError(8LL, v56, v57, v58);
          v54 = 0LL;
        }
      }
      else
      {
        UserSetLastError(1816LL, v36, v39, v37);
        v54 = 0LL;
      }
      v63 = *(tagObjLock **)(v32 + 424);
      v64 = DLT_QUEUE::getDLT();
      v66 = (tagDomLock *)GetDomainLockRef(v64);
      if ( v63 == (tagObjLock *)gObjDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v65);
      tagDomLock::LockShared(v66);
      tagObjLock::LockExclusive(v63);
      v67 = *(_QWORD *)(v32 + 424);
      if ( v32 == *(_QWORD *)(v67 + 72) )
        *(_QWORD *)(v67 + 80) = v54;
      tagObjLock::UnLockExclusive(v63);
      tagDomLock::UnLockShared(v66);
      if ( v27 )
        ThreadUnlock1(v69, v68, v70);
      if ( v53 )
        v7 = v54;
      goto LABEL_99;
    }
    goto LABEL_31;
  }
  if ( v80 == 208 )
  {
LABEL_31:
    if ( !(unsigned __int8)Enforced(v19) || (v18 = gpepCSRSS, *(_QWORD *)v17 == gpepCSRSS) )
    {
      if ( *(_DWORD *)(v17 + 772) != *(_DWORD *)(CurrentProcessWin32Process + 772)
        || *(_DWORD *)(v17 + 776) != *(_DWORD *)(CurrentProcessWin32Process + 776) )
      {
        goto LABEL_35;
      }
    }
    goto LABEL_36;
  }
  switch ( v80 )
  {
    case 0xCu:
    case 0xBCu:
      goto LABEL_31;
    case 0xDu:
    case 0xC4u:
    case 0xCCu:
      v23 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) + 2LL);
      if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v23 || (*(_BYTE *)(*((_QWORD *)v9 + 5) + 28LL) & 0x20) == 0 )
        goto LABEL_37;
      UserSetLastError(5LL, v23, v80, v20);
      UserSetLastError(5LL, v24, v25, v26);
      result = 0LL;
      break;
    case 0x4Eu:
      goto LABEL_35;
    default:
      goto LABEL_37;
  }
  return result;
}
