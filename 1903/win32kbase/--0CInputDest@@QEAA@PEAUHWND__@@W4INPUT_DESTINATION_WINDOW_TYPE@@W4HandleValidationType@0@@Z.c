/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015D7A0
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0161778 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C016FA48 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016FF4C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017DE58 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C017E100 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0023D60 (HMAssignmentLock.c)
 *     ValidateHwndEx @ 0x1C0026110 (ValidateHwndEx.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0030CE0 (INPUTDEST_FROM_PWND.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ValidateHbwnd @ 0x1C0105F50 (ValidateHbwnd.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C015DDDC (INPUTDEST_FROM_BASEWND.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CInputDest::CInputDest(_OWORD *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _DWORD *v12; // rax
  __int128 v13; // xmm7
  __int128 v14; // xmm8
  __int128 v15; // xmm9
  __int128 v16; // xmm10
  __int128 v17; // xmm11
  __m128i v18; // xmm6
  __int128 v19; // xmm12
  __int64 v20; // xmm13_8
  __int64 v21; // rax
  _OWORD *result; // rax
  __int128 v23; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D8h]
  _OWORD v25[16]; // [rsp+38h] [rbp-D0h] BYREF

  memset(a1, 0, 0x78uLL);
  *((_BYTE *)a1 + 120) = 0;
  memset(v25, 0, 0x78uLL);
  if ( a3 == 2 )
  {
    if ( a4 == 2 )
    {
      v11 = ValidateHwndEx(a2, 1, 0);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      v11 = HMValidateHandleNoSecure(a2, 1);
    }
    v12 = INPUTDEST_FROM_PWND(v25, v11);
LABEL_8:
    v13 = *(_OWORD *)v12;
    v14 = *((_OWORD *)v12 + 1);
    v15 = *((_OWORD *)v12 + 2);
    v16 = *((_OWORD *)v12 + 3);
    v17 = *((_OWORD *)v12 + 4);
    v18 = *((__m128i *)v12 + 5);
    v19 = *((_OWORD *)v12 + 6);
    v20 = *((_QWORD *)v12 + 14);
    goto LABEL_17;
  }
  if ( a3 == 1 )
  {
    if ( a4 == 2 )
    {
      v21 = ValidateHbwnd(a2, v8, v10);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      v21 = HMValidateHandleNoSecure(a2, 23);
    }
    v12 = (_DWORD *)INPUTDEST_FROM_BASEWND(v25, v21);
    goto LABEL_8;
  }
  v20 = *(_QWORD *)&v25[7];
  v19 = v25[6];
  v18 = (__m128i)v25[5];
  v17 = v25[4];
  v16 = v25[3];
  v15 = v25[2];
  v14 = v25[1];
  v13 = v25[0];
LABEL_17:
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)) )
  {
    if ( !v18.m128i_i64[0] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v24 = v18.m128i_i64[0];
    *((_QWORD *)&v23 + 1) = a1 + 5;
    HMAssignmentLock((__int64 **)&v23 + 1);
  }
  result = a1;
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v15;
  a1[3] = v16;
  a1[4] = v17;
  a1[5] = v18;
  a1[6] = v19;
  *((_QWORD *)a1 + 14) = v20;
  return result;
}
