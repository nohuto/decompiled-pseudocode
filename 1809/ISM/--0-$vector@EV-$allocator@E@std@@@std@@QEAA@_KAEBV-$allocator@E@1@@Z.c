/*
 * XREFs of ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x18007C358
 * Callers:
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x18007BC64 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ??0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@KIAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180111560 (--0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper.c)
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x180111F64 (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18011471C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18011B760 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

char **__fastcall std::vector<unsigned char>::vector<unsigned char>(char **a1, size_t a2)
{
  size_t v4; // rcx
  void *v5; // rax
  __int64 v6; // rdx
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rax
  char *v10; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    if ( a2 < 0x1000 )
    {
      v8 = (char *)operator new(a2);
    }
    else
    {
      v4 = a2 + 39;
      if ( a2 + 39 <= a2 )
        v4 = -1LL;
      v5 = operator new(v4);
      v7 = v5;
      if ( !v5 )
      {
        _o__invalid_parameter_noinfo_noreturn(0LL, v6);
        __debugbreak();
      }
      v8 = (char *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v8 - 1) = v7;
    }
    *a1 = v8;
    a1[1] = v8;
    v9 = *a1;
    a1[2] = &(*a1)[a2];
    try
    {
      v10 = &v9[a2];
      memset_0(v9, 0, a2);
      a1[1] = v10;
    }
    catch ( ... )
    {
      std::vector<unsigned char>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
