/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_edcf8a708a912462aa4ae38346069636___::Run @ 0x1800F2030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_edcf8a708a912462aa4ae38346069636___::Run(
        __int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, *(_QWORD *)(a1 + 24), &v4) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 136LL))(v2, v4, 0LL);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
