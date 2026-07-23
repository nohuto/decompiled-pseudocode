/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x1402B6B98
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x1402B67C0 (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x1402B723C (MiSubsectionProtosCreated.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 *v5; // rbp
  __int64 v6; // r14
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rax
  ULONG_PTR BugCheckParameter4; // r9
  char v11; // al
  _BYTE v12[48]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v13; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  if ( qword_14043B180 && (v2 & 0x10) == 0 )
    v2 &= ~qword_14043B180;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2 >> 16;
  v13 = 17;
  v5 = (__int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((_QWORD *)v4, 32, (__int64)v12);
  v6 = MiCheckProtoPtePageState((ULONG_PTR)v5, &v13);
  if ( v6 )
  {
    v7 = MiLockLeafPage(v5, 0);
    if ( v7 )
    {
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      BugCheckParameter4 = v8;
      if ( (v8 & 1) != 0 )
        goto LABEL_7;
      if ( qword_14043B180 )
      {
        if ( (v8 & 0x10) != 0 )
          v8 &= ~0x10uLL;
        else
          v8 &= ~qword_14043B180;
      }
      if ( v7 != 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        goto LABEL_7;
      if ( (*(_DWORD *)(v7 + 16) & 0x401) != 0x400LL || (__int64 *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != v5 )
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v5, *(_QWORD *)(v7 + 8), BugCheckParameter4);
      v11 = *(_BYTE *)(v7 + 34);
      if ( (v11 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v11 & 0x10) != 0 )
        {
          if ( *(char *)(v7 + 35) >= 0 )
          {
            MiPersistPage((__int64)(v7 + 0x58000000000LL) / 48);
            v11 = *(_BYTE *)(v7 + 34);
          }
          *(_BYTE *)(v7 + 34) = v11 & 0xEF;
        }
        MiDeleteTransitionPte((ULONG_PTR)v5, v7, 2u, 1);
        v1 = 1;
      }
    }
  }
  if ( v13 != 17 )
    MiUnlockProtoPoolPage(v6, v13);
  return MiSubsectionProtosCreated(v4, v12, 0LL, v1);
}
