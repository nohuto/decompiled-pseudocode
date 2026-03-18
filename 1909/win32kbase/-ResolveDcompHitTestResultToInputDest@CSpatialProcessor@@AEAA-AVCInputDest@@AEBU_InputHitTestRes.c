/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C003403C
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C0017438 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001728 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0002450 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CSpatialProcessor *a1,
        CInputDest *a2,
        __int64 a3,
        int a4,
        ...)
{
  void *v4; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  _OWORD v19[9]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v20[8]; // [rsp+C0h] [rbp-40h] BYREF
  va_list va; // [rsp+1A0h] [rbp+A0h] BYREF

  va_start(va, a4);
  v4 = *(void **)(a3 + 16);
  if ( a4 == 6 || !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  memset(v20, 0, 0x78uLL);
  LODWORD(v19[0]) = *(_DWORD *)(a3 + 112);
  if ( v4 )
  {
    if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(
           a1,
           v4,
           a4,
           (struct CONTAINER_ID *)v19,
           (struct tagINPUTDEST *)v20)
      && (v20[0] & 4) != 0 )
    {
      v17 = 0LL;
      if ( HIDWORD(v20[5]) == 2 )
      {
        LOBYTE(v14) = 1;
        v18 = HMValidateHandleNoSecure(*(_QWORD *)(a3 + 8), v14);
        v17 = v18;
        if ( !v18 || *(char *)(*(_QWORD *)(v18 + 40) + 19LL) < 0 )
        {
          memset(&v19[1], 0, 0x78uLL);
          v20[0] = v19[1];
          v20[1] = v19[2];
          v20[2] = v19[3];
          v20[3] = v19[4];
          v20[4] = v19[5];
          v20[5] = v19[6];
          v20[6] = v19[7];
          *(_QWORD *)&v20[7] = *(_QWORD *)&v19[8];
          goto LABEL_18;
        }
      }
      else if ( HIDWORD(v20[5]) != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
      }
      if ( (v20[0] & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
      ApiSetEditionUpdateInputTransformFromHitTest((__int64)v20, v17, (__int64)v4, -(v20[1] & 1), a3 + 24, (__int64)va);
    }
LABEL_18:
    if ( !LODWORD(v20[0]) )
      goto LABEL_9;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(a3 + 8);
  if ( !v10 )
    goto LABEL_18;
  LOBYTE(v9) = 1;
  v11 = HMValidateHandleNoSecure(v10, v9);
  v12 = v20[0];
  if ( v11 )
  {
    HIDWORD(v20[5]) = 2;
    v12 = LODWORD(v20[0]) | 4;
    DWORD2(v20[5]) |= 1u;
    LODWORD(v20[0]) |= 4u;
    *(_QWORD *)&v20[5] = v11;
    DWORD1(v20[7]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) + 1080LL);
  }
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_q(
      (_DWORD)gBaseLog,
      v12,
      5,
      11,
      (__int64)&WPP_8b084b8aee793b57ef299e467cb2c8ed_Traceguids,
      *(_QWORD *)(a3 + 8));
    goto LABEL_18;
  }
LABEL_8:
  *(_QWORD *)&v20[6] = *(_QWORD *)(a3 + 96);
  LODWORD(v20[7]) = *(_DWORD *)(a3 + 104);
  DWORD1(v20[0]) = *(_DWORD *)(a3 + 108);
LABEL_9:
  CInputDest::CInputDest(a2, (const struct tagINPUTDEST *)v20);
  return a2;
}
