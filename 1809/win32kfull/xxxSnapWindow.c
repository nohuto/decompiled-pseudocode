/*
 * XREFs of xxxSnapWindow @ 0x1C0155AF4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxCloseClipboard @ 0x1C00D9B50 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00D9C70 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00D9F40 (ReferenceWindowStation.c)
 *     _SetClipboardData @ 0x1C00DB1B4 (_SetClipboardData.c)
 *     xxxEmptyClipboard @ 0x1C00DE988 (xxxEmptyClipboard.c)
 *     xxxPlayEventSound @ 0x1C011E550 (xxxPlayEventSound.c)
 *     ClientNoMemoryPopup @ 0x1C01FDC04 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C02283A8 (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C0257658 (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C02594D0 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(__int64 a1, int a2)
{
  HDC CompatibleDC; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  PVOID v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  bool v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r13d
  unsigned int v21; // r12d
  unsigned int v22; // ebx
  int v23; // edx
  __int64 DCEx; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  HDC v27; // r14
  HSURF Bitmap; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // ebx
  char *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  int v46[4]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v47; // [rsp+78h] [rbp-41h]
  __int64 v48; // [rsp+80h] [rbp-39h]
  __int128 v49; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v50[3]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v51[3]; // [rsp+B0h] [rbp-9h] BYREF
  _QWORD v52[9]; // [rsp+C8h] [rbp+Fh] BYREF
  char v54; // [rsp+130h] [rbp+77h]
  int v55; // [rsp+138h] [rbp+7Fh]

  CompatibleDC = 0LL;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon
    && ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) >= 0
    && (*((_DWORD *)Object + 8) & 4) == 0
    && *(PVOID *)(*(_QWORD *)(a1 + 24) + 40LL) == Object )
  {
    while ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
      a1 = *(_QWORD *)(a1 + 80);
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      v42 = (void *)ReferenceDwmApiPort(v5, v4);
      if ( (int)DwmAsyncSnapshotWindow(v42) < 0 )
        return 0;
      v33 = 1;
LABEL_33:
      xxxPlayEventSound(13LL, v38, v39, v40);
      return v33;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
    v50[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v50;
    v50[1] = a1;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    v7 = Object;
    PushW32ThreadLock((__int64)Object, v52, UserDereferenceObject);
    ObfReferenceObject(v7);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    v51[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v51;
    v51[1] = v10;
    if ( v10 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
      v7 = Object;
    }
    v11 = (unsigned int)OpenClipboard(v10, 0LL, v8, v9) != 0;
    ThreadUnlock1(v13, v12);
    if ( v11 )
    {
      xxxEmptyClipboard((struct tagCLIP **)v7, v14);
      v15 = *(_QWORD *)(a1 + 40);
      v16 = *gpDispInfo;
      *(_OWORD *)v46 = *(_OWORD *)(v15 + 88);
      v49 = *(_OWORD *)(v16 + 24);
      if ( (unsigned int)IntersectRect(v46, v46, (int *)&v49) )
      {
        v20 = v46[0];
        v21 = v46[3] - v46[1];
        v22 = v46[2] - v46[0];
        v55 = v46[1];
        if ( a1 != GetDesktopWindow(a1) )
        {
          v20 -= *(_DWORD *)(v15 + 88);
          v55 = v23 - *(_DWORD *)(v15 + 92);
        }
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        v27 = (HDC)DCEx;
        if ( DCEx
          && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx, v25, v26)) != 0LL
          && (!*(_DWORD *)(gpsi + 2220LL)
            ? (Bitmap = (HSURF)GreCreateBitmap(v22, v21, 1LL, *(unsigned __int16 *)(gpDispInfo + 128LL), 0LL))
            : (Bitmap = GreCreateCompatibleBitmapInternal(v27, v22, v21, 0, 0LL, 0LL)),
              (v29 = (__int64)Bitmap) != 0 || (v29 = GreCreateBitmap(v22, v21, 1LL, 1LL, 0LL)) != 0) )
        {
          *(_QWORD *)v46 = GreSelectBitmap(CompatibleDC, v29);
          if ( !a2
            && a1 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL)
            && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
          {
            v54 = 1;
            GreEnableAppContainerRestriction(0LL);
          }
          else
          {
            v54 = 0;
          }
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            if ( gdwInAtomicOperation )
            {
              v30 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v30, gdwInAtomicOperation, v31, v32);
            v33 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v22, v21, v27, v20, v55, 1087111200, 0, 0);
            EnterCrit(0LL, 1LL);
          }
          else
          {
            v33 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v22, v21, v27, v20, v55, 1087111200, 0, 0);
          }
          if ( v54 )
            GreEnableAppContainerRestriction(1LL);
          GreSelectBitmap(CompatibleDC, *(_QWORD *)v46);
          if ( v33 )
          {
            SetClipboardData(2LL, v29, 0, 1);
            if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && (int)CreateScreenPalette(v27) >= 0 )
            {
              SetClipboardData(9LL, v47, 0, 1);
              Win32FreePool(v48);
            }
            v33 = 1;
          }
          else if ( v29 )
          {
            GreDeleteObject(v29);
          }
        }
        else
        {
          ClientNoMemoryPopup();
          v33 = 0;
        }
        if ( v27 )
          _ReleaseDC(v27);
      }
      else
      {
        v33 = 0;
      }
      v34 = (char *)Object;
      xxxCloseClipboard((struct tagWINDOWSTATION *)Object, v17, v18, v19);
      HMAssignmentUnlock(v34 + 80);
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      PopAndFreeW32ThreadLock((__int64)v52, v35);
      ThreadUnlock1(v37, v36);
      if ( !v33 )
        return v33;
      goto LABEL_33;
    }
    PopAndFreeW32ThreadLock((__int64)v52, v14);
    ThreadUnlock1(v44, v43);
  }
  return 0LL;
}
