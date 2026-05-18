/*
 * XREFs of sub_18003F2C0 @ 0x18003F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180027668 @ 0x180027668 (sub_180027668.c)
 *     sub_1800335B8 @ 0x1800335B8 (sub_1800335B8.c)
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_180040064 @ 0x180040064 (sub_180040064.c)
 *     sub_1800687E8 @ 0x1800687E8 (sub_1800687E8.c)
 *     sub_180068920 @ 0x180068920 (sub_180068920.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003F2C0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  void (__fastcall ***v12)(_QWORD); // rcx
  __int64 v13; // rbx
  _QWORD *v14; // [rsp+28h] [rbp-31h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-29h]
  __int64 v16; // [rsp+38h] [rbp-21h] BYREF
  volatile signed __int32 *v17; // [rsp+40h] [rbp-19h]
  __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  volatile signed __int32 *v19; // [rsp+50h] [rbp-9h]
  __int128 v20; // [rsp+58h] [rbp-1h] BYREF
  __int128 v21; // [rsp+68h] [rbp+Fh] BYREF
  _OWORD v22[3]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v23; // [rsp+C0h] [rbp+67h]
  __int64 v24; // [rsp+C8h] [rbp+6Fh] BYREF

  v2 = a1[65];
  if ( v2 )
  {
    a1[65] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[66];
  if ( v3 )
  {
    a1[66] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v16 = 0LL;
  v17 = 0LL;
  result = sub_180040064(a1, &v16);
  if ( v16 )
  {
    v5 = 0LL;
    v23 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v6 = (__int64 *)sub_18006CCE8(v16);
    v7 = (volatile signed __int32 *)v6[1];
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 2);
      v7 = (volatile signed __int32 *)v6[1];
      v5 = 0LL;
    }
    v18 = *v6;
    v19 = v7;
    if ( v18 )
    {
      v14 = 0LL;
      v15 = 0LL;
      sub_180027668((__int64 *)&v14, &v18);
      v8 = sub_180033D1C(v14, &v24);
      v5 = *v8;
      *v8 = 0LL;
      v23 = v5;
      v9 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      sub_1800335B8((__int64)v14);
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          v10 = v15;
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
        v5 = v23;
      }
    }
    v21 = 0LL;
    sub_180068920(a1, &v21);
    v22[0] = 0LL;
    result = sub_1800687E8(a1, v22);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 888LL))(v5);
    }
    if ( v7 )
    {
      result = (unsigned int)_InterlockedDecrement(v7 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      v5 = v23;
    }
    if ( v5 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      v11 = v17;
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  v12 = (void (__fastcall ***)(_QWORD))a1[67];
  if ( v12 )
  {
    (**v12)(v12);
    v20 = 0LL;
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(a1 + 67, (__int64 *)&v20);
    if ( *((_QWORD *)&v20 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v13 = *((_QWORD *)&v20 + 1);
        (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
      }
    }
  }
  return result;
}
