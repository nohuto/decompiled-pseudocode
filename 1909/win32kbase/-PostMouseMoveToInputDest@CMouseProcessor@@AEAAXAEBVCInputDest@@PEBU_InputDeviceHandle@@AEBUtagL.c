/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C004DB80
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037E48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C004E37C (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00381D8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0038E78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C004DCF4 (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     ApiSetEditionPostInputMessage @ 0x1C004DD1C (ApiSetEditionPostInputMessage.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004DE68 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C004E1F8 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 */

struct tagINPUT_MESSAGE_SOURCE *__fastcall CMouseProcessor::PostMouseMoveToInputDest(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5)
{
  __int64 *v5; // r14
  const struct CInputDest *v8; // rdx
  __int64 v9; // r15
  struct tagINPUT_MESSAGE_SOURCE *InputMessageSource; // rsi
  int v11; // edi
  CMouseProcessor *v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 Queue; // rax
  const struct CInputDest *v16; // rdx
  struct tagINPUT_MESSAGE_SOURCE *result; // rax

  v5 = a1 + 404;
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor::MouseMoveTimes *)(a1 + 404));
  if ( !anonymous_namespace_::InMouseRawInputMode(a2, 0LL, 1LL) )
  {
    if ( (a5 & 2) != 0 && *(_DWORD *)(a2 + 92) == 2 )
      v9 = *(_QWORD *)(a2 + 80);
    else
      LODWORD(v9) = 0;
    InputMessageSource = QHelper::GetInputMessageSource((QHelper *)a2, v8);
    v11 = a5 & 1 | 0x10;
    if ( (a5 & 4) == 0 )
      v11 = a5 & 1;
    v12 = (CMouseProcessor *)*a4;
    v13 = (int)((unsigned int)v12 | (a4[2] << 16));
    v14 = CMouseProcessor::AddMouseKeysToWParam(v12, 0LL);
    ApiSetEditionPostInputMessage(
      a2,
      v9,
      512,
      v14,
      v13,
      *(_DWORD *)v5,
      a1[405],
      a1[394],
      v11,
      (__int64)InputMessageSource,
      a3,
      0LL);
  }
  Queue = CInputDest::GetQueue((CInputDest *)a2, 0LL);
  if ( Queue )
    *(_DWORD *)(Queue + 396) &= ~0x20u;
  result = QHelper::GetInputMessageSource((QHelper *)a2, v16);
  if ( result )
    *(_QWORD *)result = 0LL;
  *(_OWORD *)v5 = 0u;
  v5[2] = 0LL;
  return result;
}
