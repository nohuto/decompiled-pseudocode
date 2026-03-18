/*
 * XREFs of ?SupportsTemporaryMono@CDWMSwapChain@@UEBA_NXZ @ 0x180204500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDWMSwapChain::SupportsTemporaryMono(CDWMSwapChain *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  bool v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 53);
  v4 = 0LL;
  v2 = 0;
  if ( (**v1)(v1, &GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa, &v4) >= 0 )
    v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4) != 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
