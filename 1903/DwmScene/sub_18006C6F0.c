/*
 * XREFs of sub_18006C6F0 @ 0x18006C6F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006C6F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r9
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  _BYTE v18[8]; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+60h] [rbp-20h]
  _BYTE v20[8]; // [rsp+68h] [rbp-18h] BYREF
  volatile signed __int32 *v21; // [rsp+70h] [rbp-10h]

  v17 = -2LL;
  v15 = 0LL;
  v16 = 0LL;
  sub_18006CDF4(a1, &v15, a3);
  v5 = *(_QWORD *)(a1 + 272);
  v6 = v15;
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 32LL))(v15, v18);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 88LL))(v5, v7, a2);
  v8 = v19;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    v6 = v15;
  }
  v9 = *(_QWORD *)(a1 + 272);
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 40LL))(v6, v20);
  LOBYTE(v11) = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 104LL))(v9, v10, v11);
  v13 = v21;
  if ( v21 )
  {
    result = (unsigned int)_InterlockedDecrement(v21 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 2);
    if ( !(_DWORD)result )
    {
      v14 = v16;
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
