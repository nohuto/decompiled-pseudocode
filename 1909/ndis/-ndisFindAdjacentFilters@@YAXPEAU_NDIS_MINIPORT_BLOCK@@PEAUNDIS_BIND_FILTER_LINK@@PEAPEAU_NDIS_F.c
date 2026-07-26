/*
 * XREFs of ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0105928
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C0105A50 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 */

void __fastcall ndisFindAdjacentFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct _NDIS_FILTER_BLOCK **a3,
        struct _NDIS_FILTER_BLOCK **a4)
{
  struct _NDIS_FILTER_BLOCK *BindContext; // rdi
  unsigned __int64 m_numElements; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  struct NDIS_BIND_FILTER_LINK *value; // rcx
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r10

  BindContext = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&a1->BindEngine.m_lock, 0LL);
  m_numElements = a1->Bindings.Filters.m_numElements;
  v10 = 0LL;
  if ( (_DWORD)m_numElements )
  {
    LODWORD(v11) = a1->Bindings.Filters.m_numElements;
    while ( 1 )
    {
      if ( v10 >= m_numElements )
LABEL_15:
        __fastfail(5u);
      value = a1->Bindings.Filters._p[v10].__ptr_.__value_;
      if ( value == a2 )
        break;
      if ( Ndis::BindState::GetBindContext(&value->BindState) )
        BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*(Ndis::BindState **)(v13 + 8 * v14));
      m_numElements = a1->Bindings.Filters.m_numElements;
      v10 = v14 + 1;
      LODWORD(v11) = a1->Bindings.Filters.m_numElements;
      if ( v10 >= m_numElements )
        goto LABEL_13;
    }
    v15 = v10 + 1;
    *a4 = BindContext;
    if ( v15 < (unsigned int)m_numElements )
    {
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v11 )
          goto LABEL_15;
        if ( Ndis::BindState::GetBindContext(&a1->Bindings.Filters._p[v15].__ptr_.__value_->BindState) )
          break;
        v11 = a1->Bindings.Filters.m_numElements;
        v15 = v17 + 1;
        if ( v15 >= v11 )
          goto LABEL_13;
      }
      *a3 = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(*(Ndis::BindState **)(v16 + 8 * v17));
    }
  }
LABEL_13:
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&a1->BindEngine.m_lock, 0LL);
}
