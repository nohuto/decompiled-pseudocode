/*
 * XREFs of MiDecommitLargePte @ 0x1402C9A24
 * Callers:
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiInsertDpcGang @ 0x1402E88C0 (MiInsertDpcGang.c)
 */

__int64 __fastcall MiDecommitLargePte(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v8; // r13
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // rbx
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // r11
  unsigned __int64 LeafVa; // rax
  __int64 v22; // rbx
  __int64 v23; // rdi
  char v24; // r11
  __int64 result; // rax
  __int64 v26[9]; // [rsp+20h] [rbp-48h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v5 = 16LL;
  v6 = (*(_DWORD *)(a1 + 48) >> 18) & 3;
  v8 = MiVadPageSizes[v6];
  v9 = MiVadPageIndices[v6];
  if ( v8 != 16 )
    v5 = 1LL;
  v10 = 0;
  if ( v9 <= 1 )
    v10 = 2 - v9;
  v26[0] = MI_READ_PTE_LOCK_FREE(a2);
  v11 = v26[0];
  v13 = v12 & v26[0];
  if ( (v12 & v26[0]) != 0 )
  {
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v26);
  }
  else if ( qword_140465B00 )
  {
    if ( (v26[0] & 0x10) != 0 )
      v11 = v26[0] & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v11 = ~qword_140465B00 & v26[0];
  }
  v14 = (v11 >> 12) & 0xFFFFFFFFFLL;
  v15 = (_QWORD *)a2;
  v16 = 0LL;
  do
  {
    if ( !MiPteInShadowRange((unsigned __int64)v15) )
      goto LABEL_21;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v20 & (unsigned __int8)v19) != 0 )
      {
        v17 |= v18;
      }
LABEL_21:
      *v15 = v17;
      goto LABEL_22;
    }
    if ( !HIBYTE(word_140465BEC) && (v20 & (unsigned __int8)v19) != 0 )
      v17 |= v18;
    *v15 = v17;
    MiWritePteShadow((__int64)v15);
    v19 = 1LL;
    v18 = 0x8000000000000000uLL;
LABEL_22:
    v16 += v19;
    ++v15;
  }
  while ( v16 < v5 );
  if ( v13 )
  {
    if ( v10 )
    {
      MiInsertLargeTbFlushEntry(a5, v10, a2);
    }
    else
    {
      LeafVa = MiGetLeafVa(a2);
      MiInsertTbFlushEntry(a5, LeafVa, v8, 0);
    }
  }
  v22 = 48 * v14 - 0x58000000000LL;
  v27 = 0;
  v23 = *(_QWORD *)(v28 + 40);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 5;
  MiInsertDpcGang(v23, v22, v18);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v22 + 34) ^= (*(_BYTE *)(v22 + 34) ^ v24) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
