/*
 * XREFs of ViTargetWMIDeregister @ 0x14097495C
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x140985790 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1403292A0 (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x14097D96C (VfAvlEnumerateNodes.c)
 */

unsigned __int8 __fastcall ViTargetWMIDeregister(__int64 a1)
{
  int v2; // edx
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = 0LL;
  v8[1] = 0LL;
  VfAvlInitializeLockContext((__int64)v8, 0);
  v4 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v8, v3, (unsigned int)(v2 + 1));
  if ( v4 && (v6 = v4[7]) != 0 && *(_QWORD *)(v6 + 8) == a1 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  else
  {
    ++ViTargetWMIRegistrationMismatches;
    ((void (__fastcall *)(__int64, _QWORD *, __int64 (__fastcall *)(), __int64))VfAvlEnumerateNodes)(
      v5,
      v8,
      ViTargetWMIDeregisterCallback,
      a1);
  }
  return VfAvlCleanupLockContext((__int64)v8);
}
