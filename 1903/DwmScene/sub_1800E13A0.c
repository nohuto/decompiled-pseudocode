/*
 * XREFs of sub_1800E13A0 @ 0x1800E13A0
 * Callers:
 *     sub_1801092FC @ 0x1801092FC (sub_1801092FC.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     sub_1800E1598 @ 0x1800E1598 (sub_1800E1598.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E13A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 88LL))(v4, &v7);
    v5 = v7;
    *(_DWORD *)(a1 + 36) = v7;
    if ( v5 == 2 )
    {
      *(_OWORD *)(a1 + 40) = v8;
LABEL_6:
      sub_1800E1598(a1);
      goto LABEL_7;
    }
    if ( v5 == 5 )
      goto LABEL_6;
  }
LABEL_7:
  *(_DWORD *)a2 = 4;
  result = a2;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 36);
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 40);
  return result;
}
