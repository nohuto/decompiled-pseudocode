/*
 * XREFs of PopUpdateExternalDisplayState @ 0x14078B6D8
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateExternalDisplayState(char a1)
{
  char v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  PopAcquirePolicyLock();
  PopConsoleExternalDisplayConnected = a1;
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v7 = 0;
    v5 = &v3;
    v3 = a1;
    v6 = 1;
    TlgWrite(&pCallbackContext, &unk_140390148, 0LL, 0LL, 3u, &pData);
  }
  PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock();
}
