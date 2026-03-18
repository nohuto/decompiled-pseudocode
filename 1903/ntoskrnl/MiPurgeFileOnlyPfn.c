/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x1402CCC18
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x1402CC884 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MiCheckProtoPtePageState @ 0x140054900 (MiCheckProtoPtePageState.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLeafPage @ 0x1400DC870 (MiLockLeafPage.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiChangingSubsectionProtos @ 0x1402CAA9C (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x1402CC834 (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x1402CD2F8 (MiSubsectionProtosCreated.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 *v6; // rbp
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  ULONG_PTR BugCheckParameter4; // r9
  char v13; // al
  _BYTE v14[48]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v15; // [rsp+80h] [rbp+8h] BYREF

  memset(v14, 0, 0x28uLL);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( qword_140465B00 && (v3 & 0x10) == 0 )
    v3 &= ~qword_140465B00;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v3 >> 16;
  v15 = 17;
  v6 = (unsigned __int64 *)(v4 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((_QWORD *)v5, 32, (__int64)v14);
  v7 = MiCheckProtoPtePageState((ULONG_PTR)v6, &v15);
  if ( v7 )
  {
    v8 = MiLockLeafPage(v6, 0);
    if ( v8 )
    {
      v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
      BugCheckParameter4 = v9;
      if ( (v9 & 1) != 0 )
        goto LABEL_7;
      if ( qword_140465B00 )
      {
        if ( (v9 & 0x10) != 0 )
          v9 &= ~0x10uLL;
        else
          v9 &= ~qword_140465B00;
      }
      if ( v8 != 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        goto LABEL_7;
      if ( (*(_DWORD *)(v8 + 16) & 0x401) != 0x400LL
        || (unsigned __int64 *)(*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != v6 )
      {
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v6, *(_QWORD *)(v8 + 8), BugCheckParameter4);
      }
      v13 = *(_BYTE *)(v8 + 34);
      if ( (v13 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v13 & 0x10) != 0 )
        {
          if ( *(char *)(v8 + 35) >= 0 )
          {
            MiPersistPage((__int64)(v8 + 0x58000000000LL) / 48);
            v13 = *(_BYTE *)(v8 + 34);
          }
          *(_BYTE *)(v8 + 34) = v13 & 0xEF;
        }
        LOBYTE(v10) = 2;
        MiDeleteTransitionPte((ULONG_PTR)v6, v8, v10, 1);
        v2 = 1;
      }
    }
  }
  if ( v15 != 17 )
    MiUnlockProtoPoolPage(v7, v15);
  return MiSubsectionProtosCreated(v5, v14, 0LL, v2);
}
