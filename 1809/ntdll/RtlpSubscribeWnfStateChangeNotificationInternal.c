/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BE4C
 * Callers:
 *     RtlRegisterForWnfMetaNotification @ 0x18005BDA0 (RtlRegisterForWnfMetaNotification.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x18005BE00 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlpCtContextInit @ 0x1800FE7E4 (RtlpCtContextInit.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18005BF98 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005C110 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x18005C298 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005C388 (RtlpCreateSerializationGroup.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18005C9C8 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18005DDCC (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 SerializationGroup; // rsi
  int WnfUserSubscription; // edi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  _BYTE v18[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF

  v19 = 0LL;
  SerializationGroup = 0LL;
  if ( byte_180165408 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    WnfUserSubscription = RtlRunOnceExecuteOnce(
                            &qword_1801662F8,
                            (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpInitializeWnf,
                            0LL,
                            0LL);
    if ( WnfUserSubscription >= 0 )
    {
      if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
      {
        WnfUserSubscription = RtlpCreateWnfUserSubscription((unsigned int)&v19, a3, a4, a5, SerializationGroup, a8, a9);
        if ( WnfUserSubscription < 0
          || (SerializationGroup = 0LL,
              WnfUserSubscription = RtlpCreateWnfNameSubscription(&v20, a2, a6),
              WnfUserSubscription < 0) )
        {
          v16 = v19;
        }
        else
        {
          v15 = v19;
          *a1 = v19;
          WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v20, v15);
          if ( WnfUserSubscription < 0 )
          {
            *a1 = 0LL;
            RtlpRemoveUserSubFromNameSub(*(_QWORD *)(v15 + 24), v15, v18);
          }
          v16 = 0LL;
          v19 = 0LL;
        }
        if ( v16 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
        if ( SerializationGroup )
          RtlpDecrementWnfSerializationGroup(SerializationGroup);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)WnfUserSubscription;
}
