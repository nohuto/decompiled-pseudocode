/*
 * XREFs of ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800B2CD8
 * Callers:
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800B56A8 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014A4CC (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014A5EC (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrappe.c)
 *     ??0V2PropertyRequest@Holographic@Internal@Windows@@IEAA@AEAVHolographicDriverHandleWrapper@123@KIPEBX_KAEAU_LUID@@P6AJ1_K@Z@Z @ 0x180151584 (--0V2PropertyRequest@Holographic@Internal@Windows@@IEAA@AEAVHolographicDriverHandleWrapper@123@K.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 */

char **__fastcall std::vector<unsigned char>::vector<unsigned char>(char **a1, size_t a2)
{
  char *v4; // rax
  char *v5; // rax
  char *v6; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
    *a1 = v4;
    a1[1] = v4;
    v5 = *a1;
    a1[2] = &(*a1)[a2];
    try
    {
      v6 = &v5[a2];
      memset_0(v5, 0, a2);
      a1[1] = v6;
    }
    catch ( ... )
    {
      std::vector<unsigned char>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
