/*
 * XREFs of sub_180018A80 @ 0x180018A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_180016870 @ 0x180016870 (sub_180016870.c)
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800765AC @ 0x1800765AC (sub_1800765AC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180018A80(__int64 a1, __int64 *a2)
{
  signed int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+18h]

  v11[1] = -2LL;
  v13 = 0LL;
  v14 = 0LL;
  sub_1800765AC(*(_QWORD *)(a1 + 56), &v13);
  v15 = 0LL;
  v16 = 0LL;
  sub_1800631C0(v13 + 16, &v15);
  v12 = 0LL;
  v4 = sub_180016870(&v12, (__int64)&v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11[0] = v12;
    v7 = *(_BYTE **)(a1 + 120);
    if ( *(_BYTE **)(a1 + 128) == v7 )
    {
      sub_180016A10((const void **)(a1 + 112), v7, v11);
    }
    else
    {
      *(_QWORD *)v7 = v12;
      *(_QWORD *)(a1 + 120) += 8LL;
    }
    v8 = v12;
    v6 = 0LL;
    v12 = 0LL;
    *a2 = v8;
    v5 = 0;
  }
  else
  {
    sub_18000C338(retaddr, 306, (__int64)"SpectreRenderer.cpp", v4);
    v6 = v12;
  }
  if ( v6 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (_BYTE)v16 )
    sub_180063668(v15);
  v9 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return v5;
}
