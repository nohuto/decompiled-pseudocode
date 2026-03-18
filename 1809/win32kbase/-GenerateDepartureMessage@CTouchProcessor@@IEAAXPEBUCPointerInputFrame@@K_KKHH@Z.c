/*
 * XREFs of ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C013978C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C013F5EC (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0148078 (WPP_RECORDER_SF_LL.c)
 *     GetHMonitorFromPointerInfo @ 0x1C01510D0 (GetHMonitorFromPointerInfo.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C016350C (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateDepartureMessage(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // rbx
  int v9; // edx
  int v10; // r8d
  __int64 HMonitorFromPointerInfo; // rax
  _BYTE v12[184]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD5u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v8 = *((_QWORD *)a2 + 13) + 576 * v5;
  if ( (*(_DWORD *)(v8 + 244) & 2) == 0 )
  {
    if ( (*(_DWORD *)v8 & 0x1000) == 0 )
    {
      memset(v12, 0, sizeof(v12));
      v12[176] = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v8, a4, a2) )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v9, v10, 214, 586, *(_DWORD *)(v8 + 236), *(_WORD *)(v8 + 224));
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v8) )
    {
      HMonitorFromPointerInfo = GetHMonitorFromPointerInfo(v8 + 232);
      ApiSetEditionSendCursorSuppressionUpdate(0LL, HMonitorFromPointerInfo);
    }
    CTouchProcessor::UnreferenceMsgData(this, a4, 1LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD7u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
}
