/*
 * XREFs of MiAppendWsleCluster @ 0x14005ED10
 * Callers:
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAppendWsleCluster(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  char v11; // di
  __int64 v12; // rcx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(((((__int64)(a3 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
  v7 = HIBYTE(v6) & 0xF | (16 * ((v6 >> 60) & 7));
  if ( MiPteInShadowRange(a3)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v15 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a3 >> 3) & 0x1FF));
      v16 = v8 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v8;
      v8 = v16;
      if ( (v15 & 0x42) != 0 )
        v8 = v16 | 0x42;
    }
  }
  v17 = v8;
  v9 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (v9 & 0x200000000000000LL) == 0;
  if ( !v10 )
    goto LABEL_10;
  v12 = *(_QWORD *)(a1 + 16);
  if ( a3 == v10 + 8 * v12 && v7 == *(_BYTE *)(a1 + 26) && v11 == *(_BYTE *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 16) = v12 + 1;
    return 1LL;
  }
  if ( !*(_BYTE *)(a1 + 25) )
  {
    MiTerminateWsleCluster(a1);
LABEL_10:
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_BYTE *)(a1 + 24) = v11;
    *(_BYTE *)(a1 + 26) = v7;
    return 1LL;
  }
  return 0LL;
}
