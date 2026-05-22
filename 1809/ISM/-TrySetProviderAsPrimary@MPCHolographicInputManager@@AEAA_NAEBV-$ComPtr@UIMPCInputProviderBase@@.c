/*
 * XREFs of ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800413AC
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x1800426B0 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180042D40 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::TrySetProviderAsPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase **a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v6; // rax
  char v7; // r14
  struct IMPCInputProviderBase *v8; // rdi
  int v9; // ebx
  const char *v10; // r9
  char result; // al
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rcx
  struct IMPCInputProviderBase *v15; // rbx
  struct IMPCInputProviderBase **v16; // r12
  struct IMPCInputProviderBase **i; // r14
  struct IMPCInputProviderBase *v18; // rdi
  __int64 (__fastcall **v19)(); // [rsp+20h] [rbp-40h] BYREF
  char *v20; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v21)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v23; // [rsp+90h] [rbp+30h] BYREF

  if ( !*((_BYTE *)this + 1872) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x264,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    JUMPOUT(0x1800415A4LL);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 261);
  v7 = 1;
  v8 = *a2;
  v23 = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 112LL))(*v6);
  if ( v9 != (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 112LL))(v8)
    || !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 264LL))(*a2) )
  {
    v7 = 0;
    v19 = off_18013B218;
    v20 = &v23;
    v21 = &v19;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v19);
  }
  result = v23;
  if ( v23 )
  {
    if ( !v7 )
    {
      v20 = (char *)this;
      v19 = off_18013B1E8;
      v21 = &v19;
      MPCHolographicInputManager::ForEachActiveProvider(this, &v19);
      v12 = (__int64 *)*((_QWORD *)this + 262);
      v13 = (__int64 *)*((_QWORD *)this + 261);
      if ( v13 != v12 )
      {
        do
        {
          v14 = *v13;
          if ( *v13 )
          {
            *v13 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          ++v13;
        }
        while ( v13 != v12 );
        v13 = (__int64 *)*((_QWORD *)this + 261);
      }
      *((_QWORD *)this + 262) = v13;
    }
    v15 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v15 + 8LL))(*a2);
    v16 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 230);
    for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 229); i != v16; ++i )
    {
      v18 = *i;
      if ( *i )
      {
        (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v18 + 8LL))(*i);
        (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( v15 == v18 )
        break;
    }
    if ( v15 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( i == *((struct IMPCInputProviderBase ***)this + 230) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x28B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v10);
      __debugbreak();
    }
    MPCHolographicInputManager::AddPrimaryInputProvider(this, *a2);
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 32LL))(*a2);
    return v23;
  }
  return result;
}
