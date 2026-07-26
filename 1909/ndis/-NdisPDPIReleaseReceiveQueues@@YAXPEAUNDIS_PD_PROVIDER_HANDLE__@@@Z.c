/*
 * XREFs of ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C0120640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C01211FC (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C01213A4 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 */

void __fastcall NdisPDPIReleaseReceiveQueues(struct NDIS_PD_PROVIDER_HANDLE__ *a1)
{
  struct NDIS_PD_PROVIDER_HANDLE__ *v1; // rbx
  struct _LIST_ENTRY v2; // [rsp+30h] [rbp-40h] BYREF
  struct _LIST_ENTRY v3; // [rsp+40h] [rbp-30h] BYREF
  KLockHolder v4; // [rsp+50h] [rbp-20h] BYREF

  v1 = a1;
  v3.Flink = 0LL;
  v3.Blink = 0LL;
  v2.Flink = 0LL;
  for ( v2.Blink = 0LL; *((_BYTE *)v1 + 88); v1 = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)v1 + 9) )
    ;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      40,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)v1);
  v3.Blink = &v3;
  v3.Flink = &v3;
  v2.Blink = &v2;
  v2.Flink = &v2;
  ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)v1, &v3, &v2);
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v1 + 10) + 32LL))(*((_QWORD *)v1 + 9));
  ndisFreePDRSSObjects(&v3, &v2);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00E67E8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  *((_BYTE *)v1 + 89) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      41,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)v1);
  KLockHolder::~KLockHolder(&v4);
}
