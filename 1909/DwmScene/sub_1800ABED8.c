/*
 * XREFs of sub_1800ABED8 @ 0x1800ABED8
 * Callers:
 *     sub_1800AC500 @ 0x1800AC500 (sub_1800AC500.c)
 *     sub_1800FD3A0 @ 0x1800FD3A0 (sub_1800FD3A0.c)
 *     sub_1800FFA8C @ 0x1800FFA8C (sub_1800FFA8C.c)
 *     sub_18010B010 @ 0x18010B010 (sub_18010B010.c)
 *     sub_180132D12 @ 0x180132D12 (sub_180132D12.c)
 *     sub_180132D5C @ 0x180132D5C (sub_180132D5C.c)
 *     ?dtor$27@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_4 @ 0x1801333F5 (-dtor$27@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_4.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_18006E0EC @ 0x18006E0EC (sub_18006E0EC.c)
 *     sub_1800B2BA8 @ 0x1800B2BA8 (sub_1800B2BA8.c)
 *     sub_1800B2D84 @ 0x1800B2D84 (sub_1800B2D84.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800ABED8(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  _BYTE v26[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v27; // [rsp+28h] [rbp-10h] BYREF

  v3 = a1 + 1704;
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  v4 = *(_QWORD *)(a1 + 1760);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  v5 = *(volatile signed __int32 **)(a1 + 1688);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a1 + 1672);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *(volatile signed __int32 **)(a1 + 1656);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = *(volatile signed __int32 **)(a1 + 1640);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  sub_1800B2D84(a1 + 1616, v26, **(_QWORD **)(a1 + 1616));
  j_j__o_free(*(_QWORD *)(a1 + 1616));
  sub_180026530((__int64 ***)(a1 + 448), &v27, **(__int64 ***)(a1 + 448), *(__int64 **)(a1 + 448));
  j_j__o_free(*(_QWORD *)(a1 + 448));
  sub_18006E0EC(a1 + 416);
  if ( *(_BYTE *)(a1 + 388) )
    *(_BYTE *)(a1 + 388) = 0;
  v9 = *(_QWORD *)(a1 + 272);
  if ( v9 >= 0x10 )
  {
    v10 = *(_QWORD *)(a1 + 248);
    v11 = v9 + 1;
    if ( v11 >= 0x1000 )
    {
      v12 = *(_QWORD *)(v10 - 8);
      v13 = v11 + 39;
      v14 = v10 - v12;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
        goto LABEL_45;
      v10 = v12;
    }
    j_j__o_free(v10);
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 15LL;
  *(_BYTE *)(a1 + 248) = 0;
  v15 = *(_QWORD *)(a1 + 240);
  if ( v15 >= 0x10 )
  {
    v16 = *(_QWORD *)(a1 + 216);
    v17 = v15 + 1;
    if ( v17 >= 0x1000 )
    {
      v18 = *(_QWORD *)(v16 - 8);
      v13 = v17 + 39;
      v14 = v16 - v18;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
        goto LABEL_45;
      v16 = v18;
    }
    j_j__o_free(v16);
  }
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 15LL;
  *(_BYTE *)(a1 + 216) = 0;
  v19 = *(_QWORD *)(a1 + 208);
  if ( v19 >= 0x10 )
  {
    v20 = *(_QWORD *)(a1 + 184);
    v21 = v19 + 1;
    if ( v21 < 0x1000 )
    {
LABEL_35:
      j_j__o_free(v20);
      goto LABEL_36;
    }
    v22 = *(_QWORD *)(v20 - 8);
    v13 = v21 + 39;
    v14 = v20 - v22;
    if ( (unsigned __int64)(v14 - 8) <= 0x1F )
    {
      v20 = v22;
      goto LABEL_35;
    }
LABEL_45:
    o__invalid_parameter_noinfo_noreturn(v14, v13);
    JUMPOUT(0x1800AC245LL);
  }
LABEL_36:
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 15LL;
  *(_BYTE *)(a1 + 184) = 0;
  v23 = *(volatile signed __int32 **)(a1 + 160);
  if ( v23 )
  {
    if ( !_InterlockedDecrement(v23 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( !_InterlockedDecrement(v23 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v24 = *(volatile signed __int32 **)(a1 + 144);
  if ( v24 )
  {
    if ( !_InterlockedDecrement(v24 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( !_InterlockedDecrement(v24 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  sub_1800B2BA8(a1 + 104);
  return sub_18008E18C((_QWORD *)a1);
}
