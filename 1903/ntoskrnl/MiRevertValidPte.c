/*
 * XREFs of MiRevertValidPte @ 0x14004F8F0
 * Callers:
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRotatedToFrameBuffer @ 0x1400E0420 (MiRotatedToFrameBuffer.c)
 *     MiCompressTbFlushList @ 0x140114FE0 (MiCompressTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiUserPdeOrAbove @ 0x14011A7F0 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     MiRewritePteWithLockBit @ 0x1402D8F30 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r15
  int v7; // edx
  unsigned __int64 v8; // r12
  int v9; // esi
  int v10; // r10d
  unsigned int v11; // r11d
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r9
  int v20; // eax
  signed __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  int v23; // ebp
  __int64 v24; // r9
  BOOL v25; // r14d
  __int64 v26; // rcx
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // di
  unsigned __int64 v31; // r13
  __int64 v32; // r11
  __int64 v33; // rsi
  unsigned int v34; // r9d
  __int64 v35; // rdx
  size_t v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdi
  unsigned __int8 v39; // r9
  __int64 v40; // r10
  unsigned __int64 v41; // r8
  __int64 v42; // r10
  __int64 v43; // rax
  __int64 v44; // r10
  __int64 v45; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  ULONG_PTR v49; // r15
  volatile signed __int32 *v50; // rbx
  __int64 v51; // rbp
  int v52; // eax
  __int64 LeafVa; // rax
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // r9
  __int64 v56; // rax
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // r8
  char v60; // cl
  unsigned __int64 v61; // rcx
  unsigned int v62; // [rsp+20h] [rbp-88h]
  int v63; // [rsp+24h] [rbp-84h] BYREF
  int v64; // [rsp+28h] [rbp-80h] BYREF
  __int64 v65; // [rsp+30h] [rbp-78h]
  __int64 v66; // [rsp+38h] [rbp-70h]
  __int64 v67; // [rsp+40h] [rbp-68h]
  __int64 v68; // [rsp+48h] [rbp-60h]
  unsigned __int64 v69; // [rsp+50h] [rbp-58h]
  int v72; // [rsp+C0h] [rbp+18h]

  v5 = *(unsigned int *)(a1 + 48);
  v6 = a2;
  v7 = 0;
  v62 = 0;
  v8 = a4;
  v9 = a3;
  if ( (v5 & 0x500000) == 0x500000 )
  {
    v44 = (v5 >> 18) & 3;
    v11 = MiVadPageIndices[v44];
    v72 = v11;
    if ( v11 <= 1 )
      v62 = 2 - v11;
    v45 = 16LL;
    v68 = MiVadPageSizes[v44];
    v10 = 1;
    v12 = v68;
    if ( v68 == 16 )
      v12 = 1LL;
    else
      v45 = 1LL;
    v66 = v45;
  }
  else
  {
    v10 = 1;
    v11 = 3;
    v72 = 3;
    v12 = 1LL;
    v68 = 1LL;
    v66 = 1LL;
  }
  v13 = *(_QWORD *)v6;
  v67 = *(_QWORD *)v6;
  v14 = (__int64)(v6 << 25) >> 16;
  v69 = v14;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v47 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v6 >> 3) & 0x1FF));
        v48 = v13 | 0x20;
        if ( (v47 & 0x20) == 0 )
          v48 = v13;
        v13 = v48;
        if ( (v47 & 0x42) != 0 )
          v13 = v48 | 0x42;
      }
      v7 = 0;
    }
    v67 = v13;
  }
  v15 = a3 & 0x18;
  if ( (v13 & 0x18) == 8 )
  {
    v9 = a3 | 0x18;
    if ( v15 == 24 )
      v9 = a3;
  }
  else if ( (v13 & 0x10) != 0 )
  {
    if ( v15 != 8 )
      v9 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    v9 = a3 & 0xFFFFFFE7;
  }
  if ( a4 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * a4 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    v16 = 0LL;
LABEL_94:
    v65 = v16;
    goto LABEL_11;
  }
  v16 = 48 * a4 - 0x58000000000LL;
  v65 = v16;
  if ( (MiFlags & 0x40000) != 0 && (v9 & 2) != 0 )
  {
    if ( v12 )
    {
      v49 = 48 * a4 - 0x58000000000LL;
      v50 = (volatile signed __int32 *)(v16 + 24);
      v51 = v12;
      do
      {
        v63 = 0;
        while ( _interlockedbittestandset64(v50, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v63);
          while ( *(__int64 *)v50 < 0 );
        }
        if ( !(unsigned int)MiGetPagePrivilege(v49, 1, 0LL) )
          MiMarkPfnVerified(v49);
        _InterlockedAnd64((volatile signed __int64 *)v50, 0x7FFFFFFFFFFFFFFFuLL);
        v49 += 48LL;
        v50 += 12;
        --v51;
      }
      while ( v51 );
      v8 = a4;
      v10 = 1;
      v11 = v72;
      v65 = v49;
      v7 = 0;
      v16 = v49;
      v6 = a2;
    }
    v16 += -48 * v12;
    goto LABEL_94;
  }
LABEL_11:
  if ( v11 <= 1 )
    v9 |= 0x4000000u;
  v17 = v9 & 0x1F;
  v18 = ((v8 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_143:
    v18 |= 0x100uLL;
    goto LABEL_23;
  }
  if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v18 = ((v8 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v9 & 0x4000000) == 0 )
    {
      v18 = ((v8 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v17] & 0x7FFF000000000E7FLL | 0x21;
    }
    v52 = MiUserPdeOrAbove(v6);
    v16 = v65;
    v10 = 1;
    v11 = v72;
    if ( v52 )
      v18 |= 4uLL;
    v7 = 0;
  }
  if ( v6 <= 0xFFFFF6BFFFFFFF78uLL )
    v18 |= 4uLL;
  if ( (v9 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa(v14);
    v16 = v65;
    v19 = LeafVa;
    v7 = 0;
  }
  else
  {
    v19 = v14;
  }
  if ( v19 < 0xFFFF800000000000uLL )
  {
    v20 = HIBYTE(word_140465BEC);
    goto LABEL_22;
  }
  if ( (unsigned int)MiGetSystemRegionType(v19) != 1 && (v55 < 0xFFFFF68000000000uLL || v55 > v54) )
  {
    if ( v55 < qword_1404675B0 || (v20 = HIBYTE(word_140465BEC), v55 > qword_140465EE0) )
      v20 = (unsigned __int8)word_140465BEC;
    v16 = v65;
LABEL_22:
    if ( !v20 )
      goto LABEL_23;
    goto LABEL_143;
  }
  v16 = v65;
LABEL_23:
  if ( v9 < 0 && (v9 & 5) == 4 )
    v18 |= 0x42uLL;
  if ( (v9 & 0x40000000) != 0 )
    v18 &= ~4uLL;
  if ( (v9 & 0x20000000) != 0 )
    v18 ^= ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int8)word_140465BEC << 8)) & 0x100;
  if ( (v9 & 0x8000000) != 0 )
    v18 &= ~0x100uLL;
  if ( (v9 & 0x4000000) != 0 )
    v18 |= 0x80uLL;
  v21 = v18 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v16 )
  {
    if ( (MiFlags & 0x2000000) != 0 && (v13 & 0x42) == 0x40 )
      v21 |= 0x40uLL;
  }
  else
  {
    v56 = v21 | 0x42;
    if ( (v9 & 4) == 0 )
      v56 = v21;
    v21 = v56;
  }
  v22 = v6;
  v23 = v7;
  v24 = 0x7000000000000000LL;
  v25 = (*(_DWORD *)(a1 + 48) & 0x300000) == 3145728;
  do
  {
    if ( v25 && (MI_READ_PTE_LOCK_FREE(v22) & 0x42) != 0 )
    {
      v43 = MiGetLeafVa(v22);
      MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, v43, a1);
      v11 = v72;
      v10 = 1;
      v24 = 0x7000000000000000LL;
      v25 = 0;
    }
    v21 ^= (v21 ^ (v8 << 12)) & 0xFFFFFFFFF000LL;
    if ( !v23 )
    {
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        goto LABEL_42;
      v26 = *(_QWORD *)v22;
      if ( v22 >= 0xFFFFF6FB7DBED000uLL
        && v22 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v57 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v57 )
        {
          v58 = *(_QWORD *)(v57 + 8 * ((v22 >> 3) & 0x1FF));
          v59 = v26 | 0x20;
          if ( (v58 & 0x20) == 0 )
            v59 = *(_QWORD *)v22;
          v26 = v59;
          if ( (v58 & 0x42) != 0 )
            v26 = v59 | 0x42;
        }
      }
      if ( (v26 & 0x40) != 0 && (v21 & 0x40) == 0 || (v26 & 2) != 0 && (v21 & 2) == 0 || v21 < 0 && v26 >= 0 )
LABEL_42:
        v23 = v10;
    }
    ++v8;
    if ( v11 <= 1 )
    {
      result = MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], v22, v21, v24);
      v11 = v72;
      v10 = 1;
      v24 = 0x7000000000000000LL;
    }
    else
    {
      result = MiPteInShadowRange(v22);
      if ( !(_DWORD)result )
        goto LABEL_47;
      if ( !(unsigned int)MiPteHasShadow(v29) )
      {
        result = (__int64)KeGetCurrentThread();
        if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1788LL) & 0x1000) != 0 && (v28 & 1) != 0 )
        {
          result = 0x8000000000000000uLL;
          v28 |= 0x8000000000000000uLL;
        }
LABEL_47:
        *(_QWORD *)v22 = v28;
        goto LABEL_48;
      }
      if ( !HIBYTE(word_140465BEC) && (v28 & 1) != 0 )
        v28 |= 0x8000000000000000uLL;
      *(_QWORD *)v22 = v28;
      result = MiWritePteShadow(v22, v28);
      v10 = 1;
      v24 = 0x7000000000000000LL;
    }
LABEL_48:
    v22 += 8LL;
    --v66;
  }
  while ( v66 );
  v30 = v67;
  v31 = v69;
  if ( v23 )
  {
    if ( v62 )
    {
      result = MiInsertLargeTbFlushEntry(a5, v62, a2, v24);
      goto LABEL_50;
    }
    v32 = v68;
    v33 = v68;
    if ( *(_DWORD *)a5 != 1 )
    {
      v60 = *(_BYTE *)(a5 + 4);
      if ( (v60 & 8) == 0 )
      {
        result = 0xFFFFF68000000000uLL;
        if ( v69 >= 0xFFFFF68000000000uLL )
        {
          result = 0xFFFFF6FFFFFFFFFFuLL;
          if ( v69 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_BYTE *)(a5 + 4) = v60 | 8;
        }
      }
    }
    v34 = *(_DWORD *)(a5 + 12);
    if ( v34 )
    {
      if ( (*(_BYTE *)(a5 + 4) & 4) == 0 )
      {
        v40 = a5 + 8LL * (v34 - 1);
        result = *(_QWORD *)(v40 + 24);
        if ( (result & 0xC00) == 0 )
        {
          v41 = *(_QWORD *)(v40 + 24) & 0x3FFLL;
          if ( (result & 0xFFFFFFFFFFFFF000uLL) + ((v41 + 1) << 12) == v31 && v41 + v32 > v41 && v41 + v32 <= 0x3FF )
          {
            result = ((unsigned __int16)result ^ (unsigned __int16)(result + v32)) & 0x3FF ^ (unsigned __int64)result;
            *(_QWORD *)(a5 + 16) += v32;
            *(_QWORD *)(v40 + 24) = result;
            goto LABEL_50;
          }
        }
      }
      if ( (*(_BYTE *)(a5 + 4) & 4) == 0 )
      {
        v42 = a5 + 8LL * (v34 - 1);
        result = *(_QWORD *)(v42 + 24);
        if ( (result & 0xC00) == 0 && (result & 0xFFFFFFFFFFFFF000uLL) == (v32 << 12) + v31 )
        {
          v61 = *(_QWORD *)(v42 + 24) & 0x3FFLL;
          if ( v61 + v32 > v61 && v61 + v32 <= 0x3FF )
          {
            result = ((unsigned __int16)(result - ((_WORD)v32 << 12)) ^ (unsigned __int16)(result
                                                                                         - ((_WORD)v32 << 12)
                                                                                         + v32)) & 0x3FF ^ (unsigned __int64)(result - (v32 << 12));
            *(_QWORD *)(a5 + 16) += v32;
            *(_QWORD *)(v42 + 24) = result;
            goto LABEL_50;
          }
        }
      }
    }
    if ( v34 >= *(_DWORD *)(a5 + 8) )
    {
      *(_BYTE *)(a5 + 5) = 1;
    }
    else if ( v32 )
    {
      while ( 1 )
      {
        v35 = 1024LL;
        if ( (unsigned __int64)(v33 - 1) <= 0x3FF )
          v35 = v33;
        v33 -= v35;
        result = v31 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v35 - 1) & 0x3FF;
        v31 += v35 << 12;
        *(_QWORD *)(a5 + 8LL * (unsigned int)(*(_DWORD *)(a5 + 12))++ + 24) = result;
        v36 = *(unsigned int *)(a5 + 12);
        *(_QWORD *)(a5 + 16) += v35;
        if ( (_DWORD)v36 == *(_DWORD *)(a5 + 8) && (*(_BYTE *)(a5 + 4) & 4) == 0 )
        {
          qsort((void *)(a5 + 24), v36, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(a5);
          result = *(unsigned int *)(a5 + 12);
          if ( (_DWORD)result == *(_DWORD *)(a5 + 8) )
            break;
        }
        if ( !v33 )
          goto LABEL_50;
      }
      if ( v33 )
      {
        *(_BYTE *)(a5 + 5) = 1;
        *(_QWORD *)(a5 + 16) = result;
      }
    }
  }
LABEL_50:
  if ( v68 == 1 && (v30 & 0x42) != 0 )
  {
    v37 = v65;
    if ( v65 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x40 || (result = MiRotatedToFrameBuffer(a2), (_DWORD)result) )
      {
        v38 = 0LL;
        v64 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v64);
          while ( *(__int64 *)(v37 + 24) < 0 );
        }
        v39 = *(_BYTE *)(v37 + 34);
        result = 0LL;
        if ( (v39 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v37 + 16), 0xAu) & (unsigned __int8)~(v39 >> 3)) != 0 )
          {
            result = MiCapturePageFileInfoInline(v37 + 16, 1LL);
            v39 = *(_BYTE *)(v37 + 34);
          }
          *(_BYTE *)(v37 + 34) = v39 | 0x10;
          if ( result )
            v38 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v37 + 40) >> 40) & 0x3FFLL));
        }
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( result )
          return MiReleasePageFileInfo(v38, result, 1LL);
      }
    }
  }
  return result;
}
