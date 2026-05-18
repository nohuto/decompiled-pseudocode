/*
 * XREFs of sub_1800F09C8 @ 0x1800F09C8
 * Callers:
 *     sub_180098BF0 @ 0x180098BF0 (sub_180098BF0.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800F09C8(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdi
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h]
  volatile signed __int32 *v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h]

  v13 = -2LL;
  v2 = sub_1800F0DA4(a1);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  sub_18007B178(v2, &v14);
  v3 = 0;
  v4 = v14;
  if ( (v15 - v14) >> 4 )
  {
    v5 = 0LL;
    do
    {
      v11 = 0LL;
      v12 = 0LL;
      v6 = 2 * v5;
      v7 = *(volatile signed __int32 **)(v4 + 8 * v6 + 8);
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v7 = *(volatile signed __int32 **)(v4 + 8 * v6 + 8);
      }
      v8 = *(_QWORD *)(v4 + 8 * v6);
      v11 = v8;
      v12 = v7;
      v17 = 0LL;
      v18 = 0LL;
      sub_1800631C0(v8 + 24, &v17);
      v10 = 0LL;
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v8 = v11;
      }
      *(_QWORD *)&v10 = v8;
      *((_QWORD *)&v10 + 1) = v7;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 88LL))(a1, &v10);
      if ( (_BYTE)v18 )
        sub_180063668(v17);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
          if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
        }
      }
      ++v3;
      v4 = v14;
      v5 = v3;
    }
    while ( v3 < (unsigned __int64)((v15 - v14) >> 4) );
  }
  return sub_180011388(&v14);
}
