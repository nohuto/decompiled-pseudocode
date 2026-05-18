/*
 * XREFs of sub_180040064 @ 0x180040064
 * Callers:
 *     sub_18003F2C0 @ 0x18003F2C0 (sub_18003F2C0.c)
 *     sub_18003F720 @ 0x18003F720 (sub_18003F720.c)
 *     sub_18003FC70 @ 0x18003FC70 (sub_18003FC70.c)
 *     sub_18004046C @ 0x18004046C (sub_18004046C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180040064(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r9
  volatile signed __int32 *v5; // rbx
  __int64 *v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v11);
  v4 = 0LL;
  v5 = 0LL;
  v6 = (__int64 *)v3;
  v7 = *(_QWORD *)(v3 + 8);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v4 = *v6;
        v5 = (volatile signed __int32 *)v6[1];
        break;
      }
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v5 )
    _InterlockedIncrement(v5 + 2);
  *a2 = v4;
  a2[1] = v5;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64 *))v5)(v5, v7, v6);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v9 = v12;
  if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 8LL))(v9, v7, v6);
  return a2;
}
