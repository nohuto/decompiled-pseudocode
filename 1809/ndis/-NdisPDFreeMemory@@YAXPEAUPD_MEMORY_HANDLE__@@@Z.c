/*
 * XREFs of ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00FF380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00FE314 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDFreeMemory(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x58u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)P);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00A07C8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  *P = 0LL;
  KLockHolder::~KLockHolder(&v4);
  NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(P);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x59u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)P);
}
