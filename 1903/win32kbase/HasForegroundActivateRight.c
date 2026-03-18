/*
 * XREFs of HasForegroundActivateRight @ 0x1C0039600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall HasForegroundActivateRight(__int64 a1)
{
  int v2; // edx
  _QWORD *v3; // rax
  unsigned int v4; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  v3 = qword_1C0214F30;
  while ( *v3 != a1 )
  {
    if ( (__int64)++v3 >= (__int64)&dword_1C0214F58 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v2, 13, 13, (__int64)&WPP_ab23653d659a3eef467127bc1c313d97_Traceguids, a1);
      }
      v4 = 0;
      goto LABEL_7;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v2, 13, 12, (__int64)&WPP_ab23653d659a3eef467127bc1c313d97_Traceguids, a1);
  }
  v4 = 1;
LABEL_7:
  ExReleasePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
