/*
 * XREFs of ?NdisPDPIClearReceiveFilter@@YAXPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00FFD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x1C00FE2D0 (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDPIClearReceiveFilter(_QWORD *P)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r8
  KLockHolder v13; // [rsp+20h] [rbp-28h] BYREF

  v1 = P[2];
  v3 = P[5];
  v4 = P[4];
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x32u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)P);
  v13.m_State = Unlocked;
  v13.m_Lock = (KPushLockBase *)qword_1C00A07C8;
  v13.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v13);
  v5 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P )
    goto LABEL_14;
  v6 = (PVOID *)P[1];
  if ( *v6 != P )
    goto LABEL_14;
  *v6 = v5;
  v5[1] = v6;
  v7 = P + 9;
  *P = 0LL;
  v8 = P[9];
  if ( *(_QWORD **)(v8 + 8) != P + 9 )
    goto LABEL_14;
  v9 = (_QWORD *)P[10];
  if ( (_QWORD *)*v9 != v7 )
    goto LABEL_14;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = 0LL;
  P[8] = 0LL;
  if ( !v3 )
    goto LABEL_11;
  v10 = P + 6;
  v11 = P[6];
  if ( *(_QWORD **)(v11 + 8) != P + 6 || (v12 = (_QWORD *)P[7], (_QWORD *)*v12 != v10) )
LABEL_14:
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  *v10 = 0LL;
  P[5] = 0LL;
  --*(_DWORD *)(v3 + 88);
LABEL_11:
  KLockHolder::~KLockHolder(&v13);
  P[4] = 0LL;
  P[2] = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 80) + 72LL))(v4);
  NDIS_PD_FILTER::`scalar deleting destructor'(P);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x33u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)P);
}
