/*
 * XREFs of MiSharedVaToPartition @ 0x1400DDB3C
 * Callers:
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiCreateSharedZeroPages @ 0x1400DD580 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400176C0 (MiSessionLookupImage.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateCloneAddress @ 0x1400BFAB8 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400CA9A0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 */

ULONG_PTR *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  _KPROCESS *v11; // rcx
  _QWORD *CloneAddress; // rax
  unsigned __int64 Address; // rax
  _QWORD *v14; // rax
  char v15; // al
  _QWORD *v16; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rax

  if ( !byte_140465E9C )
    return &MiSystemPartition;
  v6 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v6;
  if ( (v6 & 0x400) != 0 && MI_PROTO_FORMAT_COMBINED(v6) )
    return **(ULONG_PTR ***)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v8 >= 0xFFFF800000000000uLL )
  {
    v15 = *(_BYTE *)(a1 + 184) & 7;
    if ( v15 == 4 )
    {
      v16 = &unk_140464660;
    }
    else
    {
      if ( v15 != 1 )
        return (ULONG_PTR *)v7;
      Process = KeGetCurrentThread()->ApcState.Process;
      v18 = Process[1].ActiveProcessors.Bitmap[1];
      if ( !v18 )
        return (ULONG_PTR *)v7;
      if ( (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        return (ULONG_PTR *)v7;
      v16 = (_QWORD *)(v18 + 192);
      if ( !v16 )
        return (ULONG_PTR *)v7;
    }
    v19 = (_QWORD *)v16[2];
    while ( v19 )
    {
      v20 = v19[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( v8 >= v20 + v19[4] )
      {
        v19 = (_QWORD *)v19[1];
      }
      else
      {
        if ( v8 >= v20 )
        {
          v14 = (_QWORD *)v19[6];
          goto LABEL_29;
        }
        v19 = (_QWORD *)*v19;
      }
    }
    v21 = MiSessionLookupImage(v8);
    if ( !v21 )
      return (ULONG_PTR *)v7;
    v14 = v21 + 10;
  }
  else
  {
    if ( !MiIsPrototypePteVadLookup(v9) )
    {
      v11 = KeGetCurrentThread()->ApcState.Process;
      if ( v11[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress((__int64)v11, a3);
        if ( CloneAddress )
        {
          v7 = *(_QWORD *)(CloneAddress[7] + 24LL);
          if ( v7 )
            return (ULONG_PTR *)v7;
        }
      }
    }
    Address = MiLocateAddress(v10);
    if ( !Address )
      return (ULONG_PTR *)v7;
    if ( (*(_DWORD *)(Address + 48) & 0x100000) != 0 )
      return (ULONG_PTR *)v7;
    v14 = *(_QWORD **)(Address + 72);
    if ( !v14 )
      return (ULONG_PTR *)v7;
  }
LABEL_29:
  if ( *v14 )
    return *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(*v14 + 60LL) & 0x3FF));
  return (ULONG_PTR *)v7;
}
