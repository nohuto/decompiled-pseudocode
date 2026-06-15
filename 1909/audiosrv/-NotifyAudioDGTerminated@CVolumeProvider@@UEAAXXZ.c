/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180048650
 * Callers:
 *     <none>
 * Callees:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_________lambda_d63cb70dc5e44186031cd9f312dac906___ @ 0x180067D24 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IVolumeSt.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 */

void __fastcall CVolumeProvider::NotifyAudioDGTerminated(CVolumeProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_9e4157c313e3308fc3b4ddb9ef7ef8fa_Traceguids);
  }
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_________lambda_d63cb70dc5e44186031cd9f312dac906___(
    &v3,
    *((_QWORD *)this + 7),
    *((_QWORD *)this + 8));
  if ( v1 )
    LeaveCriticalSection(v1);
}
