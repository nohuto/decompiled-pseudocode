/*
 * XREFs of ??0CApplication@@IEAA@K@Z @ 0x18000DBE8
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18000DAC0 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000D6A4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x180015450 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=12
CApplication *__fastcall CApplication::CApplication(CApplication *this, int a2)
{
  __int64 v4; // rcx

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CApplication::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 10;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 168), 0, 0);
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = a2;
  *((_DWORD *)this + 54) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 224));
  *((_QWORD *)this + 33) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 7);
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 336));
  *((_QWORD *)this + 47) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 384));
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 11);
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 496));
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 4LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_DWORD *)this + 146) = 0;
  *(_QWORD *)((char *)this + 588) = 1LL;
  *(_QWORD *)((char *)this + 596) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 81) = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Buyheadnode(v4);
  *((_BYTE *)this + 664) = 0;
  return this;
}
