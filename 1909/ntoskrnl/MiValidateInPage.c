/*
 * XREFs of MiValidateInPage @ 0x14008D440
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     MiMarkPfnVerified @ 0x14008D844 (MiMarkPfnVerified.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140098A00 (MiFlushEntireTbDueToAttributeChange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiRelocateImagePfn @ 0x140607190 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140641E24 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x140641FFC (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x1408986B0 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // r13
  ULONG_PTR v2; // r10
  unsigned int v3; // edi
  int v4; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 *v8; // r14
  int v9; // edx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned int v12; // r8d
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // rdx
  int v19; // ebp
  PVOID v20; // r8
  __int64 v21; // rbx
  int v22; // ebp
  ULONG_PTR v23; // rcx
  unsigned __int64 v24; // rbp
  __int64 v25; // rdx
  _KPROCESS *v26; // rcx
  __int64 *v27; // r9
  BOOL v28; // r10d
  __int64 result; // rax
  int v30; // eax
  __int16 v31; // ax
  int v32; // ebx
  __int64 v33; // rdx
  PVOID v34; // rax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  int BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  ULONG_PTR v40; // [rsp+40h] [rbp-68h]
  _KPROCESS *Process; // [rsp+48h] [rbp-60h]
  int v42; // [rsp+50h] [rbp-58h]
  unsigned int v43; // [rsp+B8h] [rbp+10h]
  PVOID v44; // [rsp+C0h] [rbp+18h]
  __int64 v45; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 272;
  v2 = *(_QWORD *)(a1 + 208);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 184);
  v40 = v2;
  if ( *(_QWORD *)(a1 + 256) )
    v1 = *(_QWORD *)(a1 + 256);
  v43 = 0;
  v6 = *(_QWORD *)(v2 + 96);
  v45 = v6;
  v7 = *(unsigned int *)(v1 + 40);
  v8 = (__int64 *)(v1 + 48);
  v9 = *(_DWORD *)(v1 + 44);
  v10 = ((unsigned __int64)(((_WORD)v9 + (unsigned __int16)*(_DWORD *)(v1 + 32)) & 0xFFF) + v7 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = v1 + 48 + 8LL * (unsigned int)v10;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v4 - v7 - v9);
  v12 = v4 - *(_DWORD *)(v1 + 44) - *(_DWORD *)(v1 + 40);
  *(_DWORD *)(a1 + 188) += ((v12 & 0xFFF) != 0) + (v12 >> 12);
  v13 = *(_QWORD *)(v6 + 40);
  v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(48LL * *(_QWORD *)(v1 + 48) - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
  v42 = v14;
  if ( (*(_DWORD *)(v17 + 92) & 0xC0000) != 0 && (v13 & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
    v3 = 1;
  v18 = 0x4000LL;
  if ( (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
  {
    v3 |= 2u;
    if ( (MiFlags & 0x4000) != 0 && (v3 & 1) != 0 )
      v3 &= ~2u;
  }
  v19 = v14 & 2;
  if ( (v14 & 2) != 0 && (MiFlags & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v1 + 24), (PMDL)v1);
    MiFlushEntireTbDueToAttributeChange(v14, v18, v15, v16);
    v16 = v45;
    v18 = 0x4000LL;
  }
  v20 = 0LL;
  v44 = 0LL;
  if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) > 8 && (unsigned int)v10 > 1 )
  {
    v31 = *(_WORD *)(v1 + 10);
    if ( (v31 & 0x4000) != 0 )
    {
      if ( (v31 & 5) != 0 )
      {
        v20 = *(PVOID *)(v1 + 24);
        v44 = v20;
      }
      else
      {
        v34 = MmMapLockedPagesSpecifyCache((PMDL)v1, 0, MmCached, 0LL, 0, 0xC0000010);
        v16 = v45;
        v20 = v34;
        v44 = v34;
      }
      if ( v20 )
      {
        v32 = v13 & 0xFFFFFFF8;
        if ( (v3 & 1) != 0 && !*(_QWORD *)(v16 + 56) )
        {
          result = MiGetSectionStrongImageReference(v16, v18, v20);
          if ( (int)result < 0 )
            return result;
        }
        if ( (int)SeValidateImageData(
                    v32,
                    (_DWORD)v44,
                    (_DWORD)v10 << 12,
                    *(_QWORD *)(a1 + 96),
                    v19 != 0 ? 2 : 0,
                    (__int64)Process) < 0 )
        {
          v20 = 0LL;
          v44 = 0LL;
        }
        else
        {
          v20 = v44;
        }
      }
    }
  }
  if ( (unsigned __int64)v8 >= v11 )
    return v43;
  v21 = 0LL;
  v22 = v40;
  while ( 1 )
  {
    v23 = 48 * *v8 - 0x58000000000LL;
    if ( v23 == qword_140466550 )
      goto LABEL_19;
    if ( !v20 )
      break;
    MiMarkPfnVerified(v23);
LABEL_13:
    if ( v3 < 2 )
      goto LABEL_19;
    if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
    {
      v24 = *(_QWORD *)(v1 + 24) + (v21 >> 3 << 12);
      v28 = MiPteInShadowRange(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( v28 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          v26 = KeGetCurrentThread()->ApcState.Process;
          if ( v26->AddressPolicy != 1 && (v25 & 1) != 0 )
          {
            if ( (v25 & 0x20) != 0 && (v25 & 0x42) != 0 )
              goto LABEL_17;
            v26 = KeGetCurrentThread()->ApcState.Process;
            DeepFreezeStartTime = v26[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              v36 = *(_QWORD *)(DeepFreezeStartTime + 8 * (((unsigned __int64)v27 >> 3) & 0x1FF));
              v37 = v25 | 0x20;
              v26 = (_KPROCESS *)(unsigned __int8)v36;
              LOBYTE(v26) = v36 & 0x20;
              if ( (v36 & 0x20) == 0 )
                v37 = v25;
              v25 = v37;
              if ( (v36 & 0x42) != 0 )
                v25 = v37 | 0x42;
            }
          }
        }
      }
      if ( (v25 & 0x42) == 0 )
      {
        v33 = v25 | 0x842;
        if ( !v28 )
          goto LABEL_38;
        if ( (unsigned int)MiPteHasShadow(v26) )
        {
          if ( !HIBYTE(word_1404658EC) && (v33 & 1) != 0 )
            v33 |= 0x8000000000000000uLL;
          *v27 = v33;
          MiWritePteShadow(v27, v33);
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v33 & 1) != 0 )
          {
            v33 |= 0x8000000000000000uLL;
          }
LABEL_38:
          *v27 = v33;
        }
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(v24, 0LL, 1LL);
      }
    }
LABEL_17:
    if ( (int)MiRelocateImagePfn(v40, 0LL, Priority, 2) < 0 )
      goto LABEL_74;
    v22 = v40;
LABEL_19:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v8;
    ++*(_DWORD *)(a1 + 188);
    v21 += 8LL;
    if ( (unsigned __int64)v8 >= v11 )
      return v43;
    v20 = v44;
  }
  if ( (*(_QWORD *)(v45 + 40) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
    goto LABEL_13;
  v30 = MiValidateImagePfn(v22, *(_QWORD *)(a1 + 96), (_DWORD)Process, -1, BugCheckOnFailure, v42, *v8, 0);
  if ( v30 >= 0 )
    goto LABEL_13;
  if ( v30 != -1073741670 )
  {
    v43 = -1073740748;
    goto LABEL_13;
  }
LABEL_74:
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v43;
}
