/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x18006FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run(
        _QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  void (__fastcall *v4)(__int64, __int64, __int64 *); // rax
  __int64 result; // rax
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int64, __int64 *); // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[2];
  v8 = 0LL;
  v3 = a1[3];
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 56LL);
LABEL_3:
    v4(v2, v3, &v8);
    goto LABEL_4;
  }
  if ( a1[4] )
  {
    v7 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v3 = a1[4];
    v4 = v7;
    goto LABEL_3;
  }
LABEL_4:
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, v8);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
