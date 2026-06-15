/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800D9138
 * Callers:
 *     _std::vector_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy__const_&__::_1_::catch$63 @ 0x180072396 (_std--vector_wil--com_ptr_t_CAudioSessionManager_wil--err_returncode_policy__std--allocator_wil-.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 */

unsigned int __fastcall std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  unsigned int result; // eax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      if ( *v4 )
        result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v4);
      ++v4;
    }
    while ( v4 != a3 );
  }
  return result;
}
