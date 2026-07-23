/*
 * XREFs of PopNotifySessionUserPowerRequestCreated @ 0x140589440
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x140589318 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     TtmpInsertPowerRequestToSession @ 0x140881DF8 (TtmpInsertPowerRequestToSession.c)
 *     TtmiLogSessionPowerRequestCreated @ 0x140886550 (TtmiLogSessionPowerRequestCreated.c)
 */

void __fastcall PopNotifySessionUserPowerRequestCreated(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  int v6; // esi
  PVOID v7; // rax
  PVOID v8; // rbx
  __int64 v9; // r8
  _BYTE Buffer[8]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]

  v3 = a1;
  LOBYTE(a1) = 1;
  v6 = 0;
  PopAcquirePowerRequestPushLock(a1);
  v11 = a2;
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
      LOBYTE(v9) = TtmpInsertPowerRequestToSession(v3, a2, v6, a3, 0LL, 0);
      TtmiLogSessionPowerRequestCreated(v3, a2, v9);
    }
  }
}
