/*
 * XREFs of sub_180114DE4 @ 0x180114DE4
 * Callers:
 *     sub_180114CDC @ 0x180114CDC (sub_180114CDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180114DE4(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = 0LL;
  a1[3] = 0LL;
  v9 = a3[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  a1[2] = *a3;
  a1[3] = a3[1];
  a1[4] = 0LL;
  a1[5] = 0LL;
  v10 = a4[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  a1[4] = *a4;
  a1[5] = a4[1];
  (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  v11 = (volatile signed __int32 *)a2[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a3[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = (volatile signed __int32 *)a4[1];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return a1;
}
