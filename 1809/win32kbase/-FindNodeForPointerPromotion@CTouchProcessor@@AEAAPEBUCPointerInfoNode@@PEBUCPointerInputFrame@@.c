/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01384F8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C013F4E8 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C01646E4 (ApiSetPointerPromotionGetCurrentPointerId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  __int16 CurrentPointerId; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  CPointerInfoNode *v10; // rbx
  unsigned __int64 v11; // rcx
  CPointerInfoNode *v12; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 15) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 23) & 4) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId();
    if ( !CurrentPointerId )
      return 0LL;
  }
  v8 = *((_DWORD *)a2 + 12);
  v9 = 0;
  v10 = (CPointerInfoNode *)*((_QWORD *)a2 + 13);
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    v11 = *((_QWORD *)a2 + 13) + 576LL * v8;
    if ( (unsigned __int64)v10 >= v11 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v5, v7);
    if ( (unsigned int)CPointerInfoNode::IsValid(v10)
      && (*(_DWORD *)v10 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v12) || CurrentPointerId == *((_WORD *)v10 + 118)) )
    {
      break;
    }
    v8 = *((_DWORD *)a2 + 12);
    ++v9;
    v10 = (CPointerInfoNode *)((char *)v10 + 576);
    if ( v9 >= v8 )
      return 0LL;
  }
  return v10;
}
