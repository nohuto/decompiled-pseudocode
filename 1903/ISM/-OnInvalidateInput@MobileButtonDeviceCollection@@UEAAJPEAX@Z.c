/*
 * XREFs of ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800A1F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A684 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1800A0310 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z @ 0x1800A0830 (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800A1414 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z @ 0x1800A1530 (-HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x1800A25B8 (-count@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileButtonDeviceCollection::OnInvalidateInput(MobileButtonDeviceCollection *this, void *a2)
{
  int v3; // edx
  unsigned int Device; // ebx
  __int64 v5; // rdx
  MobileButtonDeviceCollection *v6; // rcx
  __m128i v7; // xmm1
  unsigned int v8; // eax
  __int64 v9; // rsi
  unsigned __int16 *v10; // rdi
  unsigned __int16 *v11; // r12
  DWORD TickCount; // ebx
  int ButtonInfo; // eax
  __int64 v15; // rdx
  unsigned int v16[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct RIMDevice *v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 Src; // [rsp+58h] [rbp-B0h] BYREF
  void *Src_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  void *v20; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h]
  _BYTE v23[24]; // [rsp+88h] [rbp-80h] BYREF
  int v24; // [rsp+A0h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+8B0h] [rbp+7A8h]

  v22 = -2LL;
  v17 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, 0, a2, &v17, 0LL);
  if ( (Device & 0x80000000) != 0 )
  {
    v5 = 354LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)Device);
    return Device;
  }
  LODWORD(v17) = **((_DWORD **)v17 + 4);
  v16[0] = (unsigned int)v17;
  memset_0(v23, v3, 0x7F0uLL);
  v24 = 2032;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)this + 2760,
    (__int64)&Src,
    (unsigned __int8 *)v16);
  if ( Src == *((_QWORD *)this + 346) )
  {
    Device = -2147467259;
    v5 = 367LL;
    goto LABEL_3;
  }
  v7 = *(__m128i *)(Src + 24);
  *(_OWORD *)Src_8 = 0LL;
  v20 = 0LL;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  v9 = v8;
  if ( !v7.m128i_i64[0] && v8 )
  {
    _o_terminate(v6);
    __debugbreak();
  }
  v10 = (unsigned __int16 *)v7.m128i_i64[0];
  v11 = (unsigned __int16 *)(v7.m128i_i64[0] + 2LL * v8);
  if ( (unsigned __int16 *)v7.m128i_i64[0] == v11 )
  {
LABEL_19:
    memset_0((void *)v7.m128i_i64[0], 0, 2 * v9);
    memcpy_0((void *)v7.m128i_i64[0], Src_8[0], 2 * (((char *)Src_8[1] - (char *)Src_8[0]) >> 1));
    Device = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( !*v10 || (int)MobileButtonDeviceCollection::HIDUsageToButtonMapping(v6, *v10, v16) < 0 )
      goto LABEL_18;
    LODWORD(Src) = v16[0];
    if ( std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count(
           (char *)this + 2824,
           &Src) )
    {
      if ( v20 == Src_8[1] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>(Src_8, (_BYTE *)Src_8[1], v10);
      }
      else
      {
        *(_WORD *)Src_8[1] = *v10;
        Src_8[1] = (char *)Src_8[1] + 2;
      }
      goto LABEL_18;
    }
    TickCount = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                   (MobileButtonDeviceCollection *)*v10,
                   (int)v17,
                   TickCount,
                   PerformanceCount,
                   *v10,
                   0,
                   (struct InputInfo *)v23);
    Device = ButtonInfo;
    if ( ButtonInfo < 0 )
      break;
    ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                   *((_QWORD *)this + 2),
                   v23);
    Device = ButtonInfo;
    if ( ButtonInfo < 0 )
    {
      v15 = 422LL;
      goto LABEL_24;
    }
LABEL_18:
    if ( ++v10 == v11 )
      goto LABEL_19;
  }
  v15 = 417LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
    (const char *)(unsigned int)ButtonInfo);
LABEL_20:
  std::vector<unsigned short>::_Tidy((__int64)Src_8);
  return Device;
}
