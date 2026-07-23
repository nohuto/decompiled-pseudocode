/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x14012B3CC
 * Callers:
 *     MiCheckKernelShadow @ 0x14012B2E8 (MiCheckKernelShadow.c)
 *     MiMakeShadowPageTableRange @ 0x14072B4F4 (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x14072B5E4 (MiInitializeShadowPageTable.c)
 *     MmDeleteShadowMapping @ 0x14085A12C (MmDeleteShadowMapping.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  unsigned __int8 v8; // si
  __int64 v9; // r14
  ULONG_PTR v10; // rbx
  _QWORD *v11; // r11
  ULONG_PTR v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r11
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int8 v17; // r9
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r10
  int v23; // edx
  int v24; // r9d
  _QWORD v25[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int8 v26; // [rsp+A8h] [rbp+48h] BYREF
  int v27; // [rsp+B0h] [rbp+50h]

  v27 = a3;
  v5 = a2;
  v6 = a2;
  v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      v25[v5 + 1] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v5;
    }
    while ( v5 < 4 );
  }
  v8 = 17;
  v9 = a2;
  v10 = 0LL;
  v26 = 17;
  v25[0] = 0LL;
  v11 = (_QWORD *)v7;
  do
  {
    v12 = v25[v9--];
    if ( v9 == 3 )
    {
      v15 = (unsigned __int64)&v11[(v12 >> 3) & 0x1FF];
    }
    else
    {
      if ( v8 != 17 )
        MiUnmapPageInHyperSpaceWorker(v7, v8, 0x80000000LL);
      v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v25);
      v14 = MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFLL, &v26, 0x80000000);
      v8 = v26;
      v7 = v14;
      v15 = v14 + 8 * ((v12 >> 3) & 0x1FF);
    }
    if ( v27 && v9 == v6 )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( !v9 )
          a4 |= 0x100uLL;
        if ( MiPteInShadowRange(v15) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = v21;
            if ( !HIBYTE(word_14043B26C) && ((unsigned __int8)a4 & (unsigned __int8)v21) != 0 )
              v19 |= v22;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && ((unsigned __int8)a4 & (unsigned __int8)v21) != 0 )
            {
              v19 |= v22;
            }
            v10 = v25[0];
            v8 = v26;
          }
        }
        *v11 = v19;
        if ( v20 )
          goto LABEL_39;
      }
      else
      {
        if ( MiPteInShadowRange(v15) && (unsigned int)MiPteHasShadow() )
          v23 = v24;
        *v11 = a4;
        if ( v23 )
        {
          v19 = a4;
LABEL_39:
          MiWritePteShadow((__int64)v11, v19);
        }
      }
    }
    else
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v15);
      v25[0] = BugCheckParameter4;
      v10 = BugCheckParameter4;
      if ( v9 && ((unsigned __int8)BugCheckParameter4 & v17) != 0 && (BugCheckParameter4 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x3606uLL, v12, 0LL, BugCheckParameter4);
    }
  }
  while ( v9 != v6 );
  if ( v8 != 17 )
    MiUnmapPageInHyperSpaceWorker(v7, v8, 0x80000000LL);
  return v10;
}
