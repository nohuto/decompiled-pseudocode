/*
 * XREFs of GetNameSpaceObject @ 0x1C0021288
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C0021208 (ParseAndGetNameSpaceObject.c)
 *     Field @ 0x1C00215D0 (Field.c)
 *     Scope @ 0x1C0022360 (Scope.c)
 *     CreateNativeNameSpaceObject @ 0x1C00229A0 (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0022C10 (Alias.c)
 *     AMLIApplyNamespaceOverride @ 0x1C00230F0 (AMLIApplyNamespaceOverride.c)
 *     IndexField @ 0x1C00231D0 (IndexField.c)
 *     Load @ 0x1C00248D0 (Load.c)
 *     Simulator_EvaluateNode @ 0x1C00616C4 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C006198C (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0061DD8 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0061EF8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C00626C0 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0062A44 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C0063414 (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x1C006393C (DebugExpr.c)
 *     DebugNotify @ 0x1C0063C20 (DebugNotify.c)
 *     BankField @ 0x1C0064AD0 (BankField.c)
 *     LoadTable @ 0x1C0067040 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C0067C40 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0008BF0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 *a3, unsigned int a4)
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
