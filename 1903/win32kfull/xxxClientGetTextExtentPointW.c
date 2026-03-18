/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C0157AB4
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023FD10 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0246684 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249C44 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025AC7C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C025CF40 (xxxPSMGetTextExtent.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreSaveDC @ 0x1C008DF10 (GreSaveDC.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C0157E00 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, PCWSTR SourceString, int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  __int64 v10; // rdx
  unsigned __int8 *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // r12d
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 *v28; // rcx
  PVOID *v30; // rdx
  char v31; // [rsp+60h] [rbp-318h] BYREF
  _BYTE v32[3]; // [rsp+61h] [rbp-317h] BYREF
  int v33; // [rsp+64h] [rbp-314h] BYREF
  __int64 v34; // [rsp+68h] [rbp-310h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-308h] BYREF
  _QWORD v36[4]; // [rsp+80h] [rbp-2F8h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v38[4]; // [rsp+A8h] [rbp-2D0h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-2B0h]
  unsigned __int8 v40[80]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v41[512]; // [rsp+130h] [rbp-248h] BYREF

  v36[3] = a1;
  memset(v40, 0, sizeof(v40));
  v34 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v36[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a3 + 1)) )
    MaximumLength = 2LL * (a3 + 1);
  v11 = AllocCallbackMessage(80, 1u, MaximumLength, v41, 1, 0x200uLL);
  v36[1] = v11;
  if ( !v11 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v34);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12, v13);
  memset(v38, 0, 24);
  if ( v11 != v40 && v11 != v41 )
    PushW32ThreadLock((__int64)v11, v38, (__int64)Win32FreePool, v14);
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
  v20 = GreSaveDC((__int64)a1, v15);
  if ( gdwInAtomicOperation )
  {
    v18 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v32,
    v18,
    gdwInAtomicOperation,
    v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v21 = KeUserModeCallback(81LL, v11, *(unsigned int *)v11, v36, &v33);
  EtwTraceEndCallback(81LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v32,
    v22,
    v23,
    v24);
  GreRestoreDC(a1, v20);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v21 < 0 )
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
  if ( v21 >= 0 && v33 == 24 )
  {
    v25 = (__int64 *)v36[0];
    if ( (unsigned __int64)(v36[0] + 8LL) < v36[0] || v36[0] + 8LL > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v38[3] = *v25;
    v27 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_QWORD **)(v27 + 96) != a4 )
    {
      v28 = *(__int64 **)(v36[0] + 16LL);
      if ( v28 + 1 < v28 || (unsigned __int64)(v28 + 1) > MmUserProbeAddress )
        v28 = (__int64 *)MmUserProbeAddress;
      v39 = *v28;
      *a4 = v39;
      goto LABEL_21;
    }
  }
LABEL_26:
  LODWORD(v26) = 0;
LABEL_21:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v34);
  }
  if ( v11 != v40 && v11 != v41 )
  {
    v30 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v38, (__int64)v30, v16, v17);
  }
  return (unsigned int)v26;
}
