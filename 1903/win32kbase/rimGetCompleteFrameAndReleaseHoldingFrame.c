/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C014FDE4
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C014F320 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     rimFindHoldingFrame @ 0x1C0072814 (rimFindHoldingFrame.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C014E968 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     rimReclaimHoldingFrame @ 0x1C01503F4 (rimReclaimHoldingFrame.c)
 *     ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C019EBE8 (ApiSetEtwTraceBeginPointerFrameCommit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *HoldingFrame; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdx
  int v13; // eax
  __int64 v14; // r15
  unsigned int v15; // esi
  _DWORD *v16; // rax
  _DWORD *v17; // r14
  unsigned int v18; // ebp
  _QWORD *v19; // rax
  __int64 i; // rsi
  __int64 v21; // r12
  _OWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r15
  __int64 v25; // r8
  int v26; // eax
  unsigned int v27; // eax

  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  if ( HoldingFrame[3] != *(_QWORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  v10 = *((unsigned int *)HoldingFrame + 10);
  if ( !(_DWORD)v10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v10, v9);
    v10 = *((unsigned int *)HoldingFrame + 10);
  }
  if ( (_DWORD)v10 != *((_DWORD *)HoldingFrame + 11) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v10, v9);
    v10 = *((unsigned int *)HoldingFrame + 10);
  }
  ApiSetEtwTraceBeginPointerFrameCommit(v7, v10);
  v11 = HoldingFrame[7];
  v12 = 0LL;
  while ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 4);
    v11 = *(_QWORD *)(v11 + 16);
    v12 = (__int64 *)(((v13 + 7) & 0xFFFFFFF8) + (_DWORD)v12 + 24);
  }
  v14 = (unsigned int)(192 * *((_DWORD *)HoldingFrame + 10));
  v15 = (_DWORD)v12 + v14 + 120;
  if ( v15 )
  {
    v16 = Win32AllocPoolZInit(v15, 1717793618LL);
    v17 = v16;
    if ( v16 )
    {
      *v16 = v15;
      v18 = 0;
      v19 = v16 + 2;
      v19[1] = v19;
      *v19 = v19;
      v17[6] = *((_DWORD *)HoldingFrame + 10);
      *((_QWORD *)v17 + 4) = HoldingFrame[3];
      *((_QWORD *)v17 + 5) = HoldingFrame[4];
      *((_QWORD *)v17 + 14) = v17 + 30;
      for ( i = HoldingFrame[9]; v18 < *((_DWORD *)HoldingFrame + 10); i += 192LL )
      {
        v21 = 192LL * v18;
        v22 = (_OWORD *)(v21 + *((_QWORD *)v17 + 14));
        *v22 = *(_OWORD *)i;
        v22[1] = *(_OWORD *)(i + 16);
        v22[2] = *(_OWORD *)(i + 32);
        v22[3] = *(_OWORD *)(i + 48);
        v22[4] = *(_OWORD *)(i + 64);
        v22[5] = *(_OWORD *)(i + 80);
        v22[6] = *(_OWORD *)(i + 96);
        v22[7] = *(_OWORD *)(i + 112);
        v22[8] = *(_OWORD *)(i + 128);
        v22[9] = *(_OWORD *)(i + 144);
        v22[10] = *(_OWORD *)(i + 160);
        v22[11] = *(_OWORD *)(i + 176);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_D(
            (_DWORD)gRimLog,
            (_DWORD)v12,
            1,
            26,
            (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
            v18);
        }
        DumpPointerEventInt((struct tagPOINTEREVENTINT *)(i + 8), (int)v12);
        if ( i == HoldingFrame[10] )
        {
          v11 = v21 + *((_QWORD *)v17 + 14);
          *((_QWORD *)v17 + 12) = v11;
        }
        ++v18;
      }
      v17[7] = *((_DWORD *)HoldingFrame + 12);
      v23 = HoldingFrame[7];
      if ( v23 )
      {
        v24 = *((_QWORD *)v17 + 14) + v14;
        *((_QWORD *)v17 + 13) = v24;
        v23 = HoldingFrame[7];
      }
      else
      {
        v24 = *((_QWORD *)v17 + 13);
      }
      while ( v23 )
      {
        while ( 1 )
        {
          *(_DWORD *)v24 = *(_DWORD *)v23;
          *(_DWORD *)(v24 + 4) = *(_DWORD *)(v23 + 4);
          *(_QWORD *)(v24 + 8) = v24 + 24;
          memmove((void *)(v24 + 24), *(const void **)(v23 + 8), *(unsigned int *)(v23 + 4));
          v12 = (__int64 *)(v23 + 16);
          v26 = *(_DWORD *)(v23 + 4) + 7;
          *(_QWORD *)(v24 + 16) = 0LL;
          v23 = *(_QWORD *)(v23 + 16);
          v27 = (v26 & 0xFFFFFFF8) + 24;
          v11 = 0LL;
          if ( v23 )
          {
            v11 = v24 + v27;
            *(_QWORD *)(v24 + 16) = v11;
            v23 = *v12;
          }
          v24 = v11;
          if ( !v11 )
            break;
          if ( !v23 )
            goto LABEL_31;
        }
        if ( !v23 )
          break;
LABEL_31:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v12, v25);
      }
      *a3 = v17;
      v3 = 1;
    }
  }
  rimReclaimHoldingFrame(v11, v12, HoldingFrame);
  return v3;
}
