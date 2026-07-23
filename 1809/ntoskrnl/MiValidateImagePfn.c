/*
 * XREFs of MiValidateImagePfn @ 0x1405A9854
 * Callers:
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeValidateImageData @ 0x1405A9A20 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x1405A9A60 (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x14085D558 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateImagePfn(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, __int64 a7)
{
  _QWORD *v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  ULONG_PTR v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r12
  int ProtectionPfnCompatible; // eax
  __int64 v15; // rdx
  int v16; // r8d
  void *v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  int v20; // ebx
  unsigned int v21; // edx
  __int64 result; // rax
  int v23; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v23 = a2;
  v8 = *(_QWORD **)(a1 + 96);
  v9 = 48 * a7 - 0x58000000000LL;
  v10 = v8[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0x180000) != 0 && !v8[6] )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(a1 + 96), a2, a3, a4);
    if ( (int)result < 0 )
      return result;
  }
  v11 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
  v12 = (_QWORD *)v11;
  if ( !v11 )
    return 3221225626LL;
  v13 = (__int64)(v11 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v9);
  MiMakeValidPte((unsigned __int64)v12, a7, ProtectionPfnCompatible | 0x20000000);
  if ( !MiPteInShadowRange((unsigned __int64)v12) )
    goto LABEL_4;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v16 = 1;
    if ( HIBYTE(word_14043B26C) )
      goto LABEL_4;
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
  {
    goto LABEL_4;
  }
  if ( (v15 & 1) != 0 )
    v15 |= 0x8000000000000000uLL;
LABEL_4:
  *v12 = v15;
  if ( v16 )
    MiWritePteShadow((__int64)v12, v15);
  v17 = 0LL;
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0x180000) != 0 )
  {
    v18 = a6 & 2;
    if ( v25 != -1 && v8[4] )
      v18 = a6 & 2 | 1;
    goto LABEL_11;
  }
  v18 = a6 & 2;
  if ( v25 != -1 )
  {
    v19 = MiRevertRelocatedImagePfn(v13, a1);
    v17 = (void *)v19;
    if ( v19 == -1 )
    {
      v17 = 0LL;
LABEL_10:
      v18 = a6 & 2;
      goto LABEL_11;
    }
    if ( v19 )
    {
      LODWORD(v13) = v19;
      goto LABEL_10;
    }
    MiReleasePtes((__int64)&qword_14043C060, (unsigned __int64)v12, 1u);
    return 3221225626LL;
  }
LABEL_11:
  v20 = SeValidateImageData(v10, v13, 4096, v23, v18, a3);
  if ( v20 < 0 )
  {
    _InterlockedIncrement(&dword_140439F30);
  }
  else
  {
    v21 = 0;
    if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0x180000) == 0 && ((*(_BYTE *)(v9 + 16) >> 5) & 2) != 0 )
      v21 = 3;
    if ( (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
      MiMarkPfnVerified(v9, v21);
  }
  MiReleasePtes((__int64)&qword_14043C060, (unsigned __int64)v12, 1u);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)v20;
}
