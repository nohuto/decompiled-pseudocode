/*
 * XREFs of sub_1800284F0 @ 0x1800284F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027778 @ 0x180027778 (sub_180027778.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_1800336C8 @ 0x1800336C8 (sub_1800336C8.c)
 *     sub_180033E2C @ 0x180033E2C (sub_180033E2C.c)
 *     sub_1800688F8 @ 0x1800688F8 (sub_1800688F8.c)
 *     sub_180068A30 @ 0x180068A30 (sub_180068A30.c)
 *     sub_18006CDF8 @ 0x18006CDF8 (sub_18006CDF8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800284F0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // [rsp+28h] [rbp-58h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-50h]
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int32 *v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+58h] [rbp-28h] BYREF
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+38h]
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  result = sub_180029C14(a1, &v12);
  if ( v12 )
  {
    v3 = 0LL;
    v18 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v4 = (__int64 *)sub_18006CDF8(v12);
    v5 = (volatile signed __int32 *)v4[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)v4[1];
      v3 = 0LL;
    }
    v14 = *v4;
    v15 = v5;
    if ( v14 )
    {
      v10 = 0LL;
      v11 = 0LL;
      sub_180027778(&v10, &v14);
      v6 = (__int64 *)sub_180033E2C(v10, &v19);
      v3 = *v6;
      *v6 = 0LL;
      v18 = v3;
      v7 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      sub_1800336C8(v10);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
        {
          v8 = v11;
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
        v3 = v18;
      }
    }
    v16 = 0LL;
    sub_180068A30(a1, &v16);
    v17 = 0LL;
    result = sub_1800688F8(a1, &v17);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
    }
    if ( v5 )
    {
      result = (unsigned int)_InterlockedDecrement(v5 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        result = (unsigned int)_InterlockedDecrement(v5 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v3 = v18;
    }
    if ( v3 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      v9 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
