/*
 * XREFs of ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01216D4
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010A050 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C011E19C (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 */

void __fastcall ndisPDCleanupPDBlock(struct _NDIS_PD_BLOCK *a1)
{
  _NDIS_PD_CONFIG *PDCurrentConfig; // rcx
  void (__fastcall **PDBMDomain)(NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *); // rdi
  _LIST_ENTRY *p_PDBlockListLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  int v7; // edx
  KLockHolder v8; // [rsp+40h] [rbp-28h] BYREF

  PDCurrentConfig = a1->PDCurrentConfig;
  if ( PDCurrentConfig )
  {
    ExFreePoolWithTag(PDCurrentConfig, 0);
    a1->PDCurrentConfig = 0LL;
    a1->PDCurrentConfigSize = 0;
    a1->PDCurrentConfigBufferSize = 0;
  }
  PDBMDomain = (void (__fastcall **)(NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *))a1->PDBMDomain;
  if ( PDBMDomain )
  {
    v8.m_State = Unlocked;
    v8.m_Lock = (KPushLockBase *)qword_1C00E67A8;
    v8.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v8);
    p_PDBlockListLink = &a1->PDBlockListLink;
    Flink = a1->PDBlockListLink.Flink;
    if ( Flink->Blink != &a1->PDBlockListLink || (Blink = a1->PDBlockListLink.Blink, Blink->Flink != p_PDBlockListLink) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_PDBlockListLink->Flink = 0LL;
    KLockHolder::ReleaseExclusive(&v8);
    a1->PDBMDomain = 0LL;
    PDBMDomain[9](a1->PDBMDomainMemberHandle);
    a1->PDBMDomainMemberHandle = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        29,
        10,
        (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
        (char)a1->Miniport,
        (char)PDBMDomain,
        *((_DWORD *)PDBMDomain + 6));
    }
    NDIS_PD_BM_DOMAIN::Deref(PDBMDomain);
    KLockHolder::~KLockHolder(&v8);
  }
  *(_WORD *)&a1->PDBuffersManagedByDriver = 0;
  a1->PDDmaAddressWidth = 0;
}
