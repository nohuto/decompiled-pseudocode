/*
 * XREFs of ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C0122220
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C011F4B0 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C011F990 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisSetupPDCounter(
        struct NDIS_PD_COUNTER *a1,
        struct NDIS_PD_COUNTER_HANDLE__ *a2,
        enum NDIS_PD_COUNTER_TYPE a3,
        struct NDIS_PD_ASSOCIATION *a4,
        char a5)
{
  KPushLockBase *v5; // rax
  struct NDIS_PD_ASSOCIATION **v8; // rcx
  struct NDIS_PD_ASSOCIATION *v9; // rbx
  struct NDIS_PD_ASSOCIATION **v10; // rcx
  KLockHolder v11; // [rsp+20h] [rbp-28h] BYREF

  v5 = (KPushLockBase *)qword_1C00E67E8;
  v11.m_State = Unlocked;
  *((_BYTE *)a1 + 60) = a5;
  *((_QWORD *)a1 + 6) = a2;
  *((_DWORD *)a1 + 14) = a3;
  *((_QWORD *)a1 + 4) = a4;
  v11.m_Lock = v5;
  v11.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v11);
  v8 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 13);
  if ( *v8 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 96) )
    goto LABEL_6;
  *(_QWORD *)a1 = (char *)a4 + 96;
  *((_QWORD *)a1 + 1) = v8;
  *v8 = a1;
  *((_QWORD *)a4 + 13) = a1;
  if ( a5 )
  {
    v9 = (struct NDIS_PD_COUNTER *)((char *)a1 + 16);
    v10 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 15);
    if ( *v10 == (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 112) )
    {
      *(_QWORD *)v9 = (char *)a4 + 112;
      *((_QWORD *)v9 + 1) = v10;
      *v10 = v9;
      *((_QWORD *)a4 + 15) = v9;
      goto LABEL_5;
    }
LABEL_6:
    __fastfail(3u);
  }
LABEL_5:
  KLockHolder::~KLockHolder(&v11);
}
