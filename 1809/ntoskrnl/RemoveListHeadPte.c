/*
 * XREFs of RemoveListHeadPte @ 0x1400AD720
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400AD160 (MiObtainSystemCacheView.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall RemoveListHeadPte(__int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // r10
  ULONG_PTR v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  ULONG_PTR v11; // r9
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v13; // r11
  unsigned __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r11
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8

  v1 = *a1;
  if ( *a1 )
  {
    if ( qword_14043B180 && (v1 & 0x10) == 0 )
      v1 &= ~qword_14043B180;
    v3 = v1 >> 28;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = a1[2];
  if ( MiPteInShadowRange(v4 + 8 * v3)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v25 )
    {
      v6 |= 0x20uLL;
      v26 = *(_QWORD *)(v25 + 8 * ((v8 >> 3) & 0x1FF));
      if ( (v26 & 0x20) == 0 )
        v6 = v5;
      if ( (v26 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
  }
  if ( (v6 & 0x3E0) != 0 || (v6 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x3800uLL, v8, v6, v7);
  if ( MiPteInShadowRange(v8 + 8)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v27 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 8 * ((v10 >> 3) & 0x1FF));
      v29 = v11 | 0x20;
      if ( (v28 & 0x20) == 0 )
        v29 = v11;
      v11 = v29;
      if ( (v28 & 0x42) != 0 )
        v11 = v29 | 0x42;
    }
  }
  if ( (v11 & 0x3E0) != 0 || (v11 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x3801uLL, v13, v11, BugCheckParameter4);
  if ( v9 )
  {
    v14 = v9;
    if ( qword_14043B180 && (v9 & 0x10) == 0 )
      v14 = v9 & ~qword_14043B180;
    BugCheckParameter4 = v14 >> 28;
  }
  v15 = MiSwizzleInvalidPte(BugCheckParameter4 << 28);
  *a1 = v15;
  v17 = (__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - v4 - 0x98000000000LL) >> 3;
  if ( v18 != v17 )
  {
    MiSwizzleInvalidPte(v17 << 28);
    if ( MiPteInShadowRange(v4 + 8 * v19 + 8) )
    {
      if ( (unsigned int)MiPteHasShadow(v21, v20) )
      {
        if ( !HIBYTE(word_14043B26C) && (v20 & 1) != 0 )
          v20 |= 0x8000000000000000uLL;
        *(_QWORD *)(v22 + 8) = v20;
        MiWritePteShadow(v22 + 8);
        return v23;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v20 & 1) != 0 )
      {
        v20 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)(v22 + 8) = v20;
    return v23;
  }
  a1[1] = v15;
  return v16;
}
