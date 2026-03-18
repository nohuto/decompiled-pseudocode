/*
 * XREFs of ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C016693C
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C016D858 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C004EAF0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C015E5C4 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C016596C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C016F384 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173210 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0174B18 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedAwayMessages(
        PDEVICE_OBJECT a1,
        __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned __int64 v8; // rbx
  struct _KTHREAD **v9; // rbp
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  __int64 v12; // rcx
  const struct CPointerInputFrame *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  CInputDest *v22; // rax
  int v23; // [rsp+20h] [rbp-158h]
  _BYTE v24[121]; // [rsp+50h] [rbp-128h] BYREF
  int v25; // [rsp+C9h] [rbp-AFh]
  __int16 v26; // [rsp+CDh] [rbp-ABh]
  char v27; // [rsp+CFh] [rbp-A9h]
  _BYTE v28[128]; // [rsp+D0h] [rbp-A8h] BYREF

  v8 = a2;
  v9 = (struct _KTHREAD **)a1;
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
        223,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
  if ( v9[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v8 )
  {
    v13 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)v9, *(_DWORD *)(v8 + 28));
    if ( v13 )
    {
      v14 = *(unsigned int *)(v8 + 32);
      if ( (unsigned int)v14 >= *((_DWORD *)v13 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, a2, a3);
        v14 = *(unsigned int *)(v8 + 32);
      }
      v15 = *((_QWORD *)v13 + 16) + 496 * v14;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      if ( *(_WORD *)(v15 + 180) != *(_WORD *)(v8 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      v25 = 0;
      v26 = 0;
      v27 = 0;
      memset(v24, 0, sizeof(v24));
      if ( (unsigned int)CTouchProcessor::GenerateMessage(
                           (CTouchProcessor *)v9,
                           v15,
                           v8,
                           v13,
                           0x252u,
                           a4,
                           a5,
                           a6,
                           (CInputDest *)v24) )
      {
        v22 = CInputDest::CInputDest((CInputDest *)v28, (__int64 **)(v15 + 360));
        CTouchProcessor::AddRoutedAwayTarget((CTouchProcessor *)v9, *(_WORD *)(v15 + 180), v22);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(v20, v19, v21, 228, v23, *(_WORD *)(v8 + 16), *(_WORD *)(v15 + 168));
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)v9, v13);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 229;
          goto LABEL_29;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 7, 226, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 227;
          goto LABEL_29;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 7, 224, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 225;
LABEL_29:
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(v10->DeviceExtension, a2, 7, v11, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3, a2, (__int64)a3);
}
