/*
 * XREFs of SepGetLowBoxNumberEntry @ 0x14065D400
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x14065D2A4 (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 *     RtlInsertEntryHashTable @ 0x1400D9D40 (RtlInsertEntryHashTable.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x14065D524 (SepFindMatchingLowBoxNumberEntry.c)
 */

__int64 __fastcall SepGetLowBoxNumberEntry(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  _RTL_DYNAMIC_HASH_TABLE *v3; // r13
  _RTL_BITMAP *v4; // r14
  unsigned int v7; // edi
  unsigned int v9; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  ULONG ClearBitsAndSet; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG_PTR v15; // r8
  ULONG v16; // ebp
  unsigned int *v17; // r13
  __int64 v18; // [rsp+60h] [rbp+8h]
  _RTL_DYNAMIC_HASH_TABLE *v19; // [rsp+78h] [rbp+20h]

  v3 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 24);
  v4 = (_RTL_BITMAP *)(a1 + 8);
  v19 = v3;
  SepFindMatchingLowBoxNumberEntry(v3, a2);
  v7 = 0;
  if ( !v18 )
  {
    v9 = (4 * a2[1] + 67) & 0xFFFFFFFC;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x734C6553u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[4] = PoolWithTag + 7;
    RtlCopySid(v9 - 56, PoolWithTag + 7, a2);
    ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v16 = 2 * RtlNumberOfSetBits(v4);
      if ( v16 > 0x10000 )
        goto LABEL_19;
      v17 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v16 >> 3, 0x734C6553u);
      if ( !v17 )
        goto LABEL_19;
      ExFreePoolWithTag(v4->Buffer, 0);
      v4->SizeOfBitMap = v16;
      v4->Buffer = v17;
      RtlClearAllBits(v4);
      RtlSetBits(v4, 0, v16 >> 1);
      ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
      if ( ClearBitsAndSet == -1 )
        goto LABEL_19;
      v3 = v19;
    }
    if ( ClearBitsAndSet != 0xFFFF )
    {
      v11[6] = 0LL;
      *((_DWORD *)v11 + 10) = ClearBitsAndSet + 1;
      v11[3] = 1LL;
      v13 = (unsigned int)a2[1] - 1;
      v14 = *(unsigned int *)&a2[4 * v13 + 8];
      v15 = v14 + 1;
      if ( (_DWORD)v14 )
        v15 = *(unsigned int *)&a2[4 * v13 + 8];
      if ( RtlInsertEntryHashTable(v3, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v11, v15, 0LL) )
      {
        *a3 = v11;
        return v7;
      }
      ExFreePoolWithTag(v11, 0);
      RtlClearBits(v4, 1u, ClearBitsAndSet);
      return (unsigned int)-1073741670;
    }
LABEL_19:
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)-1073741670;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24)) <= 1 )
    __fastfail(0xEu);
  *a3 = v18;
  return 0LL;
}
