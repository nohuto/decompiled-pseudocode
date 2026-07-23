/*
 * XREFs of VfTargetEtwRegister @ 0x140935B08
 * Callers:
 *     VerifierEtwRegister @ 0x140946D00 (VerifierEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x140946D40 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400F5708 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14016C530 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14030B7A4 (VfAvlInitializeLockContext.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall VfTargetEtwRegister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  _QWORD *PoolWithTag; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfSafeMode )
  {
    v4 = 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x54456656u);
    VfAvlInitializeLockContext((__int64)v10, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v10, a2, 1LL);
    if ( v6 )
    {
      v7 = v6[7];
      if ( PoolWithTag )
      {
        if ( v7 )
        {
          v8 = v7 + 16;
          PoolWithTag[2] = a1;
          PoolWithTag[3] = a2;
          v9 = *(_QWORD **)(v8 + 8);
          if ( *v9 != v8 )
            __fastfail(3u);
          *PoolWithTag = v8;
          v4 = 1;
          PoolWithTag[1] = v9;
          *v9 = PoolWithTag;
          *(_QWORD *)(v8 + 8) = PoolWithTag;
        }
      }
      else if ( v7 )
      {
        *(_DWORD *)(v7 + 32) |= 1u;
      }
    }
    VfAvlCleanupLockContext((__int64)v10);
    if ( !v4 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x54456656u);
    }
  }
}
