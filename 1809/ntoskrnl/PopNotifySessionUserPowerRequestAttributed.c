/*
 * XREFs of PopNotifySessionUserPowerRequestAttributed @ 0x1408676B0
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1408811C0 (TtmNotifySessionPowerRequestPresent.c)
 */

void __fastcall PopNotifySessionUserPowerRequestAttributed(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // di
  __int64 i; // rax

  v4 = 0LL;
  v5 = 0;
  PopAcquirePowerRequestPushLock(1);
  for ( i = PopPowerRequestObjectList; (__int64 *)i != &PopPowerRequestObjectList; i = *(_QWORD *)i )
  {
    v4 = i;
    if ( *(_DWORD *)(i + 88) == a1 && *(_QWORD *)(i + 96) == a2 )
    {
      *(_QWORD *)(i + 104) = a3;
      v5 = 1;
      break;
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( v5 )
  {
    if ( TtmpEnabled == 1 )
      TtmNotifySessionPowerRequestPresent(
        *(_DWORD *)(v4 + 16),
        *(_DWORD *)(v4 + 28),
        *(_DWORD *)(v4 + 88),
        *(_QWORD *)(v4 + 96),
        *(_QWORD *)(v4 + 104),
        *(_DWORD *)(v4 + 32),
        1);
  }
}
