/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C003C8E0
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0002CA0 (NtUserGetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C003CA00 (UpdateTPCurrentActiveState.c)
 *     ApiSetUpdatePTPConfigFromRegistry @ 0x1C003D888 (ApiSetUpdatePTPConfigFromRegistry.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  struct DEVICEINFO *i; // rcx

  if ( a1 && *(_DWORD *)a1 || !(unsigned int)ApiSetUpdatePTPConfigFromRegistry() )
    return 0LL;
  dword_1C01CBD24 &= 0xFFFFFFAE;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList;
        i && ((dword_1C01CBD24 & 0x10) == 0 || (dword_1C01CBD24 & 0x40) == 0);
        i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( !*((_BYTE *)i + 48) && *((_WORD *)i + 372) == 1 )
    {
      dword_1C01CBD24 |= 0x10u;
    }
    else if ( (*((_DWORD *)i + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)i + 60) + 24LL) == 7 )
    {
      dword_1C01CBD24 |= 0x40u;
      if ( *(_DWORD *)(*((_QWORD *)i + 60) + 712LL) >= 5u )
        HIDWORD(qword_1C01CBD28) |= 0x20u;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (unsigned int)IsPrecisionTouchPadEnabled() )
    dword_1C01CBD24 |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = qword_1C01CBD28;
    if ( dword_1C01CBD20 == 4 && (dword_1C01CBD24 & 0x10) != 0 && (dword_1C01CBD24 & 0x40) == 0 )
      *(_DWORD *)(a1 + 8) = 3;
  }
  UpdateTPCurrentActiveState();
  return 1LL;
}
