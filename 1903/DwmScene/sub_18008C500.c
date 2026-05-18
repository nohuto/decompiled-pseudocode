/*
 * XREFs of sub_18008C500 @ 0x18008C500
 * Callers:
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_1800141C0 @ 0x1800141C0 (sub_1800141C0.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18008B6F8 @ 0x18008B6F8 (sub_18008B6F8.c)
 *     sub_18008BF48 @ 0x18008BF48 (sub_18008BF48.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
unsigned __int64 __fastcall sub_18008C500(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  volatile signed __int32 *v8; // rsi
  __int64 v9; // r8
  signed __int32 v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rdx
  signed __int32 v14; // eax
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 result; // rax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int128 v25; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h]
  _QWORD *v29; // [rsp+78h] [rbp-90h]
  _QWORD *v30; // [rsp+80h] [rbp-88h]
  _QWORD v31[4]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v32[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v33[4]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v34[4]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v35[4]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v36[4]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v37[8]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v38[8]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+1C8h] [rbp+C0h] BYREF

  v28 = -2LL;
  v29 = a2;
  v30 = a3;
  if ( !*a2 )
  {
    sub_18000E498(v32);
    v23 = sub_18000E498(v31);
    sub_180027770(v37, v23, 437, (__int64)v32, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v37;
  }
  v6 = *a3;
  if ( !*a3 )
  {
    sub_18000E498(v34);
    v24 = sub_18000E498(v33);
    sub_180027770(v38, v24, 442, (__int64)v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v38;
  }
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(v6 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v7 = *(_QWORD *)(v6 + 72);
        v8 = *(volatile signed __int32 **)(v6 + 80);
        break;
      }
    }
  }
  v11 = *a2;
  v12 = 0LL;
  v13 = *(_QWORD *)(*a2 + 80LL);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
      {
        v12 = *(_QWORD *)(v11 + 72);
        v15 = *(volatile signed __int32 **)(v11 + 80);
        if ( v15 )
        {
          if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
        break;
      }
    }
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( v12 != v7 )
  {
    sub_18000E498(v36);
    v22 = sub_18000E498(v35);
    sub_180027770(pExceptionObject, v22, 447, (__int64)v36, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v25 = 0LL;
  v16 = a2[1];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = a2[1];
  }
  *(_QWORD *)&v25 = *a2;
  *((_QWORD *)&v25 + 1) = v16;
  sub_18008BF48(a1, (__int64 *)&v25);
  v26 = 0LL;
  v17 = a3[1];
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = a3[1];
  }
  *(_QWORD *)&v26 = *a3;
  *((_QWORD *)&v26 + 1) = v17;
  v27 = 0LL;
  v18 = a2[1];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a2[1];
  }
  *(_QWORD *)&v27 = *a2;
  *((_QWORD *)&v27 + 1) = v18;
  result = sub_18008B6F8(a1, (__int64 *)&v27, &v26);
  v20 = (volatile signed __int32 *)a2[1];
  if ( v20 )
  {
    result = (unsigned int)_InterlockedDecrement(v20 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      result = (unsigned int)_InterlockedDecrement(v20 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  v21 = (volatile signed __int32 *)a3[1];
  if ( v21 )
  {
    result = (unsigned int)_InterlockedDecrement(v21 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      result = (unsigned int)_InterlockedDecrement(v21 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return result;
}
