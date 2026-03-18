/*
 * XREFs of ACPIPepWorker @ 0x1C00B0D70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     ACPIPepGetNextPlatformNotification @ 0x1C00B07E4 (ACPIPepGetNextPlatformNotification.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00B0AF4 (ACPIPepPlatformEntryExitNotify.c)
 */

void __fastcall ACPIPepWorker(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v2; // rdi
  char v5[4]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+34h] [rbp-24h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v2 = (struct _FAST_MUTEX *)(a1 + 184);
  InputBuffer = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    ExAcquireFastMutex(v2);
    if ( !ACPIPepGetNextPlatformNotification((_BYTE *)a1, &v6, v5) )
      break;
    ExReleaseFastMutex(v2);
    ACPIPepPlatformEntryExitNotify(a1, v6, v5[0]);
  }
  if ( *(_BYTE *)(a1 + 247) )
  {
    LODWORD(v8) = 0;
    *(_BYTE *)(a1 + 247) = 0;
    LODWORD(InputBuffer) = 40;
    BYTE4(v8) = 0;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, 0LL, 0);
  }
  ExReleaseFastMutex(v2);
  if ( (a2 & 1) != 0 )
    KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
}
