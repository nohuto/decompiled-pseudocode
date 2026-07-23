/*
 * XREFs of MiUnmapFrameBuffer @ 0x140122E34
 * Callers:
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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
  int v13; // r8d
  __int64 *v14; // r10
  unsigned __int16 v16; // bx
  unsigned __int16 v17; // cx
  int v18; // eax
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  *a4 = -1LL;
  v19 = MI_READ_PTE_LOCK_FREE(a1);
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL;
  v7 = (*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) >> 53) & 1LL;
  MiSwizzleInvalidPte(128LL);
  BugCheckParameter4 = v10 - 0x58000000000LL;
  if ( (_DWORD)v7 )
  {
    v16 = *(_WORD *)(BugCheckParameter4 + 32);
    v17 = ((*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL) + 1;
    if ( v16 < v17 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v9, v8, BugCheckParameter4);
    v18 = 1;
    if ( v16 <= v17 )
      v18 = a3;
    a3 = v18;
  }
  else
  {
    *a4 = v6;
  }
  if ( MiPteInShadowRange(v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_4;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_4;
    }
    if ( (v12 & 1) != 0 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *v14 = v12;
  if ( v13 )
    MiWritePteShadow((__int64)v14, v12);
  return a3;
}
