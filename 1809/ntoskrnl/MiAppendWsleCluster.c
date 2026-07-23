/*
 * XREFs of MiAppendWsleCluster @ 0x1400859EC
 * Callers:
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTerminateWsleCluster @ 0x14007B958 (MiTerminateWsleCluster.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 */

__int64 __fastcall MiAppendWsleCluster(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char WsleContents; // bl
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 result; // rax
  char v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  WsleContents = MiGetWsleContents(a1, (__int64)(a3 << 25) >> 16);
  v8 = 1LL;
  if ( MiPteInShadowRange(a3)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v13 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 8 * ((a3 >> 3) & 0x1FF));
      v15 = v7 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v15 = v7;
      v7 = v15;
      if ( (v14 & 0x42) != 0 )
        v7 = v15 | 0x42;
    }
  }
  v16 = v7;
  v9 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFD8LL);
  result = *(_QWORD *)(a1 + 8);
  v11 = (v9 & 0x200000000000000LL) == 0;
  if ( !result )
    goto LABEL_9;
  v12 = *(_QWORD *)(a1 + 16);
  result += 8 * v12;
  if ( a3 != result || WsleContents != *(_BYTE *)(a1 + 25) || v11 != *(_BYTE *)(a1 + 24) )
  {
    result = MiTerminateWsleCluster((_QWORD *)a1);
LABEL_9:
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
    *(_BYTE *)(a1 + 24) = v11;
    *(_BYTE *)(a1 + 25) = WsleContents;
    goto LABEL_7;
  }
  v8 = v12 + 1;
LABEL_7:
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
