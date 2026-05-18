/*
 * XREFs of sub_180108D30 @ 0x180108D30
 * Callers:
 *     sub_180109218 @ 0x180109218 (sub_180109218.c)
 *     sub_18010A230 @ 0x18010A230 (sub_18010A230.c)
 * Callees:
 *     sub_18006D138 @ 0x18006D138 (sub_18006D138.c)
 *     sub_1800E0F38 @ 0x1800E0F38 (sub_1800E0F38.c)
 *     sub_1800E1248 @ 0x1800E1248 (sub_1800E1248.c)
 *     sub_1800E1310 @ 0x1800E1310 (sub_1800E1310.c)
 *     sub_18011E188 @ 0x18011E188 (sub_18011E188.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180108D30(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+28h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  *(_QWORD *)&v14 = a1 + 8;
  sub_18011E188(a1 + 8);
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a5;
  sub_18006D138(a5, a1 + 32);
  sub_1800E0F38(a1 + 216);
  if ( sub_1800E1248() )
  {
    v14 = 0LL;
    v9 = a4[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = a4[1];
    }
    *(_QWORD *)&v14 = *a4;
    *((_QWORD *)&v14 + 1) = v9;
    v15 = 0LL;
    v10 = a3[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a3[1];
    }
    *(_QWORD *)&v15 = *a3;
    *((_QWORD *)&v15 + 1) = v10;
    sub_1800E1310((_QWORD *)(a1 + 32), &v15, &v14);
  }
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a4[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
