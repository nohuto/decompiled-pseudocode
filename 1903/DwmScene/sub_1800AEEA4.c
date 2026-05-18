/*
 * XREFs of sub_1800AEEA4 @ 0x1800AEEA4
 * Callers:
 *     sub_1800C3230 @ 0x1800C3230 (sub_1800C3230.c)
 * Callees:
 *     sub_1800AEF3C @ 0x1800AEF3C (sub_1800AEF3C.c)
 *     sub_1800B0D54 @ 0x1800B0D54 (sub_1800B0D54.c)
 *     sub_1800B0F84 @ 0x1800B0F84 (sub_1800B0F84.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AEEA4(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 176LL))(a1, a3);
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, a3);
  result = sub_1800AEF3C(a1, a2, a3);
  if ( a1[32] )
  {
    v7 = 0LL;
    sub_1800B0F84(a1, &v7);
    v7 = 0LL;
    return sub_1800B0D54(a1, &v7);
  }
  return result;
}
