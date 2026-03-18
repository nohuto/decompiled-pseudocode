/*
 * XREFs of MiFillSystemPtes @ 0x140030060
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1400F6C14 (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x1402C51C0 (MmMapMdl.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x14088F8AC (MiMapHotPatchImageInSystemSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiIoSpaceRunIsConstant @ 0x1400F66A0 (MiIoSpaceRunIsConstant.c)
 *     MiReferenceIoPages @ 0x1400F6770 (MiReferenceIoPages.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x140118C20 (MiUserPdeOrAbove.c)
 *     MiIoPagesInRun @ 0x140131938 (MiIoPagesInRun.c)
 *     MiAssignInitialPageAttribute @ 0x140197040 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1402BCB38 (MiShowBadMapper.c)
 */

__int64 __fastcall MiFillSystemPtes(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6)
{
  __int64 v6; // r10
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  int v10; // esi
  unsigned __int64 v11; // r11
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rsi
  ULONG_PTR v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // cl
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v25; // cl
  int v26; // eax
  unsigned int ProtectionPfnCompatible; // r8d
  __int64 v28; // rax
  int v29; // ebx
  __int64 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  __int64 IsConstant; // [rsp+48h] [rbp-60h]
  __int64 v33[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+C0h] [rbp+18h]
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v6 = a2;
  v35 = 1;
  v33[0] = 0LL;
  v8 = a1;
  *a6 = 0;
  if ( (_DWORD)a4 == 31 )
  {
    v9 = 1LL;
    v35 = 1;
  }
  else if ( (unsigned int)a4 >> 3 == 3 )
  {
    if ( (a4 & 7) == 0 )
      goto LABEL_4;
    v9 = 2LL;
    v35 = 2;
  }
  else
  {
    if ( (unsigned int)a4 >> 3 != 1 )
    {
LABEL_4:
      v9 = 1LL;
      goto LABEL_5;
    }
    v9 = 0LL;
    v35 = 0;
  }
LABEL_5:
  v10 = a4 | 0xA0000000;
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      MiUserPdeOrAbove(a1);
      a4 = v36;
      v9 = v35;
      v6 = a2;
    }
    if ( (v10 & 0x4000000) != 0 )
    {
      MiGetLeafVa((__int64)(v8 << 25) >> 16);
      v9 = v35;
    }
  }
  IsConstant = 0LL;
  v30 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = v6;
  if ( !v6 )
    return 0LL;
  v14 = a3 - 8;
  v15 = 0LL;
  if ( a3 >= 0 )
  {
    v15 = a3 - 1;
    v14 = 0LL;
  }
  while ( 1 )
  {
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 8);
    else
      ++v15;
    v16 = v14 + 8;
    if ( !v14 )
      v16 = 0LL;
    v14 = v16;
    if ( (a5 & 4) != 0 && v15 == qword_140466558 )
      goto LABEL_29;
    if ( v15 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
      break;
    if ( v11 || (IsConstant = MiIoSpaceRunIsConstant(v15, v16, v13, a4), (v11 = IsConstant) != 0) )
    {
      if ( v11 > 1 )
      {
        v26 = *(_DWORD *)(v11 + 40);
        goto LABEL_44;
      }
    }
    else
    {
      IsConstant = 1LL;
    }
    if ( !v12 )
    {
      if ( v14 )
        v28 = 1LL;
      else
        v28 = MiIoPagesInRun(v15, v13, v9, a4);
      v31 = v28;
      v29 = MiReferenceIoPages(1, v15, v28, v35, 0LL, (__int64)v33);
      if ( v29 < 0 )
        goto LABEL_86;
      v12 = v31;
      *a6 |= 1u;
    }
    v30 = v12 - 1;
    v26 = *(unsigned __int16 *)(*(_QWORD *)(v33[0] + 48) + 2 * ((v15 & 0xFFFFFFFFFLL) - *(_QWORD *)(v33[0] + 40))) >> 14;
LABEL_44:
    ProtectionPfnCompatible = v36 & 7;
    v36 = ProtectionPfnCompatible;
    if ( v26 )
    {
      if ( v26 != 2 )
        goto LABEL_47;
      ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
LABEL_46:
    v36 = ProtectionPfnCompatible;
LABEL_47:
    MiMakeValidPte(v8, v15, ProtectionPfnCompatible | 0xA0000000);
LABEL_27:
    if ( !MiPteInShadowRange(v8) )
      goto LABEL_28;
    if ( !(unsigned int)MiPteHasShadow(v23) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v22 & 1) != 0 )
      {
        v22 |= 0x8000000000000000uLL;
      }
LABEL_28:
      *(_QWORD *)v8 = v22;
      goto LABEL_29;
    }
    if ( !HIBYTE(word_1404658EC) && (v22 & 1) != 0 )
      v22 |= 0x8000000000000000uLL;
    *(_QWORD *)v8 = v22;
    MiWritePteShadow(v8, v22);
LABEL_29:
    v8 += 8LL;
    if ( !--v13 )
      return 0LL;
    a4 = v36;
    v9 = v35;
    v11 = IsConstant;
    v12 = v30;
  }
  v17 = 48 * v15 - 0x58000000000LL;
  v18 = a5 & 2;
  if ( (a5 & 2) != 0
    && ((*(_BYTE *)(v17 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(48 * v15 - 0x58000000000LL, v18, v9, a4)) )
  {
    KeBugCheckEx(0x1Au, 0x1160CuLL, v15, 0LL, 0LL);
  }
  if ( !*(_WORD *)(v17 + 32)
    && (!(_DWORD)v18
     || (*(_BYTE *)(v17 + 34) & 7) != 5
     || !(unsigned int)MiIsPfnFileOnly(48 * v15 - 0x58000000000LL, v18, v9, a4)) )
  {
    MiShowBadMapper(v15);
    a4 = v36;
    v9 = v35;
  }
  v19 = *(_QWORD *)(v17 + 40);
  if ( (v19 & 0x200000000000000LL) != 0
    || (v20 = (__int64)(*(_QWORD *)(v17 + 8) << 25) >> 16, v20 < 0xFFFFF68000000000uLL)
    || v20 > 0xFFFFF6FFFFFFFFFFuLL
    || (v19 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
    || (v25 = *(_BYTE *)(v17 + 34), (v25 & 0x20) != 0)
    && (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && *(_WORD *)(v17 + 32)
    || (v25 & 8) != 0
    || ((*(_QWORD *)v17 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL )
  {
    v21 = *(_BYTE *)(v17 + 34);
    if ( (v21 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(48 * v15 - 0x58000000000LL, (unsigned int)v9);
      v21 = *(_BYTE *)(v17 + 34);
      LOBYTE(a4) = v36;
      LODWORD(v9) = v35;
    }
    if ( (_DWORD)v9 == v21 >> 6 )
      goto LABEL_27;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(a4, 48 * v15 - 0x58000000000LL);
    goto LABEL_46;
  }
  v29 = -1073741800;
LABEL_86:
  if ( (*a6 & 1) != 0 )
    MiZeroAndFlushPtes((__int64)((v8 << 25) + ((v13 - a2) << 28)) >> 16, a2 - v13, v9, a4);
  return (unsigned int)v29;
}
