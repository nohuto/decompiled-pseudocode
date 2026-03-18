/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C0158874
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023F6F0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0245F44 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249504 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A53C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C025C810 (xxxPSMGetTextExtent.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreSaveDC @ 0x1C00AD5CC (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     CreateCompatiblePublicDC @ 0x1C0158BC0 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, PCWSTR SourceString, int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  __int64 v10; // rdx
  unsigned __int8 *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // r12d
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 *v22; // rcx
  PVOID *v24; // rdx
  char v25; // [rsp+60h] [rbp-318h] BYREF
  _BYTE v26[3]; // [rsp+61h] [rbp-317h] BYREF
  int v27; // [rsp+64h] [rbp-314h] BYREF
  __int64 v28; // [rsp+68h] [rbp-310h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-308h] BYREF
  _QWORD v30[4]; // [rsp+80h] [rbp-2F8h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v32[4]; // [rsp+A8h] [rbp-2D0h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-2B0h]
  unsigned __int8 v34[80]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v35[512]; // [rsp+130h] [rbp-248h] BYREF

  v30[3] = a1;
  memset(v34, 0, sizeof(v34));
  v28 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v30[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a3 + 1)) )
    MaximumLength = 2LL * (a3 + 1);
  v11 = AllocCallbackMessage(80, 1u, MaximumLength, v35, 1, 0x200uLL);
  v30[1] = v11;
  if ( !v11 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v28);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12);
  memset(v32, 0, 24);
  if ( v11 != v34 && v11 != v35 )
    PushW32ThreadLock((__int64)v11, v32, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 7) = CompatiblePublicDC;
  *((_DWORD *)v11 + 16) = a3;
  *((_WORD *)v11 + 20) = DestinationString.Length;
  *((_WORD *)v11 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v11,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v11 + 6) < 0 )
    goto LABEL_26;
  v15 = GreSaveDC(a1);
  if ( gdwInAtomicOperation )
  {
    v14 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v26,
    v14,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v16 = KeUserModeCallback(81LL, v11, *(unsigned int *)v11, v30, &v27);
  EtwTraceEndCallback(81LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v26,
    v17,
    v18);
  GreRestoreDC(a1, v15);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v16 < 0 )
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
  if ( v16 >= 0 && v27 == 24 )
  {
    v19 = (__int64 *)v30[0];
    if ( (unsigned __int64)(v30[0] + 8LL) < v30[0] || v30[0] + 8LL > MmUserProbeAddress )
      v19 = (__int64 *)MmUserProbeAddress;
    v20 = *v19;
    v32[3] = *v19;
    v21 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v21 || (*(_DWORD *)(v21 + 84) & 1) == 0 || *(_QWORD **)(v21 + 96) != a4 )
    {
      v22 = *(__int64 **)(v30[0] + 16LL);
      if ( v22 + 1 < v22 || (unsigned __int64)(v22 + 1) > MmUserProbeAddress )
        v22 = (__int64 *)MmUserProbeAddress;
      v33 = *v22;
      *a4 = v33;
      goto LABEL_21;
    }
  }
LABEL_26:
  LODWORD(v20) = 0;
LABEL_21:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v28);
  }
  if ( v11 != v34 && v11 != v35 )
  {
    v24 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v24, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v32, (__int64)v24, v13);
  }
  return (unsigned int)v20;
}
