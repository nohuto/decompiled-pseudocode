/*
 * XREFs of HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0028668
 * Callers:
 *     HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1C001B910 (HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0002AB0 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(__int64 a1)
{
  unsigned int v2; // edi
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rcx
  void *v7; // rcx
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]

  ++*(_DWORD *)(a1 + 32);
  v2 = 4061;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x200u);
  if ( *(_DWORD *)(a1 + 32) <= 3u )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFDFFF);
    *(_DWORD *)(a1 + 2432) = 0;
    v7 = *(void **)(a1 + 2488);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x64334855u);
    memset((void *)(a1 + 2464), 0, 0x68uLL);
    v12 = *(_DWORD *)(a1 + 32);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x11u,
      (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
      a1,
      v12);
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      McTemplateK0p(v8, &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RETRY, (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v9 + 2592LL) & 0x2000) != 0 )
    {
      v5 = v9 + 272;
      v6 = "HubHwVerifierDeviceEnumerationRetry";
      goto LABEL_12;
    }
  }
  else
  {
    v2 = 4089;
    v11 = *(_DWORD *)(a1 + 32);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x10u,
      (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
      a1,
      v11);
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      McTemplateK0p(
        v3,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_MAXIMUM_RETRY_COUNT_REACHED,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v4 + 2592LL) & 0x1000) != 0 )
    {
      v5 = v4 + 272;
      v6 = "HubHwVerifierDeviceFailedEnumeration";
LABEL_12:
      HUBMISC_VerifierDbgBreak(v6, v5);
    }
  }
  return v2;
}
