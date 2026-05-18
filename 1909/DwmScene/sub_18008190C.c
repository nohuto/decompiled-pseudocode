/*
 * XREFs of sub_18008190C @ 0x18008190C
 * Callers:
 *     sub_180082480 @ 0x180082480 (sub_180082480.c)
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_18007EE60 @ 0x18007EE60 (sub_18007EE60.c)
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 *     sub_1800872AC @ 0x1800872AC (sub_1800872AC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18008190C(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  _QWORD *v4; // rsi
  _QWORD *j; // rbx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rcx
  volatile signed __int32 *v27; // rcx
  volatile signed __int32 *v28; // rcx
  volatile signed __int32 *v29; // rcx
  volatile signed __int32 *v30; // rcx
  unsigned __int64 result; // rax
  volatile signed __int32 *v32; // rcx
  __int64 *v33; // [rsp+28h] [rbp-30h] BYREF
  __int128 v34; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::SceneNode::`vftable';
  sub_1800872AC(a1);
  v2 = *(_QWORD **)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 32); i != v2; i += 2 )
  {
    v34 = 0LL;
    sub_180085C60(*i, &v34);
  }
  v4 = *(_QWORD **)(a1 + 384);
  for ( j = *(_QWORD **)(a1 + 376); j != v4; j += 2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 112LL))(*j);
  v6 = *(_QWORD *)(a1 + 584);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 584) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(volatile signed __int32 **)(a1 + 576);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = *(volatile signed __int32 **)(a1 + 560);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = *(volatile signed __int32 **)(a1 + 544);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = *(volatile signed __int32 **)(a1 + 528);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = *(volatile signed __int32 **)(a1 + 512);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = *(volatile signed __int32 **)(a1 + 496);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = *(volatile signed __int32 **)(a1 + 480);
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = *(volatile signed __int32 **)(a1 + 464);
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  sub_18007EE60((__int64 ***)(a1 + 432), &v33, **(__int64 ***)(a1 + 432), *(__int64 **)(a1 + 432));
  j_j__o_free(*(_QWORD *)(a1 + 432));
  v15 = *(_QWORD *)(a1 + 424);
  if ( v15 >= 0x10 )
  {
    v16 = v15 + 1;
    v17 = *(_QWORD *)(a1 + 400);
    if ( v16 >= 0x1000 )
    {
      v18 = v16 + 39;
      v19 = *(_QWORD *)(v17 - 8);
      v20 = v17 - v19;
      if ( (unsigned __int64)(v20 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v20, v18);
        goto LABEL_71;
      }
      v17 = v19;
    }
    j_j__o_free(v17);
  }
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 15LL;
  *(_BYTE *)(a1 + 400) = 0;
  sub_1800113D8((__int64 *)(a1 + 376));
  v21 = *(_QWORD *)(a1 + 184);
  if ( v21 )
  {
    v22 = (*(_QWORD *)(a1 + 200) - v21) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v22 < 0x1000 )
    {
LABEL_50:
      j_j__o_free(v21);
      *(_QWORD *)(a1 + 184) = 0LL;
      *(_QWORD *)(a1 + 192) = 0LL;
      *(_QWORD *)(a1 + 200) = 0LL;
      goto LABEL_51;
    }
    v23 = v22 + 39;
    v24 = *(_QWORD *)(v21 - 8);
    v25 = v21 - v24;
    if ( (unsigned __int64)(v25 - 8) <= 0x1F )
    {
      v21 = v24;
      goto LABEL_50;
    }
LABEL_71:
    o__invalid_parameter_noinfo_noreturn(v25, v23);
    JUMPOUT(0x180081DBALL);
  }
LABEL_51:
  v26 = *(volatile signed __int32 **)(a1 + 136);
  if ( v26 && _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
  v27 = *(volatile signed __int32 **)(a1 + 120);
  if ( v27 && _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
  v28 = *(volatile signed __int32 **)(a1 + 96);
  if ( v28 && _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
  v29 = *(volatile signed __int32 **)(a1 + 80);
  if ( v29 && _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
  v30 = *(volatile signed __int32 **)(a1 + 64);
  if ( v30 && _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
  sub_1800113D8((__int64 *)(a1 + 32));
  result = (unsigned __int64)&off_1801DE0D0;
  *(_QWORD *)a1 = &off_1801DE0D0;
  v32 = *(volatile signed __int32 **)(a1 + 16);
  if ( v32 )
  {
    result = (unsigned int)_InterlockedDecrement(v32 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
  }
  return result;
}
