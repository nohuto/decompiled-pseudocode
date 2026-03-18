/*
 * XREFs of ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C001CACC
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C001CA50 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@MEAAJPEAVCToken@@@Z @ 0x1C0059D30 (-AddTokenToQueueAndSignalTokenEvent@CTokenManager@@MEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C001CB44 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C001CBCC (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CompositionSurfaceObject **a2)
{
  int v4; // edi
  CTokenQueue *v5; // rcx
  struct CTokenManager::TokenQueueTableEntry *v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(struct CompositionSurfaceObject **))*a2 + 21))(a2) )
  {
    v5 = (CTokenManager *)((char *)this + 320);
    goto LABEL_4;
  }
  v4 = CTokenManager::EnsureTokenQueue(this, a2[4], &v7);
  if ( v4 >= 0 )
  {
    v5 = (CTokenQueue *)*((_QWORD *)v7 + 1);
LABEL_4:
    CTokenQueue::AddToken(v5, (struct CToken *)a2);
  }
  return (unsigned int)v4;
}
