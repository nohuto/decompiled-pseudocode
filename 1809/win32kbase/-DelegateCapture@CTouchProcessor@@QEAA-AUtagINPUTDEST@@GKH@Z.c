/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0136D80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0136EF4 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0138450 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        __int64 a1,
        _OWORD *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v10; // r8
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  char *v20; // rcx
  char *v21; // rax
  __int64 v22; // rdx
  char *v23; // r15
  char *v24; // rdi
  CInpLockGuard *v26[8]; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v27[12]; // [rsp+68h] [rbp-A0h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v26,
    (struct CInpLockGuard *)(a1 + 56),
    0LL);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v20 = (char *)NodeById + 272;
  v21 = (char *)*((_QWORD *)NodeById + 34);
  if ( v21 == v20 )
    goto LABEL_2;
  do
  {
    v22 = *((unsigned int *)v21 + 6);
    v23 = v21;
    v24 = v21;
    if ( (_DWORD)v22 == a4 )
      break;
    v21 = *(char **)v21;
  }
  while ( v21 != v20 );
  if ( v21 == v20 )
  {
LABEL_2:
    memset(v27, 0, 0xB8uLL);
    LOBYTE(v27[11]) = 0;
    v11 = v27[1];
    *a2 = v27[0];
    v12 = v27[2];
    a2[1] = v11;
    v13 = v27[3];
    a2[2] = v12;
    v14 = v27[4];
    a2[3] = v13;
    v15 = v27[5];
    a2[4] = v14;
    v16 = v27[6];
    a2[5] = v15;
    v17 = v27[8];
    a2[6] = v16;
    a2[7] = v27[7];
    v18 = v27[9];
    a2[8] = v17;
    v19 = v27[10];
    a2[9] = v18;
    a2[10] = v19;
    CInputDest::SetEmpty((CInputDest *)v27);
  }
  else
  {
    if ( *((_WORD *)v24 + 10) != a3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v22, v10);
      v22 = *((unsigned int *)v23 + 6);
    }
    if ( (_DWORD)v22 != a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v22, v10);
    CTouchProcessor::DelegateCaptureInt(a1, a2, v24, a5);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v26);
  return a2;
}
