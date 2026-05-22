/*
 * XREFs of ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z @ 0x180129C20
 * Callers:
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x180127BD4 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800241E8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180025750 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CECC (--_U@YAPEAX_K@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180067128 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F494 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PenHaptics@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18012A4D4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PenHaptics@@@wil@@CAX_NW4ReportingKi.c)
 *     ?SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z @ 0x18012A7A0 (-SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18012AA10 (-reset@-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreePre.c)
 *     ?ExtractPenIdFromStaticDescriptor@PenIdentity@@YA_NPEAU_HIDP_PREPARSED_DATA@@PEAU_GUID@@@Z @ 0x18012AC44 (-ExtractPenIdFromStaticDescriptor@PenIdentity@@YA_NPEAU_HIDP_PREPARSED_DATA@@PEAU_GUID@@@Z.c)
 *     ?IsHighLatencyInterface@PenIdentity@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18012AD5C (-IsHighLatencyInterface@PenIdentity@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=8
PenDevice *__fastcall PenDevice::PenDevice(
        PenDevice *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2,
        void *a3,
        void *a4)
{
  BamoPenDevicePrincipal *v7; // r15
  PHIDP_PREPARSED_DATA *v8; // rbx
  int v9; // eax
  void *v10; // rax
  int v11; // eax
  NTSTATUS Caps; // eax
  struct _GUID *v13; // r8
  int v14; // eax
  void *v15; // rax
  const struct std::nothrow_t *v16; // rdx
  void *v17; // rcx
  int v18; // eax
  const WCHAR *v19; // rax
  unsigned __int64 v21; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v22[4]; // [rsp+28h] [rbp-41h] BYREF
  __int64 v23; // [rsp+38h] [rbp-31h]
  __int64 v24; // [rsp+50h] [rbp-19h]
  PenDevice *v25; // [rsp+58h] [rbp-11h]
  struct _GUID v26; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v24 = -2LL;
  v25 = this;
  *(_QWORD *)this = &BamoPenDevicePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v7 = (PenDevice *)((char *)this + 8);
  *((_QWORD *)this + 1) = &PenDevice::`vftable'{for `IPenDevicePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((PenDevice *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoPenDevicePrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &PenDevice::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v7 = &PenDevice::`vftable'{for `IPenDevicePrincipal'};
  *((_QWORD *)this + 10) = 0LL;
  v8 = (PHIDP_PREPARSED_DATA *)((char *)this + 88);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 20) = a3;
  *((_QWORD *)this + 21) = a4;
  *((_WORD *)this + 88) = 1;
  *((_BYTE *)this + 178) = 0;
  LODWORD(v21) = 0;
  v9 = RIMGetDevicePreparsedData(a3, a4, 0LL, &v21);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevice.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = operator new[]((unsigned int)v21);
  wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::reset(
    (char *)this + 88,
    v10);
  v11 = RIMGetDevicePreparsedData(*((_QWORD *)this + 20), *((_QWORD *)this + 21), *v8, &v21);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevice.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  Caps = HidP_GetCaps(*v8, (PHIDP_CAPS)((char *)this + 96));
  if ( Caps < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevice.cpp",
      (const char *)(unsigned int)Caps);
    __debugbreak();
  }
  wil::Feature<__WilFeatureTraits_Feature_PenHaptics>::ReportUsageToService(retaddr);
  *(_QWORD *)&v26.Data1 = 0LL;
  *(_QWORD *)v26.Data4 = 0LL;
  if ( PenIdentity::ExtractPenIdFromStaticDescriptor(*v8, (struct _HIDP_PREPARSED_DATA *)&v26, v13) )
  {
    *((_WORD *)this + 88) = 256;
    BamoPenDevicePrincipal::SetUniqueId(v7, &v26);
  }
  memset_0(v22, 0, 0x28uLL);
  v22[0] = 4;
  v14 = RIMGetDeviceProperties(*((_QWORD *)this + 20), *((_QWORD *)this + 21), v22);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevice.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = operator new[](saturated_mul(v22[2], 2uLL));
  v17 = (void *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = v15;
  if ( v17 )
    operator delete(v17, v16);
  v23 = *((_QWORD *)this + 10);
  v18 = RIMGetDeviceProperties(*((_QWORD *)this + 20), *((_QWORD *)this + 21), v22);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x3C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevice.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (const WCHAR *)std::wstring::wstring(&v26, *((_WORD **)this + 10));
  *((_BYTE *)this + 178) = PenIdentity::IsHighLatencyInterface(v19);
  std::wstring::_Tidy_deallocate((__int64)&v26);
  return this;
}
