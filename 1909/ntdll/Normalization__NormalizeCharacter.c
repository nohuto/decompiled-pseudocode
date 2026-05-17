/*
 * XREFs of Normalization__NormalizeCharacter @ 0x18007E0E4
 * Callers:
 *     Normalization__Normalize @ 0x18007DF98 (Normalization__Normalize.c)
 *     Normalization__AppendDecomposedChar @ 0x180088BA4 (Normalization__AppendDecomposedChar.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x18007E290 (NormBuffer__AppendEx.c)
 *     NormBuffer__Append @ 0x18007E2DC (NormBuffer__Append.c)
 *     IsHangulLV @ 0x180088A00 (IsHangulLV.c)
 *     Normalization__AppendDecomposedChar @ 0x180088BA4 (Normalization__AppendDecomposedChar.c)
 *     ComposeHangulLV @ 0x1800F91D8 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x1800F9208 (ComposeHangulLVT.c)
 *     NormBuffer__GetLastChar @ 0x1800F9328 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x1800F93BC (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x1800F9484 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1800F952C (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1800F9558 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800F95A4 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1800F9720 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800F9798 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1800F9858 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800F9968 (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r15
  unsigned __int8 v8; // dl
  char v9; // al
  char v11; // r14
  unsigned __int8 v12; // bp
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  unsigned int v16; // eax
  unsigned int v17; // eax
  _WORD *v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 v20; // r11
  unsigned __int8 v21; // r15
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // r15
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // dl
  bool v29; // zf
  unsigned int StartBasePair; // eax
  unsigned int v31; // eax
  unsigned int StartBase; // eax
  unsigned int v33; // eax
  __int64 v34; // r10
  unsigned __int64 v35; // r8
  unsigned __int8 v36; // r9
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // r9
  __int64 v40; // r8
  char v41; // di
  char v42; // di
  char v43; // al
  unsigned int v44; // eax
  __int64 v45; // r9
  __int64 v46; // r8
  char v47; // di
  int CanCombinableCharactersCombine; // eax
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int16 *v51; // r10
  __int64 v52; // rcx
  signed int v53; // esi
  unsigned __int16 v54; // di
  __int64 v55; // rcx
  unsigned __int16 v56; // si
  unsigned int LastChar; // eax
  unsigned int v58; // r11d
  unsigned int v59; // eax
  unsigned int v60; // r11d
  unsigned __int16 *v61; // r8
  __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r10

  v4 = a4;
  v5 = a3;
  if ( !(_BYTE)a3 )
    goto LABEL_27;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_131;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_131:
          v9 = NormBuffer__Append(v4, a2);
          goto LABEL_10;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, v4);
      }
      if ( v5 != 254 )
        break;
      v18 = *(_WORD **)(v4 + 16);
      if ( v18 == *(_WORD **)(v4 + 8) )
        return 3221227287LL;
      *(_QWORD *)(v4 + 16) = v18 + 1;
      if ( (unsigned __int16)(*v18 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = (unsigned __int16)*v18 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_49:
      if ( !v5 )
        goto LABEL_27;
    }
    if ( v5 != 255 )
      break;
    if ( (int)a2 < 44032 )
    {
      if ( a2 - 4352 <= 0x12 )
      {
        v61 = *(unsigned __int16 **)(v4 + 16);
        if ( v61 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_27;
        v62 = *v61;
        *(_QWORD *)(v4 + 16) = v61 + 1;
        v63 = ComposeHangulLV(a2, v62);
        if ( !v63 )
        {
          *(_QWORD *)(v4 + 16) = v64;
          goto LABEL_27;
        }
        a2 = v63;
        if ( v51 == *(unsigned __int16 **)(v4 + 8) )
        {
LABEL_27:
          v15 = NormBuffer__Append(v4, a2);
          goto LABEL_21;
        }
        *(_QWORD *)(v4 + 16) = v51 + 1;
        v52 = v63;
        goto LABEL_128;
      }
      if ( a2 - 4449 <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(v4) - 4352 > 0x12 )
          goto LABEL_27;
        NormBuffer__RewindOutputCharacter(v4);
        v59 = ComposeHangulLV(v60, a2);
        goto LABEL_123;
      }
      if ( a2 - 4520 <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(v4);
        if ( (unsigned __int8)IsHangulLV(LastChar) )
        {
          NormBuffer__RewindOutputCharacter(v4);
          v59 = ComposeHangulLVT(v58, a2);
          goto LABEL_123;
        }
        goto LABEL_27;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || a2 - 4447 > 1 )
        goto LABEL_27;
    }
    else
    {
      if ( (int)a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) == 1 )
        {
          v53 = a2 - 44032;
          if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned __int16)((int)(a2 - 44032) / 588 + 4352), 0LL, 0LL) )
            return 3221225507LL;
          v54 = (int)(a2 - 44032) % 588 / 28 + 4449;
          if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v54, 0LL, 0LL) )
            return 3221225507LL;
          v56 = (unsigned __int16)(v53 % 28) != 0 ? v53 % 28 + 4519 : 0;
          if ( v56 )
          {
            if ( !(unsigned __int8)NormBuffer__AppendEx(v55, v56, 0LL, 0LL) )
              return 3221225507LL;
            v54 = v56;
          }
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = v54;
          goto LABEL_12;
        }
        if ( !(unsigned __int8)IsHangulLV(a2) )
          goto LABEL_27;
        v51 = *(unsigned __int16 **)(v4 + 16);
        if ( v51 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_27;
        v52 = a2;
        *(_QWORD *)(v4 + 16) = v51 + 1;
LABEL_128:
        v59 = ComposeHangulLVT(v52, *v51);
        if ( !v59 )
        {
          *(_QWORD *)(v4 + 16) = v65;
          goto LABEL_27;
        }
LABEL_123:
        a2 = v59;
        goto LABEL_27;
      }
      if ( a2 - 55216 <= 0x16 || a2 - 55243 <= 0x30 )
        goto LABEL_27;
    }
    v5 = -5;
  }
  v8 = *(_BYTE *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !v8 )
    goto LABEL_9;
  v11 = v8 & 0xC0;
  v12 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v12 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      LOBYTE(a4) = v8 & 0xC0;
      LOBYTE(a3) = v8 & 0x3F;
      if ( (unsigned __int8)NormBuffer__AppendEx(v4, a2, a3, a4) )
      {
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
        *(_DWORD *)(v4 + 88) = a2;
        *(_BYTE *)(v4 + 92) = v12;
        *(_BYTE *)(v4 + 93) = v11;
        return 0LL;
      }
      return 3221225507LL;
    }
    NormBuffer__GetLastChar(v4);
    v21 = *(_BYTE *)(v4 + 72);
    if ( !v21 || v21 == 63 || (v22 = *(_BYTE *)(v4 + 73), (v22 & v20) == 0) )
    {
      v22 = *(_BYTE *)(v4 + 73);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 64) + 2LL;
      *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
      *(_BYTE *)(v4 + 92) = v21;
      *(_BYTE *)(v4 + 93) = v22;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    if ( v11 == (char)0x80 || ((unsigned __int8)((*(_BYTE *)(v4 + 92) | *(_BYTE *)(v4 + 93)) + 64) & v20) == 0 )
    {
      LOBYTE(v19) = v12;
      NormBuffer__IsBlocked(v4, v19);
      goto LABEL_82;
    }
    if ( !v21 || v21 == 63 )
    {
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
      a4 = CanCombinableCharactersCombine;
      if ( CanCombinableCharactersCombine )
      {
        NormBuffer__RewindOutputCharacter(v4);
        a3 = a4 & 0x7F;
        a2 = a4;
        v49 = *(_QWORD *)(a1 + 40);
        v50 = a3 + ((unsigned __int64)*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v11 = *(_BYTE *)(v50 + v49 - 128) & 0xC0;
        v12 = *(_BYTE *)(v50 + v49 - 128) & 0x3F;
      }
LABEL_19:
      v13 = v4;
      v14 = a2;
      goto LABEL_20;
    }
    if ( v22 )
    {
      if ( v22 != 64 )
      {
        LOBYTE(v19) = v12;
        if ( (unsigned __int8)NormBuffer__IsBlocked(v4, v19) )
          goto LABEL_82;
        v23 = *(_BYTE *)(v4 + 92);
        if ( !v23 || v23 == 63 || *(_BYTE *)(v4 + 93) == 64 )
        {
          v24 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
          v25 = v24;
          if ( v24 )
          {
            v26 = *(_QWORD *)(a1 + 32);
            v27 = *(_QWORD *)(v4 + 80);
            *(_DWORD *)(v4 + 88) = v25;
            v28 = *(_BYTE *)((v25 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)((v25 >> 7) + v26) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            *(_WORD *)(v27 - 2) = v25;
            *(_BYTE *)(v4 + 93) = v28 & 0xC0;
            v29 = (v28 & 0xC0) == 64;
            *(_BYTE *)(v4 + 92) = v28 & 0x3F;
            goto LABEL_101;
          }
          if ( !v23 || v23 == 63 )
            goto LABEL_82;
        }
        if ( v23 <= v12 )
        {
LABEL_82:
          a3 = *(_QWORD *)(v4 + 104);
          v13 = v4;
          v14 = a2;
          if ( a3 != *(_QWORD *)(v4 + 40) )
          {
            v15 = NormBuffer__Insert(v4, a2);
LABEL_21:
            if ( !v15 )
              return 3221225507LL;
            return 0LL;
          }
LABEL_20:
          LOBYTE(a4) = v11;
          LOBYTE(a3) = v12;
          v15 = NormBuffer__AppendEx(v13, v14, a3, a4);
          goto LABEL_21;
        }
        if ( v23 == *(_BYTE *)(a1 + 116) )
        {
          if ( v12 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v12 != *(_BYTE *)(a1 + 115) )
              goto LABEL_82;
LABEL_77:
            StartBasePair = NormBuffer__LastStartBasePair(v4);
            v31 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
            if ( !v31 )
              goto LABEL_82;
            goto LABEL_96;
          }
        }
        else if ( v23 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
        {
          goto LABEL_77;
        }
        StartBase = NormBuffer__LastStartBase(v4);
        v33 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
        if ( !v33 )
          goto LABEL_82;
LABEL_98:
        v45 = v33 & 0x7F;
        v46 = v45 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v47 = *(_BYTE *)(v46 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v46) = v47 & 0x3F;
        v42 = v47 & 0xC0;
        LOBYTE(v45) = v42;
        v43 = NormBuffer__ReplaceLastStartBase(v4, v33, v46, v45);
LABEL_99:
        if ( v43 )
        {
          v29 = v42 == 64;
LABEL_101:
          if ( v29 )
            NormBuffer__RecheckStartCombinations(v4);
          return 0LL;
        }
        return 3221225507LL;
      }
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2) )
      {
        NormBuffer__RewindOutputCharacter(v4);
        v35 = (v34 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v34 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v36 = *(_BYTE *)(v35 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v35) = v36 & 0x3F;
        if ( (unsigned __int8)NormBuffer__AppendEx(v4, (unsigned int)v34, v35, v36 & 0xC0) )
        {
          v37 = *(_QWORD *)(v4 + 64);
          *(_QWORD *)(v4 + 96) = 0LL;
          *(_QWORD *)(v4 + 80) = v37 + 2;
          *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
          *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
          *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
          return 0LL;
        }
        return 3221225507LL;
      }
    }
    if ( v21 <= v12 )
      goto LABEL_19;
    if ( v21 == *(_BYTE *)(a1 + 116) )
    {
      if ( v12 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v12 != *(_BYTE *)(a1 + 115) )
          goto LABEL_19;
LABEL_95:
        v38 = NormBuffer__LastStartBasePair(v4);
        v31 = Normalization__CanCombinableCharactersCombine(a1, v38, a2);
        if ( !v31 )
          goto LABEL_19;
LABEL_96:
        v39 = v31 & 0x7F;
        v40 = v39 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v31 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v41 = *(_BYTE *)(v40 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v40) = v41 & 0x3F;
        v42 = v41 & 0xC0;
        LOBYTE(v39) = v42;
        v43 = NormBuffer__ReplaceLastStartBasePair(v4, v31, v40, v39);
        goto LABEL_99;
      }
    }
    else if ( v21 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_95;
    }
    v44 = NormBuffer__LastStartBase(v4);
    v33 = Normalization__CanCombinableCharactersCombine(a1, v44, a2);
    if ( !v33 )
      goto LABEL_19;
    goto LABEL_98;
  }
  switch ( v8 )
  {
    case 0x7Fu:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_9:
      v9 = NormBuffer__AppendEx(v4, a2, 0LL, 0LL);
LABEL_10:
      if ( !v9 )
        return 3221225507LL;
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 88) = a2;
LABEL_12:
      *(_WORD *)(v4 + 92) = 0;
      return 0LL;
    case 0xBFu:
      return Normalization__AppendDecomposedChar(a1, a2, v4);
    case 0xC0u:
      v16 = NormBuffer__GetLastChar(v4);
      v17 = Normalization__CanCombinableCharactersCombine(a1, v16, a2);
      a4 = v17;
      if ( !v17 )
        goto LABEL_19;
      NormBuffer__RewindOutputCharacter(v4);
      a2 = a4;
      goto LABEL_49;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
    goto LABEL_19;
  return 3221227287LL;
}
