/*
 * XREFs of MiValidateImagePfn @ 0x14065C928
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140098340 (MiValidateInPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002BDF0 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeValidateImageData @ 0x14065CB00 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x14065CB40 (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x140898E90 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateImagePfn(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, char a6, __int64 a7, int a8)
{
  _QWORD *v9; // r15
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  ULONG_PTR v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // r12
  int ProtectionPfnCompatible; // eax
  __int64 v16; // rdx
  int v17; // r8d
  void *v18; // rdi
  int v19; // esi
  int v20; // eax
  __int64 v21; // rax
  int v22; // ebx
  char v23; // dl
  __int64 result; // rax
  int v25; // [rsp+78h] [rbp+10h]

  v25 = a2;
  v9 = *(_QWORD **)(a1 + 96);
  v10 = 48 * a7 - 0x58000000000LL;
  v11 = v9[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !v9[7] )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(a1 + 96), a2, a3);
    if ( (int)result < 0 )
      return result;
  }
  v12 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
  v13 = (_QWORD *)v12;
  if ( !v12 )
    return 3221225626LL;
  v14 = (__int64)(v12 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v10);
  MiMakeValidPte((unsigned __int64)v13, a7, ProtectionPfnCompatible | 0x20000000);
  if ( !MiPteInShadowRange((unsigned __int64)v13) )
    goto LABEL_4;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v17 = 1;
    if ( HIBYTE(word_140465BEC) )
      goto LABEL_4;
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
  {
    goto LABEL_4;
  }
  if ( (v16 & 1) != 0 )
    v16 |= 0x8000000000000000uLL;
LABEL_4:
  *v13 = v16;
  if ( v17 )
    MiWritePteShadow((__int64)v13);
  v18 = 0LL;
  v19 = a8 | 2;
  if ( (a6 & 2) == 0 )
    v19 = a8;
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
  {
    v20 = v19;
    if ( a4 != -1 && v9[4] )
      v20 = v19 | 1;
    goto LABEL_13;
  }
  v20 = v19;
  if ( a4 != -1 )
  {
    v21 = MiRevertRelocatedImagePfn(v14, a1);
    v18 = (void *)v21;
    if ( v21 == -1 )
    {
      v18 = 0LL;
LABEL_12:
      v20 = v19;
      goto LABEL_13;
    }
    if ( v21 )
    {
      LODWORD(v14) = v21;
      goto LABEL_12;
    }
    MiReleasePtes((__int64)&qword_1404669C0, (unsigned __int64)v13, 1u);
    return 3221225626LL;
  }
LABEL_13:
  v22 = SeValidateImageData(v11, v14, 4096, v25, v20, a3);
  if ( v22 < 0 )
  {
    _InterlockedIncrement(&dword_140464898);
  }
  else
  {
    v23 = 0;
    if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v10 + 16) >> 5) & 2) != 0 )
      v23 = 3;
    if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
      MiMarkPfnVerified(v10, v23);
  }
  MiReleasePtes((__int64)&qword_1404669C0, (unsigned __int64)v13, 1u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v22;
}
