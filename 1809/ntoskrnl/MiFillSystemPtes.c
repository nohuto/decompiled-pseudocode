/*
 * XREFs of MiFillSystemPtes @ 0x14005C300
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1400E5E24 (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x1402ADA50 (MmMapMdl.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408579C8 (MiMapHotPatchImageInSystemSpace.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiIoSpaceRunIsConstant @ 0x1400E5D10 (MiIoSpaceRunIsConstant.c)
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiZeroAndFlushPtes @ 0x14012344C (MiZeroAndFlushPtes.c)
 *     MiIoPagesInRun @ 0x1401313AC (MiIoPagesInRun.c)
 *     MiAssignInitialPageAttribute @ 0x14018D314 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1402A5C34 (MiShowBadMapper.c)
 */

__int64 __fastcall MiFillSystemPtes(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6)
{
  __int64 v6; // r11
  __int64 v8; // r8
  unsigned __int64 v9; // r14
  int v10; // esi
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  __int64 v20; // rbp
  ULONG_PTR v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // edx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v30; // cl
  __int64 v31; // rax
  int v32; // eax
  unsigned int ProtectionPfnCompatible; // r8d
  unsigned __int64 ValidPte; // rax
  __int64 v35; // rax
  int v36; // ebx
  int v37; // eax
  __int64 LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-88h]
  __int64 v40; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+40h] [rbp-68h]
  __int64 IsConstant; // [rsp+48h] [rbp-60h]
  __int64 v43[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+C0h] [rbp+18h]
  unsigned int v46; // [rsp+C8h] [rbp+20h]

  v46 = a4;
  v6 = a2;
  v43[0] = 0LL;
  v8 = 1LL;
  v45 = 1;
  v9 = a1;
  *a6 = 0;
  if ( (_DWORD)a4 == 31 )
    goto LABEL_67;
  if ( (unsigned int)a4 >> 3 == 3 )
  {
    if ( (a4 & 7) != 0 )
    {
      v8 = 2LL;
      v45 = 2;
    }
    goto LABEL_4;
  }
  if ( (unsigned int)a4 >> 3 == 1 )
  {
    v8 = 0LL;
LABEL_67:
    v45 = v8;
  }
LABEL_4:
  v10 = a4 | 0xA0000000;
  v11 = a4 & 0x1F;
  v12 = MmProtectToPteMask[v11] & 0xFFFF000000000E5EuLL | 0x21;
  v13 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_89;
  v14 = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v12 = MmProtectToPteMask[v11] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
    }
    else if ( (a4 & 0x4000000) == 0 )
    {
      v12 = MmProtectToPteMask[v11] & 0x7FFF000000000E5ELL | 0x21;
    }
    v37 = MiUserPdeOrAbove(a1);
    a4 = v46;
    v8 = v45;
    v6 = a2;
    v13 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v37 )
      v12 |= 4uLL;
  }
  if ( v9 <= 0xFFFFF6BFFFFFFF78uLL )
    v12 |= 4uLL;
  if ( (v10 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa((__int64)(v9 << 25) >> 16);
    v8 = v45;
    v14 = LeafVa;
  }
  if ( v14 < 0xFFFF800000000000uLL )
  {
    v15 = HIBYTE(word_14043B26C);
  }
  else
  {
    if ( byte_14043CA10[((v14 >> 39) & 0x1FF) - 256] == 1 || v14 >= 0xFFFFF68000000000uLL && v14 <= v13 )
      goto LABEL_19;
    v15 = v14 > qword_14043B5F0 || v14 < qword_14043CB80 ? (unsigned __int8)word_14043B26C : HIBYTE(word_14043B26C);
  }
  if ( v15 )
LABEL_89:
    v12 |= 0x100uLL;
LABEL_19:
  v16 = v12 | 0x42;
  if ( v10 >= 0 || (v11 & 5) != 4 )
    v16 = v12;
  if ( (v10 & 0x40000000) != 0 )
    v16 &= ~4uLL;
  v17 = ((unsigned __int16)v16 ^ (unsigned __int16)((unsigned __int8)word_14043B26C << 8)) & 0x100 ^ (unsigned __int64)v16;
  if ( (v10 & 0x8000000) != 0 )
    v17 &= ~0x100uLL;
  if ( (v10 & 0x4000000) != 0 )
    v17 |= 0x80uLL;
  IsConstant = 0LL;
  v40 = 0LL;
  v18 = 0LL;
  v19 = v17 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v20 = v6;
  if ( !v6 )
    return 0LL;
  v21 = 0LL;
  v22 = a3 - 8;
  if ( a3 >= 0 )
  {
    v21 = a3 - 1;
    v22 = 0LL;
  }
  while ( 1 )
  {
    if ( v22 )
      v21 = *(_QWORD *)(v22 + 8);
    else
      ++v21;
    v23 = v22 + 8;
    if ( !v22 )
      v23 = 0LL;
    v22 = v23;
    if ( (a5 & 4) != 0 && v21 == qword_14043BE98 )
      goto LABEL_49;
    if ( v21 > 0xFFFFFFFFFLL || ((*(_QWORD *)(48 * v21 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
    {
      if ( v18 || (IsConstant = MiIoSpaceRunIsConstant(v21, v23, v20), (v18 = IsConstant) != 0) )
      {
        if ( v18 > 1 )
        {
          v32 = *(_DWORD *)(v18 + 40);
          goto LABEL_62;
        }
      }
      else
      {
        IsConstant = 1LL;
      }
      v31 = v40;
      if ( !v40 )
      {
        if ( v22 )
          v35 = 1LL;
        else
          v35 = MiIoPagesInRun(v21, v20);
        v41 = v35;
        v36 = MiReferenceIoPages(1, v21, v35, v45, 0LL, (__int64)v43);
        if ( v36 < 0 )
          goto LABEL_112;
        *a6 |= 1u;
        v31 = v41;
      }
      v40 = v31 - 1;
      v32 = *(unsigned __int16 *)(*(_QWORD *)(v43[0] + 48) + 2 * ((v21 & 0xFFFFFFFFFLL) - *(_QWORD *)(v43[0] + 40))) >> 14;
LABEL_62:
      ProtectionPfnCompatible = v46 & 7;
      v46 = ProtectionPfnCompatible;
      if ( v32 )
      {
        if ( v32 != 2 )
          goto LABEL_65;
        ProtectionPfnCompatible |= 0x18u;
      }
      else
      {
        ProtectionPfnCompatible |= 8u;
      }
LABEL_64:
      v46 = ProtectionPfnCompatible;
LABEL_65:
      ValidPte = MiMakeValidPte(v9, v21, ProtectionPfnCompatible | 0xA0000000);
      v8 = v45;
      v28 = ValidPte;
      goto LABEL_45;
    }
    v24 = 48 * v21 - 0x58000000000LL;
    v25 = a5 & 2;
    if ( (a5 & 2) != 0
      && ((*(_BYTE *)(v24 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(48 * v21 - 0x58000000000LL)) )
    {
      KeBugCheckEx(0x1Au, 0x1160CuLL, v21, 0LL, 0LL);
    }
    if ( !*(_WORD *)(v24 + 32)
      && (!v25 || (*(_BYTE *)(v24 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(48 * v21 - 0x58000000000LL)) )
    {
      MiShowBadMapper(v21);
      a4 = v46;
      v8 = v45;
      v13 = 0xFFFFF6FFFFFFFFFFuLL;
    }
    if ( (*(_QWORD *)(v24 + 40) & 0x200000000000000LL) == 0 )
    {
      v26 = (__int64)(*(_QWORD *)(v24 + 8) << 25) >> 16;
      if ( v26 >= 0xFFFFF68000000000uLL && v26 <= v13 )
      {
        v30 = *(_BYTE *)(v24 + 34);
        if ( ((v30 & 0x20) == 0 || (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v24 + 32))
          && (v30 & 8) == 0
          && ((*(_QWORD *)v24 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
        {
          break;
        }
      }
    }
    v27 = *(unsigned __int8 *)(v24 + 34);
    if ( (v27 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(48 * v21 - 0x58000000000LL, (unsigned int)v8);
      v27 = *(unsigned __int8 *)(v24 + 34);
      LOBYTE(a4) = v46;
      v8 = v45;
    }
    if ( (_DWORD)v8 != (unsigned __int8)v27 >> 6 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(a4, 48 * v21 - 0x58000000000LL);
      goto LABEL_64;
    }
    v28 = v19 ^ (v19 ^ (v21 << 12)) & 0xFFFFFFFFF000LL;
LABEL_45:
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v27, v28) )
      {
        if ( !HIBYTE(word_14043B26C) && (v28 & 1) != 0 )
          v28 |= 0x8000000000000000uLL;
        *(_QWORD *)v9 = v28;
        MiWritePteShadow(v9);
        v8 = v45;
        goto LABEL_48;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v28 & 1) != 0 )
      {
        v28 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v9 = v28;
LABEL_48:
    v18 = IsConstant;
    a4 = v46;
    v13 = 0xFFFFF6FFFFFFFFFFuLL;
LABEL_49:
    v9 += 8LL;
    if ( !--v20 )
      return 0LL;
  }
  v36 = -1073741800;
LABEL_112:
  if ( (*a6 & 1) != 0 )
    MiZeroAndFlushPtes((__int64)((v9 << 25) + ((v20 - a2) << 28)) >> 16, a2 - v20, v8, a4, BugCheckParameter4);
  return (unsigned int)v36;
}
