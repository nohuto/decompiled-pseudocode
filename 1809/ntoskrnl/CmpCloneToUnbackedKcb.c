/*
 * XREFs of CmpCloneToUnbackedKcb @ 0x1407F1CB0
 * Callers:
 *     CmpPrepareDiscardReplacePost @ 0x1407FB400 (CmpPrepareDiscardReplacePost.c)
 * Callees:
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405D549C (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpAllocateKeyControlBlock @ 0x1405D775C (CmpAllocateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 */

__int64 __fastcall CmpCloneToUnbackedKcb(__int64 a1, ULONG_PTR *a2)
{
  __int64 KeyControlBlock; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int *v11; // rcx

  KeyControlBlock = CmpAllocateKeyControlBlock();
  v5 = KeyControlBlock;
  if ( !KeyControlBlock )
    return (unsigned int)-1073741670;
  v7 = (_QWORD *)(KeyControlBlock + 112);
  v7[1] = v7;
  *v7 = v7;
  *(_QWORD *)(v5 + 128) = 0LL;
  *(_QWORD *)(v5 + 136) = 0LL;
  *(_QWORD *)(v5 + 144) = 0LL;
  *(_QWORD *)(v5 + 152) = 0LL;
  *(_DWORD *)v5 = 1;
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(v5 + 32) = -1;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 208) = v5 + 200;
  *(_QWORD *)(v5 + 200) = v5 + 200;
  *(_QWORD *)(v5 + 224) = v5 + 216;
  *(_QWORD *)(v5 + 216) = v5 + 216;
  *(_QWORD *)(v5 + 232) = 0LL;
  *(_DWORD *)(v5 + 240) = 0;
  *(_QWORD *)(v5 + 248) = 0LL;
  *(_DWORD *)(v5 + 256) = 0;
  *(_QWORD *)(v5 + 264) = 0LL;
  *(_DWORD *)(v5 + 272) = 0;
  *(_DWORD *)(v5 + 276) = -1;
  *(_QWORD *)(v5 + 280) = 0LL;
  v8 = *(_DWORD **)(a1 + 72);
  if ( (*v8 & 0xFFFFFFFE) == 0xFFFFFFFE )
    goto LABEL_4;
  *(_QWORD *)(v5 + 72) = v8;
  *v8 += 2;
  v9 = *(_QWORD *)(a1 + 64);
  if ( !v9 )
  {
LABEL_8:
    v10 = *(_QWORD *)(v5 + 24);
    *(_DWORD *)(v5 + 4) ^= (*(_DWORD *)(v5 + 4) ^ *(_DWORD *)(a1 + 4)) & 0x7FE00000;
    if ( *(_BYTE *)(v10 + 2936) == 1 )
      *(_WORD *)(v5 + 4) = *(_DWORD *)(v5 + 4) | 0x20;
    *a2 = v5;
    v6 = 0;
    v5 = 0LL;
    goto LABEL_11;
  }
  *(_BYTE *)(v5 + 57) = ((*(_BYTE *)(v9 + 57) - 1) & 0xFD) == 0;
  if ( CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int32 **)(a1 + 64)) )
  {
    *(_QWORD *)(v5 + 64) = *(_QWORD *)(a1 + 64);
    goto LABEL_8;
  }
LABEL_4:
  v6 = -1073741670;
LABEL_11:
  if ( v5 )
  {
    v11 = *(unsigned int **)(v5 + 72);
    if ( v11 )
    {
      CmpDereferenceNameControlBlockWithLock(v11);
      *(_QWORD *)(v5 + 72) = 0LL;
    }
    *(_DWORD *)(v5 + 4) |= 0x80000u;
    CmpFreeKeyControlBlock(v5);
  }
  return v6;
}
