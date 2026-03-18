/*
 * XREFs of xxxClientExtTextOutW @ 0x1C0157790
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0249E08 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
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

__int64 __fastcall xxxClientExtTextOutW(HDC a1, int a2, int a3, int a4, _OWORD *a5, PCWSTR SourceString, int a7)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  __int64 v13; // rdx
  unsigned __int8 *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned int v23; // r12d
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rcx
  __int64 v29; // r15
  PVOID *v31; // rdx
  char v32; // [rsp+60h] [rbp-308h] BYREF
  _BYTE v33[3]; // [rsp+61h] [rbp-307h] BYREF
  int v34; // [rsp+64h] [rbp-304h] BYREF
  __int64 v35; // [rsp+68h] [rbp-300h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD v37[4]; // [rsp+80h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v39[5]; // [rsp+A8h] [rbp-2C0h] BYREF
  unsigned __int8 v40[104]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v41[512]; // [rsp+140h] [rbp-228h] BYREF

  v37[3] = a1;
  memset(v40, 0, sizeof(v40));
  v35 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v37[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v14 = AllocCallbackMessage(104, 1u, MaximumLength, v41, 1, 0x200uLL);
  v37[1] = v14;
  if ( !v14 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v35);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15, v16);
  memset(v39, 0, 24);
  if ( v14 != v40 && v14 != v41 )
    PushW32ThreadLock((__int64)v14, v39, (__int64)Win32FreePool, v17);
  *((_QWORD *)v14 + 7) = CompatiblePublicDC;
  *((_DWORD *)v14 + 16) = a2;
  *((_DWORD *)v14 + 17) = a3;
  *((_DWORD *)v14 + 18) = a4;
  if ( a5 )
  {
    *(_OWORD *)(v14 + 76) = *a5;
    *((_DWORD *)v14 + 24) = 1;
  }
  else
  {
    *((_DWORD *)v14 + 24) = 0;
  }
  *((_DWORD *)v14 + 23) = a7;
  *((_WORD *)v14 + 20) = DestinationString.Length;
  *((_WORD *)v14 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v14,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v14 + 6) < 0 )
    goto LABEL_24;
  v23 = GreSaveDC((__int64)a1, v18);
  if ( gdwInAtomicOperation )
  {
    v21 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v33,
    v21,
    gdwInAtomicOperation,
    v22);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v24 = KeUserModeCallback(80LL, v14, *(unsigned int *)v14, v37, &v34);
  EtwTraceEndCallback(80LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v33,
    v25,
    v26,
    v27);
  GreRestoreDC(a1, v23);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v24 < 0 )
      goto LABEL_24;
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
  if ( v24 >= 0 && v34 == 24 )
  {
    v28 = (__int64 *)v37[0];
    if ( (unsigned __int64)(v37[0] + 8LL) < v37[0] || v37[0] + 8LL > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v39[3] = *v28;
    goto LABEL_19;
  }
LABEL_24:
  LODWORD(v29) = 0;
LABEL_19:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v35);
  }
  if ( v14 != v40 && v14 != v41 )
  {
    v31 = (PVOID *)(v14 + 32);
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v39, (__int64)v31, v19, v20);
  }
  return (unsigned int)v29;
}
