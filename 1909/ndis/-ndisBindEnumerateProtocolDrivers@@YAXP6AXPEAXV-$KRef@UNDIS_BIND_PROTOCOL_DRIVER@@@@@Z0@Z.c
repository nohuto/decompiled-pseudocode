/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C010379C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C010376C (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C010B6B0 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C011DED0 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C0103A14 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116DC8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(
        void (__fastcall *a1)(__int64, volatile signed __int32 **),
        __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // rdi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rsi
  KLockHolder v8; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v9; // [rsp+70h] [rbp+18h] BYREF

  v8.m_State = Unlocked;
  v8.m_Lock = (KPushLockBase *)qword_1C00E67F8;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v8);
  v4 = qword_1C00E67F8;
  for ( i = 0LL; i < *(unsigned int *)(v4 + 44); ++i )
  {
    if ( i >= *(unsigned int *)(v4 + 44) )
LABEL_17:
      __fastfail(5u);
    v6 = *(volatile signed __int32 **)(*(_QWORD *)(v4 + 48) + 8 * i);
    v7 = v6 + 12;
    if ( v6 )
      _InterlockedIncrement(v7);
    ExReleasePushLockEx(v8.m_Lock, 0LL);
    KeLeaveCriticalRegion();
    v9 = v6;
    if ( v6 )
      _InterlockedIncrement(v7);
    a1(a2, &v9);
    KeEnterCriticalRegion();
    v8.m_Region.m_Entered = 1;
    ExAcquirePushLockSharedEx(v8.m_Lock, 0LL);
    v4 = qword_1C00E67F8;
    v8.m_State = Shared;
    if ( *(unsigned int *)(qword_1C00E67F8 + 44) < i )
      goto LABEL_16;
    if ( i >= *(unsigned int *)(qword_1C00E67F8 + 44) )
      goto LABEL_17;
    if ( (*(_QWORD *)(*(_QWORD *)(qword_1C00E67F8 + 48) + 8 * i) != 0LL) != (v6 != 0LL) )
LABEL_16:
      i = 0LL;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v6);
      v4 = qword_1C00E67F8;
    }
  }
  KLockHolder::~KLockHolder(&v8);
}
