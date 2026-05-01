/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x180152ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800447F0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run(
        __int64 a1)
{
  CMarshaledInterface *v1; // rbx
  void *v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CMarshaledInterface *)(a1 + 16);
  v3 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v3);
  if ( (int)CMarshaledInterface::_Unmarshal(
              v1,
              &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
              (struct IInspectable **)&v3,
              0) >= 0 )
    (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, *((_QWORD *)v1 + 1), 0LL);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v3);
}
