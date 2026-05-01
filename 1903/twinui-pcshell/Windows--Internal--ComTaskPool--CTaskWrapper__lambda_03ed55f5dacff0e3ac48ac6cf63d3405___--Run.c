/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___::Run @ 0x18035EC40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800447F0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = a1 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  v2 = CMarshaledInterface::_Unmarshal(
         (CMarshaledInterface *)(v1 + 24),
         &GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
         (struct IInspectable **)&v5,
         0);
  if ( v2 < 0
    || (v2 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)v5 + 24LL))(v5, *(_QWORD *)(v1 + 16), v1),
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)(unsigned int)v2);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
}
