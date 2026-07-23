/*
 * XREFs of MiTerminateWsle @ 0x14007AC90
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiRemoveSystemImagePage @ 0x14012C18C (MiRemoveSystemImagePage.c)
 * Callees:
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     MiRebuildPageTableLeafAges @ 0x14007AE00 (MiRebuildPageTableLeafAges.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14007F920 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  BOOL v6; // esi
  int v7; // ebp
  int v8; // r13d
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r11
  int v12; // r15d
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  char WsleContents; // bl
  __int64 v16; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx

  v6 = 1;
  v7 = 10;
  v8 = 0;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( MiPteInShadowRange(v9)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 8 * ((v9 >> 3) & 0x1FF));
      v20 = v10 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v10;
      v10 = v20;
      if ( (v19 & 0x42) != 0 )
        v10 = v20 | 0x42;
    }
  }
  if ( a2 < v11 || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v12 = 1;
    v7 = 10 - ((a3 & 2) != 0);
    if ( MiPteInShadowRange(v9)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v21 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 8 * ((v9 >> 3) & 0x1FF));
        v23 = v13 | 0x20;
        if ( (v22 & 0x20) == 0 )
          v23 = v13;
        v13 = v23;
        if ( (v22 & 0x42) != 0 )
          v13 = v23 | 0x42;
      }
    }
    WsleContents = HIBYTE(v13) & 0xF | (16 * ((v13 >> 60) & 7));
    v6 = (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) == 0;
    if ( (HIBYTE(v13) & 0xF) == 8 )
    {
      MiUnlockWsle(a1, a2, v14);
      WsleContents = MiGetWsleContents(v24, a2);
    }
  }
  else
  {
    v12 = 0;
    WsleContents = (*(_BYTE *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
  }
  if ( (a3 & 3) == 0 )
  {
    if ( v12 )
    {
      if ( (unsigned int)MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v9, ZeroPte) )
        v8 = 1;
    }
    else
    {
      if ( !(unsigned int)MiEvictPageTableLock(a1, v9, ZeroPte, 0LL) )
      {
        *a4 = 0;
        return 0LL;
      }
      v8 = 1;
    }
  }
  MiRemoveWsle(a1, a2, 1LL, WsleContents, v7, v6);
  if ( v12 )
    MiRebuildPageTableLeafAges(v16, a2);
  *a4 = v8;
  return 1LL;
}
