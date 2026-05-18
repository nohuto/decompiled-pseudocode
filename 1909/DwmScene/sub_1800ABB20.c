/*
 * XREFs of sub_1800ABB20 @ 0x1800ABB20
 * Callers:
 *     sub_1800731C8 @ 0x1800731C8 (sub_1800731C8.c)
 *     sub_1800ABA6C @ 0x1800ABA6C (sub_1800ABA6C.c)
 *     sub_1800FD060 @ 0x1800FD060 (sub_1800FD060.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 *     sub_18010AE98 @ 0x18010AE98 (sub_18010AE98.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002849C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 *     sub_1800B0840 @ 0x1800B0840 (sub_1800B0840.c)
 *     sub_1800F0A50 @ 0x1800F0A50 (sub_1800F0A50.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_1800ABB20(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char *v5; // rbx
  __int64 v6; // rbp
  volatile __int32 *i; // rcx
  volatile signed __int32 *v8; // rbx
  _QWORD v10[3]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]

  v12 = -2LL;
  v13 = a1;
  v14 = a2;
  v11 = 15LL;
  LOBYTE(v10[0]) = 0;
  v10[2] = 6LL;
  memmove(v10, "Camera", 6uLL);
  BYTE6(v10[0]) = 0;
  sub_1800F0A50(a1, v10, a2);
  if ( v11 >= 0x10 )
  {
    v4 = v10[0];
    if ( v11 + 1 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v10[0] - 8LL);
      if ( (unsigned __int64)(v10[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v11 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = -1;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 15LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 15LL;
  *(_BYTE *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 15LL;
  *(_BYTE *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 364) = dword_18025EED0;
  *(_DWORD *)(a1 + 368) = dword_18025EED4;
  *(_BYTE *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 412) = 3;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 448) = sub_180041D90();
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  v5 = (char *)(a1 + 548);
  v6 = 4LL;
  do
  {
    `vector constructor iterator'(v5, 64LL, 4LL, (void (__fastcall *)(char *))sub_180017390);
    v5 += 256;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)(a1 + 1572) = 0LL;
  *(_QWORD *)(a1 + 1580) = 0LL;
  *(_QWORD *)(a1 + 1588) = 0LL;
  *(_QWORD *)(a1 + 1596) = 0LL;
  *(_QWORD *)(a1 + 1604) = 0LL;
  *(_QWORD *)(a1 + 1616) = 0LL;
  *(_QWORD *)(a1 + 1624) = 0LL;
  *(_QWORD *)(a1 + 1616) = sub_18006945C();
  *(_QWORD *)(a1 + 1632) = 0LL;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1696) = &off_180265A68;
  *(_QWORD *)(a1 + 1760) = 0LL;
  sub_1800B0840(a1);
  for ( i = (volatile __int32 *)(a1 + 280); i != (volatile __int32 *)(a1 + 292); ++i )
    _InterlockedExchange(i, 0);
  v8 = *(volatile signed __int32 **)(a2 + 8);
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
