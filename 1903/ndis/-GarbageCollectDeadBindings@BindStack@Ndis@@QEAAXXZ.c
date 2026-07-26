/*
 * XREFs of ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x1C00F9838
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00122E0 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00FD7AC (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C012491C (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 */

void __fastcall Ndis::BindStack::GarbageCollectDeadBindings(Ndis::BindStack *this)
{
  __int64 m_numElements; // rdi
  unsigned __int64 v3; // rsi
  NDIS_BIND_LINK_BASE **v4; // rdx

  m_numElements = this->Filters.m_numElements;
  if ( this->Filters.m_numElements )
  {
    v3 = m_numElements - 1;
    do
    {
      if ( v3 >= this->Filters.m_numElements )
        __fastfail(5u);
      if ( !Ndis::BindState::IsAlive(&this->Filters._p[v3].__ptr_.__value_->BindState) )
      {
        wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(v4);
        Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
          &this->Filters,
          (unsigned int)(v3 + 1),
          (unsigned int)v3,
          (unsigned int)(this->Filters.m_numElements - v3 - 1));
        --this->Filters.m_numElements;
      }
      --v3;
      --m_numElements;
    }
    while ( m_numElements );
  }
}
