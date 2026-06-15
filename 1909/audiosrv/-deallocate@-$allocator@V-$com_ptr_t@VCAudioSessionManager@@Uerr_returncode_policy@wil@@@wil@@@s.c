/*
 * XREFs of ?deallocate@?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800D9568
 * Callers:
 *     _std::vector_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_CAudioSessionManager_wil::err_returncode_policy__const_&__::_1_::catch$63 @ 0x180072396 (_std--vector_wil--com_ptr_t_CAudioSessionManager_wil--err_returncode_policy__std--allocator_wil-.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
