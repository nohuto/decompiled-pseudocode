/*
 * XREFs of ??0PenEventsDispatcherPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180030D20
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002257C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180023D08 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@I@1@@Z @ 0x180030C6C (--0-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$allocator.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@@Z @ 0x180032068 (-Initialize@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSessio.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@0@Z @ 0x180033874 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomPro.c)
 *     ?_Init@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180033F7C (-_Init@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007B868 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=8
PenEventsDispatcherPrincipal *__fastcall PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal(
        PenEventsDispatcherPrincipal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  const char *v6; // r9
  _QWORD v8[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  char *pvParam; // [rsp+B0h] [rbp+40h] BYREF

  *(_QWORD *)this = &BamoPenEventsDispatcherPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &PenEventsDispatcherPrincipal::`vftable'{for `IPenEventsDispatcherPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((PenEventsDispatcherPrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoPenEventsDispatcherPrincipalImpl::`vftable';
  *(_QWORD *)this = &PenEventsDispatcherPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &PenEventsDispatcherPrincipal::`vftable'{for `IPenEventsDispatcherPrincipal'};
  pvParam = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>>::_Buynode0(v3);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 14) = 1065353216;
  std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Init(
    (char *)this + 56,
    8LL);
  HIDWORD(pvParam) = ((unsigned __int64)this + 120) >> 32;
  LODWORD(pvParam) = 0;
  std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>(
    (__int64)this + 120,
    &pvParam);
  *((_BYTE *)this + 188) = 1;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  if ( IsEdition(8778LL) )
  {
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 25);
    v4 = CoreUICreate((char *)this + 200);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        38LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdi"
                 "spatcherprincipal.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v8[7] = v8;
    KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>::Initialize(
      (char *)this + 208,
      (char *)this + 200,
      v5,
      v8,
      -2LL,
      off_18016F8B8,
      this);
    LODWORD(pvParam) = 0;
    if ( SystemParametersInfoW(0x1052u, 0, &pvParam, 0) )
      *((_BYTE *)this + 188) = (_DWORD)pvParam != 1;
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x32,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        v6);
  }
  return this;
}
