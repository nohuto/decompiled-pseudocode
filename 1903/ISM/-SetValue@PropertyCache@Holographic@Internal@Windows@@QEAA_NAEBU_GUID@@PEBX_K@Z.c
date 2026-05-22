/*
 * XREFs of ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x18015D55C
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1801556E8 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180155874 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1801582D0 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2DevicePropertyRequest@234@J@Z @ 0x18015AB70 (-OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEA.c)
 *     ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x18015B2D0 (-PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     memcmp_0 @ 0x180037D63 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_s_1 @ 0x1801226D4 (memcpy_s_1.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180150100 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x1801505FC (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@Prop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::Holographic::PropertyCache::SetValue(
        Windows::Internal::Holographic::PropertyCache *this,
        const struct _GUID *a2,
        const void *a3,
        unsigned __int64 a4)
{
  RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rbx
  char v10; // bl
  const char *v11; // r9
  _QWORD v13[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = (RTL_SRWLOCK *)((char *)this + 32);
  AcquireSRWLockExclusive((PSRWLOCK)this + 4);
  std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>::_Try_emplace<_GUID const &,>(
    (__int64 **)this + 5,
    (__int64)v13,
    a2);
  v9 = v13[0] + 48LL;
  if ( *(_QWORD *)(v13[0] + 56LL) - *(_QWORD *)(v13[0] + 48LL) == a4 && !memcmp_0(*(const void **)v9, a3, a4) )
  {
    v10 = 0;
  }
  else
  {
    std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
      (void **)v9,
      a4);
    if ( memcpy_s_1(*(void *const *)v9, *(_QWORD *)(v9 + 8) - *(_QWORD *)v9, a3, a4) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        129LL,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
        v11);
      __debugbreak();
    }
    (*(void (__fastcall **)(Windows::Internal::Holographic::PropertyCache *, const struct _GUID *, __int64))(*(_QWORD *)this + 16LL))(
      this,
      a2,
      v9);
    v10 = 1;
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v10;
}
