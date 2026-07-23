/*
 * XREFs of MiGetPageProtection @ 0x14003FFE0
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14011B8F0 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiGetImageProtoProtection @ 0x14011F970 (MiGetImageProtoProtection.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiGetValidAweProtection @ 0x1402B0F80 (MiGetValidAweProtection.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1402BF5DC (MiCaptureProtectionFromLockedProto.c)
 */

ULONG_PTR __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 *a3)
{
  ULONG_PTR v3; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // ebp
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  _KPROCESS *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  _KPROCESS *Process; // rcx
  int v22; // ecx
  __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  unsigned __int64 ProtoPteAddress; // rbp
  _QWORD *v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // edx
  _QWORD *v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  ULONG_PTR v44; // [rsp+78h] [rbp+10h] BYREF
  __int64 v45; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)BugCheckParameter2;
  *a3 = 0LL;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
      v31 = v3 | 0x20;
      if ( (v30 & 0x20) == 0 )
        v31 = v3;
      v3 = v31;
      if ( (v30 & 0x42) != 0 )
        v3 = v31 | 0x42;
    }
  }
  v44 = v3;
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 0x400) == 0 )
      return (v3 >> 5) & 0x1F;
    if ( !MiIsPrototypePteVadLookup(v3) )
    {
      v19 = v3;
      if ( qword_14043B180 && (v3 & 0x10) == 0 )
        v19 = v3 & ~qword_14043B180;
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v3, v18, v19 >> 16) )
        return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v20)];
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(Process, v20) )
          return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v20)];
      }
      v22 = *(_DWORD *)(BugCheckParameter4 + 48);
      if ( (v22 & 7) != 2 || (v22 & 0xF8) != 0x38 )
        KeBugCheckEx(0x1Au, 0x41202uLL, BugCheckParameter2, v3, BugCheckParameter4);
      return MiGetImageProtoProtection(BugCheckParameter4, v20);
    }
    v23 = (v3 >> 5) & 0x1F;
    if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x4000) == 0 )
    {
      v24 = (unsigned __int64)((__int64)(BugCheckParameter2 << 25) >> 16) >> 12;
      ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter4, v24, 4LL, &v45);
      if ( !ProtoPteAddress )
        goto LABEL_46;
      v26 = *(_QWORD **)(BugCheckParameter4 + 120);
      if ( (__int64)v26 < 0
        && v24
         - (*(unsigned int *)(BugCheckParameter4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4 + 32) << 32)) > (unsigned __int64)(*v26 - 1LL) >> 12 )
      {
        goto LABEL_46;
      }
      if ( *(_QWORD *)(*(_QWORD *)v45 + 64LL) || (*(_DWORD *)(*(_QWORD *)v45 + 56LL) & 0x2000) != 0 )
        return (unsigned int)v23;
      if ( !MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, 0LL) )
      {
        *a3 = ProtoPteAddress;
        LODWORD(v23) = 256;
        return (unsigned int)v23;
      }
      v27 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
      MiUnlockProtoPoolPage(v28, 2u);
      if ( !v27 )
LABEL_46:
        LODWORD(v23) = 0;
    }
    return (unsigned int)v23;
  }
  if ( (unsigned __int64)&v44 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v44 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v7 = v3;
    if ( (MiFlags & 0xC00000) == 0
      || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
      || (v3 & 0x20) != 0 && (v3 & 0x42) != 0 )
    {
      goto LABEL_5;
    }
    v32 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 8 * (((unsigned __int64)&v44 >> 3) & 0x1FF));
      v7 = v3 | 0x20;
      if ( (v33 & 0x20) == 0 )
        v7 = v3;
      if ( (v33 & 0x42) != 0 )
        v7 |= 0x42uLL;
      goto LABEL_5;
    }
  }
  v7 = v3;
LABEL_5:
  v8 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL);
  v9 = *(_DWORD *)(BugCheckParameter4 + 48);
  if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 && (unsigned int)MiRotatedToFrameBuffer(BugCheckParameter2) )
  {
    LODWORD(v13) = 4;
    if ( (v3 & 0x800) == 0 )
      LODWORD(v13) = 1;
    v34 = v9 & 0xC0;
    if ( (v9 & 0x38) != 0 && v34 == 192 )
    {
      LODWORD(v13) = v13 | 0x18;
    }
    else if ( v34 == 64 )
    {
      LODWORD(v13) = v13 | 8;
    }
    return (unsigned int)v13;
  }
  if ( (*(_QWORD *)(v8 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
    || (*(_QWORD *)(v8 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
    && (*(_QWORD *)(v8 - 0x58000000000LL + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    KeBugCheckEx(0x1Au, 0x41201uLL, BugCheckParameter2, v3, BugCheckParameter4);
  }
  if ( (*(_QWORD *)(v8 - 0x58000000000LL + 40) & 0x200000000000000LL) != 0 )
  {
    v12 = ((((__int64)(BugCheckParameter2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
    v13 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 8 * ((v12 >> 3) & 0x1FF));
        v40 = v13 | 0x20;
        if ( (v39 & 0x20) == 0 )
          v40 = *(_QWORD *)v12;
        v13 = v40;
        if ( (v39 & 0x42) != 0 )
          v13 = v40 | 0x42;
      }
    }
    LODWORD(v13) = (v13 >> 60) & 7;
    if ( (_DWORD)v13 )
    {
      if ( (*(_QWORD *)v12 & 0x18) == 8 )
      {
        LODWORD(v13) = v13 | 0x18;
      }
      else if ( (*(_QWORD *)v12 & 0x10) != 0 )
      {
        LODWORD(v13) = v13 | 8;
      }
      return (unsigned int)v13;
    }
    v14 = v8 - 0x57FFFFFFFF0LL;
    v15 = *(_QWORD *)(v8 - 0x57FFFFFFFF0LL);
    if ( (unsigned __int64)(v8 - 0x57FFFFFFFF0LL) >= 0xFFFFF6FB7DBED000uLL
      && v14 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v41 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v41 )
      {
        v42 = *(_QWORD *)(v41 + 8 * ((v14 >> 3) & 0x1FF));
        v43 = v15 | 0x20;
        if ( (v42 & 0x20) == 0 )
          v43 = *(_QWORD *)(v8 - 0x57FFFFFFFF0LL);
        v15 = v43;
        if ( (v42 & 0x42) != 0 )
          v15 = v43 | 0x42;
      }
    }
    v16 = *(_QWORD *)(v8 - 0x58000000000LL + 8);
    v13 = (v15 >> 5) & 0x1F;
    if ( v16 < 0 )
    {
      v17 = KeGetCurrentThread()->ApcState.Process;
      if ( !v17[1].Affinity.Bitmap[12] || !MiLocateCloneAddress(v17, v16 | 0x8000000000000000uLL) )
        return (unsigned int)v13;
    }
    return (unsigned int)MmMakeProtectNotWriteCopy[v13];
  }
  else if ( ((*(_QWORD *)(v8 - 0x58000000000LL + 40) >> 54) & 7) == 1 )
  {
    v35 = (_QWORD *)qword_14043B248;
    if ( qword_14043B248 )
    {
      v36 = v8 / 48;
      do
      {
        v37 = v35[3];
        if ( v36 < v37 )
        {
          v35 = (_QWORD *)*v35;
        }
        else
        {
          if ( v36 - v37 < v35[4] )
            return (*(_DWORD *)(v8 - 0x58000000000LL + 16) >> 5) & 0x1F;
          v35 = (_QWORD *)v35[1];
        }
      }
      while ( v35 );
    }
    return (unsigned int)MiGetValidAweProtection(v3);
  }
  else
  {
    return (*(_DWORD *)(v8 - 0x58000000000LL + 16) >> 5) & 0x1F;
  }
}
