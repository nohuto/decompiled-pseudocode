/*
 * XREFs of ?IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x1801AA264
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AA9BC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TaskFlowImmersiveShellBroker::IsAFCAndActivityTrackingEnabled(TaskFlowImmersiveShellBroker *this)
{
  bool v1; // di
  bool v2; // si
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int16 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0;
  v8 = 1;
  v3 = *((_QWORD *)this + 37);
  v9 = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)v3 + 48LL))(v3, 2LL, &v8);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        674LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v4);
    v2 = v8 == 0;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *))(*(_QWORD *)v3 + 48LL))(v3, 0LL, &v8);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        680LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v5);
    v1 = v8 == 0;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
  return v2 && v1;
}
