/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C011D6F4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00516EC (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0051790 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     RIMFreeHidDesc @ 0x1C0052898 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0052924 (WPP_RECORDER_SF_qDD.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0090848 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0090924 (RIMSearchHidTLCInfo.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00910B0 (RIMIDEFreeInjectedInfo.c)
 *     RIMIsInteractiveCtrl @ 0x1C0094A78 (RIMIsInteractiveCtrl.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     RIMFreePointerDevice @ 0x1C0116B48 (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C011C494 (WPP_RECORDER_SF_DDq.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C011D308 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
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
  USAGE Usage; // dx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // ecx
  USAGE v26; // dx
  unsigned int v27; // eax
  USAGE UsagePage; // cx
  void *v29; // rax
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rdx
  struct _HIDP_CAPS v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+D0h] [rbp-30h]
  struct _HIDP_CAPS v38; // [rsp+E0h] [rbp-20h] BYREF
  struct _HIDP_DEVICE_DESC v39; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3[1];
  v6 = a3[3];
  v7 = 0LL;
  v8 = 0;
  *(_OWORD *)&v39.ReportIDs = a3[2];
  v9 = a3[4];
  *(_OWORD *)&v39.CollectionDesc = v3;
  *(_OWORD *)&v39.Dbg.Args[3] = v9;
  *(_OWORD *)&v39.Dbg.ErrorCode = v6;
  v10 = *(__m128i *)(v3 + 16);
  v36 = *(_OWORD *)v3;
  Src = *(void **)(v3 + 32);
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v38);
  else
    Caps = -1073741637;
  if ( Caps < 0 )
    goto LABEL_31;
  if ( !v38.InputReportByteLength )
    goto LABEL_31;
  epi16 = _mm_extract_epi16(v10, 5);
  if ( !epi16 )
    goto LABEL_31;
  v13 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  v7 = (__int64)v13;
  if ( !v13 )
    goto LABEL_31;
  v14 = *(_OWORD *)&v38.Usage;
  *(_QWORD *)(a2 + 464) = v13;
  *(_OWORD *)(v13 + 40) = v14;
  *(_OWORD *)(v13 + 56) = *(_OWORD *)&v38.Reserved[3];
  *(_OWORD *)(v13 + 72) = *(_OWORD *)&v38.Reserved[11];
  *(_OWORD *)(v13 + 88) = *(_OWORD *)&v38.NumberInputValueCaps;
  v15 = Win32AllocPoolZInit(*((unsigned __int16 *)v13 + 22), 0x6A6E6952u);
  *(_QWORD *)(v7 + 24) = v15;
  if ( !v15 || (v16 = (void *)Win32AllocPool(epi16, 0x6A6E6952u), (*(_QWORD *)(v7 + 16) = v16) == 0LL) )
  {
LABEL_31:
    v8 = 1;
    goto LABEL_32;
  }
  memmove(v16, Src, epi16);
  *(_DWORD *)(v7 + 104) = epi16;
  *(_DWORD *)(v7 + 108) = 0;
  *(_DWORD *)(v7 + 112) = 0x10000;
  v17 = RIMSearchHidTLCInfo(v38.UsagePage, v38.Usage);
  v19 = v17;
  if ( v17 )
  {
    WPP_RECORDER_SF_DDq(
      v38.Usage,
      v38.UsagePage,
      v18,
      0xCu,
      (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids,
      v38.UsagePage,
      v38.Usage,
      v17);
  }
  else
  {
    v19 = RIMAllocateAndLinkHidTLCInfo(v38.UsagePage, v38.Usage);
    if ( !v19 )
    {
      WPP_RECORDER_SF_q(gRimLog, 3u, 0x14u, 0xDu, (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids, a1);
      v8 = 1;
    }
    WPP_RECORDER_SF_qDD(
      v38.UsagePage,
      3u,
      0x15u,
      0xEu,
      (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids,
      v19,
      v38.UsagePage,
      v38.Usage);
    if ( v8 )
      goto LABEL_32;
  }
  ++*((_DWORD *)v19 + 5);
  v20 = *(_DWORD *)&v38.Usage;
  *(_QWORD *)(a2 + 472) = v19;
  if ( HIWORD(v20) == 13 && ((unsigned __int16)(v20 - 1) <= 1u || (unsigned __int16)(v20 - 4) <= 1u) )
  {
    v21 = (__int64)a3;
    *(_OWORD *)&v35.Usage = v36;
    *(_QWORD *)&v35.Reserved[11] = Src;
    *(__m128i *)&v35.Reserved[3] = v10;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, a3, v7, &v35) )
      goto LABEL_29;
    Usage = v38.Usage;
  }
  else
  {
    v35 = v38;
    v21 = (__int64)a3;
    if ( (unsigned int)RIMIsInteractiveCtrl(&v35) )
      *(_DWORD *)(a2 + 200) |= 0x100u;
  }
  if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v38.UsagePage, Usage) )
  {
    v23 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
    *(_DWORD *)(a2 + 200) |= 0x40u;
    *(_DWORD *)(a2 + 184) = v23;
  }
  else if ( *(_DWORD *)(a1 + 864) )
  {
    v24 = IsProcessHidRawInputSupported();
    v25 = 0;
    if ( v24 >= 0 )
      v25 = 0x8000;
    v26 = v38.Usage;
    v27 = v25 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
    UsagePage = v38.UsagePage;
    *(_DWORD *)(a2 + 184) = v27;
    if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(UsagePage, v26) )
      goto LABEL_29;
  }
  v29 = RIMIDEAllocateInjectedInfo(v21);
  *(_QWORD *)(a2 + 384) = v29;
  if ( !v29 )
  {
LABEL_29:
    v8 = 1;
    goto LABEL_32;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
  *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x100000u;
  *(_DWORD *)(*(_QWORD *)(a2 + 384) + 84LL) = *(_DWORD *)(CurrentProcessWin32Process + 56);
LABEL_32:
  if ( gpfnHidP_FreeCollectionDescription )
    gpfnHidP_FreeCollectionDescription(&v39);
  v39.CollectionDesc = 0LL;
  if ( !v8 )
    return v7;
  if ( v7 )
    RIMFreeHidDesc(v7, a2, (__int64)a3);
  v33 = *(_QWORD *)(a2 + 480);
  if ( v33 )
  {
    RIMFreePointerDevice(a1, v33);
    *(_QWORD *)(a2 + 480) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
