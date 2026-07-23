/*
 * XREFs of Normalization__NormalizeCharacter @ 0x140899E9C
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x140898F8C (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x140899CF8 (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x1402F4DF4 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x1402F4E24 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x1402F4E58 (IsHangulLV.c)
 *     NormBuffer__Append @ 0x1402F4E8C (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x1402F4F58 (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x1402F4FF8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x1402F507C (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x1402F5148 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1402F51D0 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1402F51FC (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1402F5248 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1402F5380 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1402F53F4 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1402F5468 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x140898F8C (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14089909C (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  unsigned __int8 v8; // dl
  char v9; // r14
  unsigned __int8 v10; // bp
  int v11; // eax
  int v12; // r9d
  char v13; // al
  unsigned __int16 *v14; // rcx
  unsigned __int16 v15; // dx
  unsigned __int8 v16; // r11
  unsigned __int8 v17; // r15
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // r15
  int CanCombinableCharactersCombine; // eax
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // dl
  bool v25; // zf
  int StartBasePair; // eax
  int v27; // eax
  int StartBase; // eax
  int v29; // eax
  __int16 *v30; // r8
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // r10
  char v34; // r9
  __int64 v35; // rax
  int v37; // eax
  char v38; // di
  char v39; // r8
  char v40; // di
  char v41; // al
  int v42; // eax
  char v43; // di
  char v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  char v48; // al
  unsigned __int16 *v49; // r10
  __int64 v50; // rcx
  int v51; // esi
  unsigned __int16 v52; // di
  __int64 v53; // rcx
  unsigned __int16 v54; // si
  int LastChar; // eax
  unsigned int v56; // r11d
  int v57; // eax
  int v58; // r11d
  unsigned __int16 *v59; // r8
  int v60; // edx
  unsigned int v61; // eax
  __int64 v62; // r8
  unsigned __int16 *v63; // r9
  __int64 v64; // r10

  v5 = a3;
  if ( !a3 )
    goto LABEL_26;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_126;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_126:
          v48 = NormBuffer__Append(a4, a2);
          goto LABEL_97;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, a4);
      }
      if ( v5 != 254 )
        break;
      v14 = *(unsigned __int16 **)(a4 + 16);
      if ( v14 == *(unsigned __int16 **)(a4 + 8) )
        return 3221227287LL;
      v15 = *v14;
      *(_QWORD *)(a4 + 16) = v14 + 1;
      if ( (unsigned __int16)(v15 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = v15 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_30:
      if ( !v5 )
        goto LABEL_26;
    }
    if ( v5 != 255 )
      break;
    if ( a2 < 44032 )
    {
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v59 = *(unsigned __int16 **)(a4 + 16);
        if ( v59 != *(unsigned __int16 **)(a4 + 8) )
        {
          v60 = *v59;
          *(_QWORD *)(a4 + 16) = v59 + 1;
          v61 = ComposeHangulLV(a2, v60);
          if ( !v61 )
          {
            *(_QWORD *)(a4 + 16) = v62;
            goto LABEL_26;
          }
          a2 = v61;
          if ( v49 != v63 )
          {
            *(_QWORD *)(a4 + 16) = v49 + 1;
            v50 = v61;
            goto LABEL_120;
          }
        }
LABEL_26:
        v13 = NormBuffer__Append(a4, a2);
LABEL_93:
        if ( !v13 )
          return 3221225507LL;
        return 0LL;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v57 = ComposeHangulLV(v58, a2);
        goto LABEL_115;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( IsHangulLV(LastChar) )
        {
          NormBuffer__RewindOutputCharacter(a4);
          v57 = ComposeHangulLVT(v56, (unsigned int)a2);
          goto LABEL_115;
        }
        goto LABEL_26;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_26;
    }
    else
    {
      if ( a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( !IsHangulLV(a2) )
            goto LABEL_26;
          v49 = *(unsigned __int16 **)(a4 + 16);
          if ( v49 == *(unsigned __int16 **)(a4 + 8) )
            goto LABEL_26;
          v50 = (unsigned int)a2;
          *(_QWORD *)(a4 + 16) = v49 + 1;
LABEL_120:
          v57 = ComposeHangulLVT(v50, *v49);
          if ( !v57 )
          {
            *(_QWORD *)(a4 + 16) = v64;
            goto LABEL_26;
          }
LABEL_115:
          a2 = v57;
          goto LABEL_26;
        }
        v51 = a2 - 44032;
        if ( !NormBuffer__AppendEx(a4, (unsigned __int16)((a2 - 44032) / 588 + 4352), 0, 0) )
          return 3221225507LL;
        v52 = (a2 - 44032) % 588 / 28 + 4449;
        if ( !NormBuffer__AppendEx(a4, v52, 0, 0) )
          return 3221225507LL;
        v54 = (unsigned __int16)(v51 % 28) != 0 ? v51 % 28 + 4519 : 0;
        if ( v54 )
        {
          if ( !NormBuffer__AppendEx(v53, v54, 0, 0) )
            return 3221225507LL;
          v52 = v54;
        }
        *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
        *(_DWORD *)(a4 + 88) = v52;
        goto LABEL_99;
      }
      if ( (unsigned int)(a2 - 55216) <= 0x16 || (unsigned int)(a2 - 55243) <= 0x30 )
        goto LABEL_26;
    }
    v5 = -5;
  }
  v8 = *(_BYTE *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !v8 )
    goto LABEL_96;
  v9 = v8 & 0xC0;
  v10 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v10 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      if ( !NormBuffer__AppendEx(a4, a2, v8 & 0x3F, v8 & 0xC0) )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      *(_BYTE *)(a4 + 92) = v10;
      *(_BYTE *)(a4 + 93) = v9;
      return 0LL;
    }
    NormBuffer__GetLastChar(a4);
    v17 = *(_BYTE *)(a4 + 72);
    if ( !v17 || v17 == 63 || (v18 = *(_BYTE *)(a4 + 73), (v18 & v16) == 0) )
    {
      v18 = *(_BYTE *)(a4 + 73);
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
      *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
      *(_BYTE *)(a4 + 92) = v17;
      *(_BYTE *)(a4 + 93) = v18;
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    if ( v9 == (char)0x80 || ((unsigned __int8)((*(_BYTE *)(a4 + 92) | *(_BYTE *)(a4 + 93)) + 64) & v16) == 0 )
    {
      NormBuffer__IsBlocked((_QWORD *)a4, v10);
      goto LABEL_61;
    }
    if ( !v17 || v17 == 63 )
    {
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
      {
        NormBuffer__RewindOutputCharacter(a4);
        a2 = v45;
        v46 = *(_QWORD *)(a1 + 40);
        v47 = (v45 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v45 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v9 = *(_BYTE *)(v47 + v46 - 128) & 0xC0;
        v10 = *(_BYTE *)(v47 + v46 - 128) & 0x3F;
      }
LABEL_91:
      v31 = a4;
      v32 = a2;
LABEL_92:
      v13 = NormBuffer__AppendEx(v31, v32, v10, v9);
      goto LABEL_93;
    }
    if ( v18 )
    {
      if ( v18 != 64 )
      {
        if ( NormBuffer__IsBlocked((_QWORD *)a4, v10) )
          goto LABEL_61;
        v19 = *(_BYTE *)(a4 + 92);
        if ( !v19 || v19 == 63 || *(_BYTE *)(a4 + 93) == 64 )
        {
          CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2);
          v21 = CanCombinableCharactersCombine;
          if ( CanCombinableCharactersCombine )
          {
            v22 = *(_QWORD *)(a1 + 32);
            v23 = *(_QWORD *)(a4 + 80);
            *(_DWORD *)(a4 + 88) = v21;
            v24 = *(_BYTE *)((v21 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)((v21 >> 7) + v22) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            *(_WORD *)(v23 - 2) = v21;
            *(_BYTE *)(a4 + 93) = v24 & 0xC0;
            v25 = (v24 & 0xC0) == 64;
            *(_BYTE *)(a4 + 92) = v24 & 0x3F;
LABEL_81:
            if ( v25 )
              NormBuffer__RecheckStartCombinations(a4);
            return 0LL;
          }
          if ( !v19 || v19 == 63 )
            goto LABEL_61;
        }
        if ( v19 <= v10 )
          goto LABEL_61;
        if ( v19 == *(_BYTE *)(a1 + 116) )
        {
          if ( v10 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v10 == *(_BYTE *)(a1 + 115) )
              goto LABEL_58;
LABEL_61:
            v30 = *(__int16 **)(a4 + 104);
            v31 = a4;
            v32 = a2;
            if ( v30 != *(__int16 **)(a4 + 40) )
            {
              v13 = NormBuffer__Insert((_QWORD *)a4, a2, v30);
              goto LABEL_93;
            }
            goto LABEL_92;
          }
        }
        else if ( v19 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
        {
LABEL_58:
          StartBasePair = NormBuffer__LastStartBasePair(a4);
          v27 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
          if ( v27 )
          {
LABEL_76:
            v38 = *(_BYTE *)((v27 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v27 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            v39 = v38 & 0x3F;
            v40 = v38 & 0xC0;
            v41 = NormBuffer__ReplaceLastStartBasePair(a4, v27, v39, v40);
LABEL_79:
            if ( !v41 )
              return 3221225507LL;
            v25 = v40 == 64;
            goto LABEL_81;
          }
          goto LABEL_61;
        }
        StartBase = NormBuffer__LastStartBase(a4);
        v29 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
        if ( !v29 )
          goto LABEL_61;
LABEL_78:
        v43 = *(_BYTE *)((v29 & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v29 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128);
        v44 = v43 & 0x3F;
        v40 = v43 & 0xC0;
        v41 = NormBuffer__ReplaceLastStartBase(a4, v29, v44, v40);
        goto LABEL_79;
      }
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
      {
        NormBuffer__RewindOutputCharacter(a4);
        v34 = *(_BYTE *)((v33 & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)((v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128);
        if ( !NormBuffer__AppendEx(a4, v33, v34 & 0x3F, v34 & 0xC0) )
          return 3221225507LL;
        v35 = *(_QWORD *)(a4 + 64);
        *(_QWORD *)(a4 + 96) = 0LL;
        *(_QWORD *)(a4 + 80) = v35 + 2;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
        *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
        return 0LL;
      }
    }
    if ( v17 <= v10 )
      goto LABEL_91;
    if ( v17 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 != *(_BYTE *)(a1 + 115) )
          goto LABEL_91;
LABEL_75:
        v37 = NormBuffer__LastStartBasePair(a4);
        v27 = Normalization__CanCombinableCharactersCombine(a1, v37, a2);
        if ( !v27 )
          goto LABEL_91;
        goto LABEL_76;
      }
    }
    else if ( v17 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_75;
    }
    v42 = NormBuffer__LastStartBase(a4);
    v29 = Normalization__CanCombinableCharactersCombine(a1, v42, a2);
    if ( !v29 )
      goto LABEL_91;
    goto LABEL_78;
  }
  switch ( v8 )
  {
    case 0x7Fu:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_96:
      v48 = NormBuffer__AppendEx(a4, a2, 0, 0);
LABEL_97:
      if ( !v48 )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
LABEL_99:
      *(_WORD *)(a4 + 92) = 0;
      return 0LL;
    case 0xBFu:
      return Normalization__AppendDecomposedChar(a1, a2, a4);
    case 0xC0u:
      v11 = NormBuffer__GetLastChar(a4);
      if ( !(unsigned int)Normalization__CanCombinableCharactersCombine(a1, v11, a2) )
        goto LABEL_91;
      NormBuffer__RewindOutputCharacter(a4);
      a2 = v12;
      goto LABEL_30;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(a4 + 16) == *(_QWORD *)(a4 + 8) )
    goto LABEL_91;
  return 3221227287LL;
}
