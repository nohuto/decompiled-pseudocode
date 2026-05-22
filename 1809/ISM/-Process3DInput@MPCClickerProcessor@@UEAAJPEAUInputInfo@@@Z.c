/*
 * XREFs of ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800FF370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800FF50C (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180100964 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x180100D80 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCClickerProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct IMPCTarget *v4; // rbx
  struct IMPCTarget *v5; // rcx
  MPCHolographicInputManager *Instance; // rax
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  const char *v10; // r9
  struct IMPCTarget *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IMPCTarget *v15; // [rsp+60h] [rbp+8h] BYREF
  struct IMPCTarget *v16; // [rsp+68h] [rbp+10h]

  v15 = 0LL;
  v4 = *(struct IMPCTarget **)(this + 3704);
  v16 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
    MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
  v5 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Instance = MPCHolographicInputManager::GetInstance();
  v7 = MPCHolographicInputManager::Process3DInput(
         Instance,
         a2,
         (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
         &v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v15 )
    {
      MPCInputProviderBase::ProcessSourceDetectedAndLost((MPCInputProviderBase *)(this - 24), v4, v15, 0LL, 0);
      if ( *(_BYTE *)(this + 3640) )
      {
        v9 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *))(*(_QWORD *)v15 + 24LL))(v15, a2);
        if ( v9 == -2147417853 )
        {
          *(_BYTE *)(this + 3640) = 0;
        }
        else if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147417828 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x7C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
            v10);
          JUMPOUT(0x1800FF505LL);
        }
      }
      MPCClickerProcessor::ProcessPoints((MPCClickerProcessor *)(this - 24), a2);
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 16LL))(v4);
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v8;
}
