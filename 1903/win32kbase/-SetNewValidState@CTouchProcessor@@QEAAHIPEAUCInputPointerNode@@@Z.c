/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01727F4
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0162064 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0164BE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0175A5C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1C0176DE0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0176FD4 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(struct _KTHREAD **this, __int64 a2, struct CInputPointerNode *a3)
{
  unsigned int v4; // ebp
  _QWORD *v5; // rdx
  int v6; // ecx
  BOOL v7; // ebx
  int v9; // esi
  bool v10; // zf
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-38h]

  v4 = a2;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = &WPP_06d7dff703a03015e007562f188a8383_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      7,
      63,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    v5 = &WPP_06d7dff703a03015e007562f188a8383_Traceguids;
  }
  v6 = 1;
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v9 = 2;
  }
  else
  {
    if ( (v4 & 0x70006) == 0x20000 )
    {
      v10 = *((_DWORD *)a3 + 13) == 1;
      v9 = 3;
LABEL_25:
      v7 = v10;
      goto LABEL_30;
    }
    if ( (v4 & 0x70006) != 0x20002 )
    {
      if ( (v4 & 0x70006) == 0x20006 )
      {
        v9 = 2;
        v10 = *((_DWORD *)a3 + 13) == 2;
      }
      else
      {
        if ( (v4 & 0x70006) == 0x40000 )
        {
          v9 = 3;
        }
        else
        {
          if ( (v4 & 0x70006) != 0x40002 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v5) = 2;
              WPP_RECORDER_SF_L(1, (_DWORD)v5, 7, 64, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids, v4);
            }
            goto LABEL_14;
          }
          v9 = 1;
        }
        v10 = *((_DWORD *)a3 + 13) == 2;
      }
      goto LABEL_25;
    }
    v9 = 1;
  }
  v7 = *((_DWORD *)a3 + 13) <= 1u;
LABEL_30:
  if ( !v7 )
    goto LABEL_15;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x1F0) == 0 )
    {
LABEL_14:
      v7 = 0;
      goto LABEL_15;
    }
    v7 = 1;
  }
  if ( (*((_DWORD *)a3 + 72) & 8) != 0 )
  {
    v7 = (v4 & 0x8000) != 0;
    if ( (v4 & 0x8000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, &WPP_06d7dff703a03015e007562f188a8383_Traceguids, a3);
  }
  if ( v7 )
  {
    *((_DWORD *)a3 + 13) = v9;
    if ( v9 == 3 )
    {
      v11 = (_QWORD *)((char *)a3 + 16);
      v12 = *((_QWORD *)a3 + 2);
      if ( (struct CInputPointerNode *)v12 != (struct CInputPointerNode *)((char *)a3 + 16) )
      {
        if ( *(_QWORD **)(v12 + 8) != v11 || (v5 = (_QWORD *)*((_QWORD *)a3 + 3), (_QWORD *)*v5 != v11) )
          __fastfail(3u);
        *v5 = v12;
        *(_QWORD *)(v12 + 8) = v5;
        *((_QWORD *)a3 + 3) = (char *)a3 + 16;
        *v11 = v11;
      }
    }
    *((_DWORD *)a3 + 72) = *((_DWORD *)a3 + 72) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
    goto LABEL_17;
  }
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v7;
  LOBYTE(v5) = 2;
  WPP_RECORDER_SF_LL(v6, (_DWORD)v5, (_DWORD)a3, 65, v13, v4, *((_DWORD *)a3 + 13));
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      7,
      66,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  return v7;
}
