/*
 * XREFs of VfTargetEtwUnregister @ 0x1409741CC
 * Callers:
 *     VerifierEtwUnregister @ 0x140985760 (VerifierEtwUnregister.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1403292A0 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfTargetEtwUnregister(__int64 a1)
{
  int v2; // edi
  void *v3; // rbx
  unsigned __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  if ( !VfSafeMode )
  {
    v2 = 0;
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)v10, 0);
    v5 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v10, v4, 1LL);
    if ( v5 )
    {
      v6 = v5[7];
      if ( v6 )
      {
        v7 = *(_QWORD **)(v6 + 16);
        if ( v7 == (_QWORD *)(v6 + 16) )
        {
LABEL_7:
          if ( !dword_140446658 && (*(_DWORD *)(v6 + 32) & 1) == 0 && (MmVerifierData & 0x800) != 0 )
            VerifierBugCheckIfAppropriate(0xC4u, 0xDCuLL, 0LL, 0LL, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v3 = v7;
            v8 = (_QWORD *)*v7;
            if ( v7[2] == a1 )
              break;
            v7 = (_QWORD *)*v7;
            if ( v8 == (_QWORD *)(v6 + 16) )
              goto LABEL_7;
          }
          v2 = 1;
          if ( (_QWORD *)v8[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
            __fastfail(3u);
          *v9 = v8;
          v8[1] = v9;
        }
      }
    }
    VfAvlCleanupLockContext((__int64)v10);
    if ( v2 )
      ExFreePoolWithTag(v3, 0);
  }
}
