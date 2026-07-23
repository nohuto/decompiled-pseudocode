/*
 * XREFs of MiWsleFlush @ 0x1400B3250
 * Callers:
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiReservePageFileSpace @ 0x140081310 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x140081D30 (MI_IS_RESET_PTE.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiLockVadCore @ 0x140087AC0 (MiLockVadCore.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140098414 (MiUnlockNestedPageTableWritePte.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiGetWsleProtection @ 0x1400B5B60 (MiGetWsleProtection.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiUnlockVadCore @ 0x140125838 (MiUnlockVadCore.c)
 */

unsigned __int64 __fastcall MiWsleFlush(char *a1, unsigned __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v4; // r13
  char *v5; // r15
  int v6; // esi
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  unsigned __int64 v15; // rdi
  int v16; // edx
  unsigned __int64 v17; // r10
  __int64 v18; // r8
  volatile __int64 v19; // rdx
  char v20; // r11
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  int WsleProtection; // eax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // r9
  char v31; // r11
  __int64 v32; // rcx
  __int64 v33; // r10
  unsigned __int64 Address; // rax
  __int64 v35; // r8
  int v36; // eax
  signed __int8 v37; // cf
  __int64 **VadEvent; // r13
  __int64 v39; // r8
  unsigned __int64 v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // r8
  _QWORD *CloneAddress; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  char v62; // r9
  unsigned __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v68; // r8
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r8
  int v72; // [rsp+20h] [rbp-58h] BYREF
  __int64 v73; // [rsp+28h] [rbp-50h] BYREF
  __int64 v74; // [rsp+30h] [rbp-48h]
  unsigned __int64 v75; // [rsp+38h] [rbp-40h]
  int v78; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v51 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v51 )
    {
      v52 = *(_QWORD *)(v51 + 8 * ((v7 >> 3) & 0x1FF));
      v53 = v8 | 0x20;
      if ( (v52 & 0x20) == 0 )
        v53 = *(_QWORD *)v7;
      v8 = v53;
      if ( (v52 & 0x42) != 0 )
        v8 = v53 | 0x42;
    }
  }
  v73 = v8;
  if ( (unsigned __int64)&v73 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v73 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v9 = v8;
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      v54 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      v9 = v8;
      if ( v54 )
      {
        v9 = v8 | 0x20;
        v55 = *(_QWORD *)(v54 + 8 * (((unsigned __int64)&v73 >> 3) & 0x1FF));
        if ( (v55 & 0x20) == 0 )
          v9 = v8;
        if ( (v55 & 0x42) != 0 )
          v9 |= 0x42uLL;
      }
    }
  }
  else
  {
    v9 = v8;
  }
  v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
  v11 = 48 * v10 - 0x58000000000LL;
  v12 = 0x200000000000000LL;
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0 )
    return 0LL;
  if ( (v5[184] & 7) == 0 )
  {
    v13 = 0LL;
    v74 = 0LL;
    goto LABEL_8;
  }
  if ( *(_WORD *)(v11 + 32) <= 1u )
  {
    v13 = 48 * v10 - 0x58000000000LL;
    v72 = 0;
    v37 = _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL);
    v74 = v11;
    if ( v37 )
    {
      do
      {
        do
          KeYieldProcessorEx(&v72, v12, a3);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
      v13 = v11;
    }
LABEL_8:
    if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0
      || (v14 = v5[184] & 7) != 0 && *(_WORD *)(v11 + 32) > 1u )
    {
      if ( v13 )
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    v15 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !v14
      && (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0
      && v7 <= 0xFFFFF6BFFFFFFF78uLL
      && v7 >= 0xFFFFF68000000000uLL
      && (v8 & 0x42) != 0
      && (*((_DWORD *)v5 - 127) & 0x8020) == 0x8000 )
    {
      Address = MiLocateAddress(v4);
      v75 = Address;
      v35 = Address;
      if ( Address )
      {
        v36 = *(_DWORD *)(Address + 48);
        if ( (v36 & 0x20000000) == 0 && (v36 & 7) == 4 )
        {
          VadEvent = MiLocateVadEvent(v35, 4);
          v40 = (a2 >> 12) - (*(unsigned int *)(v39 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v39 + 32) << 32));
          MiLockVadCore(v39, v41, v39);
          LOBYTE(v42) = 2;
          v43 = v75;
          _bittestandset64(VadEvent[2], v40);
          MiUnlockVadCore(v43, v42, v44);
          v5 = a1;
          v4 = a2;
        }
      }
    }
    v16 = 0;
    v78 = 0;
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( MiPteInShadowRange(v7)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        v56 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v56 )
        {
          v57 = *(_QWORD *)(v56 + 8 * ((v7 >> 3) & 0x1FF));
          v58 = v25 | 0x20;
          if ( (v57 & 0x20) == 0 )
            v58 = v25;
          v25 = v58;
          if ( (v57 & 0x42) != 0 )
            v25 = v58 | 0x42;
        }
      }
      WsleProtection = MiGetWsleProtection(v4, (unsigned __int8)((16 * ((v25 >> 60) & 7)) | HIBYTE(v25) & 0xF));
      if ( WsleProtection )
      {
        v73 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
      }
      else
      {
        v29 = MiSwizzleInvalidPte(((v27 | *(_QWORD *)(v11 + 8)) << 16) | 0x400);
        v73 = v29;
        v32 = v29;
        if ( (v5[184] & 7u) >= 2 && (v8 & 0xA00) == 0 && v8 < 0 )
        {
          v73 = v29 | 8;
          v32 = v29 | 8;
        }
        if ( v28 >= 0 )
        {
          v73 = v32 | 0x800;
        }
        else if ( (v31 & 2) != 0 )
        {
          if ( *((_QWORD *)v5 - 46) )
          {
            CloneAddress = MiLocateCloneAddress((__int64)(v5 - 1280), v30);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v60 + 1296) + 312LL) > CloneAddress[12] )
                v73 = v61 | 8;
            }
          }
        }
      }
    }
    else
    {
      if ( v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v78 = 1;
        MiLockPageTableInternal((__int64)v5, v7, 0);
        if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          MiUnlockPageTableInternal(v5, v7);
          if ( v74 )
            _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v16 = 1;
      }
      if ( ((*(_QWORD *)(v11 + 40) >> 54) & 7) == 4 && v5 == MiGetAnyMultiplexedVm(2) )
      {
        MiReleasePageFileSpace((struct _KEVENT *)&MiSystemPartition, *(_QWORD *)(v11 + 16));
        v45 = v4 & 0xFFFFFFFFFFFFF000uLL;
        v15 |= 4uLL;
        v73 = MI_READ_PTE_LOCK_FREE(v45) | 2;
        v6 = 1;
        if ( MiPteInShadowRange(v7) )
        {
          if ( (unsigned int)MiPteHasShadow(v47, v46) )
          {
            if ( !HIBYTE(word_14043B26C) && (v62 & 1) != 0 )
              v46 |= 0x8000000000000000uLL;
            *(_QWORD *)v7 = v46;
            MiWritePteShadow(v7);
            goto LABEL_98;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v62 & 1) != 0 )
          {
            v46 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v7 = v46;
LABEL_98:
        MiInsertTbFlushEntry(a4, v45, 1LL);
        MiFlushTbList(a4, v48, v49, v50);
        v17 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_31;
      }
      v17 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)&v73 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v73 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v8 & 1) != 0
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        v63 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v63 )
        {
          v64 = v8 | 0x20;
          v65 = *(_QWORD *)(v63 + 8 * (((unsigned __int64)&v73 >> 3) & 0x1FF));
          if ( (v65 & 0x20) == 0 )
            v64 = v8;
          v8 = v64;
          v16 = v78;
          if ( (v65 & 0x42) != 0 )
            v8 |= 0x42uLL;
        }
      }
      v18 = v8 & 0xFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v11 + 16) >> 5) & 0x1F | 0x40LL));
      if ( qword_14043B180 )
      {
        if ( (qword_14043B180 & v18) != 0 )
          v18 |= 0x10uLL;
        else
          v18 |= qword_14043B180;
      }
      v73 = v18;
      if ( v16 )
      {
        MiUnlockNestedPageTableWritePte((__int64)v5, (volatile __int64 *)v7, v18, 0);
        goto LABEL_45;
      }
    }
    v19 = *(_QWORD *)v7;
    if ( v7 >= v17 && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v19) )
        LOBYTE(v19) = v19 | 0x20;
    }
    if ( (MiFlags & 0x800) != 0 )
    {
      LOBYTE(v19) = 32;
    }
    else if ( (MiFlags & 0x4000000) != 0 )
    {
      _mm_lfence();
    }
    if ( (v19 & 0x20) != 0 )
    {
      v24 = v73;
      if ( v7 >= v17 && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v73) )
        {
          if ( !HIBYTE(word_14043B26C) && (v24 & 1) != 0 )
            v24 |= v68;
          *(_QWORD *)v7 = v24;
          MiWritePteShadow(v7);
          goto LABEL_45;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v24 & 1) != 0 )
        {
          v24 = v68 | v73;
        }
      }
      *(_QWORD *)v7 = v24;
    }
    else
    {
      v20 = _InterlockedExchange64((volatile __int64 *)v7, v73);
      if ( v7 >= v17 && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        MiWritePteShadow(v7);
        v17 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( (v20 & 0x20) == 0 )
      {
LABEL_31:
        if ( v74 )
          _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v6 == 1 || (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
          return v15;
        v21 = *(_QWORD *)(v11 + 16);
        v22 = v11 + 16;
        if ( v11 + 16 >= v17
          && v22 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v21 & 1) == 0 )
            goto LABEL_37;
          if ( (v21 & 0x20) == 0 || (v21 & 0x42) == 0 )
          {
            v69 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v69 )
            {
              v70 = *(_QWORD *)(v69 + 8 * ((v22 >> 3) & 0x1FF));
              v71 = v21 | 0x20;
              if ( (v70 & 0x20) == 0 )
                v71 = *(_QWORD *)(v11 + 16);
              v21 = v71;
              if ( (v70 & 0x42) != 0 )
                v21 = v71 | 0x42;
            }
          }
        }
        if ( (v21 & 1) != 0 )
          return v15;
LABEL_37:
        if ( (!v21 || !qword_14043B180 || (v21 & qword_14043B180) != 0)
          && *(_DWORD *)(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)) + 1020LL)
          && (v21 & 2) == 0
          && ((v5[184] & 7) != 0 || !*((_QWORD *)MiGetSharedVm((__int64)v5) + 3))
          && (!MI_IS_RESET_PTE(v21) || (*(_BYTE *)(v11 + 34) & 0x10) != 0 || (*(_BYTE *)v7 & 0x42) != 0)
          && v7 <= 0xFFFFF6BFFFFFFF78uLL
          && v7 >= 0xFFFFF68000000000uLL )
        {
          MiReservePageFileSpace(v33, v7, (__int64)v5);
        }
        return v15;
      }
    }
LABEL_45:
    MiInsertTbFlushEntry(a4, v4 & 0xFFFFFFFFFFFFF000uLL, 1LL);
    v17 = 0xFFFFF6FB7DBED000uLL;
    goto LABEL_31;
  }
  return 0LL;
}
