/*
 * XREFs of sub_180013600 @ 0x180013600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180012630 @ 0x180012630 (sub_180012630.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18008BC2C @ 0x18008BC2C (sub_18008BC2C.c)
 *     sub_18009CD00 @ 0x18009CD00 (sub_18009CD00.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180013600(_QWORD *a1)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 result; // rax
  signed __int32 v12; // eax
  __int128 v13; // [rsp+20h] [rbp-98h]
  __int128 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+40h] [rbp-78h] BYREF
  volatile signed __int32 *v16; // [rsp+48h] [rbp-70h]
  __int64 v17; // [rsp+50h] [rbp-68h]
  volatile signed __int32 *v18; // [rsp+58h] [rbp-60h]
  _QWORD v19[5]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v20; // [rsp+88h] [rbp-30h] BYREF
  __int64 v21; // [rsp+90h] [rbp-28h]
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v19[4] = -2LL;
  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    v17 = 0LL;
    v18 = 0LL;
    v3 = *(volatile signed __int32 **)(v2 + 40);
    if ( v3 )
    {
      _InterlockedIncrement(v3 + 2);
      v3 = *(volatile signed __int32 **)(v2 + 40);
    }
    v4 = *(_QWORD *)(v2 + 32);
    v17 = v4;
    v18 = v3;
    v20 = 0LL;
    v21 = 0LL;
    v14 = 0LL;
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
          v14 = *(_OWORD *)(v4 + 72);
          break;
        }
      }
    }
    sub_1800631C0(v14 + 16, &v20);
    if ( *((_QWORD *)&v14 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    v15 = 0LL;
    v16 = 0LL;
    sub_180012630(v17, &v15);
    v7 = a1[1];
    if ( v7 )
      sub_18009CD00(v15, v7 + 32);
    else
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v19[2] = 0LL;
    v19[3] = 0LL;
    sub_18001110C(v19, (__int64)&unk_1802587A8);
    v13 = 0LL;
    v8 = *(_QWORD *)(v4 + 80);
    if ( v8 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(v8 + 8);
        if ( !v12 )
          break;
        if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v12 + 1, v12) )
        {
          *(_QWORD *)&v13 = *(_QWORD *)(v4 + 72);
          v9 = *(_QWORD *)(v4 + 80);
          *((_QWORD *)&v13 + 1) = v9;
          goto LABEL_19;
        }
      }
    }
    v9 = 0LL;
LABEL_19:
    sub_18008BC2C(v13, v19);
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
      }
    }
    v10 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    if ( (_BYTE)v21 )
      sub_180063668(v20);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 118, (__int64)"SpectreMeshComponent.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
