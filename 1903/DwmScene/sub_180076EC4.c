/*
 * XREFs of sub_180076EC4 @ 0x180076EC4
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 * Callees:
 *     sub_18001D8F4 @ 0x18001D8F4 (sub_18001D8F4.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18006ECE4 @ 0x18006ECE4 (sub_18006ECE4.c)
 *     sub_180078048 @ 0x180078048 (sub_180078048.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
unsigned __int64 __fastcall sub_180076EC4(_QWORD *a1, __int64 *a2)
{
  unsigned int v4; // r15d
  const char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 *v10; // rbx
  __int64 *v11; // r14
  unsigned __int64 v12; // r14
  unsigned __int64 result; // rax
  volatile signed __int32 *v14; // rbx
  _QWORD *v15; // rdx
  volatile signed __int32 *v16; // rbx
  __int128 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 *v19; // [rsp+58h] [rbp-B0h]
  _QWORD v20[3]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-30h]
  _QWORD v32[7]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD *v33; // [rsp+120h] [rbp+18h]

  v18 = -2LL;
  v19 = a2;
  v30 = 0LL;
  v31 = 0LL;
  sub_1800631C0((__int64)(a1 + 1), &v30);
  v28 = 0LL;
  v29 = 0LL;
  sub_1800631C0((__int64)(a1 + 138), &v28);
  v26 = 0LL;
  v27 = 0LL;
  sub_1800631C0(*a2 + 24, &v26);
  v4 = sub_18006CDB8(*a2);
  v5 = (const char *)sub_18001D8F4(v20);
  if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
    v5 = *(const char **)v5;
  sub_18011D988(&unk_1802586D8, 3LL, "Engine::DetachDevice() -- detaching device id %u -- %s", v4, v5);
  if ( v21 >= 0x10 )
  {
    v6 = v20[0];
    if ( v21 + 1 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v20[0] - 8LL);
      if ( (unsigned __int64)(v20[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v21 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  v17 = 0LL;
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a2[1];
  }
  *(_QWORD *)&v17 = *a2;
  *((_QWORD *)&v17 + 1) = v7;
  (*(void (__fastcall **)(_QWORD *, __int128 *))(*a1 + 152LL))(a1, &v17);
  v8 = a2[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a2[1];
  }
  v32[0] = &std::_Func_impl_no_alloc<_lambda_eef877ff8e4210708f03cbe7b0d4e7f1_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  v32[1] = *a2;
  v32[2] = v8;
  v9 = v32;
  v33 = v32;
  v10 = (__int64 *)a1[88];
  v11 = (__int64 *)a1[89];
  if ( v10 != v11 )
  {
    do
    {
      v24 = 0LL;
      v25 = 0LL;
      sub_1800631C0(*v10 + 16, &v24);
      sub_18006ECE4(*v10, (__int64)v32);
      if ( (_BYTE)v25 )
        sub_180063668(v24);
      v10 += 2;
    }
    while ( v10 != v11 );
    v9 = v33;
  }
  v12 = 0LL;
  result = (__int64)(a1[112] - a1[111]) >> 4;
  if ( result )
  {
    do
    {
      v22 = 0LL;
      v23 = 0LL;
      sub_180078048(a1, &v22, v12);
      if ( v22 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 24LL))(v22, v4);
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = v23;
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
      ++v12;
      result = (__int64)(a1[112] - a1[111]) >> 4;
    }
    while ( v12 < result );
    v9 = v33;
  }
  if ( v9 )
  {
    v15 = v32;
    LOBYTE(v15) = v9 != v32;
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v15);
    v33 = 0LL;
  }
  if ( (_BYTE)v27 )
    result = sub_180063668(v26);
  if ( (_BYTE)v29 )
    result = sub_180063668(v28);
  if ( (_BYTE)v31 )
    result = sub_180063668(v30);
  v16 = (volatile signed __int32 *)a2[1];
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
