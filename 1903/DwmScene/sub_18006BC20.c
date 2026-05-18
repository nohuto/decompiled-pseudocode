/*
 * XREFs of sub_18006BC20 @ 0x18006BC20
 * Callers:
 *     sub_180020104 @ 0x180020104 (sub_180020104.c)
 *     sub_1800B5D5C @ 0x1800B5D5C (sub_1800B5D5C.c)
 * Callees:
 *     sub_18006303C @ 0x18006303C (sub_18006303C.c)
 *     sub_1800633E4 @ 0x1800633E4 (sub_1800633E4.c)
 *     sub_18006BBB8 @ 0x18006BBB8 (sub_18006BBB8.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_1800E1698 @ 0x1800E1698 (sub_1800E1698.c)
 *     sub_1800E21E8 @ 0x1800E21E8 (sub_1800E21E8.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_18006BC20(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // eax
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
    v6 = sub_1800633E4(a2 + 8);
  else
    v6 = 1;
  sub_18006303C(a1 + 24, v6);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 7LL;
  *(_WORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 7LL;
  *(_WORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 7LL;
  *(_WORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 7LL;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 240) = 1;
  *(_DWORD *)(a1 + 244) = _InterlockedExchangeAdd(&dword_1802586D4, 1u);
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 1;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 40960;
  *(_QWORD *)(a1 + 320) = 45312LL;
  *(_QWORD *)(a1 + 328) = 1LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = 3;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 496) = sub_18006DE14(a1 + 496);
  Mtx_init_in_situ((_Mtx_t)(a1 + 512), 2);
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 592) = *a3;
  *(_QWORD *)(a1 + 600) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_1800E21E8(a1 + 608);
  sub_1800E21E8(a1 + 832);
  sub_1800E21E8(a1 + 1056);
  sub_1800E1698(a1 + 1280);
  *(_QWORD *)(a1 + 3840) = 0LL;
  *(_QWORD *)(a1 + 3848) = 0LL;
  *(_QWORD *)(a1 + 3856) = 0LL;
  *(_QWORD *)(a1 + 3864) = 0LL;
  *(_QWORD *)(a1 + 3872) = 0LL;
  *(_QWORD *)(a1 + 3880) = 3LL;
  *(_QWORD *)(a1 + 3888) = 0LL;
  *(_QWORD *)(a1 + 3896) = 0LL;
  *(_QWORD *)(a1 + 3904) = 0LL;
  *(_QWORD *)(a1 + 3912) = 0LL;
  *(_DWORD *)(a1 + 3920) = 0;
  *(_QWORD *)(a1 + 3928) = 0LL;
  *(_QWORD *)(a1 + 3936) = 0LL;
  *(_QWORD *)(a1 + 3944) = 0LL;
  *(_QWORD *)(a1 + 3952) = 0LL;
  *(_QWORD *)(a1 + 3960) = 0LL;
  *(_QWORD *)(a1 + 3968) = 0LL;
  *(_WORD *)(a1 + 3976) = 0;
  *(_QWORD *)(a1 + 3984) = a2;
  *(_QWORD *)(a1 + 3992) = 0LL;
  *(_QWORD *)(a1 + 4000) = 0LL;
  *(_QWORD *)(a1 + 4008) = 0LL;
  *(_QWORD *)(a1 + 4016) = 0LL;
  *(_QWORD *)(a1 + 4024) = 0LL;
  *(_QWORD *)(a1 + 4032) = 0LL;
  *(_QWORD *)(a1 + 4048) = 0LL;
  *(_QWORD *)(a1 + 4056) = 0LL;
  *(_QWORD *)(a1 + 4064) = 0LL;
  *(_QWORD *)(a1 + 4072) = 0LL;
  *(_QWORD *)(a1 + 4080) = 0LL;
  *(_QWORD *)(a1 + 4088) = 0LL;
  *(_DWORD *)(a1 + 4040) = 0;
  *(_DWORD *)(a1 + 4044) = 1065353216;
  sub_18006BBB8((_QWORD *)(a1 + 4096), a1);
  *(_OWORD *)(a1 + 424) = 0LL;
  *(_OWORD *)(a1 + 440) = 0LL;
  *(_OWORD *)(a1 + 456) = 0LL;
  *(_OWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v9 = 1000000000 * (perf_counter % perf_frequency) % perf_frequency;
  *(_QWORD *)(a1 + 424) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                        + 1000000000 * (perf_counter / perf_frequency);
  v10 = (volatile signed __int32 *)a3[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v10)(v10, v9);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a1;
}
