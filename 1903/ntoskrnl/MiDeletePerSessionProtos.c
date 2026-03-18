/*
 * XREFs of MiDeletePerSessionProtos @ 0x140138800
 * Callers:
 *     MiFreeSubsectionProtos @ 0x1406E8D08 (MiFreeSubsectionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x140728F20 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiLockLeafPage @ 0x1400DC870 (MiLockLeafPage.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     KeSetPagePrivilege @ 0x1402A4778 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiDeletePerSessionProtos(unsigned __int64 *P)
{
  __int64 *v1; // r9
  ULONG_PTR v2; // r12
  unsigned __int8 v3; // si
  unsigned __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r13
  ULONG_PTR v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+10h]

  v1 = (__int64 *)P[8];
  v2 = 0LL;
  v3 = 17;
  v4 = P[9];
  v19[1] = 0LL;
  v6 = *v1;
  v7 = v1[1];
  v8 = *((unsigned int *)v1 + 11);
  v20 = 17;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v10 = *P + ((v7 - *(_QWORD *)(v6 + 136)) >> 3 << 12);
  v19[0] = v10;
  v11 = *(_QWORD *)(qword_140466188 + 8 * v9);
  v21 = v4 + 8 * v8;
  if ( v4 < v21 )
  {
    do
    {
      if ( (v4 & 0xFFF) == 0 || v3 == 17 )
      {
        if ( v3 != 17 )
          MiUnlockProtoPoolPage(v2, v3);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v4, &v20);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v4, 0, 0LL);
        }
        v3 = v20;
      }
      v12 = MiLockLeafPage((unsigned __int64 *)v4, 0);
      v13 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v12 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v12, v13, v14, v15);
          KeSetPagePrivilege((__int64)(v12 + 0x58000000000LL) / 48, v19, 16LL);
          MiClearPfnImageVerified(v12, 4);
          v10 = v19[0];
        }
        LOBYTE(v14) = 17;
        if ( (unsigned int)MiDeleteTransitionPte(v4, v12, v14, 1) == 3 )
          --v8;
      }
      else
      {
        if ( !v13 )
          break;
        if ( (v13 & 0x400) == 0 )
        {
          v17 = MiSwizzleInvalidPte(768LL);
          if ( v18 != v17 )
            MiReleasePageFileSpace(v11, v18, 1);
        }
      }
      v10 += 4096LL;
      v4 += 8LL;
      v19[0] = v10;
    }
    while ( v4 < v21 );
    if ( v3 != 17 )
      MiUnlockProtoPoolPage(v2, v3);
  }
  MiReturnCommit(v11, v8);
  MiUpdateSystemProtoPtesTree(P + 3, 0);
  ExFreePoolWithTag((PVOID)P[9], 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
