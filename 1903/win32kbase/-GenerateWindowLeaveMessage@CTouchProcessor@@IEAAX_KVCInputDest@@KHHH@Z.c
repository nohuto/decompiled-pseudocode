/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0169144
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C016FA48 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0167B6C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0171574 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0176D08 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        PDEVICE_OBJECT a1,
        __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  unsigned __int64 v9; // rbx
  struct _KTHREAD **v10; // rbp
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  const struct CPointerInputFrame *v14; // rsi
  __int64 v15; // rax
  CPointerInfoNode *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // [rsp+20h] [rbp-D8h]
  _BYTE v24[121]; // [rsp+50h] [rbp-A8h] BYREF
  int v25; // [rsp+C9h] [rbp-2Fh]
  __int16 v26; // [rsp+CDh] [rbp-2Bh]
  char v27; // [rsp+CFh] [rbp-29h]

  v9 = a2;
  v10 = (struct _KTHREAD **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        207,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
  if ( v10[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v9 )
  {
    v14 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)v10, *(_DWORD *)(v9 + 28));
    if ( v14 )
    {
      v15 = *(unsigned int *)(v9 + 32);
      if ( (unsigned int)v15 >= *((_DWORD *)v14 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, a2, a3);
        v15 = *(unsigned int *)(v9 + 32);
      }
      v16 = (CPointerInfoNode *)(*((_QWORD *)v14 + 16) + 496 * v15);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      if ( *((_WORD *)v16 + 90) != *(_WORD *)(v9 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      if ( !a5 )
      {
        v25 = 0;
        v26 = 0;
        v27 = 0;
        memset(v24, 0, sizeof(v24));
        if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                              (CTouchProcessor *)v10,
                              (__int64)v16,
                              v9,
                              v14,
                              0x24Au,
                              a4,
                              a6,
                              a7,
                              (CInputDest *)v24)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_HL(v21, v20, v22, 212, v23, *(_WORD *)(v9 + 16), *((_WORD *)v16 + 84));
        }
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v10, v14);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 213;
          goto LABEL_29;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 7, 210, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 211;
          goto LABEL_29;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 7, 208, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 209;
LABEL_29:
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(v11->DeviceExtension, a2, 7, v12, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3, a2, (__int64)a3);
}
