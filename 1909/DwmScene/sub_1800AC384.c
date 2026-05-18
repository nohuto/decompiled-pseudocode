/*
 * XREFs of sub_1800AC384 @ 0x1800AC384
 * Callers:
 *     sub_1800ADD00 @ 0x1800ADD00 (sub_1800ADD00.c)
 *     sub_1801222B0 @ 0x1801222B0 (sub_1801222B0.c)
 * Callees:
 *     sub_180026024 @ 0x180026024 (sub_180026024.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AC384(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  _BYTE *v4; // rdx
  _BYTE v6[56]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE *v7; // [rsp+68h] [rbp-10h]

  v7 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v3 )
    v7 = (_BYTE *)(**v3)(v3, v6);
  sub_180026024((__int64)v6, a1);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v7 + 32LL))(v7, v4);
  }
  return a1;
}
