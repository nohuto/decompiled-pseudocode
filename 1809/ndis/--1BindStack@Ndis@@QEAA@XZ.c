/*
 * XREFs of ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00BE074
 * Callers:
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0060110 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDF78 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00EC5AC (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0106F14 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

void __fastcall Ndis::BindStack::~BindStack(Ndis::BindStack *this)
{
  void **p; // rcx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v3; // rcx
  __int64 v4; // rdi
  NDIS_BIND_LINK_BASE *v5; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v6; // rcx
  __int64 v7; // rdi
  NDIS_BIND_LINK_BASE *v8; // rsi
  volatile signed __int32 *Miniport; // rcx
  volatile signed __int32 *v10; // rcx

  p = this->Miniport.m_bindContext._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->Miniport.m_bindContext._p = 0LL;
    this->Miniport.m_bindContext.m_numElements = 0;
    this->Miniport.m_bindContext.m_bufferSize = 0;
  }
  v3 = this->Filters._p;
  if ( v3 )
  {
    LODWORD(v4) = this->Filters.m_numElements;
    while ( (_DWORD)v4 )
    {
      v3 = this->Filters._p;
      v4 = (unsigned int)(v4 - 1);
      v5 = &v3[v4]._Myptr->NDIS_BIND_LINK_BASE;
      if ( v5 )
      {
        Miniport = (volatile signed __int32 *)v5[1].BindState.Miniport;
        if ( Miniport )
        {
          if ( _InterlockedExchangeAdd(Miniport + 16, 0xFFFFFFFF) == 1 )
            KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
        }
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v5);
        ExFreePoolWithTag(v5, 0x4C6C4642u);
        v3 = this->Filters._p;
      }
    }
    ExFreePoolWithTag(v3, 0x7272414Bu);
    this->Filters._p = 0LL;
    this->Filters.m_numElements = 0;
    this->Filters.m_bufferSize = 0;
  }
  v6 = this->Protocols._p;
  if ( v6 )
  {
    LODWORD(v7) = this->Protocols.m_numElements;
    while ( (_DWORD)v7 )
    {
      v6 = this->Protocols._p;
      v7 = (unsigned int)(v7 - 1);
      v8 = &v6[v7]._Myptr->NDIS_BIND_LINK_BASE;
      if ( v8 )
      {
        v10 = (volatile signed __int32 *)v8[1].BindState.Miniport;
        if ( v10 && _InterlockedExchangeAdd(v10 + 12, 0xFFFFFFFF) == 1 )
          KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v10);
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v8);
        ExFreePoolWithTag(v8, 0x4C745042u);
        v6 = this->Protocols._p;
      }
    }
    ExFreePoolWithTag(v6, 0x7272414Bu);
    this->Protocols._p = 0LL;
    this->Protocols.m_numElements = 0;
    this->Protocols.m_bufferSize = 0;
  }
}
