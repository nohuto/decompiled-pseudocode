/*
 * XREFs of KiStartDpcThread @ 0x1407376D8
 * Callers:
 *     KiInitializeDynamicProcessor @ 0x14057C1F8 (KiInitializeDynamicProcessor.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
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
