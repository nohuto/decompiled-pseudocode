/*
 * XREFs of ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180042D40
 * Callers:
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180040428 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800413AC (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18010054C (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x180043030 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800436CC (--$_Emplace_reallocate@V-$ComPtr@UICursor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICursor@@@WRL@Mi.c)
 *     ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KI@Z @ 0x18004420C (-MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::AddPrimaryInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  _QWORD *v6; // rcx
  struct IMPCInputProviderBase *v7; // rbx
  struct IMPCInputProviderBase **v8; // rdx
  MPCManager *v9; // rdi
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  int v14; // eax
  __int64 **v15; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  unsigned int v18; // edi
  __int64 v19; // rbx
  unsigned int v20; // esi
  _DWORD *v21; // rcx
  ISMTracing *v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCInputProviderBase *v24; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  v5 = (_QWORD *)((char *)this + 2088);
  v6 = (_QWORD *)*((_QWORD *)this + 261);
  if ( v6 != (_QWORD *)v5[1] && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 320LL))(*v6) == 1 )
    v4 = 2;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a2 + 312LL))(a2, v4);
  v7 = a2;
  v24 = a2;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = (struct IMPCInputProviderBase **)v5[1];
  if ( (struct IMPCInputProviderBase **)v5[2] == v8 )
  {
    std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(v5, v8, &v24);
    v7 = v24;
  }
  else
  {
    *v8 = 0LL;
    if ( v8 != &v24 )
    {
      *v8 = a2;
      v7 = 0LL;
    }
    v5[1] += 8LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
  MPCHolographicInputManager::UpdateDoubleClickValues(this);
  v9 = MPCManager::s_instance;
  v10 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 96LL))(a2);
  v12 = (__int64 *)*((_QWORD *)v9 + 9);
  v13 = (__int64 *)*v12;
  while ( v13 != v12 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13[5] + 40LL))(v13[5], v11, v10);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v14);
    if ( !*((_BYTE *)v13 + 25) )
    {
      v15 = (__int64 **)v13[2];
      if ( *((_BYTE *)v15 + 25) )
      {
        for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v13 = i;
        v13 = i;
      }
      else
      {
        v13 = (__int64 *)v13[2];
        for ( j = *v15; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v13 = j;
      }
    }
  }
  v18 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v19 = (__int64)(v5[1] - *v5) >> 3;
  v20 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
  v21 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v21 )
  {
    if ( *v21 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(v22, v20, v19 - 1, v18);
    }
  }
}
