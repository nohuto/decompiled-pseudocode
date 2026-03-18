/*
 * XREFs of xxxSnapWindow @ 0x1C015DA3C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     xxxCloseClipboard @ 0x1C0058D90 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C0058EC0 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C0059200 (ReferenceWindowStation.c)
 *     _SetClipboardData @ 0x1C0059E20 (_SetClipboardData.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     xxxEmptyClipboard @ 0x1C00FF5E0 (xxxEmptyClipboard.c)
 *     xxxPlayEventSound @ 0x1C01037C0 (xxxPlayEventSound.c)
 *     ClientNoMemoryPopup @ 0x1C0214C20 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C024015C (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C0270868 (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C02726A0 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(_QWORD *a1, int a2)
{
  HDC CompatibleDC; // r15
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  PVOID v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  bool v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r13d
  unsigned int v25; // r12d
  unsigned int v26; // ebx
  int v27; // edx
  __int64 DCEx; // rax
  HDC v29; // r14
  __int64 Bitmap; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  char *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int128 v44; // [rsp+60h] [rbp-59h] BYREF
  PVOID Object[3]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v46; // [rsp+88h] [rbp-31h] BYREF
  _QWORD *v47; // [rsp+90h] [rbp-29h]
  __int64 v48; // [rsp+98h] [rbp-21h]
  __int64 v49; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-11h]
  __int64 v51; // [rsp+B0h] [rbp-9h]
  _QWORD v52[3]; // [rsp+B8h] [rbp-1h] BYREF
  int v53[16]; // [rsp+D0h] [rbp+17h] BYREF
  char v55; // [rsp+130h] [rbp+77h]
  int v56; // [rsp+138h] [rbp+7Fh]

  CompatibleDC = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  memset(v52, 0, sizeof(v52));
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
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
        v40 = (void *)ReferenceDwmApiPort(v6, v5, v7);
        if ( (int)DwmAsyncSnapshotWindow(v40) < 0 )
          return 0;
LABEL_33:
        xxxPlayEventSound(13LL);
        return v4;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7);
      v46 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v46;
      v47 = a1;
      HMLockObject(a1);
      v9 = Object[0];
      PushW32ThreadLock((__int64)Object[0], v52, UserDereferenceObject);
      ObfReferenceObject(v9);
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
      v49 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v49;
      v50 = v12;
      if ( v12 )
        HMLockObject(v12);
      v13 = (unsigned int)OpenClipboard(v12, 0LL, v10, v11) != 0;
      ThreadUnlock1(v15, v14, v16);
      if ( v13 )
      {
        xxxEmptyClipboard((struct tagCLIP **)v9, v17, v18);
        v19 = a1[5];
        v20 = *gpDispInfo;
        v44 = *(_OWORD *)(v19 + 88);
        *(_OWORD *)v53 = *(_OWORD *)(v20 + 24);
        if ( (unsigned int)IntersectRect(&v44, (int *)&v44, v53) )
        {
          v24 = v44;
          v25 = HIDWORD(v44) - DWORD1(v44);
          v26 = DWORD2(v44) - v44;
          v56 = DWORD1(v44);
          if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
          {
            v24 -= *(_DWORD *)(v19 + 88);
            v56 = v27 - *(_DWORD *)(v19 + 92);
          }
          DCEx = _GetDCEx(a1, 0LL, 65537LL);
          v29 = (HDC)DCEx;
          if ( DCEx
            && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
            && (!*(_DWORD *)(gpsi + 2220LL)
              ? (Bitmap = GreCreateBitmap(v26, v25, 1LL, *(unsigned __int16 *)(gpDispInfo + 128LL), 0LL))
              : (Bitmap = GreCreateCompatibleBitmapInternal(v29, v26, v25, 0, 0LL, 0LL)),
                (v31 = Bitmap) != 0 || (v31 = GreCreateBitmap(v26, v25, 1LL, 1LL, 0LL)) != 0) )
          {
            *(_QWORD *)&v44 = GreSelectBitmap(CompatibleDC, v31);
            if ( !a2
              && a1 == *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL)
              && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
            {
              v55 = 1;
              GreEnableAppContainerRestriction(0LL);
            }
            else
            {
              v55 = 0;
            }
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              if ( gdwInAtomicOperation )
              {
                v32 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v32);
              v4 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v26, v25, v29, v24, v56, 1087111200, 0, 0);
              EnterCrit(0LL, 1LL);
            }
            else
            {
              v4 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v26, v25, v29, v24, v56, 1087111200, 0, 0);
            }
            if ( v55 )
              GreEnableAppContainerRestriction(1LL);
            GreSelectBitmap(CompatibleDC, v44);
            if ( v4 )
            {
              SetClipboardData(2u, v31, 0, 1);
              if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && (int)CreateScreenPalette(v29) >= 0 )
              {
                SetClipboardData(9u, (__int64)Object[1], 0, 1);
                Win32FreePool(Object[2]);
              }
              v4 = 1;
            }
            else if ( v31 )
            {
              GreDeleteObject(v31);
            }
          }
          else
          {
            ClientNoMemoryPopup();
            v4 = 0;
          }
          if ( v29 )
            _ReleaseDC(v29);
        }
        else
        {
          v4 = 0;
        }
        v33 = (char *)Object[0];
        xxxCloseClipboard((struct tagWINDOWSTATION *)Object[0], v21, v22, v23);
        HMAssignmentUnlock(v33 + 80);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)v52, v34, v35);
        ThreadUnlock1(v37, v36, v38);
        if ( !v4 )
          return v4;
        goto LABEL_33;
      }
      PopAndFreeW32ThreadLock((__int64)v52, v17, v18);
      ThreadUnlock1(v42, v41, v43);
    }
  }
  return 0LL;
}
