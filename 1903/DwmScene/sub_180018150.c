/*
 * XREFs of sub_180018150 @ 0x180018150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_18001629C @ 0x18001629C (sub_18001629C.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800779F0 @ 0x1800779F0 (sub_1800779F0.c)
 *     sub_180089824 @ 0x180089824 (sub_180089824.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180018150(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rax
  signed int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  _QWORD v12[2]; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v13[5]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v14; // [rsp+60h] [rbp-1h] BYREF
  int v15; // [rsp+68h] [rbp+7h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh] BYREF
  volatile signed __int32 *v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh] BYREF
  volatile signed __int32 *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+98h] [rbp+37h]
  __int64 retaddr; // [rsp+C0h] [rbp+5Fh]

  v13[4] = -2LL;
  v15 = a2;
  v16 = 0LL;
  v17 = 0LL;
  sub_1800779F0(*(_QWORD *)(a1 + 56), &v16);
  v20 = 0LL;
  v21 = 0LL;
  sub_1800631C0(v16 + 16, &v20);
  v18 = 0LL;
  v19 = 0LL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001110C(v13, (__int64)&qword_180258808);
  v4 = sub_18008B2A0(v16, v12, v13);
  sub_180089824(v16, &v18, -1LL, v4, v12[0], v12[1], v13[0]);
  v14 = 0LL;
  v5 = sub_18001629C(&v14, &v15, &v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v14;
    v7 = 0LL;
    v14 = 0LL;
    *a3 = v8;
    v6 = 0;
  }
  else
  {
    sub_18000C338(retaddr, 327, (__int64)"SpectreRenderer.cpp", v5);
    v7 = v14;
  }
  if ( v7 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v9 = v19;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  if ( (_BYTE)v21 )
    sub_180063668(v20);
  v10 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return v6;
}
