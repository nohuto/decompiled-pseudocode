/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18010054C
 * Callers:
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800EE828 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800F5CF0 (-Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800F7F64 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800FB1E4 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800FEC20 (-Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180100190 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180042D40 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800436CC (--$_Emplace_reallocate@V-$ComPtr@UICursor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICursor@@@WRL@Mi.c)
 *     ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x180102A6C (-MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x1801035FC (-Initialize@MPCPerfCounter@@QEAAXKI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  struct IMPCInputProviderBase *v3; // rdi
  struct MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v5; // rbp
  char **v6; // rsi
  struct IMPCInputProviderBase **i; // rcx
  struct IMPCInputProviderBase *v8; // rbx
  char *v9; // rdx
  __int64 v11; // rbx
  struct MPCHolographicInputManager *v12; // rsi
  __int64 v13; // rcx
  struct MPCHolographicInputManager *v14; // rbx
  const char *v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  _DWORD *v19; // rcx
  ISMTracing *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCInputProviderBase *v22; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 6) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
  v3 = (MPCInputProviderBase *)((char *)this + 24);
  Instance = MPCHolographicInputManager::GetInstance();
  v5 = Instance;
  v6 = (char **)((char *)Instance + 1832);
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)Instance + 229);
        i != *((struct IMPCInputProviderBase ***)Instance + 230);
        ++i )
  {
    if ( *i == v3 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  v8 = v3;
  v22 = v3;
  if ( v3 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 8LL))(v3);
  v9 = v6[1];
  if ( v6[2] == v9 )
  {
    std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
      v6,
      v9,
      (char *)&v22);
    v8 = v22;
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    if ( v9 != (char *)&v22 )
    {
      *(_QWORD *)v9 = v3;
      v8 = 0LL;
    }
    v6[1] += 8;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( *((_QWORD *)v5 + 261) == *((_QWORD *)v5 + 262) )
    MPCHolographicInputManager::AddPrimaryInputProvider(v5, v3);
  if ( *((_QWORD *)v5 + 236) )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 288LL))(v3);
  if ( !*((_QWORD *)MPCHolographicInputManager::GetInstance() + 228) )
  {
    v11 = *((_QWORD *)this + 5);
    v12 = MPCHolographicInputManager::GetInstance();
    v13 = *((_QWORD *)v12 + 228);
    if ( v13 != v11 )
    {
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v13 = *((_QWORD *)v12 + 228);
      }
      *((_QWORD *)v12 + 228) = v11;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( !*((_QWORD *)MPCHolographicInputManager::GetInstance() + 233)
    && (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 112LL))(v3) == 1 )
  {
    v14 = MPCHolographicInputManager::GetInstance();
    if ( *((_QWORD *)v14 + 233) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
        v15);
      JUMPOUT(0x1801007B1LL);
    }
    if ( v3 )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 8LL))(v3);
      v16 = *((_QWORD *)v14 + 233);
      *((_QWORD *)v14 + 233) = v3;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 112LL))(v3);
  v18 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 88LL))(v3);
  MPCPerfCounter::Initialize((MPCInputProviderBase *)((char *)this + 3672), v18, v17);
  v19 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v19 )
  {
    if ( *v19 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputProviderBase_Create_(v20, *((const struct DeviceInfo **)this + 6));
    }
  }
  return 0LL;
}
