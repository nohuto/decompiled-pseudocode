/*
 * XREFs of ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C017C1F8
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017B000 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ApiSetGetPTPShellTarget @ 0x1C019F2D4 (ApiSetGetPTPShellTarget.c)
 */

bool __fastcall CPTPProcessor::ShellEndpointExists(CPTPProcessor *this)
{
  __int64 PTPShellTarget; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  _OWORD v12[7]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+90h] [rbp-70h]
  _BYTE v14[128]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v15[32]; // [rsp+120h] [rbp+20h] BYREF

  PTPShellTarget = ApiSetGetPTPShellTarget(v14);
  v2 = *(_OWORD *)(PTPShellTarget + 16);
  v12[0] = *(_OWORD *)PTPShellTarget;
  v3 = *(_OWORD *)(PTPShellTarget + 32);
  v12[1] = v2;
  v4 = *(_OWORD *)(PTPShellTarget + 48);
  v12[2] = v3;
  v5 = *(_OWORD *)(PTPShellTarget + 64);
  v12[3] = v4;
  v6 = *(_OWORD *)(PTPShellTarget + 80);
  v12[4] = v5;
  v7 = *(_OWORD *)(PTPShellTarget + 96);
  v12[5] = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(PTPShellTarget + 112);
  v12[6] = v7;
  v13 = v6;
  CInputDest::CInputDest((CInputDest *)v15, (const struct tagINPUTDEST *)v12);
  v8 = v15[0] != 0;
  CInputDest::SetEmpty((CInputDest *)v15, v9, v10);
  return v8;
}
