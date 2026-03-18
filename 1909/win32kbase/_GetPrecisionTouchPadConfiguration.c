/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C008C440
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0003B80 (NtUserGetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C0053740 (UpdateTPCurrentActiveState.c)
 *     UpdatePTPConfigFromRegistry @ 0x1C008C550 (UpdatePTPConfigFromRegistry.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  struct RIMDEV *i; // rcx

  if ( a1 && *(_DWORD *)a1 || !(unsigned int)UpdatePTPConfigFromRegistry() )
    return 0LL;
  HIDWORD(gTouchPadParameters) &= 0xFFFFFFAE;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList;
        i && ((BYTE12(gTouchPadParameters) & 0x10) == 0 || (BYTE12(gTouchPadParameters) & 0x40) == 0);
        i = (struct RIMDEV *)*((_QWORD *)i + 7) )
  {
    if ( !*((_BYTE *)i + 48) && *((_WORD *)i + 444) == 1 )
    {
      HIDWORD(gTouchPadParameters) |= 0x10u;
    }
    else if ( (*((_DWORD *)i + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)i + 60) + 24LL) == 7 )
    {
      HIDWORD(gTouchPadParameters) |= 0x40u;
      if ( *(_DWORD *)(*((_QWORD *)i + 60) + 720LL) >= 5u )
        *(&qword_1C0210A18 + 1) |= 0x20u;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  if ( gPTPEnabled )
    HIDWORD(gTouchPadParameters) |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&qword_1C0210A18;
    if ( DWORD2(gTouchPadParameters) == 4
      && (BYTE12(gTouchPadParameters) & 0x10) != 0
      && (BYTE12(gTouchPadParameters) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 8) = 3;
    }
  }
  UpdateTPCurrentActiveState();
  return 1LL;
}
