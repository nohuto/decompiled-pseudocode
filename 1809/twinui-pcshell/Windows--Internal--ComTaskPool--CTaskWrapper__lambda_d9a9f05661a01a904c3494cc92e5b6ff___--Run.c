/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x1800696F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run(
        _QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  void (__fastcall *v4)(__int64, __int64, __int64 *); // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[2];
  v7 = 0LL;
  v3 = a1[3];
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 56LL);
LABEL_3:
    v4(v2, v3, &v7);
    goto LABEL_4;
  }
  if ( a1[4] )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    v3 = a1[4];
    v4 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL);
    goto LABEL_3;
  }
LABEL_4:
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, v7);
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
