/*
 * XREFs of sub_180012DC0 @ 0x180012DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012784 @ 0x180012784 (sub_180012784.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18009B98C @ 0x18009B98C (sub_18009B98C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180012DC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rcx
  __int64 *v9; // rax
  char v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 result; // rax
  char v16; // [rsp+20h] [rbp-A8h]
  __int128 v17; // [rsp+28h] [rbp-A0h]
  __int64 v18; // [rsp+38h] [rbp-90h] BYREF
  volatile signed __int32 *v19; // [rsp+40h] [rbp-88h]
  __int64 v20; // [rsp+48h] [rbp-80h]
  volatile signed __int32 *v21; // [rsp+50h] [rbp-78h]
  __int128 v22; // [rsp+58h] [rbp-70h] BYREF
  __int128 v23; // [rsp+68h] [rbp-60h] BYREF
  __int64 v24; // [rsp+78h] [rbp-50h] BYREF
  volatile signed __int32 *v25; // [rsp+80h] [rbp-48h]
  __int64 v26; // [rsp+88h] [rbp-40h]
  __int64 v27; // [rsp+98h] [rbp-30h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-28h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  v26 = -2LL;
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    v20 = 0LL;
    v21 = 0LL;
    v4 = *(volatile signed __int32 **)(v3 + 40);
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 2);
      v4 = *(volatile signed __int32 **)(v3 + 40);
    }
    v5 = *(_QWORD *)(v3 + 32);
    v20 = v5;
    v21 = v4;
    v27 = 0LL;
    v28 = 0LL;
    v17 = 0LL;
    v6 = *(_QWORD *)(v5 + 80);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( !v7 )
          break;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
        {
          v17 = *(_OWORD *)(v5 + 72);
          break;
        }
      }
    }
    sub_1800631C0(v17 + 16, &v27);
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
      }
    }
    v24 = 0LL;
    v25 = 0LL;
    sub_180012784(v20, &v24);
    if ( a2 )
    {
      v8 = *(volatile signed __int32 **)(a2 + 24);
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v8 = *(volatile signed __int32 **)(a2 + 24);
      }
      v18 = *(_QWORD *)(a2 + 16);
      v19 = v8;
      v9 = &v18;
      v10 = 1;
    }
    else
    {
      v23 = 0LL;
      v9 = (__int64 *)&v23;
      v10 = 2;
    }
    v22 = 0LL;
    v11 = v9[1];
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    *(_QWORD *)&v22 = *v9;
    *((_QWORD *)&v22 + 1) = v11;
    sub_18009B98C(v24, &v22);
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      v16 = v10;
      if ( *((_QWORD *)&v23 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v12 = *((_QWORD *)&v23 + 1);
          (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
        }
        v10 = v16;
      }
    }
    if ( (v10 & 1) != 0 )
    {
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          v13 = v19;
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
      }
    }
    v14 = v25;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    if ( (_BYTE)v28 )
      sub_180063668(v27);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 87, (__int64)"SpectreMeshComponent.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
