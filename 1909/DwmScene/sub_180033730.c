/*
 * XREFs of sub_180033730 @ 0x180033730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EE78 @ 0x18000EE78 (sub_18000EE78.c)
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_18006A390 @ 0x18006A390 (sub_18006A390.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall sub_180033730(__int64 a1)
{
  __int64 **v3; // rsi
  __int64 v4; // rdx
  signed __int32 v5; // eax
  char v6; // al
  __int64 v7; // rbx
  __int64 *v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // [rsp+28h] [rbp-39h] BYREF
  volatile signed __int32 *v19; // [rsp+30h] [rbp-31h]
  __int128 v20; // [rsp+38h] [rbp-29h] BYREF
  __int64 v21; // [rsp+48h] [rbp-19h]
  _QWORD v22[3]; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp+Fh]
  __int64 v24; // [rsp+78h] [rbp+17h] BYREF
  __int128 v25; // [rsp+88h] [rbp+27h]

  v21 = -2LL;
  if ( !(unsigned __int8)sub_18006A390() )
  {
    sub_18011DA98(&unk_1802590F8, 3LL, "Failed to create CommandList object");
    return 0;
  }
  v3 = (__int64 **)(a1 + 144);
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v25 = 0LL;
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v4 + 8);
        if ( !v5 )
          break;
        if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
        {
          v25 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    v18 = 0LL;
    v19 = 0LL;
    if ( *((_QWORD *)&v25 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL));
    v20 = v25;
    sub_1800171D4(&v18, (__int64 *)&v20);
    v24 = 0LL;
    sub_18002328C(v18, &v24);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 304LL))(v24);
    v7 = v24;
    v8 = *v3;
    if ( (v6 & 1) != 0 )
    {
      if ( v8 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 344LL))(v7, a1 + 144);
    }
    else
    {
      if ( v8 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
      }
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 352LL))(v7, 0LL, a1 + 144);
      sub_1800254C0(v18, v9);
      if ( v9 < 0 )
      {
        sub_18011DA98(&unk_1802590F8, 3LL, "Failed to create DeferredContext with HRESULT error 0x%.8x", v9);
        v10 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( v19 )
        {
          if ( !_InterlockedDecrement(v19 + 2) )
          {
            v11 = v19;
            (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
            if ( !_InterlockedDecrement(v11 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          }
        }
        if ( *((_QWORD *)&v25 + 1) )
        {
          if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL)) )
          {
            v12 = *((_QWORD *)&v25 + 1);
            (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
            if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 12)) )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
          }
        }
        return 0;
      }
      v13 = sub_180064408(a1, v22);
      if ( *(_QWORD *)(v13 + 24) >= 0x10uLL )
        v13 = *(_QWORD *)v13;
      sub_18000EE78(*v3, (const char *)v13);
      if ( v23 >= 0x10 )
      {
        v14 = v22[0];
        if ( v23 + 1 >= 0x1000 )
        {
          v14 = *(_QWORD *)(v22[0] - 8LL);
          if ( (unsigned __int64)(v22[0] - v14 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, v23 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v14);
      }
    }
    v15 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v19 )
    {
      if ( !_InterlockedDecrement(v19 + 2) )
      {
        v16 = v19;
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( !_InterlockedDecrement(v16 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    if ( *((_QWORD *)&v25 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL)) )
      {
        v17 = *((_QWORD *)&v25 + 1);
        (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v17 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
      }
    }
  }
  return *(_QWORD *)(a1 + 152) || (*(int (__fastcall **)(__int64 *, void *))**v3)(*v3, &unk_18014F3C0) >= 0;
}
