/*
 * XREFs of ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01714C4
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0173AA4 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 * Callees:
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C016D8A4 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // edi
  _DWORD *v6; // rbx
  unsigned int v7; // r15d
  unsigned int v8; // esi
  CPointerInfoNode *v9; // rcx
  __int64 result; // rax

  v3 = a3;
  v4 = 0;
  v6 = (_DWORD *)(*((_QWORD *)a2 + 17) + 168LL * (unsigned int)a3);
  if ( *v6 != (_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0;
  do
  {
    if ( v8 >= v7 )
      break;
    v9 = (CPointerInfoNode *)(*((_QWORD *)a2 + 16) + 496LL * v8);
    if ( *((_DWORD *)v9 + 2) == v3 && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated(v9) )
      v4 = 1;
    ++v8;
  }
  while ( !v4 );
  result = v4;
  v6[37] ^= (v6[37] ^ (8 * v4)) & 8;
  return result;
}
