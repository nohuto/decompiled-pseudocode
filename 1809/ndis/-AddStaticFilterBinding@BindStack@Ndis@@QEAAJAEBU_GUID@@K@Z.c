/*
 * XREFs of ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C00BF898
 * Callers:
 *     _lambda_36d6f42f749579043faa114aff526cbd_::operator() @ 0x1C00BF7E0 (_lambda_36d6f42f749579043faa114aff526cbd_--operator().c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0105B18 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0105D14 (ndisBuildMonitoringLwfBindings.c)
 * Callees:
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00BF91C (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00BF960 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00EC5AC (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0106F14 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticFilterBinding(
        Ndis::BindStack *this,
        const struct _GUID *a2,
        unsigned int a3)
{
  NDIS_BIND_LINK_BASE *v4; // rbx
  __int64 m_numElements; // rcx
  NDIS_BIND_FILTER_LINK *v6; // rdx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // rax
  unsigned int v8; // edi
  volatile signed __int32 *Miniport; // rcx
  NDIS_BIND_LINK_BASE *v11; // [rsp+48h] [rbp+20h] BYREF

  Ndis::BindStack::BuildFilterLink(this, &v11, a2, a3);
  v4 = v11;
  if ( v11
    && (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::grow(
                          &this->Filters,
                          this->Filters.m_numElements + 1) )
  {
    m_numElements = this->Filters.m_numElements;
    v6 = (NDIS_BIND_FILTER_LINK *)v4;
    p = this->Filters._p;
    v4 = 0LL;
    v11 = 0LL;
    p[m_numElements]._Myptr = v6;
    ++this->Filters.m_numElements;
    ++this->ChangeEpoch;
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
  if ( v4 )
  {
    Miniport = (volatile signed __int32 *)v4[1].BindState.Miniport;
    if ( Miniport )
    {
      if ( _InterlockedExchangeAdd(Miniport + 16, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
      v4 = v11;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v4);
    ExFreePoolWithTag(v4, 0x4C6C4642u);
  }
  return v8;
}
