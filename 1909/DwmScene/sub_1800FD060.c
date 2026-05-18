/*
 * XREFs of sub_1800FD060 @ 0x1800FD060
 * Callers:
 *     sub_1800BCDC8 @ 0x1800BCDC8 (sub_1800BCDC8.c)
 *     sub_1800FCD4C @ 0x1800FCD4C (sub_1800FCD4C.c)
 * Callees:
 *     sub_1800ABB20 @ 0x1800ABB20 (sub_1800ABB20.c)
 *     sub_1800FE2A0 @ 0x1800FE2A0 (sub_1800FE2A0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800FD060(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF

  v7 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
    v4 = a2[1];
  }
  *(_QWORD *)&v7 = *a2;
  *((_QWORD *)&v7 + 1) = v4;
  sub_1800ABB20(a1, (__int64)&v7);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerCamera::`vftable';
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_DWORD *)(a1 + 1800) = 0;
  *(_DWORD *)(a1 + 1804) = 0;
  *(_DWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1828) = 1061158912;
  *(_DWORD *)(a1 + 1832) = 1092616192;
  *(_DWORD *)(a1 + 1880) = 1071644672;
  *(_DWORD *)(a1 + 1904) = _InterlockedIncrement(&dword_18026BC08);
  *(_DWORD *)(a1 + 1884) = 0;
  *(_DWORD *)(a1 + 1888) = 0;
  *(_DWORD *)(a1 + 1840) = 1048971922;
  *(_DWORD *)(a1 + 1836) = -1077342245;
  *(_DWORD *)(a1 + 1856) = 1082130432;
  *(_DWORD *)(a1 + 1844) = 1077936128;
  *(_DWORD *)(a1 + 1852) = 1069547520;
  *(_DWORD *)(a1 + 1860) = 1084227584;
  *(_QWORD *)(a1 + 1800) = qword_18026C298;
  *(_DWORD *)(a1 + 1808) = dword_18026C2A0;
  sub_1800FE2A0(a1);
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
