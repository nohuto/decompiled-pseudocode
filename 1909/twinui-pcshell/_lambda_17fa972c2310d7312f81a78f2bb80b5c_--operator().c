/*
 * XREFs of _lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator() @ 0x180148754
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::Run @ 0x1801498B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator()(__int64 *a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, __int64, __int64 *); // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 48LL);
  v5 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v4(a2, v6, &v8) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 168LL))(
      a2,
      v8,
      *((unsigned int *)a1 + 2),
      0LL);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
