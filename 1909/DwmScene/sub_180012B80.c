/*
 * XREFs of sub_180012B80 @ 0x180012B80
 * Callers:
 *     sub_180013BD0 @ 0x180013BD0 (sub_180013BD0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180012280 @ 0x180012280 (sub_180012280.c)
 *     sub_180012480 @ 0x180012480 (sub_180012480.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180012B80(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 result; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int128 v11; // [rsp+28h] [rbp-29h]
  __int64 v12; // [rsp+38h] [rbp-19h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  volatile signed __int32 *v15; // [rsp+50h] [rbp-1h]
  _QWORD v16[2]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v17; // [rsp+68h] [rbp+17h] BYREF
  volatile signed __int32 *v18; // [rsp+70h] [rbp+1Fh]
  __int64 v19; // [rsp+78h] [rbp+27h]
  __int64 v20; // [rsp+88h] [rbp+37h] BYREF
  __int64 v21; // [rsp+90h] [rbp+3Fh]

  v19 = -2LL;
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  v14 = 0LL;
  v15 = 0LL;
  v2 = *(volatile signed __int32 **)(v1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = *(volatile signed __int32 **)(v1 + 40);
  }
  v3 = *(_QWORD *)(v1 + 32);
  v14 = v3;
  v15 = v2;
  v20 = 0LL;
  v21 = 0LL;
  v11 = 0LL;
  v4 = *(_QWORD *)(v3 + 80);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v11 = *(_OWORD *)(v3 + 72);
        break;
      }
    }
  }
  sub_1800632D0(v11 + 16, &v20);
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  v12 = 0LL;
  v13 = 0LL;
  sub_180012480(v14, &v12);
  v6 = qword_180269E48;
  v7 = *(volatile signed __int32 **)(qword_180269E48 + 104);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(v6 + 104);
  }
  v16[0] = *(_QWORD *)(v6 + 96);
  v16[1] = v7;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v12 + 88), v16);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  result = (__int64)sub_180012280(v14, &v17);
  if ( v18 )
  {
    result = (unsigned int)_InterlockedDecrement(v18 + 2);
    if ( !(_DWORD)result )
    {
      v9 = v18;
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      v10 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( (_BYTE)v21 )
    result = sub_180063778(v20);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedDecrement(v2 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedDecrement(v2 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return result;
}
