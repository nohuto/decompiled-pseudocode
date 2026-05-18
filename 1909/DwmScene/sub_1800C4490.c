/*
 * XREFs of sub_1800C4490 @ 0x1800C4490
 * Callers:
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800A52C0 @ 0x1800A52C0 (sub_1800A52C0.c)
 *     sub_1800A9A84 @ 0x1800A9A84 (sub_1800A9A84.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C4490(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r14
  char v5; // r15
  int v6; // esi
  __int64 v7; // rdi
  bool v8; // al
  char v9; // cl
  char v10; // bl
  __int64 result; // rax
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  bool v14; // zf
  size_t v15[6]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v16; // [rsp+78h] [rbp+17h] BYREF
  volatile signed __int32 *v17; // [rsp+80h] [rbp+1Fh]

  v15[4] = -2LL;
  v3 = sub_180077A8C(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_180259A98, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_180259AB8, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_180259AD8, 0LL);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_180259E98, 0LL);
  v7 = sub_180078228(a1);
  v8 = v6 != 0;
  if ( (_DWORD)v3 )
    v8 = 1;
  v9 = v8;
  if ( v4 )
    v9 = 1;
  v10 = v9;
  if ( v5 )
    v10 = 1;
  v16 = 0LL;
  v17 = 0LL;
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_18000F444(v15, (__int64)&qword_18025E1E8);
  sub_1800A4B48(v7, &v16, v15);
  sub_1800A9A84(v16, &qword_18025E2E8, v10);
  sub_1800A52C0(v7);
  result = sub_1800A52C0(v7);
  v12 = v17;
  if ( v17 )
  {
    v13 = _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
