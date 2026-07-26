/*
 * XREFs of ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01013F0
 * Callers:
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0101094 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqLd @ 0x1C007CA08 (WPP_SF_qqLd_ea_1C007CA08.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C00FE3CC (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ?ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z @ 0x1C01013C0 (-ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z.c)
 *     ?ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z @ 0x1C0101AF4 (-ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z.c)
 */

__int64 __fastcall ndisPDInitializeMiniportBufferManagement(struct _NDIS_PD_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct NDIS_PD_BM_DOMAIN *v3; // rax
  struct NDIS_PD_BM_DOMAIN *v4; // rbx
  int v5; // edi
  char *PoolWithTag; // rax
  _QWORD *v7; // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  void (*PDBMFreeCommonBuffer)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *); // rax
  int v10; // eax
  unsigned int PDDomainId; // ecx
  struct NDIS_PD_BM_DOMAIN *v12; // rdi
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _LIST_ENTRY *v19; // rdx
  _LIST_ENTRY *p_PDBlockListLink; // rax
  __int128 v22; // [rsp+30h] [rbp-30h] BYREF
  KLockHolder v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+80h] [rbp+20h] BYREF
  int v25; // [rsp+84h] [rbp+24h]

  *(_QWORD *)((char *)&v22 + 1) = 0LL;
  *(_DWORD *)((char *)&v22 + 9) = 0;
  *(_WORD *)((char *)&v22 + 13) = 0;
  HIBYTE(v22) = 0;
  Miniport = a1->Miniport;
  LODWORD(v22) = 1048960;
  if ( a1->PDBuffersManagedByDriver )
    Miniport = (_NDIS_MINIPORT_BLOCK *)Miniport->MiniportAdapterContext;
  *((_QWORD *)&v22 + 1) = Miniport;
  if ( a1->PDDomainId )
  {
    v23.m_Lock = (KPushLockBase *)qword_1C00A07C8;
    v23.m_State = Unlocked;
    v23.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v23);
    v3 = ndisPDFindAndReferenceBMDomainUnderLock(a1->PDDomainId);
    v4 = v3;
    if ( v3 && !ndisPdAreBMsCompatible(a1, v3) )
      goto LABEL_6;
    KLockHolder::~KLockHolder(&v23);
    if ( v4 )
      goto LABEL_29;
  }
  v25 = 0;
  v24 = 524672;
  if ( !a1->PDDomainId )
    v25 |= 1u;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x6D41444Eu);
  v4 = (struct NDIS_PD_BM_DOMAIN *)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 1;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_QWORD *)PoolWithTag + 9) = 0LL;
    *((_QWORD *)PoolWithTag + 10) = 0LL;
    *((_QWORD *)PoolWithTag + 11) = 0LL;
    *((_QWORD *)PoolWithTag + 12) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    v7 = PoolWithTag + 40;
    v7[1] = v7;
    *v7 = v7;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    return (unsigned int)-1073741670;
  if ( a1->PDBuffersManagedByDriver )
  {
    DriverHandle = a1->Miniport->DriverHandle;
    *((_QWORD *)v4 + 7) = DriverHandle->PDBMCreateDomain;
    *((_QWORD *)v4 + 8) = DriverHandle->PDBMAddMemberToDomain;
    *((_QWORD *)v4 + 9) = DriverHandle->PDBMRemoveMemberFromDomain;
    *((_QWORD *)v4 + 10) = DriverHandle->PDBMDeleteDomain;
    *((_QWORD *)v4 + 11) = DriverHandle->PDBMAllocateCommonBuffer;
    PDBMFreeCommonBuffer = (void (*)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *))DriverHandle->PDBMFreeCommonBuffer;
  }
  else
  {
    *((_QWORD *)v4 + 7) = NdisPDBMCreateDomain;
    *((_QWORD *)v4 + 8) = NdisPDBMAddMemberToDomain;
    *((_QWORD *)v4 + 9) = NdisPDBMRemoveMemberFromDomain;
    *((_QWORD *)v4 + 10) = NdisPDBMDeleteDomain;
    *((_QWORD *)v4 + 11) = NdisPDBMAllocateCommonBuffer;
    PDBMFreeCommonBuffer = NdisPDBMFreeCommonBuffer;
  }
  *((_QWORD *)v4 + 12) = PDBMFreeCommonBuffer;
  v10 = (*((__int64 (__fastcall **)(int *, __int64))v4 + 7))(&v24, (__int64)v4 + 32);
  v5 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned __int8)byte_1C00A026C >= 2u )
      WPP_SF_qD(0xDu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1->Miniport, v10);
    goto LABEL_37;
  }
  v23.m_Lock = (KPushLockBase *)qword_1C00A07C8;
  v23.m_State = Unlocked;
  v23.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v23);
  PDDomainId = a1->PDDomainId;
  if ( !PDDomainId )
    goto LABEL_26;
  v12 = ndisPDFindAndReferenceBMDomainUnderLock(PDDomainId);
  if ( !v12 )
  {
    *((_DWORD *)v4 + 6) = a1->PDDomainId;
LABEL_26:
    v13 = (__int64 *)((char *)v4 + 8);
    v14 = qword_1C00A07C8 + 8240;
    v15 = *(__int64 ***)(qword_1C00A07C8 + 8248);
    if ( *v15 != (__int64 *)(qword_1C00A07C8 + 8240) )
      goto LABEL_41;
    *v13 = v14;
    *((_QWORD *)v4 + 2) = v15;
    *v15 = v13;
    *(_QWORD *)(v14 + 8) = v13;
    goto LABEL_28;
  }
  KLockHolder::ReleaseExclusive(&v23);
  NDIS_PD_BM_DOMAIN::Deref(v4);
  v4 = v12;
  if ( ndisPdAreBMsCompatible(a1, v12) )
  {
LABEL_28:
    KLockHolder::~KLockHolder(&v23);
LABEL_29:
    v16 = (*((__int64 (__fastcall **)(_QWORD, __int128 *, NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **))v4 + 8))(
            *((_QWORD *)v4 + 4),
            &v22,
            &a1->PDBMDomainMemberHandle);
    if ( v16 < 0 )
    {
      if ( (unsigned __int8)byte_1C00A026C >= 2u )
        WPP_SF_qqLd(v18, v17, a1->Miniport, v4, *((_DWORD *)v4 + 6), v16, v22);
      v5 = -1073740007;
      goto LABEL_37;
    }
    v23.m_Lock = (KPushLockBase *)qword_1C00A07C8;
    v23.m_State = Unlocked;
    v23.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v23);
    a1->PDBMDomain = v4;
    v19 = (_LIST_ENTRY *)*((_QWORD *)v4 + 6);
    p_PDBlockListLink = &a1->PDBlockListLink;
    if ( v19->Flink == (_LIST_ENTRY *)((char *)v4 + 40) )
    {
      p_PDBlockListLink->Flink = (_LIST_ENTRY *)((char *)v4 + 40);
      a1->PDBlockListLink.Blink = v19;
      v19->Flink = p_PDBlockListLink;
      *((_QWORD *)v4 + 6) = p_PDBlockListLink;
      if ( (unsigned __int8)byte_1C00A026C >= 4u )
        WPP_SF_qqd(0xFu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, a1->Miniport, v4, *((_DWORD *)v4 + 6));
      KLockHolder::~KLockHolder(&v23);
      v5 = 0;
      goto LABEL_37;
    }
LABEL_41:
    __fastfail(3u);
  }
LABEL_6:
  v5 = -1073740007;
  KLockHolder::~KLockHolder(&v23);
LABEL_37:
  if ( v4 && v5 < 0 )
    NDIS_PD_BM_DOMAIN::Deref(v4);
  return (unsigned int)v5;
}
