/*
 * XREFs of PropertyInitializeBooleanCache @ 0x1C0025410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyInitializeBooleanCache(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v4; // [rsp+58h] [rbp+10h] BYREF

  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _DWORD *, _DWORD, int, char *))(a2 + 136))(
           a1,
           a2,
           1LL,
           a3 + 3,
           *a3,
           129,
           &v4);
}
