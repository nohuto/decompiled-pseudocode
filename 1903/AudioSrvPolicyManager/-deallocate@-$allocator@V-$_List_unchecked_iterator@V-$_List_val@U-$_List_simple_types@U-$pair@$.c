/*
 * XREFs of ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@_K@Z @ 0x1800152F0
 * Callers:
 *     _std::vector_IMixedRealitySpatialAudioFormatPolicyChange___std::allocator_IMixedRealitySpatialAudioFormatPolicyChange_____::_Emplace_reallocate_IMixedRealitySpatialAudioFormatPolicyChange___const_&__::_1_::catch$0 @ 0x180036BEF (_std--vector_IMixedRealitySpatialAudioFormatPolicyChange___std--allocator_IMixedRealitySpatialAu.c)
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState____________std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState_______________::_Reallocate_exactly_::_1_::catch$0 @ 0x180036D54 (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_std-.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  const struct std::nothrow_t *v4; // rdx
  __int64 v5; // rcx

  v4 = (const struct std::nothrow_t *)(8 * a3);
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x180015331LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, v4);
}
