/*
 * XREFs of sub_180074A0C @ 0x180074A0C
 * Callers:
 *     sub_180075270 @ 0x180075270 (sub_180075270.c)
 *     sub_1800BD48C @ 0x1800BD48C (sub_1800BD48C.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA_0 @ 0x18013053B (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurrency@@_N@Z@4HA_.c)
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180017800 @ 0x180017800 (sub_180017800.c)
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_18002BDA4 @ 0x18002BDA4 (sub_18002BDA4.c)
 *     sub_180063640 @ 0x180063640 (sub_180063640.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180074638 @ 0x180074638 (sub_180074638.c)
 *     sub_18007C15C @ 0x18007C15C (sub_18007C15C.c)
 *     sub_18007EF90 @ 0x18007EF90 (sub_18007EF90.c)
 *     sub_18007F174 @ 0x18007F174 (sub_18007F174.c)
 *     sub_18007F300 @ 0x18007F300 (sub_18007F300.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_1800E3288 @ 0x1800E3288 (sub_1800E3288.c)
 *     sub_18011E1A0 @ 0x18011E1A0 (sub_18011E1A0.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x180127642 (_Cnd_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=36
__int64 __fastcall sub_180074A0C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  volatile signed __int32 *v17; // rbx
  __int64 *v19; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-20h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-18h] BYREF
  _BYTE v24[8]; // [rsp+58h] [rbp-10h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  sub_18007C15C(a1, a2);
  sub_18002BDA4((__int64 ***)(a1 + 1440), &v19, **(__int64 ***)(a1 + 1440), *(__int64 **)(a1 + 1440));
  j_j__o_free(*(_QWORD *)(a1 + 1440));
  sub_18007F300(a1 + 1424, v20, **(_QWORD **)(a1 + 1424));
  j_j__o_free(*(_QWORD *)(a1 + 1424));
  unknown_libname_116((__int64 *)(a1 + 1392));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 1280));
  Cnd_destroy_in_situ((_Cnd_t)(a1 + 1208));
  if ( *(_DWORD *)(a1 + 1192) )
    _o_terminate(v4, v3);
  sub_180063640((__int64 *)(a1 + 1136));
  if ( *(_BYTE *)(a1 + 1120) )
    sub_180063778(*(_QWORD *)(a1 + 1112));
  sub_18011E1A0(a1 + 1104);
  sub_180026530((__int64 ***)(a1 + 1080), &v21, **(__int64 ***)(a1 + 1080), *(__int64 **)(a1 + 1080));
  j_j__o_free(*(_QWORD *)(a1 + 1080));
  v5 = *(_QWORD *)(a1 + 984);
  if ( v5 )
  {
    sub_18007F430(v5 + 16, v22, **(_QWORD **)(v5 + 16));
    j_j__o_free(*(_QWORD *)(v5 + 16));
    j__o_free(v5);
  }
  v6 = *(volatile signed __int32 **)(a1 + 976);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  sub_180063640((__int64 *)(a1 + 888));
  sub_180063640((__int64 *)(a1 + 864));
  sub_180063640((__int64 *)(a1 + 840));
  if ( *(_BYTE *)(a1 + 824) )
    sub_180063778(*(_QWORD *)(a1 + 816));
  sub_18011E1A0(a1 + 808);
  sub_18007F174(a1 + 728, v23, **(_QWORD **)(a1 + 728));
  j_j__o_free(*(_QWORD *)(a1 + 728));
  sub_1800113D8((__int64 *)(a1 + 704));
  sub_180017800((_QWORD *)(a1 + 568));
  v7 = *(volatile signed __int32 **)(a1 + 520);
  if ( v7 )
  {
    if ( !_InterlockedDecrement(v7 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( !_InterlockedDecrement(v7 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = *(volatile signed __int32 **)(a1 + 504);
  if ( v8 )
  {
    if ( !_InterlockedDecrement(v8 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( !_InterlockedDecrement(v8 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = *(volatile signed __int32 **)(a1 + 488);
  if ( v9 )
  {
    if ( !_InterlockedDecrement(v9 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( !_InterlockedDecrement(v9 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = *(volatile signed __int32 **)(a1 + 472);
  if ( v10 )
  {
    if ( !_InterlockedDecrement(v10 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  sub_1800E3288(a1 + 368);
  sub_180063640((__int64 *)(a1 + 344));
  if ( *(_BYTE *)(a1 + 328) )
    sub_180063778(*(_QWORD *)(a1 + 320));
  sub_18011E1A0(a1 + 312);
  sub_180063640((__int64 *)(a1 + 288));
  v11 = *(_QWORD *)(a1 + 256);
  if ( v11 )
  {
    v12 = (*(_QWORD *)(a1 + 272) - v11) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v12 >= 0x1000 )
    {
      v13 = v12 + 39;
      v14 = *(_QWORD *)(v11 - 8);
      v15 = v11 - v14;
      if ( (unsigned __int64)(v15 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v15, v13);
        JUMPOUT(0x180074EBALL);
      }
      v11 = v14;
    }
    j_j__o_free(v11);
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  sub_18007EF90(a1 + 184, v24, **(_QWORD **)(a1 + 184));
  j_j__o_free(*(_QWORD *)(a1 + 184));
  sub_180074638(a1 + 168);
  sub_180063640((__int64 *)(a1 + 144));
  if ( *(_BYTE *)(a1 + 128) )
    sub_180063778(*(_QWORD *)(a1 + 120));
  sub_18011E1A0(a1 + 112);
  sub_1800113D8((__int64 *)(a1 + 88));
  v16 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 80);
  if ( v16 )
    (**v16)(v16, 1LL);
  v17 = *(volatile signed __int32 **)(a1 + 72);
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  sub_180063640((__int64 *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 24) )
    sub_180063778(*(_QWORD *)(a1 + 16));
  return sub_18011E1A0(a1 + 8);
}
