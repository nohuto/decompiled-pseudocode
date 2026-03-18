/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00F9684
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimFindHoldingFrame @ 0x1C0058948 (rimFindHoldingFrame.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00AB670 (EtwTraceBeginPointerFrameCommit.c)
 *     rimReclaimHoldingFrame @ 0x1C00F98E4 (rimReclaimHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *HoldingFrame; // rdi
  const GUID *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // esi
  _DWORD *v16; // rax
  _DWORD *v17; // r14
  _QWORD *v18; // rax
  __int64 i; // r8
  __int64 v20; // r9
  _OWORD *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r15
  int v24; // ecx
  __int64 v25; // rax

  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( HoldingFrame[3] != *(_QWORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  v10 = *((unsigned int *)HoldingFrame + 10);
  if ( !(_DWORD)v10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v10);
    v10 = *((unsigned int *)HoldingFrame + 10);
  }
  if ( (_DWORD)v10 != *((_DWORD *)HoldingFrame + 11) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v10);
    LODWORD(v10) = *((_DWORD *)HoldingFrame + 10);
  }
  EtwTraceBeginPointerFrameCommit(0LL, v10, v9);
  v11 = HoldingFrame[7];
  v12 = 0LL;
  while ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 4);
    v11 = *(_QWORD *)(v11 + 16);
    v12 = ((v13 + 7) & 0xFFFFFFF8) + (_DWORD)v12 + 24;
  }
  v14 = 168 * *((_DWORD *)HoldingFrame + 10);
  v15 = v12 + v14 + 96;
  if ( v15 )
  {
    v16 = Win32AllocPoolZInit(v15, 0x66637352u);
    v17 = v16;
    if ( v16 )
    {
      *v16 = v15;
      v12 = 0LL;
      v18 = v16 + 2;
      v18[1] = v18;
      *v18 = v18;
      v17[6] = *((_DWORD *)HoldingFrame + 10);
      *((_QWORD *)v17 + 4) = HoldingFrame[3];
      *((_QWORD *)v17 + 5) = HoldingFrame[4];
      *((_QWORD *)v17 + 11) = v17 + 24;
      for ( i = HoldingFrame[9]; (unsigned int)v12 < *((_DWORD *)HoldingFrame + 10); i += 168LL )
      {
        v20 = 168LL * (unsigned int)v12;
        v21 = (_OWORD *)(v20 + *((_QWORD *)v17 + 11));
        *v21 = *(_OWORD *)i;
        v21[1] = *(_OWORD *)(i + 16);
        v21[2] = *(_OWORD *)(i + 32);
        v21[3] = *(_OWORD *)(i + 48);
        v21[4] = *(_OWORD *)(i + 64);
        v21[5] = *(_OWORD *)(i + 80);
        v21[6] = *(_OWORD *)(i + 96);
        v11 = (__int64)(v21 + 8);
        *(_OWORD *)(v11 - 16) = *(_OWORD *)(i + 112);
        *(_OWORD *)v11 = *(_OWORD *)(i + 128);
        *(_OWORD *)(v11 + 16) = *(_OWORD *)(i + 144);
        *(_QWORD *)(v11 + 32) = *(_QWORD *)(i + 160);
        if ( i == HoldingFrame[10] )
        {
          v11 = v20 + *((_QWORD *)v17 + 11);
          *((_QWORD *)v17 + 9) = v11;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      v17[7] = *((_DWORD *)HoldingFrame + 12);
      v22 = HoldingFrame[7];
      if ( v22 )
      {
        v23 = *((_QWORD *)v17 + 11) + v14;
        *((_QWORD *)v17 + 10) = v23;
        v22 = HoldingFrame[7];
      }
      else
      {
        v23 = *((_QWORD *)v17 + 10);
      }
      while ( v22 )
      {
        while ( 1 )
        {
          *(_DWORD *)v23 = *(_DWORD *)v22;
          *(_DWORD *)(v23 + 4) = *(_DWORD *)(v22 + 4);
          *(_QWORD *)(v23 + 8) = v23 + 24;
          memmove((void *)(v23 + 24), *(const void **)(v22 + 8), *(unsigned int *)(v22 + 4));
          v12 = v22 + 16;
          v24 = *(_DWORD *)(v22 + 4) + 7;
          *(_QWORD *)(v23 + 16) = 0LL;
          v22 = *(_QWORD *)(v22 + 16);
          v11 = (v24 & 0xFFFFFFF8) + 24;
          v25 = 0LL;
          if ( v22 )
          {
            v25 = v23 + (unsigned int)v11;
            *(_QWORD *)(v23 + 16) = v25;
            v22 = *(_QWORD *)v12;
          }
          v23 = v25;
          if ( !v25 )
            break;
          if ( !v22 )
            goto LABEL_29;
        }
        if ( !v22 )
          break;
LABEL_29:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v12);
      }
      *a3 = v17;
      v3 = 1;
    }
  }
  rimReclaimHoldingFrame(v11, v12, HoldingFrame);
  return v3;
}
