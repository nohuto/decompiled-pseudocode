/*
 * XREFs of ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C01210A0
 * Callers:
 *     ?NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C011FFC0 (-NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C01211FC (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisCleanupPDCounter(struct NDIS_PD_COUNTER ***a1)
{
  struct NDIS_PD_COUNTER **v2; // rcx
  struct NDIS_PD_COUNTER **v3; // rax
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00E67A8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  v2 = *a1;
  if ( (*a1)[1] != (struct NDIS_PD_COUNTER *)a1 || (v3 = a1[1], *v3 != (struct NDIS_PD_COUNTER *)a1) )
    __fastfail(3u);
  *v3 = (struct NDIS_PD_COUNTER *)v2;
  v2[1] = (struct NDIS_PD_COUNTER *)v3;
  *a1 = 0LL;
  a1[6] = 0LL;
  a1[4] = 0LL;
  KLockHolder::~KLockHolder(&v4);
}
