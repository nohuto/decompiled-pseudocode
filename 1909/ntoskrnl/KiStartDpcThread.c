/*
 * XREFs of KiStartDpcThread @ 0x14075C408
 * Callers:
 *     KiInitializeDynamicProcessor @ 0x1405AB0C8 (KiInitializeDynamicProcessor.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall KiStartDpcThread(__int64 a1)
{
  int v2; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+58h] [rbp-20h] BYREF
  __int64 v6; // [rsp+60h] [rbp-18h]

  v6 = 0LL;
  LOWORD(v6) = *(unsigned __int8 *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 200);
  v2 = PsCreateSystemThreadEx(
         (__int64)&Handle,
         0x1FFFFF,
         0LL,
         0LL,
         0LL,
         (__int64)KiExecuteDpc,
         a1,
         &v5,
         (_DWORD *)(a1 + 36));
  if ( v2 < 0 )
  {
    if ( KeDpcWatchdogPeriod )
      KeCancelTimer((PKTIMER)(a1 + 24472));
  }
  else
  {
    ZwClose(Handle);
  }
  return (unsigned int)v2;
}
