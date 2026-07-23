/*
 * XREFs of MiFastLockLeafPageTable @ 0x140045BC0
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiLockPageLeafPageTable @ 0x140041DD0 (MiLockPageLeafPageTable.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // r10d
  char v6; // al
  _DWORD *MmInternal; // rbx
  BOOL v8; // edx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // [rsp+24h] [rbp-54h]
  unsigned int v20; // [rsp+90h] [rbp+18h]
  unsigned __int64 v21; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = *(_BYTE *)(a1 + 184) & 7;
  if ( (unsigned __int8)(v6 - 1) > 2u && v6 != 7 )
  {
    if ( v6 == 5 )
    {
      if ( a2 >= qword_14043CB50 && a2 < qword_14043CB50 + 0x100000000000LL )
        return 0LL;
      goto LABEL_5;
    }
    if ( !v6 )
LABEL_5:
      v5 = 1;
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x1000000) == 0 || !MmInternal || MmInternal[3120] )
    return 0LL;
  MmInternal[3120] = 1;
  v19 = 0;
  v8 = 0;
  v9 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v10 = v9;
  v21 = v9;
  v20 = a3 | 2;
  if ( !v5 )
    goto LABEL_14;
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_QWORD *)v11;
  if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v16 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 8 * ((v11 >> 3) & 0x1FF));
        if ( (v17 & 0x20) != 0 )
          LOBYTE(v12) = v12 | 0x20;
        if ( (v17 & 0x42) != 0 )
          LOBYTE(v12) = v12 | 0x42;
      }
    }
    v8 = 0;
    v10 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  }
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 0x80u) != 0LL )
    {
      v19 = 3;
      v10 = ((v10 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v21 = v10;
    }
    while ( 1 )
    {
LABEL_14:
      v13 = *(_QWORD *)v10;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
          || (v13 & 1) == 0
          || (v13 & 0x20) != 0 && (v13 & 0x42) != 0 )
        {
          v10 = v21;
        }
        else
        {
          v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          v10 = v21;
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8 * ((v21 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              LOBYTE(v13) = v13 | 0x20;
            if ( (v15 & 0x42) != 0 )
              LOBYTE(v13) = v13 | 0x42;
          }
        }
      }
      if ( (v13 & 1) == 0 )
        break;
      if ( (v13 & 0x80u) == 0LL )
      {
        v8 = MiLockPageTableInternal(a1, v10, v20, 0xFFFFF6FB7DBED000uLL) != 0;
        goto LABEL_46;
      }
      v19 = 2;
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = v10;
    }
    v8 = 0;
  }
LABEL_46:
  --MmInternal[3120];
  if ( v8 && v19 )
  {
    if ( v19 == 3 )
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x81) == 0x81 )
    {
      if ( v19 == 3 )
        return 3;
      else
        return 2;
    }
    else
    {
      MiUnlockPageTableInternal(a1, v10);
      return 0;
    }
  }
  return v8;
}
