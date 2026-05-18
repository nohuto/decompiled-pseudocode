/*
 * XREFs of sub_180081484 @ 0x180081484
 * Callers:
 *     sub_18008A5C0 @ 0x18008A5C0 (sub_18008A5C0.c)
 * Callees:
 *     sub_18007DD0C @ 0x18007DD0C (sub_18007DD0C.c)
 *     sub_18008706C @ 0x18008706C (sub_18008706C.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_180081484(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  volatile signed __int32 *v8; // rbx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::SceneNode::`vftable';
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(*a2 + 104LL);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = a2[1];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  *(_QWORD *)(a1 + 72) = *a2;
  *(_QWORD *)(a1 + 80) = a2[1];
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 1065353216;
  *(_DWORD *)(a1 + 172) = 1065353216;
  *(_DWORD *)(a1 + 176) = 1065353216;
  *(_DWORD *)(a1 + 180) = 1065353216;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 224) = 1065353216LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 244) = 1065353216LL;
  *(_QWORD *)(a1 + 252) = 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  *(_QWORD *)(a1 + 264) = 1065353216LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 1065353216;
  *(_QWORD *)(a1 + 288) = 1065353216LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 308) = 1065353216LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_DWORD *)(a1 + 324) = 0;
  *(_QWORD *)(a1 + 328) = 1065353216LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = 1065353216;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = a3;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 15LL;
  *(_BYTE *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 432) = sub_18007DD0C();
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  v6 = _InterlockedIncrement64(&qword_180258748);
  *(_QWORD *)(a1 + 208) = v6;
  v7 = *(_QWORD *)(a1 + 216);
  if ( v6 >= v7 )
    v7 = v6;
  *(_QWORD *)(a1 + 216) = v7;
  sub_180087414(a1);
  *(_QWORD *)(a1 + 448) |= 1uLL;
  sub_180087414(a1);
  *(_QWORD *)(a1 + 448) |= 2uLL;
  sub_180087414(a1);
  *(_QWORD *)(a1 + 448) |= 4uLL;
  sub_180087414(a1);
  *(_QWORD *)(a1 + 448) |= 0x10000uLL;
  sub_18008706C(a1);
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a1;
}
