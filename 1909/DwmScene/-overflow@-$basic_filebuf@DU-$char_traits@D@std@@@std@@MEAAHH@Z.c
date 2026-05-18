/*
 * XREFs of ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EE78 @ 0x18000EE78 (sub_18000EE78.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180027778 @ 0x180027778 (sub_180027778.c)
 *     sub_180032E24 @ 0x180032E24 (sub_180032E24.c)
 *     sub_180033E2C @ 0x180033E2C (sub_180033E2C.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::filebuf::overflow(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // r14d
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  __int64 *v13; // rcx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // [rsp+28h] [rbp-39h] BYREF
  __int128 v16; // [rsp+30h] [rbp-31h] BYREF
  __int64 v17; // [rsp+40h] [rbp-21h] BYREF
  volatile signed __int32 *v18; // [rsp+48h] [rbp-19h]
  __int64 v19; // [rsp+50h] [rbp-11h] BYREF
  volatile signed __int32 *v20; // [rsp+58h] [rbp-9h]
  __int64 v21; // [rsp+60h] [rbp-1h]
  _QWORD v22[3]; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+1Fh]
  __int64 *v24; // [rsp+88h] [rbp+27h] BYREF

  v21 = -2LL;
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  if ( !(_BYTE)result )
  {
    v19 = 0LL;
    v20 = 0LL;
    sub_180027778(&v19, a2);
    v15 = 0LL;
    sub_180033E2C(v19, &v15);
    v24 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v15 + 912LL))(v15, 0LL, &v24);
    v17 = 0LL;
    v18 = 0LL;
    v16 = 0LL;
    v6 = *(_QWORD *)(a1 + 80);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( !v7 )
          break;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
        {
          v16 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_180032E24(&v17, &v16);
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v8 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
    v9 = v17;
    sub_1800254C0(v17, v5);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    {
      v10 = sub_180064408(*a2, v22);
      if ( *(_QWORD *)(v10 + 24) >= 0x10uLL )
        v10 = *(_QWORD *)v10;
      sub_18000EE78(v24, (const char *)v10);
      if ( v23 >= 0x10 )
      {
        v11 = v22[0];
        if ( v23 + 1 >= 0x1000 )
        {
          v11 = *(_QWORD *)(v22[0] - 8LL);
          if ( (unsigned __int64)(v22[0] - v11 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v11, v23 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v11);
      }
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(a1 + 144) + 464LL))(
        *(_QWORD *)(a1 + 144),
        v24,
        0LL);
    }
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v12 = v18;
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
    v13 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v20 )
    {
      result = (unsigned int)_InterlockedDecrement(v20 + 2);
      if ( !(_DWORD)result )
      {
        v14 = v20;
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        result = (unsigned int)_InterlockedDecrement(v14 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
  }
  return result;
}
