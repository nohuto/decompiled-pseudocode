/*
 * XREFs of ?SessionDisposedForSet@TaskFlowImmersiveShellBroker@@UEAAJPEAUHSTRING__@@@Z @ 0x1801AB3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::SessionDisposedForSet(TaskFlowImmersiveShellBroker *this, HSTRING a2)
{
  unsigned int v3; // ebx
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 42) != 1 )
  {
    v3 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EB,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
    return v3;
  }
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 28);
  if ( v5 )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    if ( (**v5)(v5, &GUID_1a212157_be49_4892_afc4_1a168e546329, &v8) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v8 + 64LL))(v8, a2);
      v3 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F2,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
        return v3;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  return 0LL;
}
