/*
 * XREFs of ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C0100390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C0100D90 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C0100F38 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 */

void __fastcall NdisPDPIReleaseReceiveQueues(struct NDIS_PD_PROVIDER_HANDLE__ *a1)
{
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rbx
  struct _LIST_ENTRY v2; // [rsp+20h] [rbp-40h] BYREF
  struct _LIST_ENTRY v3; // [rsp+30h] [rbp-30h] BYREF
  KLockHolder v4; // [rsp+40h] [rbp-20h] BYREF

  for ( i = a1; *((_BYTE *)i + 88); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 9) )
    ;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x28u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)i);
  v3.Blink = &v3;
  v3.Flink = &v3;
  v2.Blink = &v2;
  v2.Flink = &v2;
  ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)i, &v3, &v2);
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)i + 10) + 32LL))(*((_QWORD *)i + 9));
  ndisFreePDRSSObjects(&v3, &v2);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00A07C8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  *((_BYTE *)i + 89) = 0;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x29u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)i);
  KLockHolder::~KLockHolder(&v4);
}
