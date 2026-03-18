/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0162ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0163014 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01645CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapture(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // r8
  char *v20; // rcx
  char *v21; // rax
  char *v22; // rdi
  CInpLockGuard *v24; // [rsp+28h] [rbp-51h] BYREF
  int v25; // [rsp+30h] [rbp-49h]
  _BYTE v26[120]; // [rsp+38h] [rbp-41h] BYREF
  char v27; // [rsp+B0h] [rbp+37h]
  int v28; // [rsp+B1h] [rbp+38h]
  __int16 v29; // [rsp+B5h] [rbp+3Ch]
  char v30; // [rsp+B7h] [rbp+3Eh]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v24,
    (struct CInpLockGuard *)(a1 + 48));
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v20 = (char *)NodeById + 232;
  v21 = (char *)*((_QWORD *)NodeById + 29);
  if ( v21 == v20 )
    goto LABEL_2;
  v22 = 0LL;
  while ( v21 != v20 )
  {
    v22 = v21;
    if ( *((_DWORD *)v21 + 6) == a4 )
      break;
    v21 = *(char **)v21;
  }
  if ( v21 == v20 )
  {
LABEL_2:
    v28 = 0;
    v29 = 0;
    v30 = 0;
    memset(v26, 0, sizeof(v26));
    v12 = *(_OWORD *)&v26[16];
    *(_OWORD *)a2 = *(_OWORD *)v26;
    v27 = 0;
    v13 = *(_OWORD *)&v26[32];
    *(_OWORD *)(a2 + 16) = v12;
    v14 = *(_OWORD *)&v26[48];
    *(_OWORD *)(a2 + 32) = v13;
    v15 = *(_OWORD *)&v26[64];
    *(_OWORD *)(a2 + 48) = v14;
    v16 = *(_OWORD *)&v26[80];
    *(_OWORD *)(a2 + 64) = v15;
    v17 = *(_OWORD *)&v26[96];
    *(_OWORD *)(a2 + 80) = v16;
    *(_QWORD *)&v16 = *(_QWORD *)&v26[112];
    *(_OWORD *)(a2 + 96) = v17;
    *(_QWORD *)(a2 + 112) = v16;
    CInputDest::SetEmpty((CInputDest *)v26, v18, v19);
  }
  else
  {
    if ( *((_WORD *)v22 + 10) != a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v10, v11);
    if ( *((_DWORD *)v22 + 6) != a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v10, v11);
    CTouchProcessor::DelegateCaptureInt(a1, a2, v22, a5);
  }
  if ( !v25 )
    CInpLockGuard::UnLock(v24);
  return a2;
}
