/*
 * XREFs of MiComputePageCommitment @ 0x140020D00
 * Callers:
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiCountCommittedPages @ 0x1402D3AA0 (MiCountCommittedPages.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14005DF80 (MiGetNextPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140102110 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        int a5,
        _QWORD *a6)
{
  int v6; // ebx
  __int64 v7; // r13
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  _QWORD *v11; // r14
  int v12; // eax
  __int64 NextPageTable; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // r15
  _KPROCESS *v17; // r12
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v21; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 CloneAddress; // rax
  unsigned __int64 v33; // r10
  unsigned __int16 *v34; // [rsp+30h] [rbp-58h]
  unsigned int v35; // [rsp+90h] [rbp+8h] BYREF
  __int64 v36; // [rsp+98h] [rbp+10h] BYREF
  _KPROCESS *Process; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = *(_QWORD *)&Process[1].IdealNode[14];
  v34 = &Process[1].IdealNode[6];
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) < 0 )
  {
    v6 = 2;
    v10 = ((__int64)(v9 - v8) >> 3) + 1;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = a6;
  if ( a6 )
    *a6 = 0LL;
  if ( v8 <= v9 )
  {
    v12 = a5;
    do
    {
      NextPageTable = MiGetNextPageTable(v8, v9, 0, a4, v12, (__int64)&v35);
      v8 = NextPageTable;
      if ( !NextPageTable )
        return v10;
      v14 = NextPageTable;
      v15 = 1LL;
      if ( v35 )
      {
        v21 = v35;
        do
        {
          v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v15 <<= 9;
          --v21;
        }
        while ( v21 );
      }
      v16 = 8 * v15;
      a6 = (_QWORD *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v17 = Process;
      do
      {
        v18 = *(_QWORD *)v14;
        if ( v14 >= 0xFFFFF6FB7DBED000uLL
          && v14 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v23 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v14 >> 3) & 0x1FF));
            v24 = v18 | 0x20;
            if ( (v23 & 0x20) == 0 )
              v24 = *(_QWORD *)v14;
            v18 = v24;
            if ( (v23 & 0x42) != 0 )
              v18 = v24 | 0x42;
          }
        }
        v36 = v18;
        if ( v18 )
        {
          if ( (unsigned __int64)&v36 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v36 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v19 = v18;
            if ( (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v18 & 1) != 0
              && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
            {
              v25 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              v19 = v18;
              if ( v25 )
              {
                v19 = v18 | 0x20;
                v26 = *(_QWORD *)(v25 + 8 * (((unsigned __int64)&v36 >> 3) & 0x1FF));
                if ( (v26 & 0x20) == 0 )
                  v19 = v18;
                if ( (v26 & 0x42) != 0 )
                  v19 |= 0x42uLL;
              }
            }
          }
          else
          {
            v19 = v18;
          }
          v6 = (v19 & 0x3E0) != 0x200
            || (v19 & 1) != 0
            || (v19 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v19)
             ? v6 & 0xFFFFFFFE
             : v6 | 1;
          if ( (v6 & 2) != 0 )
          {
            if ( (v6 & 1) != 0 )
              v10 -= v15;
          }
          else if ( (v6 & 1) == 0 )
          {
            v10 += v15;
          }
          if ( v11 && *(_QWORD *)(v7 + 360) && (v6 & 1) == 0 )
          {
            if ( (v18 & 1) != 0 )
            {
              v27 = MI_READ_PTE_LOCK_FREE(&v36);
              if ( (*(_QWORD *)(48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
                goto LABEL_22;
              v28 = *(_QWORD *)(48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
              if ( v28 >= 0 )
                goto LABEL_22;
              v29 = v28 | 0x8000000000000000uLL;
            }
            else
            {
              if ( (v18 & 0x400) == 0
                || (unsigned int)MiIsPrototypePteVadLookup(v18)
                || (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v30) )
              {
                goto LABEL_22;
              }
              if ( qword_140465B00 && (v31 & 0x10) == 0 )
                v31 &= ~qword_140465B00;
              v29 = v31 >> 16;
            }
            CloneAddress = MiLocateCloneAddress(v17, v29);
            if ( CloneAddress && v33 > *(_QWORD *)(CloneAddress + 96) )
              ++*v11;
          }
        }
LABEL_22:
        v8 += v16;
        v14 += 8LL;
      }
      while ( (v14 & 0xFFF) != 0 && v8 <= v9 );
      v12 = a5;
      if ( (a5 & 4) == 0 )
      {
        MiUnlockPageTableInternal(v34);
        v12 = a5;
      }
      a4 = v38;
    }
    while ( v8 <= v9 );
  }
  return v10;
}
