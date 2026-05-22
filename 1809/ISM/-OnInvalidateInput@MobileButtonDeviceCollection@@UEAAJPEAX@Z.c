/*
 * XREFs of ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800659C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18001EB60 (-terminate@details@gsl@@YAXXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?FindDeviceHandle@RIMDeviceCollection@@IEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E9CC (-FindDeviceHandle@RIMDeviceCollection@@IEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180065E7C (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z @ 0x180065F1C (-HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x180066248 (-count@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z @ 0x180066448 (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileButtonDeviceCollection::OnInvalidateInput(MobileButtonDeviceCollection *this, void *a2)
{
  int DeviceHandle; // ebx
  __int64 v4; // rdx
  gsl::details *v5; // rcx
  __m128i v6; // xmm1
  char *v7; // r14
  char *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 i; // r12
  void *v12; // rsi
  _WORD *v13; // rbx
  unsigned __int16 v14; // dx
  DWORD TickCount; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  const struct std::nothrow_t *v19; // rdi
  _BYTE *v20; // rax
  unsigned int v22[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct RIMDevice *v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v24; // [rsp+58h] [rbp-B0h] BYREF
  void *Src; // [rsp+60h] [rbp-A8h] BYREF
  char *v26; // [rsp+68h] [rbp-A0h]
  char *v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  unsigned __int16 *v30; // [rsp+88h] [rbp-80h]
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h]
  void *v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  _BYTE v35[24]; // [rsp+B8h] [rbp-50h] BYREF
  int v36; // [rsp+D0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+730h] [rbp+628h]

  v34 = -2LL;
  v23 = 0LL;
  DeviceHandle = RIMDeviceCollection::FindDeviceHandle(this, a2, &v23, 0LL);
  if ( DeviceHandle < 0 )
  {
    v4 = 354LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)DeviceHandle);
    return (unsigned int)DeviceHandle;
  }
  LODWORD(v23) = **((_DWORD **)v23 + 4);
  v22[0] = (unsigned int)v23;
  memset_0(v35, 0, 0x640uLL);
  v36 = 1600;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 345,
    &v24,
    v22);
  if ( v24 == *((__int64 **)this + 346) )
  {
    DeviceHandle = -2147467259;
    v4 = 367LL;
    goto LABEL_3;
  }
  v6 = *(__m128i *)(v24 + 3);
  Src = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  v9 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  v32 = v9;
  v28 = (unsigned int)v9;
  v33 = (void *)v6.m128i_i64[0];
  v29 = v6.m128i_i64[0];
  if ( !v6.m128i_i64[0] && (_DWORD)v9 )
LABEL_32:
    gsl::details::terminate(v5);
  v10 = 0LL;
  for ( i = 0LL; ; i += 2LL )
  {
    v12 = Src;
    if ( v10 == v9 )
      break;
    if ( v10 == v28 )
      goto LABEL_32;
    v13 = (_WORD *)(i + v29);
    v30 = (unsigned __int16 *)(i + v29);
    v14 = *(_WORD *)(i + v29);
    if ( v14 && (int)MobileButtonDeviceCollection::HIDUsageToButtonMapping(v5, v14, v22) >= 0 )
    {
      LODWORD(v24) = v22[0];
      if ( std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count(
             (char *)this + 2824,
             &v24) )
      {
        if ( v8 == v7 )
        {
          std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>(&Src, v7, v13);
          v8 = v27;
          v7 = v26;
        }
        else
        {
          *(_WORD *)v7 = *v13;
          v7 += 2;
          v26 = v7;
        }
      }
      else
      {
        TickCount = GetTickCount();
        QueryPerformanceCounter(&PerformanceCount);
        DeviceHandle = MobileButtonDeviceCollection::CreateButtonInfo(
                         (MobileButtonDeviceCollection *)*v30,
                         (unsigned int)v23,
                         TickCount,
                         PerformanceCount,
                         *v30,
                         0,
                         (struct InputInfo *)v35);
        if ( DeviceHandle < 0 )
        {
          v16 = 417LL;
          goto LABEL_24;
        }
        DeviceHandle = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                         *((_QWORD *)this + 2),
                         v35);
        if ( DeviceHandle < 0 )
        {
          v16 = 422LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
            (const char *)(unsigned int)DeviceHandle);
          goto LABEL_26;
        }
      }
    }
    if ( i < 0 || v10 == v28 )
      goto LABEL_32;
    ++v10;
    v9 = v32;
  }
  memset_0(v33, 0, 2 * v9);
  memcpy_0(v33, v12, 2 * ((v7 - (_BYTE *)v12) >> 1));
  DeviceHandle = 0;
LABEL_26:
  if ( v12 )
  {
    v19 = (const struct std::nothrow_t *)(2 * ((v8 - (_BYTE *)v12) >> 1));
    v20 = v12;
    if ( (unsigned __int64)v19 >= 0x1000 )
    {
      v19 = (const struct std::nothrow_t *)((char *)v19 + 39);
      v12 = (void *)*((_QWORD *)v12 - 1);
      if ( (unsigned __int64)(v20 - (_BYTE *)v12 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v18, v17);
        __debugbreak();
      }
    }
    operator delete(v12, v19);
  }
  return (unsigned int)DeviceHandle;
}
