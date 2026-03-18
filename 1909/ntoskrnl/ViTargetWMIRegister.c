/*
 * XREFs of ViTargetWMIRegister @ 0x140974A24
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x140985790 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140154CBC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140328CF0 (VfAvlInitializeLockContext.c)
 */

unsigned __int8 __fastcall ViTargetWMIRegister(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v7[1] = 0LL;
  VfAvlInitializeLockContext((__int64)v7, 1);
  v4 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v7, v2, v3);
  if ( v4 )
  {
    v5 = v4[7];
    if ( v5 )
      *(_QWORD *)(v5 + 8) = a1;
  }
  return VfAvlCleanupLockContext((__int64)v7);
}
