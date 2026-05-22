/*
 * XREFs of _lambda_ba94582f5a49cd463f39dfc8045b2062_::operator() @ 0x1800418D0
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800415AC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall lambda_ba94582f5a49cd463f39dfc8045b2062_::operator()(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _OWORD *a6)
{
  int v10; // eax
  int v11; // ecx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  memset_0((void *)a2, 0, 0x640uLL);
  *(_DWORD *)(a2 + 24) = 1600;
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, a3, 512LL, a5, a2);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x1800419B9LL);
  }
  *(_DWORD *)(a2 + 1196) = 1;
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 1880LL);
  *(_DWORD *)(a2 + 1212) = 0;
  *(_DWORD *)(a2 + 1336) = -1;
  *(_DWORD *)(a2 + 1204) = a4;
  v12 = a6[1];
  *(_OWORD *)(a2 + 672) = *a6;
  *(_DWORD *)(a2 + 1208) = a3;
  v13 = a6[2];
  result = a2;
  *(_OWORD *)(a2 + 688) = v12;
  *(_DWORD *)(a2 + 1200) = v11;
  *(_OWORD *)(a2 + 704) = v13;
  *(_DWORD *)(a2 + 1216) = 1065353216;
  return result;
}
