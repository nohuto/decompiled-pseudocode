/*
 * XREFs of PopNotifySessionUserPowerRequestCreated @ 0x1406B3D08
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x1406B3BE0 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408BE244 (TtmpInsertPowerRequestToSession.c)
 *     TtmiLogSessionPowerRequestCreated @ 0x1408C2AC4 (TtmiLogSessionPowerRequestCreated.c)
 */

void __fastcall PopNotifySessionUserPowerRequestCreated(unsigned int a1, unsigned int a2, __int64 a3)
{
  int v6; // esi
  PVOID v7; // rax
  PVOID v8; // rbx
  __int64 v9; // r8
  _QWORD Buffer[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  PopAcquirePowerRequestPushLock(1);
  Buffer[1] = a2;
  Buffer[0] = 0LL;
  v7 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  v8 = v7;
  if ( v7 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)v7 + 88LL);
    *(_QWORD *)(*(_QWORD *)v7 + 96LL) = a3;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( v8 )
  {
    if ( TtmpEnabled == 1 )
    {
      LOBYTE(v9) = TtmpInsertPowerRequestToSession(a1, a2, v6, a3, 0LL, 0);
      TtmiLogSessionPowerRequestCreated(a1, a2, v9);
    }
  }
}
