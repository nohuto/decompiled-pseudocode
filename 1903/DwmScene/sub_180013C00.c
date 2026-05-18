/*
 * XREFs of sub_180013C00 @ 0x180013C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_180013A10 @ 0x180013A10 (sub_180013A10.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180089824 @ 0x180089824 (sub_180089824.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180013C00(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 retaddr; // [rsp+98h] [rbp+18h]

  v16 = -2LL;
  v4 = *(_QWORD *)(a1 + 32);
  v18 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) )
      {
        v18 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  v21 = 0LL;
  v22 = 0LL;
  sub_1800631C0(v18 + 16, &v21);
  v19 = 0LL;
  v20 = 0LL;
  v15 = 0LL;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 40);
  }
  sub_180089824(v18, &v19, -1LL, &v15, *(_QWORD *)(a1 + 32), v7, v16);
  v17 = 0LL;
  v8 = sub_180013A10(&v17, &v19);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v17;
    v10 = 0LL;
    v17 = 0LL;
    *a2 = v11;
    v9 = 0;
  }
  else
  {
    sub_18000C338(retaddr, 82, (__int64)"SpectreNode.cpp", v8);
    v10 = v17;
  }
  if ( v10 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( (_BYTE)v22 )
    sub_180063668(v21);
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v13 = *((_QWORD *)&v18 + 1);
      (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
    }
  }
  return v9;
}
