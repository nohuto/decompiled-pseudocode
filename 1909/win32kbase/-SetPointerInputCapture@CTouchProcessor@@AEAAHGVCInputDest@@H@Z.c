/*
 * XREFs of ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C01721B8
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C015EBB0 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01645CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInputCapture(struct _KTHREAD **a1, __int64 a2, CInputDest *a3)
{
  unsigned __int16 v4; // bp
  unsigned int v6; // ebx
  struct CInputPointerNode *NodeById; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct CInputPointerNode *v10; // rsi

  v4 = a2;
  if ( a1[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = 0;
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, v4, 0, 0);
  v10 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 64, (__int64)a3, v9);
    v6 = 1;
    *((_DWORD *)v10 + 72) = *((_DWORD *)v10 + 72) & 0xFFFFFF8F | 0x10;
  }
  CInputDest::SetEmpty(a3, v8, v9);
  return v6;
}
