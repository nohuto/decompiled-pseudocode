/*
 * XREFs of ?HampHostQuiesceTimerCallback@@YAXPEAX0@Z @ 0x180069F00
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampHostQuiesceTimerCallback(void *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  DWORD v3; // ebx
  _BYTE v4[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v4);
  HampHostAcquireLockExclusiveEx(a2, 0);
  if ( (*((_DWORD *)a2 + 158) & 0xE0000000) == 0xA0000000LL )
  {
    HampHostReleaseLockExclusiveEx(a2);
  }
  else
  {
    HampHostReleaseLockExclusiveEx(a2);
    RtlWakeAllConditionVariable((char *)a2 + 656);
  }
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v3, 0LL);
  }
}
