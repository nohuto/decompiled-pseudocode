/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C002F4CC
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001A108 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001E68 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C00025F4 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
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
  int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // ecx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rdi
  _OWORD v22[11]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v23[11]; // [rsp+E0h] [rbp-20h] BYREF
  va_list va; // [rsp+1F0h] [rbp+F0h] BYREF

  va_start(va, a4);
  v4 = *(void **)(a3 + 16);
  if ( a4 == 6 || !a4 )
    MicrosoftTelemetryAssertTriggeredMsgKM("We should get here only for true input related pointer types");
  memset(v23, 0, sizeof(v23));
  if ( v4 )
  {
    if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a1, v4, a4, (struct tagINPUTDEST *)v23) && (v23[0] & 4) != 0 )
    {
      v21 = 0LL;
      if ( DWORD1(v23[5]) == 2 )
      {
        LOBYTE(v20) = 1;
        v21 = HMValidateHandleNoSecure(*(_QWORD *)(a3 + 8), v20);
        if ( !v21 )
        {
          memset(v22, 0, sizeof(v22));
          v23[0] = v22[0];
          v23[1] = v22[1];
          v23[2] = v22[2];
          v23[3] = v22[3];
          v23[4] = v22[4];
          v23[5] = v22[5];
          v23[6] = v22[6];
          v23[7] = v22[7];
          v23[8] = v22[8];
          v23[9] = v22[9];
          v23[10] = v22[10];
          goto LABEL_17;
        }
      }
      else if ( DWORD1(v23[5]) != 1 )
      {
        MicrosoftTelemetryAssertTriggeredMsgKM("Expect base window");
      }
      if ( (v23[0] & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredMsgKM("Expect that this INPUTDEST has window");
      ApiSetEditionUpdateInputTransformFromHitTest(
        (__int64)v23,
        v21,
        (__int64)v4,
        -(BYTE12(v23[0]) & 1),
        a3 + 24,
        (__int64)va);
    }
LABEL_17:
    if ( !LODWORD(v23[0]) )
      goto LABEL_9;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(a3 + 8);
  if ( !v10 )
    goto LABEL_17;
  LOBYTE(v9) = 1;
  v12 = HMValidateHandleNoSecure(v10, v9);
  v13 = v23[0];
  if ( v12 )
  {
    v13 = LODWORD(v23[0]) | 4;
    DWORD1(v23[5]) = 2;
    LODWORD(v23[5]) |= 1u;
    LODWORD(v23[0]) |= 4u;
    *((_QWORD *)&v23[4] + 1) = v12;
  }
  if ( !v13 )
  {
    LOBYTE(v11) = 3;
    WPP_RECORDER_SF_q(
      *((_QWORD *)a1 + 1),
      v11,
      8,
      11,
      (__int64)&WPP_60fe7c87ea7f3241f2da4ccd4094f073_Traceguids,
      *(_QWORD *)(a3 + 8));
    goto LABEL_17;
  }
LABEL_8:
  v14 = *(_OWORD *)(a3 + 24);
  v15 = *(_OWORD *)(a3 + 40);
  *((_QWORD *)&v23[5] + 1) = *(_QWORD *)(a3 + 144);
  v16 = *(_DWORD *)(a3 + 152);
  v23[6] = v14;
  v17 = *(_OWORD *)(a3 + 56);
  DWORD2(v23[10]) = v16;
  v23[7] = v15;
  v18 = *(_OWORD *)(a3 + 72);
  v23[8] = v17;
  v23[9] = v18;
LABEL_9:
  CInputDest::CInputDest(a2, (const struct tagINPUTDEST *)v23);
  return a2;
}
