/*
 * XREFs of _std::vector_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy__const_&___ptr64__::_1_::catch$63 @ 0x18006AEAE
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006888B (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800CABE8 (-_Destroy@-$vector@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800CB024 (-deallocate@-$allocator@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy__const_____ptr64__::_1_::catch_63(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Destroy(a1, a2[16], a2[4]);
  std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::deallocate(v3, a2[5], a2[17]);
  throw;
}
