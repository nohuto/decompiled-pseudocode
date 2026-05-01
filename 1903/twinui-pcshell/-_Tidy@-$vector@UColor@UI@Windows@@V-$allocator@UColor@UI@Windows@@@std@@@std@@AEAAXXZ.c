/*
 * XREFs of ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18006614C
 * Callers:
 *     ??1?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x180066140 (--1-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800734C8 (-_Tidy@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allo.c)
 *     _dynamic_atexit_destructor_for__BlockError__ @ 0x1800C7100 (_dynamic_atexit_destructor_for__BlockError__.c)
 *     _dynamic_atexit_destructor_for__BlockIdle__ @ 0x1800C7110 (_dynamic_atexit_destructor_for__BlockIdle__.c)
 *     _dynamic_atexit_destructor_for__BlockListening__ @ 0x1800C7120 (_dynamic_atexit_destructor_for__BlockListening__.c)
 *     _dynamic_atexit_destructor_for__BlockResponding__ @ 0x1800C7130 (_dynamic_atexit_destructor_for__BlockResponding__.c)
 *     _dynamic_atexit_destructor_for__BlockThinking__ @ 0x1800C7140 (_dynamic_atexit_destructor_for__BlockThinking__.c)
 *     _std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Range_construct_or_tidy_Windows::UI::Color_const____::_1_::catch$5 @ 0x18040279C (_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--_Range_construct_or_tidy_W.c)
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180402BD4 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 *     _std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____::_1_::catch$16 @ 0x180402F75 (_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--vector_Windows--UI--Color_.c)
 *     _std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____::_1_::catch$9 @ 0x180403009 (_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color___--vector_Window_ea_180403009.c)
 *     ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x180403030 (--0AssistantLightStrip@Lighting@TwinUI@@QEAA@V-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@.c)
 *     ??1?$_Uninitialized_backout_al@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1804031BC (--1-$_Uninitialized_backout_al@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@.c)
 *     ??_EAssistantLightStrip@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x180403220 (--_EAssistantLightStrip@Lighting@TwinUI@@UEAAPEAXI@Z.c)
 *     ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x1804032A8 (-Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV-$vector@V-$vector@UColor@UI@Windows@@V-.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18011B568 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<Windows::UI::Color>::_Tidy(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  const struct std::nothrow_t *v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v6 = v2;
    v4 = (const struct std::nothrow_t *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    v5 = (unsigned __int64)v4;
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = (const struct std::nothrow_t *)v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
