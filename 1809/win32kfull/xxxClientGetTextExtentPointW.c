/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C0151B08
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01513D0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C022DECC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0231004 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C0241E84 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C02440EC (xxxPSMGetTextExtent.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GreSaveDC @ 0x1C0056E34 (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x1C0151E08 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, const WCHAR *a2, int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  __int64 v9; // rdx
  unsigned __int8 *v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r12d
  int v13; // r15d
  __int64 v14; // rdx
  ULONG_PTR *v15; // rcx
  ULONG_PTR v16; // r15
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  PVOID *v20; // rdx
  char v21; // [rsp+60h] [rbp-318h] BYREF
  _BYTE v22[3]; // [rsp+61h] [rbp-317h] BYREF
  int v23; // [rsp+64h] [rbp-314h] BYREF
  __int64 v24; // [rsp+68h] [rbp-310h]
  _QWORD v25[4]; // [rsp+70h] [rbp-308h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v28[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  unsigned __int8 v29[80]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v30[512]; // [rsp+130h] [rbp-248h] BYREF

  v25[3] = a1;
  v24 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v25[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a3 + 1)) )
    MaximumLength = 2LL * (a3 + 1);
  v10 = AllocCallbackMessage(80, 1u, MaximumLength, v30, 1, 0x200uLL);
  v25[1] = v10;
  if ( !v10 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v24);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
  if ( v10 != v29 && v10 != v30 )
    PushW32ThreadLock((__int64)v10, v28, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 7) = CompatiblePublicDC;
  *((_DWORD *)v10 + 16) = a3;
  *((_WORD *)v10 + 20) = DestinationString.Length;
  *((_WORD *)v10 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v10 + 6) < 0 )
    goto LABEL_26;
  v12 = GreSaveDC(a1);
  if ( gdwInAtomicOperation )
  {
    v11 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v22, v11);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v13 = KeUserModeCallback(81LL, v10, *(unsigned int *)v10, v25, &v23);
  EtwTraceEndCallback(81LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v22, v14);
  GreRestoreDC(a1, v12);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v13 < 0 )
      goto LABEL_26;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v13 >= 0 && v23 == 24 )
  {
    v15 = (ULONG_PTR *)v25[0];
    if ( (unsigned __int64)(v25[0] + 8LL) < v25[0] || v25[0] + 8LL > MmUserProbeAddress )
      v15 = (ULONG_PTR *)MmUserProbeAddress;
    v16 = *v15;
    RegionSize[1] = *v15;
    v17 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v17 || (*(_DWORD *)(v17 + 84) & 1) == 0 || *(_QWORD **)(v17 + 96) != a4 )
    {
      v18 = *(_QWORD **)(v25[0] + 16LL);
      if ( v18 + 1 < v18 || (unsigned __int64)(v18 + 1) > MmUserProbeAddress )
        v18 = (_QWORD *)MmUserProbeAddress;
      *a4 = *v18;
      goto LABEL_21;
    }
  }
LABEL_26:
  LODWORD(v16) = 0;
LABEL_21:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v24);
  }
  if ( v10 != v29 && v10 != v30 )
  {
    v20 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v20, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v28, (__int64)v20);
  }
  return (unsigned int)v16;
}
