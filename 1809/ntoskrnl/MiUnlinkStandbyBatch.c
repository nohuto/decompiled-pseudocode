/*
 * XREFs of MiUnlinkStandbyBatch @ 0x140105D50
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiUnlinkStandbyBatch(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  __int64 v6; // r13
  __int64 v8; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // rcx
  char v16; // al
  char v17; // cl
  int v18; // eax
  unsigned __int64 v19; // r8
  __int64 v20; // r14
  char v21; // al
  __int64 v22; // rcx
  _QWORD *v23; // r14
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rdi
  int v29; // eax
  unsigned __int64 v30; // rbx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v39; // r11
  int v40; // [rsp+60h] [rbp+18h]

  v40 = a3;
  v6 = a5;
  v8 = a5;
  if ( !a5 )
    return v8 - v6;
  v10 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)a2;
        v12 = *(_QWORD *)a2;
        if ( (*(_QWORD *)a2 & 1) != 0 )
          goto LABEL_11;
        if ( (*(_QWORD *)a2 & 0xC00LL) != 0x800 )
          goto LABEL_56;
        if ( !v11 || !qword_14043B180 || (qword_14043B180 & v11) != 0 )
        {
          v12 = *(_QWORD *)a2;
          if ( qword_14043B180 && (v11 & 0x10) == 0 )
            v12 = v11 & ~qword_14043B180;
LABEL_11:
          v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL);
          if ( (*(_QWORD *)(v13 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
            break;
        }
      }
      v14 = v13 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 0x58000000000LL + 24), 0x3FuLL) )
        goto LABEL_56;
      if ( *(_QWORD *)a2 == v11 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v13 == 0x58000000000LL )
      goto LABEL_56;
    v15 = *(_QWORD *)a2;
    if ( a2 >= v10
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v15 & 1) == 0 )
        goto LABEL_17;
      if ( (v15 & 0x20) == 0 || (v15 & 0x42) == 0 )
      {
        v32 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 8 * ((a2 >> 3) & 0x1FF));
          LOBYTE(v32) = v15 | 0x20;
          if ( (v33 & 0x20) == 0 )
            v32 = *(_QWORD *)a2;
          LOBYTE(v15) = v32;
          if ( (v33 & 0x42) != 0 )
            LOBYTE(v15) = v32 | 0x42;
        }
        a3 = v40;
      }
    }
    if ( (v15 & 1) != 0 )
      goto LABEL_55;
LABEL_17:
    v16 = *(_BYTE *)(v14 + 34);
    if ( (v16 & 0x20) != 0
      || (v17 = *(_BYTE *)(v14 + 35), (v17 & 0x40) != 0)
      || (v16 & 7) != 2
      || ((v17 & 8) != 0 ? (v18 = 5) : (v18 = v17 & 7), v18 != a3) )
    {
LABEL_55:
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_56;
    }
    if ( !(unsigned int)MiUnlinkPageFromList(v14, 1) )
      break;
    v19 = v14 + 16;
    v20 = *(_QWORD *)(v14 + 8);
    v21 = *(_BYTE *)(v14 + 34) & 0xFE;
    ++*(_WORD *)(v14 + 32);
    *(_BYTE *)(v14 + 34) = v21 | 6;
    v22 = *(_QWORD *)(v14 + 16);
    a4 += 8LL;
    a2 += 8LL;
    v10 = 0xFFFFF6FB7DBED000uLL;
    v23 = (_QWORD *)(v20 | 0x8000000000000000uLL);
    if ( v14 + 16 >= 0xFFFFF6FB7DBED000uLL
      && v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 8 * ((v19 >> 3) & 0x1FF));
        LOBYTE(v19) = v22 | 0x20;
        if ( (v35 & 0x20) == 0 )
          v19 = *(_QWORD *)(v14 + 16);
        LOBYTE(v22) = v19;
        if ( (v35 & 0x42) != 0 )
          LOBYTE(v22) = v19 | 0x42;
      }
    }
    v24 = (unsigned __int8)v22 >> 5;
    v25 = *(unsigned __int8 *)(v14 + 34) >> 6;
    if ( v25 != 1 )
    {
      if ( v25 )
      {
        if ( v25 == 2 )
          v24 = (unsigned int)v24 | 0x18;
      }
      else
      {
        v24 = (unsigned int)v24 | 8;
      }
    }
    v26 = ((v13 / 48) & 0xFFFFFFFFFLL) << 12;
    v27 = v26 | MmProtectToPteMask[v24] & 0xFFFF000000000E7FuLL | 0x21;
    if ( a4 >= 0xFFFFF68000000000uLL )
    {
      v26 = 0xFFFFF6FFFFFFFFFFuLL;
      if ( a4 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v28 = (__int64)(a4 << 25) >> 16;
        if ( a4 >= 0xFFFFF6FB40000000uLL && a4 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          v36 = v27 & 0x7FFFFFFFFFFFFFFFLL;
          v27 |= 0x8000000000000000uLL;
          if ( a4 != 0xFFFFF6FB7DBEDF68uLL )
            v27 = v36;
          v37 = MiUserPdeOrAbove(a4);
          v10 = 0xFFFFF6FB7DBED000uLL;
          v26 = 0xFFFFF6FFFFFFFFFFuLL;
          if ( v37 )
            v27 |= 4uLL;
        }
        if ( a4 <= 0xFFFFF6BFFFFFFF78uLL )
          v27 |= 4uLL;
        if ( v28 < 0xFFFF800000000000uLL )
        {
          v29 = HIBYTE(word_14043B26C);
        }
        else
        {
          if ( byte_14043CA10[((v28 >> 39) & 0x1FF) - 256] == 1
            || v28 >= 0xFFFFF68000000000uLL && v28 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            goto LABEL_38;
          }
          if ( v28 < qword_14043CB80 || v28 > qword_14043B5F0 )
            v29 = (unsigned __int8)word_14043B26C;
          else
            v29 = HIBYTE(word_14043B26C);
        }
        if ( v29 )
          v27 |= 0x100uLL;
      }
    }
LABEL_38:
    v30 = (((unsigned __int16)v27 ^ (unsigned __int16)((unsigned __int8)word_14043B26C << 8)) & 0x100 ^ v27) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( (unsigned __int64)v23 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v23 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_39;
    if ( !(unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v26) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        v30 |= v39;
LABEL_39:
      *v23 = v30;
      goto LABEL_40;
    }
    if ( !HIBYTE(word_14043B26C) )
      v30 |= v39;
    *v23 = v30;
    MiWritePteShadow(v23);
    v10 = 0xFFFFF6FB7DBED000uLL;
LABEL_40:
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(v14 + 24) & 0xC000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v6 )
      goto LABEL_56;
    a3 = v40;
  }
  *a6 = v14;
LABEL_56:
  v8 = a5;
  return v8 - v6;
}
