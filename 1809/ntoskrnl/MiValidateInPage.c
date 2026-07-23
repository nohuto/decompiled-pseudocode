/*
 * XREFs of MiValidateInPage @ 0x14002EC10
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF400 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiValidateImagePfn @ 0x1405A9854 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x1405A9A20 (SeValidateImageData.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x14085D558 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // r13
  ULONG_PTR v2; // r11
  unsigned int v3; // edi
  int v4; // r8d
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 *v8; // r14
  int v9; // edx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned int v12; // r8d
  int v13; // ebp
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r9
  int v22; // ebp
  PVOID v23; // r8
  __int64 v24; // rbx
  int v25; // ebp
  ULONG_PTR v26; // rcx
  unsigned __int64 v27; // rbp
  __int64 v28; // rdx
  _KPROCESS *v29; // rcx
  __int64 *v30; // r9
  int v31; // r10d
  __int64 result; // rax
  int v33; // eax
  __int16 v34; // ax
  int v35; // ebx
  __int64 v36; // rdx
  PVOID v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  int BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  int v44; // [rsp+40h] [rbp-68h]
  ULONG_PTR v45; // [rsp+48h] [rbp-60h]
  _KPROCESS *Process; // [rsp+50h] [rbp-58h]
  unsigned int v47; // [rsp+B0h] [rbp+8h]
  unsigned int v48; // [rsp+B8h] [rbp+10h]
  PVOID v49; // [rsp+C0h] [rbp+18h]
  __int64 v50; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 272;
  v2 = *(_QWORD *)(a1 + 208);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 184);
  v45 = v2;
  if ( *(_QWORD *)(a1 + 256) )
    v1 = *(_QWORD *)(a1 + 256);
  v48 = 0;
  v6 = *(_QWORD *)(v2 + 96);
  v50 = v6;
  v7 = *(unsigned int *)(v1 + 40);
  v8 = (__int64 *)(v1 + 48);
  v9 = *(_DWORD *)(v1 + 44);
  v10 = ((unsigned __int64)(((_WORD)v9 + (unsigned __int16)*(_DWORD *)(v1 + 32)) & 0xFFF) + v7 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = v1 + 48 + 8LL * (unsigned int)v10;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v4 - v7 - v9);
  v12 = v4 - *(_DWORD *)(v1 + 44) - *(_DWORD *)(v1 + 40);
  v13 = 0;
  v47 = 0;
  *(_DWORD *)(a1 + 188) += ((v12 & 0xFFF) != 0) + (v12 >> 12);
  v14 = *(_QWORD *)(v6 + 40);
  v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(48LL * *(_QWORD *)(v1 + 48) - 0x58000000000LL + 16) >> 5) & 0x1F;
  v44 = v15;
  if ( (*(_DWORD *)(v20 + 92) & 0x180000) != 0 && (v14 & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
  {
    v3 = 1;
  }
  else if ( (MiFlags & 0x40000) != 0 )
  {
    if ( (v15 & 2) != 0 )
      v13 = 3;
    v47 = v13;
  }
  if ( (MiFlags & 0x8000) != 0 )
  {
    if ( v3 )
    {
      v3 |= 4u;
      if ( (*(_DWORD *)(v20 + 56) & 0x4000000) != 0 )
      {
        v38 = *(_QWORD *)(v18 + 16);
        if ( qword_14043B180 && (v38 & 0x10) == 0 )
          v38 &= ~qword_14043B180;
        v16 = v38 >> 16;
        if ( (*(_BYTE *)(v16 + 34) & 2) != 0 )
          v3 &= ~4u;
      }
    }
  }
  v21 = 0x4000LL;
  if ( (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
  {
    v3 |= 2u;
    if ( (MiFlags & 0x4000) != 0 )
    {
      v16 = v3;
      LOBYTE(v16) = v3 & 5;
      if ( (v3 & 5) == 1 )
        v3 &= ~2u;
    }
  }
  v22 = v15 & 2;
  if ( (v15 & 2) != 0 && (MiFlags & 0x40000) != 0 && v3 < 4 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v1 + 24), (PMDL)v1);
    MiFlushEntireTbDueToAttributeChange(v16, v15, v17, v21);
    v19 = v50;
    v21 = 0x4000LL;
  }
  v23 = 0LL;
  v49 = 0LL;
  if ( v3 < 4 && (v14 & 0xFFFFFFFFFFFFFFF8uLL) > 8 && (unsigned int)v10 > 1 )
  {
    v34 = *(_WORD *)(v1 + 10);
    if ( (v34 & 0x4000) != 0 )
    {
      if ( (v34 & 5) != 0 )
      {
        v23 = *(PVOID *)(v1 + 24);
        v49 = v23;
      }
      else
      {
        v37 = MmMapLockedPagesSpecifyCache((PMDL)v1, 0, MmCached, 0LL, 0, 0xC0000010);
        v19 = v50;
        v23 = v37;
        v49 = v37;
      }
      if ( v23 )
      {
        v35 = v14 & 0xFFFFFFF8;
        if ( (v3 & 1) != 0 && !*(_QWORD *)(v19 + 48) )
        {
          result = MiGetSectionStrongImageReference(v19, v15, v23, v21);
          if ( (int)result < 0 )
            return result;
        }
        if ( (int)SeValidateImageData(
                    v35,
                    (_DWORD)v49,
                    (_DWORD)v10 << 12,
                    *(_QWORD *)(a1 + 96),
                    v22 != 0 ? 2 : 0,
                    (__int64)Process) < 0 )
        {
          v23 = 0LL;
          v49 = 0LL;
        }
        else
        {
          v23 = v49;
        }
      }
    }
  }
  if ( (unsigned __int64)v8 >= v11 )
    return v48;
  v24 = 0LL;
  v25 = v45;
  while ( 1 )
  {
    v26 = 48 * *v8 - 0x58000000000LL;
    if ( v26 == qword_14043BE90 )
      goto LABEL_23;
    if ( v23 )
    {
      MiMarkPfnVerified(v26, v47);
      goto LABEL_17;
    }
    if ( v3 >= 4 )
      goto LABEL_17;
    if ( (*(_QWORD *)(v50 + 40) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
      goto LABEL_17;
    v33 = MiValidateImagePfn(v25, *(_QWORD *)(a1 + 96), (_DWORD)Process, -1, BugCheckOnFailure, v44, *v8);
    if ( v33 >= 0 )
      goto LABEL_17;
    if ( v33 == -1073741670 )
      break;
    v48 = -1073740748;
LABEL_17:
    if ( (v3 & 2) == 0 )
      goto LABEL_23;
    if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
    {
      v27 = *(_QWORD *)(v1 + 24) + (v24 >> 3 << 12);
      v31 = MiPteInShadowRange(
              ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              *(_QWORD *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
              v23);
      if ( v31 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          v29 = KeGetCurrentThread()->ApcState.Process;
          if ( v29->AddressPolicy != 1 && (v28 & 1) != 0 )
          {
            if ( (v28 & 0x20) != 0 && (v28 & 0x42) != 0 )
              goto LABEL_21;
            v29 = KeGetCurrentThread()->ApcState.Process;
            v39 = v29[2].Affinity.Bitmap[0];
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 8 * (((unsigned __int64)v30 >> 3) & 0x1FF));
              v41 = v28 | 0x20;
              v29 = (_KPROCESS *)(unsigned __int8)v40;
              LOBYTE(v29) = v40 & 0x20;
              if ( (v40 & 0x20) == 0 )
                v41 = v28;
              v28 = v41;
              if ( (v40 & 0x42) != 0 )
                v28 = v41 | 0x42;
            }
          }
        }
      }
      if ( (v28 & 0x42) == 0 )
      {
        v36 = v28 | 0x842;
        if ( !v31 )
          goto LABEL_44;
        if ( (unsigned int)MiPteHasShadow(v29, v36) )
        {
          if ( !HIBYTE(word_14043B26C) && (v36 & 1) != 0 )
            v36 |= 0x8000000000000000uLL;
          *v30 = v36;
          MiWritePteShadow(v30);
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v36 & 1) != 0 )
          {
            v36 |= 0x8000000000000000uLL;
          }
LABEL_44:
          *v30 = v36;
        }
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(v27, 0LL, 1LL);
      }
    }
LABEL_21:
    if ( (int)MiRelocateImagePfn(v45, 0LL, Priority, 2) < 0 )
      break;
    v25 = v45;
LABEL_23:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v8;
    ++*(_DWORD *)(a1 + 188);
    v24 += 8LL;
    if ( (unsigned __int64)v8 >= v11 )
      return v48;
    v23 = v49;
  }
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v48;
}
