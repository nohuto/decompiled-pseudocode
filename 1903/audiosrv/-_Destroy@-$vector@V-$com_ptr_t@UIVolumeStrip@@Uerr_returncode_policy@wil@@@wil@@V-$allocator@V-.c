/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800CA664
 * Callers:
 *     _std::vector_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_____::_Emplace_reallocate_CEndpointCharacteristics___&__::_1_::catch$38 @ 0x18006D076 (_std--vector_wil--com_ptr_t_CEndpointCharacteristics_wil--err_returncode_policy__std--allocator_.c)
 *     _std::vector_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__const_&__::_1_::catch$63 @ 0x180072661 (_std--vector_wil--com_ptr_t_IAudioProcess_wil--err_returncode_policy__std--allocator_wil--com_pt.c)
 *     _std::vector_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy____::_1_::catch$57 @ 0x180072970 (_std--vector_wil--com_ptr_t_IAudioProcess_wil--err_returncode_policy__std--allocato_ea_180072970.c)
 *     _std::vector_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy__const_&__::_1_::catch$63 @ 0x180073668 (_std--vector_wil--com_ptr_t_IVolumeStrip_wil--err_returncode_policy__std--allocator_wil--com_ptr.c)
 *     _std::vector_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::catch$32 @ 0x1800D9D17 (_std--vector_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncode_policy__std--allocator_wil--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v4++);
    while ( v4 != a3 );
  }
  return result;
}
