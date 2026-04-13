/*
 * XREFs of ?_Reallocate@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800495A8
 * Callers:
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180045628 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 * Callees:
 *     ??$_Uninit_move@PEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V12@@std@@YAPEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18004B4A0 (--$_Uninit_move@PEAV-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A9FB8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // r15
  char *result; // rax
  void *v10; // [rsp+68h] [rbp+10h]

  v4 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = (char *)operator new(8 * a2), (v10 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy> *,wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>,wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
      *a1,
      a1[1],
      v4);
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v5,
      v10);
    throw;
  }
  v6 = (_QWORD *)a1[1];
  v7 = (_QWORD *)*a1;
  v8 = ((__int64)v6 - *a1) >> 3;
  if ( *a1 )
  {
    if ( v7 != v6 )
    {
      do
      {
        if ( *v7 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
        ++v7;
      }
      while ( v7 != v6 );
      v7 = (_QWORD *)*a1;
    }
    operator delete(v7);
  }
  a1[2] = &v4[8 * a2];
  result = &v4[8 * v8];
  a1[1] = result;
  *a1 = v4;
  return result;
}
