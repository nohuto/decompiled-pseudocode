/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C0146468
 * Callers:
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     RIMSearchHidTLCInfo @ 0x1C005AFD4 (RIMSearchHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C005B68C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidDesc @ 0x1C005C3E0 (RIMFreeHidDesc.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C005CB68 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C005CC0C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C005CF44 (WPP_RECORDER_SF_qDD.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00A3B7C (RIMIDEFreeInjectedInfo.c)
 *     RIMIsInteractiveCtrl @ 0x1C00A784C (RIMIsInteractiveCtrl.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     RIMFreePointerDevice @ 0x1C013CD28 (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0142918 (WPP_RECORDER_SF_DDq.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C0145FAC (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int64 v5; // r13
  __int128 v6; // xmm0
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r14d
  __m128i v11; // xmm1
  int Caps; // eax
  unsigned __int16 epi16; // bx
  char *v14; // rax
  __int128 v15; // xmm0
  void *v16; // rax
  void *v17; // rax
  __int64 *v18; // rax
  int v19; // r8d
  _WORD *v20; // r15
  int v21; // kr00_4
  __int64 v22; // r15
  USAGE Usage; // dx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // ecx
  USAGE v27; // dx
  unsigned int v28; // eax
  USAGE UsagePage; // cx
  void *v30; // rax
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rdx
  struct _HIDP_CAPS v37; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+D0h] [rbp-30h]
  struct _HIDP_CAPS v40; // [rsp+E0h] [rbp-20h] BYREF
  struct _HIDP_DEVICE_DESC v41; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3[3];
  v5 = a1;
  *(_OWORD *)&v41.CollectionDesc = a3[1];
  v6 = a3[2];
  v7 = 0LL;
  *(_OWORD *)&v41.Dbg.ErrorCode = v3;
  *(_OWORD *)&v41.ReportIDs = v6;
  *(_OWORD *)&v41.Dbg.Args[3] = a3[4];
  memset(&v40, 0, sizeof(v40));
  v10 = 0;
  v11 = *(__m128i *)&v41.CollectionDesc->Reserved[11];
  v38 = *(_OWORD *)&v41.CollectionDesc->UsagePage;
  Src = v41.CollectionDesc->PreparsedData;
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v40);
  else
    Caps = -1073741637;
  if ( Caps < 0 )
    goto LABEL_37;
  if ( !v40.InputReportByteLength )
    goto LABEL_37;
  epi16 = _mm_extract_epi16(v11, 5);
  if ( !epi16 )
    goto LABEL_37;
  v14 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v7 = (__int64)v14;
  if ( !v14 )
    goto LABEL_37;
  v15 = *(_OWORD *)&v40.Usage;
  *(_QWORD *)(a2 + 464) = v14;
  *(_OWORD *)(v14 + 40) = v15;
  *(_OWORD *)(v14 + 56) = *(_OWORD *)&v40.Reserved[3];
  *(_OWORD *)(v14 + 72) = *(_OWORD *)&v40.Reserved[11];
  *(_OWORD *)(v14 + 88) = *(_OWORD *)&v40.NumberInputValueCaps;
  v16 = Win32AllocPoolZInit(*((unsigned __int16 *)v14 + 22), 1785620818LL);
  *(_QWORD *)(v7 + 24) = v16;
  if ( !v16 || (v17 = (void *)Win32AllocPool(epi16, 0x6A6E6952u), (*(_QWORD *)(v7 + 16) = v17) == 0LL) )
  {
LABEL_37:
    v10 = 1;
    goto LABEL_38;
  }
  memmove(v17, Src, epi16);
  *(_DWORD *)(v7 + 104) = epi16;
  *(_DWORD *)(v7 + 108) = 0;
  *(_DWORD *)(v7 + 112) = 0x10000;
  v18 = RIMSearchHidTLCInfo(v40.UsagePage, v40.Usage);
  v20 = v18;
  if ( v18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDq(
        v40.Usage,
        v40.UsagePage,
        v19,
        12,
        (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
        v40.UsagePage,
        v40.Usage,
        (char)v18);
      v5 = a1;
    }
  }
  else
  {
    v20 = RIMAllocateAndLinkHidTLCInfo(v40.UsagePage, v40.Usage);
    if ( !v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v8, 1, 13, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, a1);
      }
      v10 = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qDD(
        (_DWORD)gRimLog,
        v8,
        1,
        14,
        (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
        (char)v20,
        v40.UsagePage,
        v40.Usage);
    }
    v5 = a1;
    if ( v10 )
      goto LABEL_38;
  }
  ++*((_DWORD *)v20 + 5);
  v21 = *(_DWORD *)&v40.Usage;
  *(_QWORD *)(a2 + 472) = v20;
  if ( HIWORD(v21) == 13 && ((unsigned __int16)(v21 - 1) <= 1u || (unsigned __int16)(v21 - 4) <= 1u) )
  {
    v22 = (__int64)a3;
    *(_OWORD *)&v37.Usage = v38;
    *(_QWORD *)&v37.Reserved[11] = Src;
    *(__m128i *)&v37.Reserved[3] = v11;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(v5, a2, a3, v7, &v37) )
      goto LABEL_35;
    Usage = v40.Usage;
  }
  else
  {
    v37 = v40;
    v22 = (__int64)a3;
    if ( (unsigned int)RIMIsInteractiveCtrl(&v37) )
      *(_DWORD *)(a2 + 200) |= 0x100u;
  }
  if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v5, v40.UsagePage, Usage) )
  {
    v24 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
    *(_DWORD *)(a2 + 200) |= 0x40u;
    *(_DWORD *)(a2 + 184) = v24;
  }
  else if ( *(_DWORD *)(v5 + 864) )
  {
    v25 = IsProcessHidRawInputSupported();
    v26 = 0;
    if ( v25 >= 0 )
      v26 = 0x8000;
    v27 = v40.Usage;
    v28 = v26 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
    UsagePage = v40.UsagePage;
    *(_DWORD *)(a2 + 184) = v28;
    if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(UsagePage, v27) )
      goto LABEL_35;
  }
  v30 = RIMIDEAllocateInjectedInfo(v22);
  *(_QWORD *)(a2 + 384) = v30;
  if ( !v30 )
  {
LABEL_35:
    v10 = 1;
    goto LABEL_38;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
  *(_DWORD *)(CurrentProcessWin32Process + 812) |= 0x200000u;
  *(_QWORD *)(*(_QWORD *)(a2 + 384) + 88LL) = CurrentProcessWin32Process;
LABEL_38:
  if ( gpfnHidP_FreeCollectionDescription )
    gpfnHidP_FreeCollectionDescription(&v41);
  v41.CollectionDesc = 0LL;
  if ( !v10 )
    return v7;
  if ( v7 )
    RIMFreeHidDesc(v7, v8, v9);
  v34 = *(_QWORD *)(a2 + 480);
  if ( v34 )
  {
    RIMFreePointerDevice(v5, v34);
    *(_QWORD *)(a2 + 480) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
