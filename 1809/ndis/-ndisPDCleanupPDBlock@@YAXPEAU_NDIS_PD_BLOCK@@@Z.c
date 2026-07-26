/*
 * XREFs of ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0101214
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C00FE3CC (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 */

void __fastcall ndisPDCleanupPDBlock(struct _NDIS_PD_BLOCK *a1)
{
  _NDIS_PD_CONFIG *PDCurrentConfig; // rcx
  void (__fastcall **PDBMDomain)(NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *); // rdi
  _LIST_ENTRY *p_PDBlockListLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  int v7; // [rsp+20h] [rbp-38h]
  KLockHolder v8; // [rsp+30h] [rbp-28h] BYREF

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
    v8.m_Lock = (KPushLockBase *)qword_1C00A07C8;
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
    if ( (unsigned __int8)byte_1C00A026C >= 4u )
    {
      v7 = *((_DWORD *)PDBMDomain + 6);
      WPP_SF_qqd(0xAu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, a1->Miniport, PDBMDomain, v7);
    }
    NDIS_PD_BM_DOMAIN::Deref(PDBMDomain);
    KLockHolder::~KLockHolder(&v8);
  }
  *(_WORD *)&a1->PDBuffersManagedByDriver = 0;
  a1->PDDmaAddressWidth = 0;
}
