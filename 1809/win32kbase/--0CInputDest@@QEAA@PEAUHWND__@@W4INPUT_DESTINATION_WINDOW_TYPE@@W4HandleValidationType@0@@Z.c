/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0130CE0
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C013449C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0140FE4 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C014146C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00323F4 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C01312E4 (INPUTDEST_FROM_BASEWND.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CInputDest::CInputDest(_OWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rdi
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  _OWORD *result; // rax
  __int128 v34; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D8h]
  _OWORD v36[11]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v37[44]; // [rsp+E8h] [rbp-20h] BYREF

  memset(a1, 0, 0xB0uLL);
  *((_BYTE *)a1 + 176) = 0;
  memset(v36, 0, sizeof(v36));
  if ( a3 == 2 )
  {
    v9 = HMValidateHandleNoSecure(a2, 1);
    v10 = INPUTDEST_FROM_PWND(v37, v9);
  }
  else
  {
    if ( a3 != 1 )
      goto LABEL_6;
    v11 = HMValidateHandleNoSecure(a2, 23);
    v10 = (_OWORD *)INPUTDEST_FROM_BASEWND(v37, v11);
  }
  v12 = v10[1];
  v36[0] = *v10;
  v13 = v10[2];
  v36[1] = v12;
  v14 = v10[3];
  v36[2] = v13;
  v15 = v10[4];
  v36[3] = v14;
  v16 = v10[5];
  v36[4] = v15;
  v17 = v10[6];
  v36[5] = v16;
  v18 = v10[7];
  v36[6] = v17;
  v7 = &v36[8];
  v19 = v10[8];
  v36[7] = v18;
  v20 = v10[9];
  v36[8] = v19;
  v21 = v10[10];
  v36[9] = v20;
  v36[10] = v21;
LABEL_6:
  if ( DWORD1(v36[5]) )
  {
    v22 = *((_QWORD *)&v36[4] + 1);
    if ( !*((_QWORD *)&v36[4] + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    v35 = v22;
    *((_QWORD *)&v34 + 1) = (char *)a1 + 72;
    HMAssignmentLock((__int64)&v34 + 8);
  }
  v23 = v36[1];
  *a1 = v36[0];
  v24 = v36[2];
  a1[1] = v23;
  v25 = v36[3];
  a1[2] = v24;
  v26 = v36[4];
  a1[3] = v25;
  v27 = v36[5];
  a1[4] = v26;
  v28 = v36[6];
  a1[5] = v27;
  v29 = v36[7];
  a1[6] = v28;
  v30 = v36[8];
  a1[7] = v29;
  v31 = v36[9];
  a1[8] = v30;
  v32 = v36[10];
  result = a1;
  a1[9] = v31;
  a1[10] = v32;
  return result;
}
