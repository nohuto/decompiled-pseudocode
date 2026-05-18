/*
 * XREFs of sub_180044440 @ 0x180044440
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_180044D30 @ 0x180044D30 (sub_180044D30.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180044440(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF

  v11[1] = -2LL;
  v12 = 0LL;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      LODWORD(v12) = 2;
    }
    else if ( a3 == 2 )
    {
      LODWORD(v12) = 4;
    }
  }
  else
  {
    LODWORD(v12) = 3;
  }
  v6 = *sub_18002317C(a2, v11);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 96) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v6 + 192LL))(v6, &v12, a1 + 96);
  v9 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  sub_1800253B0(a2, v8);
  if ( v8 )
    return 0;
  *(_DWORD *)(a1 + 140) = a3;
  sub_180044D30(a1);
  return 1;
}
