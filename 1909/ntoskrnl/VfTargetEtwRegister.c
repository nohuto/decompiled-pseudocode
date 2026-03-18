/*
 * XREFs of VfTargetEtwRegister @ 0x1409740DC
 * Callers:
 *     VerifierEtwRegister @ 0x1409856D0 (VerifierEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x140985710 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140154CBC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140328CF0 (VfAvlInitializeLockContext.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall VfTargetEtwRegister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  _QWORD *PoolWithTag; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  if ( !VfSafeMode )
  {
    v4 = 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x54456656u);
    VfAvlInitializeLockContext((__int64)v10, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v10, a2, 1LL);
    if ( v6 )
    {
      v7 = v6[7];
      if ( v7 )
      {
        if ( PoolWithTag )
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
        else
        {
          *(_DWORD *)(v7 + 32) |= 1u;
        }
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
