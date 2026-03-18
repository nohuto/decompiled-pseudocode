/*
 * XREFs of MiGetPageProtection @ 0x1400A5DD0
 * Callers:
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400956A8 (MiTryLockProtoPoolPageAtDpc.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiLocateCloneAddress @ 0x1400BFAB8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x1400C02A0 (MiRotatedToFrameBuffer.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400CA9A0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiGetImageProtoProtection @ 0x1401234F4 (MiGetImageProtoProtection.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1401447B8 (MiCaptureProtectionFromLockedProto.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiGetValidAweProtection @ 0x1402D62F8 (MiGetValidAweProtection.c)
 */

ULONG_PTR __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 v9; // r11
  signed __int64 v10; // r15
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  unsigned int ValidAweProtection; // r8d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  _KPROCESS *v22; // rcx
  __int64 v23; // r8
  _KPROCESS *Process; // rcx
  int v25; // ecx
  __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  unsigned __int64 ProtoPteAddress; // r14
  _QWORD *v29; // rdx
  __int64 v30; // rbx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // edx
  _QWORD *v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r10
  ULONG_PTR v45; // [rsp+78h] [rbp+10h] BYREF
  __int64 v46; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR v47; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)BugCheckParameter2;
  *a3 = 0LL;
  *a4 = 0;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v32 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
      v33 = v4 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = v4;
      v4 = v33;
      if ( (v32 & 0x42) != 0 )
        v4 = v33 | 0x42;
    }
  }
  v45 = v4;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 0x400) == 0 )
      return (v4 >> 5) & 0x1F;
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v4) )
    {
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v4) )
        return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v23)];
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(Process, v23) )
          return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v23)];
      }
      v25 = *(_DWORD *)(BugCheckParameter4 + 48);
      if ( (v25 & 0x70) != 0x20 || (v25 & 0xF80) != 0x380 )
        KeBugCheckEx(0x1Au, 0x41202uLL, BugCheckParameter2, v4, BugCheckParameter4);
      return MiGetImageProtoProtection(BugCheckParameter4, v23);
    }
    v26 = (v4 >> 5) & 0x1F;
    if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x100000) == 0 )
    {
      v27 = (unsigned __int64)((__int64)(BugCheckParameter2 << 25) >> 16) >> 12;
      ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter4, v27, 4LL, &v46);
      if ( !ProtoPteAddress )
        goto LABEL_43;
      v29 = *(_QWORD **)(BugCheckParameter4 + 120);
      if ( (__int64)v29 < 0
        && v27
         - (*(unsigned int *)(BugCheckParameter4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4 + 32) << 32)) > (unsigned __int64)(*v29 - 1LL) >> 12 )
      {
        goto LABEL_43;
      }
      if ( *(_QWORD *)(*(_QWORD *)v46 + 64LL) || (*(_DWORD *)(*(_QWORD *)v46 + 56LL) & 0x2000) != 0 )
        return (unsigned int)v26;
      if ( (int)MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, (__int64)v29, (__int64 *)&v47, 0LL) < 0 )
      {
        *a3 = ProtoPteAddress;
        LODWORD(v26) = 256;
        return (unsigned int)v26;
      }
      v30 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
      MiUnlockProtoPoolPage(v47, 2u);
      if ( !v30 )
LABEL_43:
        LODWORD(v26) = 0;
    }
    return (unsigned int)v26;
  }
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL);
  v11 = *(_DWORD *)(BugCheckParameter4 + 48);
  if ( (v11 & 0x70) == 0x40 )
  {
    if ( (unsigned int)MiRotatedToFrameBuffer(BugCheckParameter2) )
    {
      ValidAweProtection = 4;
      if ( (v4 & 0x800) == 0 )
        ValidAweProtection = 1;
      v34 = v11 & 0xC00;
      if ( (v11 & 0x380) != 0 && v34 == 3072 )
      {
        ValidAweProtection |= 0x18u;
      }
      else if ( v34 == 1024 )
      {
        ValidAweProtection |= 8u;
      }
      return ValidAweProtection;
    }
    v9 = 0xFFFFF6FB7DBED000uLL;
  }
  if ( ((*(_QWORD *)(v10 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
     || (*(_QWORD *)(v10 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
     && (*(_QWORD *)(v10 - 0x58000000000LL + 8) | 0x8000000000000000uLL) != BugCheckParameter2)
    && ((v11 & 0x500000) != 0x500000 || (unsigned __int64)MiVadPageSizes[((unsigned __int64)v11 >> 18) & 3] < 0x200) )
  {
    KeBugCheckEx(0x1Au, 0x41201uLL, BugCheckParameter2, v4, BugCheckParameter4);
  }
  v12 = *(_QWORD *)(v10 - 0x58000000000LL + 40);
  if ( (v12 & 0x200000000000000LL) == 0 )
  {
    if ( ((v12 >> 54) & 7) == 1 )
    {
      v35 = (_QWORD *)qword_1404658C8;
      if ( qword_1404658C8 )
      {
        v36 = v10 / 48;
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
              goto LABEL_9;
            v35 = (_QWORD *)v35[1];
          }
        }
        while ( v35 );
      }
      ValidAweProtection = MiGetValidAweProtection(BugCheckParameter4, v4);
    }
    else
    {
LABEL_9:
      ValidAweProtection = (*(_DWORD *)(v10 - 0x58000000000LL + 16) >> 5) & 0x1F;
    }
    if ( (v11 & 0x1100000) == 0x1100000 )
      *a4 = 0;
    return ValidAweProtection;
  }
  v15 = ((((__int64)(BugCheckParameter2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
  v16 = *(_QWORD *)v15;
  if ( v15 >= v9
    && v15 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v16 & 1) != 0
    && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
  {
    v38 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 8 * ((v15 >> 3) & 0x1FF));
      v40 = v16 | 0x20;
      if ( (v39 & 0x20) == 0 )
        v40 = *(_QWORD *)v15;
      v16 = v40;
      if ( (v39 & 0x42) != 0 )
        v16 = v40 | 0x42;
    }
  }
  v17 = (v16 >> 60) & 7;
  if ( v17 )
  {
    if ( (*(_QWORD *)v15 & 0x18) == 8 )
    {
      v17 |= 0x18u;
    }
    else if ( (*(_QWORD *)v15 & 0x10) != 0 )
    {
      v17 |= 8u;
    }
    return v17;
  }
  v18 = v10 - 0x57FFFFFFFF0LL;
  v19 = *(_QWORD *)(v10 - 0x57FFFFFFFF0LL);
  if ( v10 - 0x57FFFFFFFF0LL >= v9
    && v18 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v41 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v41 )
    {
      v42 = *(_QWORD *)(v41 + 8 * ((v18 >> 3) & 0x1FF));
      v43 = v19 | 0x20;
      if ( (v42 & 0x20) == 0 )
        v43 = *(_QWORD *)(v10 - 0x57FFFFFFFF0LL);
      v19 = v43;
      if ( (v42 & 0x42) != 0 )
        v19 = v43 | 0x42;
    }
  }
  v20 = *(_QWORD *)(v10 - 0x58000000000LL + 8);
  v21 = (v19 >> 5) & 0x1F;
  if ( v20 < 0 )
  {
    v22 = KeGetCurrentThread()->ApcState.Process;
    if ( v22[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v22, v20 | 0x8000000000000000uLL) )
      LODWORD(v21) = *(_DWORD *)(v44 + 4 * v21 + 3654032);
    return (unsigned int)v21;
  }
  return (unsigned int)MmMakeProtectNotWriteCopy[v21];
}
