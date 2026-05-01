/*
 * XREFs of ?SessionCreatedForSet@TaskFlowImmersiveShellBroker@@UEAAJPEAUHSTRING__@@PEAUIUserActivity@UserActivities@ApplicationModel@Windows@@@Z @ 0x1802145D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::SessionCreatedForSet(
        TaskFlowImmersiveShellBroker *this,
        HSTRING a2,
        struct Windows::ApplicationModel::UserActivities::IUserActivity *a3)
{
  unsigned int v5; // ebx
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 42) != 1 )
  {
    v5 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
    return v5;
  }
  v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 29);
  if ( v7 )
  {
    v11 = 0LL;
    v8 = **v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( v8(v7, &GUID_1a212157_be49_4892_afc4_1a168e546329, &v11) >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, HSTRING, struct Windows::ApplicationModel::UserActivities::IUserActivity *))(*(_QWORD *)v11 + 48LL))(
             v11,
             a2,
             a3);
      v5 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D5,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        return v5;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return 0LL;
}
