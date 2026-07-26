/*
 * XREFs of ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00CE898
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00CE7D0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FDF44 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisClearTransientBindFailuresAboveThisFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2)
{
  __int64 m_numElements; // r15
  bool v3; // bp
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r14
  NDIS_BIND_FILTER_LINK *Myptr; // rdi
  int m_unbindReasons; // r8d
  char v10; // al
  __int64 v11; // rbp
  unsigned __int64 j; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v13; // r14
  NDIS_BIND_PROTOCOL_LINK *v14; // rdi
  int v15; // r8d
  bool v16; // cf
  _QWORD v17[20]; // [rsp+20h] [rbp-C8h] BYREF

  m_numElements = a1->Bindings.Filters.m_numElements;
  v3 = 0;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= a1->Bindings.Filters.m_numElements )
LABEL_29:
      __fastfail(5u);
    p = a1->Bindings.Filters._p;
    if ( v3 )
    {
      Myptr = p[i]._Myptr;
      m_unbindReasons = Myptr->BindState.m_unbindReasons;
      Myptr->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
      if ( (m_unbindReasons != 0) == ((m_unbindReasons & 0xFFFBFFE3) != 0) && Myptr->BindState.Miniport )
      {
        v10 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(
            0xEu,
            &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            m_unbindReasons,
            m_unbindReasons & 0xFFFBFFE3);
        Myptr->BindState.Miniport->BindEngine.m_isDirty = 1;
        v10 = 1;
      }
      if ( v10 && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v17);
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
          WPP_SF_Zq(0x16u, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, (const wchar_t *)v17[1], v17[0]);
      }
    }
    else
    {
      v3 = p[i]._Myptr == a2;
    }
  }
  v11 = a1->Bindings.Protocols.m_numElements;
  for ( j = 0LL; j != v11; ++j )
  {
    if ( j >= a1->Bindings.Protocols.m_numElements )
      goto LABEL_29;
    v13 = a1->Bindings.Protocols._p;
    v14 = v13[j]._Myptr;
    v15 = v14->BindState.m_unbindReasons;
    v14->BindState.m_unbindReasons = v15 & 0xFFFBFFE3;
    if ( (v15 != 0) != ((v15 & 0xFFFBFFE3) != 0) || !v14->BindState.Miniport )
    {
      if ( (unsigned __int8)byte_1C00A026B >= 5u )
        WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v15, v15 & 0xFFFBFFE3);
      v16 = (unsigned __int8)byte_1C00A026B < 4u;
      v14->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v16 )
        WPP_SF_Zq(
          0x17u,
          &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids,
          &v13[j]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          v13[j]._Myptr->BindState.Miniport);
    }
  }
}
