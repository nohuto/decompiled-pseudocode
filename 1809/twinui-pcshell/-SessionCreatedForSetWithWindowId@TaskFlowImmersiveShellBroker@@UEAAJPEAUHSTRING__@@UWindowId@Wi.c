/*
 * XREFs of ?SessionCreatedForSetWithWindowId@TaskFlowImmersiveShellBroker@@UEAAJPEAUHSTRING__@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUserActivity@UserActivities@57@@Z @ 0x1801AB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::SessionCreatedForSetWithWindowId(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v7; // ebx
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 168) != 1 )
  {
    v7 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
    return v7;
  }
  v9 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 224);
  if ( v9 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( (**v9)(v9, &GUID_1a212157_be49_4892_afc4_1a168e546329, &v12) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v12 + 56LL))(v12, a2, a3, a4);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E1,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        return v7;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return 0LL;
}
