/*
 * XREFs of xxxSnapWindow @ 0x1C0134044
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     xxxEmptyClipboard @ 0x1C00B5A04 (xxxEmptyClipboard.c)
 *     _SetClipboardData @ 0x1C00B6038 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00B6410 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00B6508 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00B6A10 (ReferenceWindowStation.c)
 *     xxxPlayEventSound @ 0x1C00FF4F0 (xxxPlayEventSound.c)
 *     ClientNoMemoryPopup @ 0x1C01D8A50 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C01FFA00 (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C023FF68 (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C024197C (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(__int64 a1, int a2)
{
  HDC CompatibleDC; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 ThreadWin32Thread; // rax
  PVOID v8; // rsi
  __int64 v9; // rcx
  bool v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r13d
  unsigned int v19; // r12d
  unsigned int v20; // ebx
  int v21; // edx
  __int64 DCEx; // rax
  HDC v23; // r14
  __int64 Bitmap; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // ebx
  char *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  void *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  __int128 v44; // [rsp+68h] [rbp-51h] BYREF
  __int64 v45; // [rsp+78h] [rbp-41h]
  __int64 v46; // [rsp+80h] [rbp-39h]
  __int128 v47; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v48[3]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v49[3]; // [rsp+B0h] [rbp-9h] BYREF
  _QWORD v50[9]; // [rsp+C8h] [rbp+Fh] BYREF
  char v52; // [rsp+130h] [rbp+77h]
  unsigned int v53; // [rsp+138h] [rbp+7Fh]

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
      v39 = (void *)ReferenceDwmApiPort(v5, v4, v6);
      if ( (int)DwmAsyncSnapshotWindow(v39) < 0 )
        return 0;
      v29 = 1;
LABEL_33:
      xxxPlayEventSound(13LL, v35, v36, v37);
      return v29;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
    v48[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v48;
    v48[1] = a1;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    v8 = Object;
    PushW32ThreadLock((__int64)Object, v50, UserDereferenceObject);
    ObfReferenceObject(v8);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
    v49[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v49;
    v49[1] = v9;
    if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
      v8 = Object;
    }
    v10 = (unsigned int)OpenClipboard(v9, 0LL) != 0;
    ThreadUnlock1(v12, v11, v13);
    if ( v10 )
    {
      xxxEmptyClipboard((struct tagCLIP **)v8, v14);
      v15 = *(_QWORD *)(a1 + 40);
      v16 = *gpDispInfo;
      v44 = *(_OWORD *)(v15 + 88);
      v47 = *(_OWORD *)(v16 + 24);
      if ( (unsigned int)IntersectRect(&v44, (int *)&v44, (int *)&v47) )
      {
        v18 = v44;
        v19 = HIDWORD(v44) - DWORD1(v44);
        v20 = DWORD2(v44) - v44;
        v53 = DWORD1(v44);
        if ( a1 != GetDesktopWindow(a1) )
        {
          v18 -= *(_DWORD *)(v15 + 88);
          v53 = v21 - *(_DWORD *)(v15 + 92);
        }
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        v23 = (HDC)DCEx;
        if ( DCEx
          && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
          && (!*(_DWORD *)(gpsi + 2220LL)
            ? (Bitmap = GreCreateBitmap(v20, v19, 1LL, *(unsigned __int16 *)(gpDispInfo + 128LL), 0LL))
            : (Bitmap = GreCreateCompatibleBitmapInternal(v23, v20, v19, 0, 0LL, 0LL)),
              (v25 = Bitmap) != 0 || (v25 = GreCreateBitmap(v20, v19, 1LL, 1LL, 0LL)) != 0) )
        {
          *(_QWORD *)&v44 = GreSelectBitmap(CompatibleDC, v25);
          if ( !a2
            && a1 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL)
            && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
          {
            v52 = 1;
            GreEnableAppContainerRestriction(0LL);
          }
          else
          {
            v52 = 0;
          }
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            if ( gdwInAtomicOperation )
            {
              v26 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v26, gdwInAtomicOperation, v27, v28);
            v29 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v20, v19, v23, v18, v53, 1087111200, 0, 0);
            EnterCrit(0LL, 1LL);
          }
          else
          {
            v29 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v20, v19, v23, v18, v53, 1087111200, 0, 0);
          }
          if ( v52 )
            GreEnableAppContainerRestriction(1LL);
          GreSelectBitmap(CompatibleDC, v44);
          if ( v29 )
          {
            SetClipboardData(2, v25, 0, 1);
            if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && (int)CreateScreenPalette(v23) >= 0 )
            {
              SetClipboardData(9, v45, 0, 1);
              Win32FreePool(v46);
            }
            v29 = 1;
          }
          else if ( v25 )
          {
            GreDeleteObject(v25);
          }
        }
        else
        {
          ClientNoMemoryPopup();
          v29 = 0;
        }
        if ( v23 )
          _ReleaseDC(v23);
      }
      else
      {
        v29 = 0;
      }
      v30 = (char *)Object;
      xxxCloseClipboard((struct tagWINDOWSTATION *)Object, v17);
      HMAssignmentUnlock(v30 + 80);
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      PopAndFreeW32ThreadLock((__int64)v50, v31);
      ThreadUnlock1(v33, v32, v34);
      if ( !v29 )
        return v29;
      goto LABEL_33;
    }
    PopAndFreeW32ThreadLock((__int64)v50, v14);
    ThreadUnlock1(v41, v40, v42);
  }
  return 0LL;
}
