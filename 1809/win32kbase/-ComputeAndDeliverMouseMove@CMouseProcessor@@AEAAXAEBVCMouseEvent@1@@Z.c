/*
 * XREFs of ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00305D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseMove(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  const struct CMouseProcessor::CMouseEvent *v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), (_DWORD)a2, 10, 38, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
  v4 = *(_QWORD *)v2;
  CMouseProcessor::ProcessMouseMove(this, (const struct CMouseProcessor::CMoveEvent *)&v4);
}
