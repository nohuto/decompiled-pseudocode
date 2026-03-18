/*
 * XREFs of ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167854
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     RIMGetHMonitor @ 0x1C01463B0 (RIMGetHMonitor.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0167B6C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C016E100 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0176FD4 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C019E150 (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateEnterMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rbx
  const struct CPointerInputFrame *v6; // rdi
  __int64 v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  _BYTE v17[120]; // [rsp+58h] [rbp-51h] BYREF
  char v18; // [rsp+D0h] [rbp+27h]
  int v19; // [rsp+D1h] [rbp+28h]
  __int16 v20; // [rsp+D5h] [rbp+2Ch]
  char v21; // [rsp+D7h] [rbp+2Eh]

  v5 = a3;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      203,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  v8 = *((_QWORD *)v6 + 16) + 496 * v5;
  if ( (*(_DWORD *)(v8 + 188) & 1) != 0 )
  {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    memset(v17, 0, sizeof(v17));
    v18 = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v8, a4, v6)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_LL(v10, v9, v11, 204, 585, *(_DWORD *)(v8 + 180), *(_WORD *)(v8 + 168));
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v8) )
    {
      v12 = HMValidateHandleNoSecure(*(_QWORD *)(v8 + 192), 19);
      v13 = RIMGetHMonitor(v12);
      ApiSetEditionSendCursorSuppressionUpdate(1LL, v13);
    }
  }
  else
  {
    v14 = *(_DWORD *)v8;
    if ( (*(_DWORD *)v8 & 4) == 0 && (v14 & 8) != 0 || (v14 & 0x40) != 0 )
    {
      v19 = 0;
      v20 = 0;
      v21 = 0;
      memset(v17, 0, sizeof(v17));
      v18 = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v8, a4, v6) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_LL(v15, (_DWORD)a2, v16, 205, 585, *(_DWORD *)(v8 + 180), *(_WORD *)(v8 + 168));
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        206,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
}
