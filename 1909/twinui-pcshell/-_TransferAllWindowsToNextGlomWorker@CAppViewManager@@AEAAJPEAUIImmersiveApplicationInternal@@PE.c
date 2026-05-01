/*
 * XREFs of ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180158FF4
 * Callers:
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x18014D5FC (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180157204 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180158F18 (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlomWorker(
        __int64 a1,
        GUID *a2,
        int (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        int a4)
{
  int (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  GUID *v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v16; // [rsp+80h] [rbp+30h] BYREF

  v13[1] = -2LL;
  v5 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a3;
  v13[0] = 0LL;
  if ( a3 )
  {
    v8 = **a3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    v9 = &GUID_c9301630_27da_428e_a432_0a5e49c0ffee;
  }
  else
  {
    v5 = *(int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 120);
    v8 = (int (__fastcall *)(_QWORD, GUID *, __int64 *))(*v5)[14];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    v9 = a2;
  }
  if ( v8(v5, v9, v13) < 0
    || (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v13[0] + 232LL))(v13[0], &v16) < 0
    || (v16 & 1) != 0
    || (v14[0] = 0LL,
        v14[1] = a4 == 1,
        v10 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD *))(**(_QWORD **)(a1 + 120) + 104LL))(
                *(_QWORD *)(a1 + 120),
                a2,
                v13[0],
                v14),
        v11 = v10,
        v10 >= 0) )
  {
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  return v11;
}
