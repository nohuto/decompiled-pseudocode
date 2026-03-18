/*
 * XREFs of ?CheckForWorkerThreadHang@CScheduler@CComputeScribbleRenderer@@AEBA_NI@Z @ 0x18022EF60
 * Callers:
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18022FBEC (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@@std@@QEBAAEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@XZ @ 0x18022ED68 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UScribbleFrame@CScheduler@CCompu.c)
 */

char __fastcall CComputeScribbleRenderer::CScheduler::CheckForWorkerThreadHang(__int64 **this, int a2)
{
  char v2; // r9
  int v3; // r8d
  __int64 v4; // rax
  int v5; // r10d
  __int64 *v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v7[2] = this[16];
  v3 = a2 - *((_DWORD *)this + 36);
  v7[0] = this[13];
  v7[1] = 0LL;
  if ( v3 > 5 )
  {
    v4 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*(v7);
    if ( v5 - *(_DWORD *)(v4 + 16) > 5 )
      return 1;
  }
  return v2;
}
