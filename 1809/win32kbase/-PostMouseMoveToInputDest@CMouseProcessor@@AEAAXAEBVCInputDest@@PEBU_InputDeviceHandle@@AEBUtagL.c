/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C00705AC
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C002EE8C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C006F730 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003254C (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     SetUnavailableInputSource @ 0x1C00696C0 (SetUnavailableInputSource.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006F260 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006F57C (ApiSetEditionPostInputMessage.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C006F6B4 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C00818DC (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0087958 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToInputDest(
        __int64 *a1,
        CInputDest *a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5)
{
  int *v5; // r15
  const struct CInputDest *v8; // rdx
  struct tagWND *UserWindow; // r12
  __int64 *InputMessageSource; // rsi
  int v11; // edi
  CMouseProcessor *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 Queue; // rax
  const struct CInputDest *v16; // rdx
  struct tagINPUT_MESSAGE_SOURCE *v17; // rax

  v5 = (int *)(a1 + 315);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor::MouseMoveTimes *)(a1 + 315));
  if ( !anonymous_namespace_::InMouseRawInputMode((__int64)a2, 0, 1) )
  {
    if ( (a5 & 2) != 0 )
      UserWindow = CInputDest::GetUserWindow(a2);
    else
      UserWindow = 0LL;
    InputMessageSource = (__int64 *)QHelper::GetInputMessageSource(a2, v8);
    v11 = a5 & 1 | 0x20;
    if ( (a5 & 4) == 0 )
      v11 = a5 & 1;
    v12 = (CMouseProcessor *)*a4;
    v13 = (int)((unsigned int)v12 | (a4[2] << 16));
    v14 = CMouseProcessor::AddMouseKeysToWParam(v12, 0LL);
    ApiSetEditionPostInputMessage(
      (__int64)a2,
      (__int64)UserWindow,
      0x200u,
      v14,
      v13,
      *v5,
      a1[316],
      a1[306],
      v11,
      InputMessageSource,
      a3,
      0LL);
  }
  Queue = CInputDest::GetQueue(a2, 0);
  if ( Queue )
    *(_DWORD *)(Queue + 388) &= ~0x20u;
  v17 = QHelper::GetInputMessageSource(a2, v16);
  SetUnavailableInputSource(v17);
  *(_OWORD *)v5 = 0uLL;
}
