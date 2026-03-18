/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C0012D10
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0012C00 (NtUserGetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C0012E20 (UpdateTPCurrentActiveState.c)
 *     ApiSetUpdatePTPConfigFromRegistry @ 0x1C0012FA4 (ApiSetUpdatePTPConfigFromRegistry.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  struct DEVICEINFO *i; // rcx

  if ( a1 && *(_DWORD *)a1 || !(unsigned int)ApiSetUpdatePTPConfigFromRegistry() )
    return 0LL;
  dword_1C01A02B4 &= 0xFFFFFFAE;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList;
        i && ((dword_1C01A02B4 & 0x10) == 0 || (dword_1C01A02B4 & 0x40) == 0);
        i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) || *((_WORD *)i + 370) != 1 )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)i + 60) + 24LL) == 7 )
      {
        dword_1C01A02B4 |= 0x40u;
        if ( *(_DWORD *)(*((_QWORD *)i + 60) + 680LL) >= 5u )
          HIDWORD(qword_1C01A02B8) |= 0x20u;
      }
    }
    else
    {
      dword_1C01A02B4 |= 0x10u;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (unsigned int)IsPrecisionTouchPadEnabled() )
    dword_1C01A02B4 |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = qword_1C01A02B8;
    if ( dword_1C01A02B0 == 4 && (dword_1C01A02B4 & 0x10) != 0 && (dword_1C01A02B4 & 0x40) == 0 )
      *(_DWORD *)(a1 + 8) = 3;
  }
  UpdateTPCurrentActiveState();
  return 1LL;
}
