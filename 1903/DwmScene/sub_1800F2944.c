/*
 * XREFs of sub_1800F2944 @ 0x1800F2944
 * Callers:
 *     sub_18009020C @ 0x18009020C (sub_18009020C.c)
 *     sub_180098BF0 @ 0x180098BF0 (sub_180098BF0.c)
 *     sub_1800A589C @ 0x1800A589C (sub_1800A589C.c)
 *     sub_1800A8BB8 @ 0x1800A8BB8 (sub_1800A8BB8.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800A40C0 @ 0x1800A40C0 (sub_1800A40C0.c)
 *     sub_1800F1988 @ 0x1800F1988 (sub_1800F1988.c)
 *     sub_1800F5BA8 @ 0x1800F5BA8 (sub_1800F5BA8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800F2944(__int128 *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v9; // rax
  __int128 v10; // [rsp+40h] [rbp-81h] BYREF
  __int64 v11; // [rsp+50h] [rbp-71h]
  _QWORD *v12; // [rsp+58h] [rbp-69h]
  __int64 v13; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v14[24]; // [rsp+70h] [rbp-51h] BYREF
  _QWORD v15[4]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v16[4]; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD pExceptionObject[10]; // [rsp+C8h] [rbp+7h] BYREF

  v11 = -2LL;
  v12 = a2;
  if ( *((_DWORD *)a1 + 292) != 1 )
  {
    sub_18000E498(v16);
    v9 = sub_18000E498(v15);
    sub_180027770(pExceptionObject, v9, 641, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = 0LL;
  v4 = *((_QWORD *)a1 + 1);
  if ( !v4 )
  {
LABEL_15:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v14);
    throw (std::bad_weak_ptr *)v14;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_15;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v10 = *a1;
  sub_1800F1988(a2, (__int64)&v10);
  v6 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  if ( *((_BYTE *)a1 + 1241) )
  {
    v7 = sub_1800A40C0(*((_QWORD *)a1 + 144), &v13);
    sub_1800F5BA8(*a2, v7);
  }
  return a2;
}
