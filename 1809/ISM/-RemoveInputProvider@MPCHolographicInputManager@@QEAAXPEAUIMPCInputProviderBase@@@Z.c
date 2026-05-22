/*
 * XREFs of ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004020C
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180100BD0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180040428 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180043488 (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::RemoveInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  struct IMPCInputProviderBase **v2; // rdi
  char *v3; // r13
  struct IMPCInputProviderBase **i; // r14
  struct IMPCInputProviderBase *v7; // rbx
  const char *v8; // r9
  char *v9; // rbx
  struct IMPCInputProviderBase **v10; // rdi
  struct IMPCInputProviderBase *v11; // rdx
  struct IMPCInputProviderBase *v12; // rcx
  struct IMPCInputProviderBase **v13; // r12
  struct IMPCInputProviderBase *v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rbx
  unsigned int v17; // eax
  int v18; // eax
  struct IMPCInputProviderBase *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 230);
  v3 = (char *)this + 1832;
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 229); i != v2; ++i )
  {
    v7 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 8LL))(*i);
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( a2 == v7 )
      break;
  }
  if ( i != *((struct IMPCInputProviderBase ***)this + 230) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 248LL))(a2) )
    {
      v9 = (char *)*((_QWORD *)this + 262);
      v10 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 261);
      if ( ((v9 - (char *)v10) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v11 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 233);
        if ( v11 )
        {
          MPCHolographicInputManager::SetProviderPrimary(this, v11);
        }
        else
        {
          if ( v10 != (struct IMPCInputProviderBase **)v9 )
          {
            do
            {
              v12 = *v10;
              if ( *v10 )
              {
                *v10 = 0LL;
                (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v12 + 16LL))(v12);
              }
              ++v10;
            }
            while ( v10 != (struct IMPCInputProviderBase **)v9 );
            v10 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 261);
          }
          *((_QWORD *)this + 262) = v10;
        }
      }
      else
      {
        v13 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 262);
        while ( v10 != v13 )
        {
          v14 = *v10;
          if ( *v10 )
          {
            (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v14 + 8LL))(*v10);
            (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v14 + 16LL))(v14);
          }
          if ( a2 == v14 )
            break;
          ++v10;
        }
        if ( v10 == *((struct IMPCInputProviderBase ***)this + 262) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xF2,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            v8);
          JUMPOUT(0x18004041FLL);
        }
        std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase((char *)this + 2088, &v21, v10);
      }
    }
    v15 = (__int64 *)*((_QWORD *)this + 236);
    if ( v15 )
    {
      v16 = *v15;
      v17 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
      v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v16 + 104))(v15, v17);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v18);
        __debugbreak();
      }
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v21, i);
  }
  v19 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 233);
  if ( a2 == v19 )
  {
    if ( v19 )
    {
      *((_QWORD *)this + 233) = 0LL;
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
}
