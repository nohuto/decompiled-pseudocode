/*
 * XREFs of sub_180035D60 @ 0x180035D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033E08 @ 0x180033E08 (sub_180033E08.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180035D60(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 *v8; // rcx
  char v9; // di
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  int v14; // esi
  int v15; // esi
  __int64 v16; // [rsp+30h] [rbp-50h]
  volatile signed __int32 *v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-38h]
  char v20; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h] BYREF

  v23 = -2LL;
  LODWORD(v24) = 0;
  v7 = 0LL;
  if ( *(_QWORD *)a3 )
  {
    sub_180033E08((__int64 *)(*(_QWORD *)a3 + 112LL), &v18, *(_DWORD *)(a1 + 88));
    v8 = &v18;
    v9 = 1;
    v7 = v18;
  }
  else
  {
    v21 = 0LL;
    v8 = (__int64 *)&v20;
    v9 = 2;
  }
  v16 = v7;
  v17 = (volatile signed __int32 *)v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v21;
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
  }
  if ( (v9 & 1) != 0 )
  {
    v9 &= ~1u;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        v11 = v19;
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  if ( v16 )
  {
    v12 = *(_QWORD *)(v16 + 120);
    v22 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v9 |= 0xCu;
    result = v12;
  }
  else
  {
    result = 0LL;
    v12 = v22;
  }
  v24 = result;
  if ( (v9 & 4) != 0 && v12 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v14 = a2 - 1;
  if ( v14 )
  {
    v15 = v14 - 3;
    if ( v15 )
    {
      if ( v15 == 1 )
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 128LL))(
                   *(_QWORD *)(a1 + 144),
                   a4,
                   1LL,
                   &v24);
    }
    else
    {
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 176LL))(
                 *(_QWORD *)(a1 + 144),
                 a4,
                 1LL,
                 &v24);
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 56LL))(
               *(_QWORD *)(a1 + 144),
               a4,
               1LL,
               &v24);
  }
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return result;
}
