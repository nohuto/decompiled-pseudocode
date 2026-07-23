/*
 * XREFs of MiDeletePerSessionProtos @ 0x1401370A4
 * Callers:
 *     MiFreeSubsectionProtos @ 0x1406CA690 (MiFreeSubsectionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x1406E2CF8 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     KeSetPagePrivilege @ 0x14028DE10 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiDeletePerSessionProtos(unsigned __int64 *P)
{
  __int64 *v1; // r9
  __int64 v2; // r12
  unsigned __int8 v3; // si
  unsigned __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  struct _KEVENT *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+10h]

  v1 = (__int64 *)P[8];
  v2 = 0LL;
  v3 = 17;
  v4 = P[9];
  v17[1] = 0LL;
  v6 = *v1;
  v7 = v1[1];
  v8 = *((unsigned int *)v1 + 11);
  v18 = 17;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v10 = *P + ((v7 - *(_QWORD *)(v6 + 136)) >> 3 << 12);
  v17[0] = v10;
  v11 = *(struct _KEVENT **)(qword_14043B808 + 8 * v9);
  v19 = v4 + 8 * v8;
  if ( v4 < v19 )
  {
    do
    {
      if ( (v4 & 0xFFF) == 0 || v3 == 17 )
      {
        if ( v3 != 17 )
          MiUnlockProtoPoolPage(v2, v3);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v4, &v18);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v4, 0LL, 0LL);
        }
        v3 = v18;
      }
      v12 = MiLockLeafPage((__int64 *)v4, 0);
      v13 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v12 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v12);
          KeSetPagePrivilege((v12 + 0x58000000000LL) / 48, v17, 16LL);
          MiClearPfnImageVerified(v12, 4);
          v10 = v17[0];
        }
        if ( (unsigned int)MiDeleteTransitionPte(v4, v12, 0x11u, 1) == 3 )
          --v8;
      }
      else
      {
        if ( !v13 )
          break;
        if ( (v13 & 0x400) == 0 )
        {
          v15 = MiSwizzleInvalidPte(768LL);
          if ( v16 != v15 )
            MiReleasePageFileSpace(v11, v16);
        }
      }
      v10 += 4096LL;
      v4 += 8LL;
      v17[0] = v10;
    }
    while ( v4 < v19 );
    if ( v3 != 17 )
      MiUnlockProtoPoolPage(v2, v3);
  }
  MiReturnCommit((__int64)v11, v8);
  MiUpdateSystemProtoPtesTree(P + 3, 0);
  ExFreePoolWithTag((PVOID)P[9], 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
