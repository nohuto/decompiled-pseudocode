/*
 * XREFs of ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800FEE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHeadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct IMPCInputProviderBase *v3; // rbx
  MPCHolographicInputManager *Instance; // rax
  int v5; // eax
  unsigned int v6; // ebx
  struct IMPCTarget *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24));
  Instance = MPCHolographicInputManager::GetInstance();
  v5 = MPCHolographicInputManager::Process3DInput(Instance, a2, v3, &v10);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcheadprocessor.cpp",
      (const char *)(unsigned int)v5);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
