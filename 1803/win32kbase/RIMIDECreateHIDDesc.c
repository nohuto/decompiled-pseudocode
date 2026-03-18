/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C00F2D44
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     rimAnySecondaryRimUsagesMatchingUsages @ 0x1C00DEA4C (rimAnySecondaryRimUsagesMatchingUsages.c)
 *     RIMFreePointerDevice @ 0x1C00EBFB4 (RIMFreePointerDevice.c)
 *     RIMFreeHidDesc @ 0x1C00EF8B0 (RIMFreeHidDesc.c)
 *     RIMIsInteractiveCtrl @ 0x1C00EFE70 (RIMIsInteractiveCtrl.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C00F07D8 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00F0B24 (WPP_RECORDER_SF_qDD.c)
 *     rimHidP_FreeCollectionDescription @ 0x1C00F0D28 (rimHidP_FreeCollectionDescription.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00F136C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00F15C0 (RIMSearchHidTLCInfo.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C00F28A8 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00F3CA8 (RIMIDEFreeInjectedInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm2
  __int128 v6; // xmm1
  __int64 v7; // rsi
  int v8; // r14d
  __int128 v9; // xmm0
  __m128i v10; // xmm1
  int Caps; // eax
  unsigned __int16 epi16; // bx
  char *v13; // rax
  __int128 v14; // xmm0
  void *v15; // rax
  void *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // r8
  _WORD *v19; // r15
  int v20; // kr00_4
  __int64 v21; // r15
  __int64 v22; // rdx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rdx
  __int64 v28; // rdx
  struct _HIDP_CAPS v30; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+D0h] [rbp-30h]
  struct _HIDP_CAPS v34; // [rsp+E0h] [rbp-20h] BYREF
  struct _HIDP_DEVICE_DESC v35; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3[1];
  v6 = a3[3];
  v7 = 0LL;
  v8 = 0;
  *(_OWORD *)&v35.ReportIDs = a3[2];
  v9 = a3[4];
  *(_OWORD *)&v35.CollectionDesc = v3;
  *(_OWORD *)&v35.Dbg.Args[3] = v9;
  *(_OWORD *)&v35.Dbg.ErrorCode = v6;
  v10 = *(__m128i *)(v3 + 16);
  v32 = *(_OWORD *)v3;
  Src = *(void **)(v3 + 32);
  v31 = v10;
  if ( gpfnHidP_GetCaps )
  {
    Caps = gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v34);
    v10 = v31;
  }
  else
  {
    Caps = -1073741637;
  }
  if ( Caps < 0 )
    goto LABEL_29;
  if ( !v34.InputReportByteLength )
    goto LABEL_29;
  epi16 = _mm_extract_epi16(v10, 5);
  if ( !epi16 )
    goto LABEL_29;
  v13 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  v7 = (__int64)v13;
  if ( !v13 )
    goto LABEL_29;
  v14 = *(_OWORD *)&v34.Usage;
  *(_QWORD *)(a2 + 464) = v13;
  *(_OWORD *)(v13 + 40) = v14;
  *(_OWORD *)(v13 + 56) = *(_OWORD *)&v34.Reserved[3];
  *(_OWORD *)(v13 + 72) = *(_OWORD *)&v34.Reserved[11];
  *(_OWORD *)(v13 + 88) = *(_OWORD *)&v34.NumberInputValueCaps;
  v15 = Win32AllocPoolZInit(*((unsigned __int16 *)v13 + 22), 0x6A6E6952u);
  *(_QWORD *)(v7 + 24) = v15;
  if ( !v15 || (v16 = (void *)Win32AllocPool(epi16, 0x6A6E6952u), (*(_QWORD *)(v7 + 16) = v16) == 0LL) )
  {
LABEL_29:
    v8 = 1;
    goto LABEL_30;
  }
  memmove(v16, Src, epi16);
  *(_DWORD *)(v7 + 104) = epi16;
  *(_DWORD *)(v7 + 108) = 0;
  *(_DWORD *)(v7 + 112) = 0x10000;
  v17 = RIMSearchHidTLCInfo(v34.UsagePage, v34.Usage);
  v19 = v17;
  if ( v17 )
  {
    WPP_RECORDER_SF_DDq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v34.UsagePage,
      v18,
      0xCu,
      (__int64)&WPP_f4406fea895d3223a5acc8e9e607c671_Traceguids,
      v34.UsagePage,
      v34.Usage,
      v17);
  }
  else
  {
    v19 = RIMAllocateAndLinkHidTLCInfo(v34.UsagePage, v34.Usage);
    if ( !v19 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xDu,
        (__int64)&WPP_f4406fea895d3223a5acc8e9e607c671_Traceguids,
        a1);
      v8 = 1;
    }
    WPP_RECORDER_SF_qDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0xEu,
      (__int64)&WPP_f4406fea895d3223a5acc8e9e607c671_Traceguids,
      v19,
      v34.UsagePage,
      v34.Usage);
    if ( v8 )
      goto LABEL_30;
  }
  ++*((_DWORD *)v19 + 5);
  v20 = *(_DWORD *)&v34.Usage;
  *(_QWORD *)(a2 + 472) = v19;
  if ( HIWORD(v20) == 13 && ((unsigned __int16)(v20 - 1) <= 1u || (unsigned __int16)(v20 - 4) <= 1u) )
  {
    v21 = (__int64)a3;
    *(_OWORD *)&v30.Usage = v32;
    *(_QWORD *)&v30.Reserved[11] = Src;
    *(__m128i *)&v30.Reserved[3] = v31;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, a3, v7, &v30) )
    {
LABEL_27:
      v8 = 1;
      goto LABEL_30;
    }
  }
  else
  {
    v30 = v34;
    v21 = (__int64)a3;
    if ( (unsigned int)RIMIsInteractiveCtrl(&v30) )
      *(_DWORD *)(a2 + 200) |= 0x100u;
  }
  if ( *(_DWORD *)(a1 + 848) )
  {
    RIMLockExclusive((__int64)&gObListLock);
    v30 = v34;
    if ( (unsigned int)rimAnySecondaryRimUsagesMatchingUsages(&v30, v22) )
    {
      *(_DWORD *)(a2 + 184) |= 0xC000u;
      *(_DWORD *)(a2 + 200) |= 0x40u;
    }
    qword_1C01A1640 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  v23 = RIMIDEAllocateInjectedInfo(v21);
  *(_QWORD *)(a2 + 384) = v23;
  if ( !v23 )
    goto LABEL_27;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
  *(_DWORD *)(CurrentProcessWin32Process + 812) |= 0x100000u;
  *(_DWORD *)(*(_QWORD *)(a2 + 384) + 84LL) = *(_DWORD *)(CurrentProcessWin32Process + 56);
LABEL_30:
  rimHidP_FreeCollectionDescription(&v35);
  v35.CollectionDesc = 0LL;
  if ( !v8 )
    return v7;
  if ( v7 )
    RIMFreeHidDesc(v7, v26);
  v28 = *(_QWORD *)(a2 + 480);
  if ( v28 )
  {
    RIMFreePointerDevice(a1, v28);
    *(_QWORD *)(a2 + 480) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
