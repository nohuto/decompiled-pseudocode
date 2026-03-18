/*
 * XREFs of xxxSnapWindow @ 0x1C015CA8C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     xxxCloseClipboard @ 0x1C00B78A0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00B79D0 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00B7D10 (ReferenceWindowStation.c)
 *     _SetClipboardData @ 0x1C00B8930 (_SetClipboardData.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     xxxEmptyClipboard @ 0x1C01256F0 (xxxEmptyClipboard.c)
 *     xxxPlayEventSound @ 0x1C0128710 (xxxPlayEventSound.c)
 *     ClientNoMemoryPopup @ 0x1C0215160 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C024077C (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C0270F78 (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C0272DB0 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(_QWORD *a1, int a2)
{
  HDC CompatibleDC; // r15
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  PVOID v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  bool v15; // bl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r13d
  unsigned int v28; // r12d
  unsigned int v29; // ebx
  int v30; // edx
  __int64 DCEx; // rax
  HDC v32; // r14
  __int64 Bitmap; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  char *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  void *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int128 v48; // [rsp+60h] [rbp-59h] BYREF
  PVOID Object[3]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v50; // [rsp+88h] [rbp-31h] BYREF
  _QWORD *v51; // [rsp+90h] [rbp-29h]
  __int64 v52; // [rsp+98h] [rbp-21h]
  __int64 v53; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-11h]
  __int64 v55; // [rsp+B0h] [rbp-9h]
  _QWORD v56[3]; // [rsp+B8h] [rbp-1h] BYREF
  int v57[16]; // [rsp+D0h] [rbp+17h] BYREF
  char v59; // [rsp+130h] [rbp+77h]
  int v60; // [rsp+138h] [rbp+7Fh]

  CompatibleDC = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  memset(v56, 0, sizeof(v56));
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon )
  {
    v4 = 1;
    if ( ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, Object, 1) >= 0
      && (*((_DWORD *)Object[0] + 8) & 4) == 0
      && *(PVOID *)(a1[3] + 40LL) == Object[0] )
    {
      while ( (*(_BYTE *)(a1[5] + 31LL) & 0x40) != 0 )
        a1 = (_QWORD *)a1[13];
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v44 = (void *)ReferenceDwmApiPort(v6, v5, v7);
        if ( (int)DwmAsyncSnapshotWindow(v44) < 0 )
          return 0;
LABEL_33:
        xxxPlayEventSound(13LL);
        return v4;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8);
      v50 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v50;
      v51 = a1;
      HMLockObject(a1);
      v10 = Object[0];
      PushW32ThreadLock((__int64)Object[0], v56, UserDereferenceObject, v11);
      ObfReferenceObject(v10);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
      v53 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v53;
      v54 = v14;
      if ( v14 )
        HMLockObject(v14);
      v15 = (unsigned int)OpenClipboard(v14, 0LL, v12, v13) != 0;
      ThreadUnlock1(v17, v16, v18);
      if ( v15 )
      {
        xxxEmptyClipboard((struct tagCLIP **)v10, v19, v20, v21);
        v22 = a1[5];
        v23 = *gpDispInfo;
        v48 = *(_OWORD *)(v22 + 88);
        *(_OWORD *)v57 = *(_OWORD *)(v23 + 24);
        if ( (unsigned int)IntersectRect(&v48, (int *)&v48, v57) )
        {
          v27 = v48;
          v28 = HIDWORD(v48) - DWORD1(v48);
          v29 = DWORD2(v48) - v48;
          v60 = DWORD1(v48);
          if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
          {
            v27 -= *(_DWORD *)(v22 + 88);
            v60 = v30 - *(_DWORD *)(v22 + 92);
          }
          DCEx = _GetDCEx(a1, 0LL, 65537LL);
          v32 = (HDC)DCEx;
          if ( DCEx
            && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
            && (!*(_DWORD *)(gpsi + 2220LL)
              ? (Bitmap = GreCreateBitmap(v29, v28, 1LL, *(unsigned __int16 *)(gpDispInfo + 128LL), 0LL))
              : (Bitmap = GreCreateCompatibleBitmapInternal(v32, v29, v28, 0, 0LL, 0LL)),
                (v34 = Bitmap) != 0 || (v34 = GreCreateBitmap(v29, v28, 1LL, 1LL, 0LL)) != 0) )
          {
            *(_QWORD *)&v48 = GreSelectBitmap(CompatibleDC);
            if ( !a2
              && a1 == *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL)
              && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
            {
              v59 = 1;
              GreEnableAppContainerRestriction(0LL);
            }
            else
            {
              v59 = 0;
            }
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              if ( gdwInAtomicOperation )
              {
                v35 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v35);
              v4 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v29, v28, v32, v27, v60, 1087111200, 0, 0);
              EnterCrit(0LL, 1LL);
            }
            else
            {
              v4 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v29, v28, v32, v27, v60, 1087111200, 0, 0);
            }
            if ( v59 )
              GreEnableAppContainerRestriction(1LL);
            GreSelectBitmap(CompatibleDC);
            if ( v4 )
            {
              SetClipboardData(2LL, v34, 0LL, 1LL);
              if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && (int)CreateScreenPalette(v32) >= 0 )
              {
                SetClipboardData(9LL, (__int64)Object[1], 0LL, 1LL);
                Win32FreePool(Object[2]);
              }
              v4 = 1;
            }
            else if ( v34 )
            {
              GreDeleteObject(v34);
            }
          }
          else
          {
            ClientNoMemoryPopup();
            v4 = 0;
          }
          if ( v32 )
            _ReleaseDC(v32);
        }
        else
        {
          v4 = 0;
        }
        v36 = (char *)Object[0];
        xxxCloseClipboard((struct tagWINDOWSTATION *)Object[0], v24, v25, v26);
        HMAssignmentUnlock(v36 + 80);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)v56, v37, v38, v39);
        ThreadUnlock1(v41, v40, v42);
        if ( !v4 )
          return v4;
        goto LABEL_33;
      }
      PopAndFreeW32ThreadLock((__int64)v56, v19, v20, v21);
      ThreadUnlock1(v46, v45, v47);
    }
  }
  return 0LL;
}
