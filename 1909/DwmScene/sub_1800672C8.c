/*
 * XREFs of sub_1800672C8 @ 0x1800672C8
 * Callers:
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_18003F1BC @ 0x18003F1BC (sub_18003F1BC.c)
 *     sub_180067810 @ 0x180067810 (sub_180067810.c)
 *     sub_180128A57 @ 0x180128A57 (sub_180128A57.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800671C0 @ 0x1800671C0 (sub_1800671C0.c)
 *     sub_1800698D4 @ 0x1800698D4 (sub_1800698D4.c)
 *     sub_1800699B4 @ 0x1800699B4 (sub_1800699B4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800672C8(__int64 a1)
{
  __int64 v2; // rbx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  *(_OWORD *)v13 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 208), v13);
  if ( v13[1] )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v13[1] + 8)) )
    {
      v2 = v13[1];
      (**(void (__fastcall ***)(__int64))v13[1])(v13[1]);
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v2 + 12)) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[1] + 8LL))(v13[1]);
    }
  }
  v3 = *(volatile signed __int32 **)(a1 + 496);
  if ( v3 && !_InterlockedDecrement(v3 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(_QWORD *)(a1 + 472);
  if ( v4 )
  {
    sub_1800671C0(*(_QWORD *)(a1 + 472));
    j__o_free(v4);
  }
  v5 = *(volatile signed __int32 **)(a1 + 464);
  if ( v5 )
  {
    if ( !_InterlockedDecrement(v5 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( !_InterlockedDecrement(v5 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a1 + 448);
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  sub_1800698D4(a1 + 416);
  v7 = *(volatile signed __int32 **)(a1 + 392);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 304));
  v8 = *(volatile signed __int32 **)(a1 + 264);
  if ( v8 )
  {
    if ( !_InterlockedDecrement(v8 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( !_InterlockedDecrement(v8 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = *(volatile signed __int32 **)(a1 + 248);
  if ( v9 )
  {
    if ( !_InterlockedDecrement(v9 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( !_InterlockedDecrement(v9 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = *(volatile signed __int32 **)(a1 + 216);
  if ( v10 )
  {
    if ( !_InterlockedDecrement(v10 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  sub_1800699B4(a1 + 128);
  v11 = *(volatile signed __int32 **)(a1 + 88);
  if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  return sub_180067224(a1);
}
