/*
 * XREFs of GiveForegroundActivateRight @ 0x1C0038890
 * Callers:
 *     DestroyProcessInfo @ 0x1C0036D0C (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 */

void __fastcall GiveForegroundActivateRight(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v2, 13, 11, (__int64)&WPP_ab23653d659a3eef467127bc1c313d97_Traceguids, a1);
  }
  v3 = dword_1C0214FE0;
  qword_1C0214F30[dword_1C0214FE0] = a1;
  v4 = v3 + 1;
  if ( v4 == 5 )
    v4 = 0;
  dword_1C0214FE0 = v4;
  ExReleasePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  KeLeaveCriticalRegion();
}
