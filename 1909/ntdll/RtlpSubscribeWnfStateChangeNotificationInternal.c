/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180009D9C
 * Callers:
 *     RtlRegisterForWnfMetaNotification @ 0x1800060E0 (RtlRegisterForWnfMetaNotification.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x180009D50 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlpCtContextInit @ 0x1800FBCAC (RtlpCtContextInit.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000645C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x1800078BC (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateSerializationGroup @ 0x1800097B0 (RtlpCreateSerializationGroup.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180009EE8 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000A060 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x18000A204 (RtlpCreateWnfUserSubscription.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        __int64 *a1,
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
  __int64 v15; // rbx
  __int64 v16; // rax
  int v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF

  v19 = 0LL;
  SerializationGroup = 0LL;
  if ( byte_180165408 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    WnfUserSubscription = RtlRunOnceExecuteOnce(&unk_180166310, RtlpInitializeWnf, 0LL, 0LL);
    if ( WnfUserSubscription >= 0 )
    {
      if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup(a7)) != 0 )
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
            RtlpRemoveUserSubFromNameSub(*(_QWORD *)(v15 + 24), v15, &v18);
          }
          v16 = 0LL;
          v19 = 0LL;
        }
        if ( v16 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v19);
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
