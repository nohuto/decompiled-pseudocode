/*
 * XREFs of HUBMISC_IsBootDeviceReady @ 0x1C002CDF4
 * Callers:
 *     HUBBOOT_IsBootDeviceReady @ 0x1C00382B0 (HUBBOOT_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C0005AD4 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002CFB0 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 */

char __fastcall HUBMISC_IsBootDeviceReady(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2352LL) & 0x10) != 0 )
  {
    v2 = 1;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
    v4 = 100;
    goto LABEL_19;
  }
  *(_DWORD *)(a1 + 2240) = 0;
  if ( (int)HUBHTX_GetPortStatusForBootDevice(a1, &v7) >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 1636) & 0x400) != 0 && (v7 & 0x10000) == 0 )
    {
      v2 = 0;
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v4 = 102;
      goto LABEL_19;
    }
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v5 + 1424) == 2 )
    {
      v2 = 0;
      v3 = *(_QWORD *)(v5 + 1432);
      v4 = 103;
      goto LABEL_19;
    }
    if ( (v7 & 1) != 0 )
    {
      v3 = *(_QWORD *)(v5 + 1432);
      v2 = 1;
      v4 = 104;
      goto LABEL_19;
    }
    if ( (*(_DWORD *)(a1 + 1456) & 0x800) != 0 && (v7 & 0x1E0) == 0xC0 )
    {
      if ( (*(_DWORD *)(v5 + 1336) & 8) != 0 )
      {
        v3 = *(_QWORD *)(v5 + 1432);
        v2 = 1;
        v4 = 106;
        goto LABEL_19;
      }
      _InterlockedOr((volatile signed __int32 *)(v5 + 1336), 8u);
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v4 = 105;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v5 + 1336), 0xFFFFFFF7);
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v4 = 107;
    }
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
    v4 = 101;
  }
  v2 = 0;
LABEL_19:
  WPP_RECORDER_SF_(v3, 4u, 5u, v4, (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids);
  if ( v2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 1336LL), 0xFFFFFFF7);
    HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(a1);
  }
  else if ( _InterlockedExchange((volatile __int32 *)(a1 + 2240), 1) == 1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x6Cu,
      (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids);
    return 1;
  }
  return v2;
}
