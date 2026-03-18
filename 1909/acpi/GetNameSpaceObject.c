/*
 * XREFs of GetNameSpaceObject @ 0x1C001AD04
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C0006870 (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0006FB0 (AMLIApplyNamespaceOverride.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001CFD4 (ParseAndGetNameSpaceObject.c)
 *     Load @ 0x1C001E7B0 (Load.c)
 *     Field @ 0x1C002A090 (Field.c)
 *     Scope @ 0x1C002BEF0 (Scope.c)
 *     Alias @ 0x1C002E750 (Alias.c)
 *     IndexField @ 0x1C002F8E0 (IndexField.c)
 *     Simulator_EvaluateNode @ 0x1C0063644 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C006390C (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0063D58 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0063E84 (AMLICreateNativeNamespaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C006464C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C00649D0 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C00653C4 (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x1C0065984 (DebugExpr.c)
 *     DebugNotify @ 0x1C0065C60 (DebugNotify.c)
 *     BankField @ 0x1C0066AC0 (BankField.c)
 *     LoadTable @ 0x1C00690A0 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C0069CA0 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C00193E0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v10; // bl
  unsigned int NameSpaceObjectNoLock; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v8);
  PoolWithTag[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return NameSpaceObjectNoLock;
}
