/*
 * XREFs of sub_180013394 @ 0x180013394
 * Callers:
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 * Callees:
 *     sub_180012630 @ 0x180012630 (sub_180012630.c)
 *     sub_180012784 @ 0x180012784 (sub_180012784.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180085098 @ 0x180085098 (sub_180085098.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180013394(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  signed __int32 v5; // eax
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // rax
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  __int128 v11; // [rsp+28h] [rbp-39h]
  __int64 v12; // [rsp+38h] [rbp-29h]
  __int128 v13; // [rsp+48h] [rbp-19h] BYREF
  __int128 v14; // [rsp+58h] [rbp-9h] BYREF
  __int64 v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h] BYREF
  volatile signed __int32 *v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h] BYREF
  volatile signed __int32 *v19; // [rsp+90h] [rbp+2Fh]
  __int64 v20; // [rsp+98h] [rbp+37h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+3Fh]

  v15 = -2LL;
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  v2 = *(volatile signed __int32 **)(v1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = *(volatile signed __int32 **)(v1 + 40);
  }
  v3 = *(_QWORD *)(v1 + 32);
  v12 = v3;
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
  sub_1800631C0(v11 + 16, &v20);
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  v6 = sub_180012784(v3, &v16);
  v13 = 0LL;
  v13 = *(_OWORD *)v6;
  *v6 = 0LL;
  v6[1] = 0LL;
  sub_180085098(v3, &v13);
  v7 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = sub_180012630(v12, &v18);
  v14 = 0LL;
  v14 = *(_OWORD *)v8;
  *v8 = 0LL;
  v8[1] = 0LL;
  result = sub_180085098(v12, &v14);
  v10 = v19;
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( (_BYTE)v21 )
    result = sub_180063668(v20);
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
