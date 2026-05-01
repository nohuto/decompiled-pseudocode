/*
 * XREFs of ?GetCurrentActivityForViewAsync@TaskFlowImmersiveShellBroker@@UEAAJ_KUShellTabId@Tabs@ComposableShell@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@6@@Z @ 0x1801F2690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Internal::ComTaskPoolHandler__lambda_48084b1ec6f75312154089ee08312ce7___ @ 0x1801EE660 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::GetCurrentActivityForViewAsync(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 *a4)
{
  __int64 *v7; // rbx
  __int64 v8; // r8
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  __int128 v17; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 *v19; // [rsp+80h] [rbp+8h] BYREF

  try
  {
    if ( *(_DWORD *)(a1 + 176) != 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        297LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)0x80004004LL);
    v19 = *(__int64 **)(a1 + 184);
    v7 = v19;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v9 = *a3;
    if ( !v7 )
    {
      v16 = a2;
      v17 = v9;
      *(_QWORD *)&v15 = 0x8000000003LL;
      DWORD2(v15) = 0;
      v10 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Internal::ComTaskPoolHandler__lambda_48084b1ec6f75312154089ee08312ce7___(
              (__int64)&v15,
              a4,
              v8,
              (__int64)&v16);
      if ( v10 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        322LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v10);
    }
    v11 = *v7;
    v15 = v9;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *))(v11 + 72))(v7, a2, &v15, a4);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        326LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v12);
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14B,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v13);
  }
  return result;
}
