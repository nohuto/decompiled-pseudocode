/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C0164674
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0165E1C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016B8BC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C016BE10 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C019DD8C (ApiSetPointerPromotionGetCurrentPointerId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 CurrentPointerId; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ecx
  unsigned int v8; // ebp
  CPointerInfoNode *v9; // rbx
  unsigned __int64 v10; // rcx
  CPointerInfoNode *v11; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 18) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 28) & 8) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId();
    if ( !CurrentPointerId )
      return 0LL;
  }
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0;
  v9 = (CPointerInfoNode *)*((_QWORD *)a2 + 16);
  if ( !v7 )
    return 0LL;
  while ( 1 )
  {
    v10 = *((_QWORD *)a2 + 16) + 496LL * v7;
    if ( (unsigned __int64)v9 >= v10 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v4, v6);
    if ( (unsigned int)CPointerInfoNode::IsValid(v9)
      && (*(_DWORD *)v9 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v11) || CurrentPointerId == *((_WORD *)v9 + 90)) )
    {
      break;
    }
    v7 = *((_DWORD *)a2 + 12);
    ++v8;
    v9 = (CPointerInfoNode *)((char *)v9 + 496);
    if ( v8 >= v7 )
      return 0LL;
  }
  return v9;
}
