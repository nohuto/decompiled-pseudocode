/*
 * XREFs of MiRevertValidPte @ 0x1400B22A0
 * Callers:
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiIsAddressGlobal @ 0x1400B2220 (MiIsAddressGlobal.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401257AC (MiCaptureWriteWatchDirtyBit.c)
 */

unsigned __int8 __fastcall MiRevertValidPte(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int v6; // esi
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  signed __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int8 result; // al
  struct _KEVENT *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  int v33; // [rsp+68h] [rbp+10h] BYREF
  int v34; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  v8 = a1;
  v9 = *(_QWORD *)a2;
  v10 = 0xFFFFF6FB7DBED000uLL;
  v11 = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 8 * ((a2 >> 3) & 0x1FF));
      v27 = v9 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v9;
      v9 = v27;
      if ( (v26 & 0x42) != 0 )
        v9 = v27 | 0x42;
    }
  }
  v12 = a3 & 0x18;
  if ( (v9 & 0x18) == 8 )
  {
    v6 = a3 | 0x18;
    if ( v12 == 24 )
      v6 = a3;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    if ( v12 != 8 )
      v6 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    v6 = a3 & 0xFFFFFFE7;
  }
  if ( a4 <= 0xFFFFFFFFFLL
    && (v13 = 0x20000000000000LL, (*(_QWORD *)(48 * a4 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
  {
    v14 = 48 * a4 - 0x58000000000LL;
    if ( (MiFlags & 0x40000) != 0 && (v6 & 2) != 0 )
    {
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34, v13, a3);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      if ( !(unsigned int)MiGetPagePrivilege(48 * a4 - 0x58000000000LL) )
        MiMarkPfnVerified(48 * a4 - 0x58000000000LL, 7u);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = a1;
      v10 = 0xFFFFF6FB7DBED000uLL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = v6 & 0x1F;
  v16 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v15] & 0xFFFF000000000E7FuLL | 0x21;
  v17 = 0x8000000000000000uLL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_81;
  if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v16 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v15] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v6 & 0x4000000) == 0 )
    {
      v16 = ((a4 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v15] & 0x7FFF000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a2) )
      v16 |= 4uLL;
  }
  if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
    v16 |= 4uLL;
  v18 = (v6 & 0x4000000) != 0 ? MiGetLeafVa(v11) : v11;
  if ( (unsigned int)MiIsAddressGlobal(v18) )
LABEL_81:
    v16 |= 0x100uLL;
  if ( v6 < 0 && (v6 & 5) == 4 )
    v16 |= 0x42uLL;
  if ( (v6 & 0x40000000) != 0 )
    v16 &= ~4uLL;
  if ( (v6 & 0x20000000) != 0 )
    v16 ^= ((unsigned __int16)v16 ^ (unsigned __int16)((unsigned __int8)word_14043B26C << 8)) & 0x100;
  if ( (v6 & 0x8000000) != 0 )
    v16 &= ~0x100uLL;
  if ( (v6 & 0x4000000) != 0 )
    v16 |= 0x80uLL;
  v19 = v16 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v14 )
  {
    if ( (MiFlags & 0x2000000) != 0 && (v9 & 0x42) == 0x40 )
      v19 |= 0x40uLL;
  }
  else
  {
    v28 = v19 | 0x42;
    if ( (v6 & 4) == 0 )
      v28 = v19;
    v19 = v28;
  }
  v20 = *(_QWORD *)a2;
  if ( a2 >= v10
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 8 * ((a2 >> 3) & 0x1FF));
      v31 = v20 | 0x20;
      if ( (v30 & 0x20) == 0 )
        v31 = *(_QWORD *)a2;
      v20 = v31;
      v17 = 0x8000000000000000uLL;
      if ( (v30 & 0x42) != 0 )
        v20 |= 0x42uLL;
    }
    else
    {
      v17 = 0x8000000000000000uLL;
    }
  }
  v21 = v19 ^ (v19 ^ v20) & 0xF00000000000000LL ^ (v19 ^ (v19 ^ v20) & 0xF00000000000000LL ^ v20) & 0x7000000000000000LL;
  if ( a2 < v10 || a2 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_30;
  if ( !(unsigned int)MiPteHasShadow(0x7000000000000000LL, v21) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v21 & 1) != 0 )
    {
      v21 |= v17;
    }
LABEL_30:
    *(_QWORD *)a2 = v21;
    goto LABEL_31;
  }
  if ( !HIBYTE(word_14043B26C) && (v21 & 1) != 0 )
    v21 |= v17;
  *(_QWORD *)a2 = v21;
  MiWritePteShadow(a2);
  v8 = a1;
LABEL_31:
  if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
    || (v9 & 0x40) != 0 && (v19 & 0x40) == 0
    || (result = (v19 & 2) == 0, (((v9 & 2) != 0) & result) != 0)
    || v19 < 0 && v9 >= 0 )
  {
    result = MiInsertTbFlushEntry(a5, v11, 1LL);
    v8 = a1;
  }
  if ( (v9 & 0x42) != 0 )
  {
    if ( v14 && ((*(_BYTE *)(v8 + 48) & 7) != 6 || MiRotatedToFrameBuffer(a2)) )
    {
      v23 = 0LL;
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v33, v21, v17);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      v24 = MiCaptureDirtyBitToPfn(v14);
      if ( v24 )
        v23 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v24 )
        MiReleasePageFileInfo(v23, v24, 1);
    }
    result = *(_DWORD *)(a1 + 48) & 7;
    if ( result == 4 )
      return MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, v11, a1);
  }
  return result;
}
