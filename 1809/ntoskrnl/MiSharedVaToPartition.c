/*
 * XREFs of MiSharedVaToPartition @ 0x14010982C
 * Callers:
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiCreateSharedZeroPages @ 0x140109240 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiSessionLookupImage @ 0x14009DB08 (MiSessionLookupImage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 */

ULONG_PTR *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r11
  _KPROCESS *v13; // rcx
  _QWORD *CloneAddress; // rax
  unsigned __int64 Address; // rax
  _QWORD *v16; // rax
  char v17; // al
  _QWORD *v18; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r8
  _QWORD *v23; // rax

  if ( !byte_14043B81C )
    return &MiSystemPartition;
  v6 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = v6;
  if ( (v6 & 0x400) != 0 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v6, v7, v8) )
    return **(ULONG_PTR ***)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v10 >= 0xFFFF800000000000uLL )
  {
    v17 = *(_BYTE *)(a1 + 184) & 7;
    if ( v17 == 4 )
    {
      v18 = &unk_14043A000;
    }
    else
    {
      if ( v17 != 1 )
        return (ULONG_PTR *)v9;
      Process = KeGetCurrentThread()->ApcState.Process;
      v20 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v20 )
        return (ULONG_PTR *)v9;
      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        return (ULONG_PTR *)v9;
      v18 = (_QWORD *)(v20 + 2944);
      if ( !v18 )
        return (ULONG_PTR *)v9;
    }
    v21 = (_QWORD *)v18[2];
    while ( v21 )
    {
      v22 = v21[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( v10 >= v22 + v21[4] )
      {
        v21 = (_QWORD *)v21[1];
      }
      else
      {
        if ( v10 >= v22 )
        {
          v16 = (_QWORD *)v21[6];
          goto LABEL_29;
        }
        v21 = (_QWORD *)*v21;
      }
    }
    v23 = MiSessionLookupImage(v10);
    if ( !v23 )
      return (ULONG_PTR *)v9;
    v16 = v23 + 10;
  }
  else
  {
    if ( !MiIsPrototypePteVadLookup(v11) )
    {
      v13 = KeGetCurrentThread()->ApcState.Process;
      if ( v13[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress((__int64)v13, a3);
        if ( CloneAddress )
        {
          v9 = *(_QWORD *)(CloneAddress[7] + 24LL);
          if ( v9 )
            return (ULONG_PTR *)v9;
        }
      }
    }
    Address = MiLocateAddress(v12);
    if ( !Address )
      return (ULONG_PTR *)v9;
    if ( (*(_DWORD *)(Address + 48) & 0x4000) != 0 )
      return (ULONG_PTR *)v9;
    v16 = *(_QWORD **)(Address + 72);
    if ( !v16 )
      return (ULONG_PTR *)v9;
  }
LABEL_29:
  if ( *v16 )
    return *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*v16 + 60LL) & 0x3FF));
  return (ULONG_PTR *)v9;
}
