/*
 * XREFs of ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0032C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseMove(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  const struct CMouseProcessor::CMouseEvent *v2; // rbx
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 6, 43, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
  }
  v4[1] = *((_QWORD *)v2 + 1);
  v5 = 1;
  v4[0] = &CMouseProcessor::CMoveEvent::`vftable';
  CMouseProcessor::ProcessMouseMove(this, (const struct CMouseProcessor::CMoveEvent *)v4);
}
