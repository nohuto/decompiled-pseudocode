/*
 * XREFs of sub_180018380 @ 0x180018380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180016408 @ 0x180016408 (sub_180016408.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800A828C @ 0x1800A828C (sub_1800A828C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018380(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  signed int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  _QWORD v11[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  volatile signed __int32 *v17; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+18h]

  v3 = sub_180078228(*(_QWORD *)(a1 + 56));
  v16 = 0LL;
  v17 = 0LL;
  v12 = 0LL;
  sub_18000F444(v11, v3 + 18496);
  sub_1800A4B48(v3, &v16, v11);
  v14 = 0LL;
  v15 = 0LL;
  sub_1800A828C(v16, &v14);
  v13 = 0LL;
  v4 = sub_180016408(&v13, &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v13;
    v6 = 0LL;
    v13 = 0LL;
    v5 = 0;
    *a2 = v7;
  }
  else
  {
    sub_18000C338(retaddr, 342, (__int64)"SpectreRenderer.cpp", v4);
    v6 = v13;
  }
  if ( v6 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v8 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return v5;
}
