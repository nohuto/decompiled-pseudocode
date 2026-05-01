/*
 * XREFs of _lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator() @ 0x1801032AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::Run @ 0x180104470 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator()(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v5 = *a2;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( (*(int (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 48))(a2, v6, &v8) >= 0 )
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*a2 + 168))(a2, v8, *((unsigned int *)a1 + 2), 0LL);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
