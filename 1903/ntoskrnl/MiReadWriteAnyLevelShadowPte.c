/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1401241C8
 * Callers:
 *     MiCheckKernelShadow @ 0x140123F00 (MiCheckKernelShadow.c)
 *     MiMakeShadowPageTableRange @ 0x14074E26C (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x14074E35C (MiInitializeShadowPageTable.c)
 *     MmDeleteShadowMapping @ 0x140892B78 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

ULONG_PTR __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 DeepFreezeStartTime; // r12
  unsigned __int8 v11; // r14
  ULONG_PTR v12; // rbx
  _QWORD *v13; // r11
  ULONG_PTR v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r11
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int8 v19; // r9
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r10
  unsigned int v24; // r9d
  ULONG_PTR v25; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int8 v27; // [rsp+A8h] [rbp+48h] BYREF
  int v28; // [rsp+B0h] [rbp+50h]

  v28 = a3;
  v4 = a2;
  memset(BugCheckParameter2, 0, 0x20uLL);
  v8 = v4;
  v9 = v4;
  DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
  if ( v4 < 4 )
  {
    LODWORD(v4) = 4;
    do
    {
      BugCheckParameter2[v9] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v9;
    }
    while ( v9 < 4 );
  }
  v11 = 17;
  v4 = (int)v4;
  v12 = 0LL;
  v27 = 17;
  v25 = 0LL;
  v13 = (_QWORD *)DeepFreezeStartTime;
  do
  {
    v14 = BugCheckParameter2[--v4];
    if ( v4 == 3 )
    {
      v17 = (unsigned __int64)&v13[(v14 >> 3) & 0x1FF];
    }
    else
    {
      if ( v11 != 17 )
      {
        LOBYTE(v7) = v11;
        MiUnmapPageInHyperSpaceWorker(DeepFreezeStartTime, v7, 0x80000000LL);
      }
      v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
      v16 = MiMapPageInHyperSpaceWorker((v15 >> 12) & 0xFFFFFFFFFLL, &v27, 0x80000000);
      v11 = v27;
      DeepFreezeStartTime = v16;
      v17 = v16 + 8 * ((v14 >> 3) & 0x1FF);
    }
    if ( v28 && v4 == v8 )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( !v4 )
          a4 |= 0x100uLL;
        if ( MiPteInShadowRange(v17) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v21 = v22;
            if ( !HIBYTE(word_140465BEC) && ((unsigned __int8)a4 & (unsigned __int8)v22) != 0 )
              v7 |= v23;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && ((unsigned __int8)a4 & (unsigned __int8)v22) != 0 )
            {
              v7 |= v23;
            }
            v12 = v25;
            v11 = v27;
          }
        }
        *v13 = v7;
        if ( v21 )
          goto LABEL_38;
      }
      else
      {
        if ( MiPteInShadowRange(v17) && (unsigned int)MiPteHasShadow() )
          v7 = v24;
        *v13 = a4;
        if ( (_DWORD)v7 )
LABEL_38:
          MiWritePteShadow((__int64)v13);
      }
    }
    else
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v17);
      v25 = BugCheckParameter4;
      v12 = BugCheckParameter4;
      if ( v4 && ((unsigned __int8)BugCheckParameter4 & v19) != 0 && (BugCheckParameter4 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x3606uLL, v14, 0LL, BugCheckParameter4);
    }
  }
  while ( v4 != v8 );
  if ( v11 != 17 )
  {
    LOBYTE(v7) = v11;
    MiUnmapPageInHyperSpaceWorker(DeepFreezeStartTime, v7, 0x80000000LL);
  }
  return v12;
}
