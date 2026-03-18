/*
 * XREFs of MiUnmapFrameBuffer @ 0x140116AEC
 * Callers:
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiReplaceRotateWithDemandZero @ 0x140116764 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // r10
  __int64 v10; // r8
  ULONG_PTR BugCheckParameter4; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  _QWORD *v15; // r10
  unsigned __int16 v17; // bx
  unsigned __int16 v18; // cx
  int v19; // eax
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  *a4 = -1LL;
  v20 = MI_READ_PTE_LOCK_FREE(a1);
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
  v7 = (*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) >> 53) & 1LL;
  MiSwizzleInvalidPte(128LL);
  BugCheckParameter4 = v10 - 0x58000000000LL;
  if ( (_DWORD)v7 )
  {
    v17 = *(_WORD *)(BugCheckParameter4 + 32);
    v18 = ((*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL) + 1;
    if ( v17 < v18 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v9, v8, BugCheckParameter4);
    v19 = 1;
    if ( v17 <= v18 )
      v19 = a3;
    a3 = v19;
  }
  else
  {
    *a4 = v6;
  }
  if ( MiPteInShadowRange(v9) )
  {
    if ( (unsigned int)MiPteHasShadow(v13) )
    {
      v14 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_4;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_4;
    }
    if ( (v12 & 1) != 0 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *v15 = v12;
  if ( v14 )
    MiWritePteShadow(v15, v12);
  return a3;
}
