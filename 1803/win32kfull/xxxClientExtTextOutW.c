/*
 * XREFs of xxxClientExtTextOutW @ 0x1C0132C8C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01FF2E4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0207FC0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GreSaveDC @ 0x1C0078AB8 (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     CreateCompatiblePublicDC @ 0x1C0133238 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExtTextOutW(HDC a1, int a2, int a3, int a4, _OWORD *a5, PCWSTR SourceString, int a7)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  __int64 v13; // rdx
  unsigned __int8 *v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r12d
  int v18; // r15d
  __int64 v19; // rdx
  ULONG_PTR *v20; // rcx
  ULONG_PTR v21; // r15
  char v23; // [rsp+60h] [rbp-308h] BYREF
  _BYTE v24[3]; // [rsp+61h] [rbp-307h] BYREF
  int v25; // [rsp+64h] [rbp-304h] BYREF
  __int64 v26; // [rsp+68h] [rbp-300h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD v28[4]; // [rsp+80h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v30[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v31[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v32[512]; // [rsp+140h] [rbp-228h] BYREF

  v28[3] = a1;
  v26 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v28[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v14 = AllocCallbackMessage(104, 1u, MaximumLength, v32, 1, 0x200uLL);
  v28[1] = v14;
  if ( !v14 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v26);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  if ( v14 != v31 && v14 != v32 )
    PushW32ThreadLock((__int64)v14, v30, (__int64)Win32FreePool);
  *((_QWORD *)v14 + 7) = CompatiblePublicDC;
  *((_DWORD *)v14 + 16) = a2;
  *((_DWORD *)v14 + 17) = a3;
  *((_DWORD *)v14 + 18) = a4;
  v15 = (int)a5;
  if ( a5 )
  {
    *(_OWORD *)(v14 + 76) = *a5;
    v15 = 1;
  }
  *((_DWORD *)v14 + 24) = v15;
  *((_DWORD *)v14 + 23) = a7;
  *((_WORD *)v14 + 20) = DestinationString.Length;
  *((_WORD *)v14 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v14,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v14 + 6) < 0 )
    goto LABEL_24;
  v17 = GreSaveDC(a1);
  if ( gdwInAtomicOperation )
  {
    v16 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v24, v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v18 = KeUserModeCallback(80LL, v14, *(unsigned int *)v14, v28, &v25);
  EtwTraceEndCallback(80LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v24, v19);
  GreRestoreDC(a1, v17);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v18 < 0 )
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
  if ( v18 >= 0 && v25 == 24 )
  {
    v20 = (ULONG_PTR *)v28[0];
    if ( (unsigned __int64)(v28[0] + 8LL) < v28[0] || v28[0] + 8LL > MmUserProbeAddress )
      v20 = (ULONG_PTR *)MmUserProbeAddress;
    v21 = *v20;
    RegionSize[1] = *v20;
    goto LABEL_19;
  }
LABEL_24:
  LODWORD(v21) = 0;
LABEL_19:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v26);
  }
  if ( v14 != v31 && v14 != v32 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v30);
  }
  return (unsigned int)v21;
}
