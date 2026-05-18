/*
 * XREFs of sub_18007B318 @ 0x18007B318
 * Callers:
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_18007B834 @ 0x18007B834 (sub_18007B834.c)
 * Callees:
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     __RTDynamicCast @ 0x180125BA6 (__RTDynamicCast.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007B318(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rdi
  signed __int32 v6; // eax
  bool v7; // zf
  __int128 v8; // [rsp+C8h] [rbp-70h] BYREF
  int v9; // [rsp+D8h] [rbp-60h]
  __int64 v10; // [rsp+DCh] [rbp-5Ch]
  int v11; // [rsp+E4h] [rbp-54h]
  __int128 v12; // [rsp+E8h] [rbp-50h]
  __int128 v13; // [rsp+F8h] [rbp-40h]
  __int128 v14; // [rsp+108h] [rbp-30h]
  __int64 v15; // [rsp+118h] [rbp-20h]
  __int64 v16; // [rsp+120h] [rbp-18h]
  __int64 v17; // [rsp+128h] [rbp-10h]
  __int64 v18; // [rsp+130h] [rbp-8h]
  int v19; // [rsp+138h] [rbp+0h]
  __int64 v20; // [rsp+148h] [rbp+10h] BYREF
  __int64 v21; // [rsp+150h] [rbp+18h]
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+48h] BYREF

  result = (__int64)&retaddr;
  if ( *(_QWORD *)(a1 + 496) )
  {
    result = _RTDynamicCast(
               *a2,
               0LL,
               &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
               &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
               0);
    if ( !result )
    {
      v8 = 0LL;
      v9 = 0;
      v10 = 0LL;
      v11 = 0;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      sub_180063468(*a2 + 24LL, &v20);
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v8);
      if ( (_BYTE)v21 )
        sub_180063780(v20);
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 96LL))(*(_QWORD *)(a1 + 496));
    }
    v5 = (volatile signed __int32 *)a2[1];
  }
  else
  {
    v5 = (volatile signed __int32 *)a2[1];
  }
  if ( v5 )
  {
    v6 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    v7 = v6 == 1;
    result = (unsigned int)(v6 - 1);
    if ( v7 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
