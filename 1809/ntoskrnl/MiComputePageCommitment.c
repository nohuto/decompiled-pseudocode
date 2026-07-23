/*
 * XREFs of MiComputePageCommitment @ 0x140083940
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiCountCommittedPages @ 0x1402BD344 (MiCountCommittedPages.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6)
{
  int v6; // ebx
  _KPROCESS *Process; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  _QWORD *v12; // r14
  int v13; // r12d
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 CloneAddress; // rax
  unsigned __int64 v31; // r9
  char v32; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp+10h] BYREF
  char v34; // [rsp+88h] [rbp+20h]

  v34 = a4;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *(_QWORD *)&Process[1].IdealGlobalNode;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) < 0 )
  {
    v6 = 2;
    v11 = ((__int64)(v10 - v9) >> 3) + 1;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  if ( v9 <= v10 )
  {
    v13 = a5;
    do
    {
      NextPageTable = MiGetNextPageTable(v9, v10, 0, a4, v13, (__int64)&v32);
      v9 = NextPageTable;
      if ( !NextPageTable )
        return v11;
      a6 = (_QWORD *)(((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v15 = 0xFFFFF6FB7DBED7F8uLL;
      do
      {
        v16 = *(_QWORD *)v9;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL
          && v9 <= v15
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v16 & 1) != 0
          && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
        {
          v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8 * ((v9 >> 3) & 0x1FF));
            v21 = v16 | 0x20;
            if ( (v20 & 0x20) == 0 )
              v21 = *(_QWORD *)v9;
            v16 = v21;
            if ( (v20 & 0x42) != 0 )
              v16 = v21 | 0x42;
          }
        }
        v33 = v16;
        if ( v16 )
        {
          if ( (unsigned __int64)&v33 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v33 > v15 )
          {
            v17 = v16;
          }
          else
          {
            v17 = v16;
            if ( (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v16 & 1) != 0
              && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
            {
              v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              v17 = v16;
              if ( v22 )
              {
                v17 = v16 | 0x20;
                v23 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)&v33 >> 3) & 0x1FF));
                if ( (v23 & 0x20) == 0 )
                  v17 = v16;
                if ( (v23 & 0x42) != 0 )
                  v17 |= 0x42uLL;
              }
            }
          }
          v6 = (v17 & 0x3E0) != 0x200 || (v17 & 1) != 0 || (v17 & 0x400) != 0 && !MiIsPrototypePteVadLookup(v17)
             ? v6 & 0xFFFFFFFE
             : v6 | 1;
          if ( (v6 & 2) != 0 )
          {
            if ( (v6 & 1) != 0 )
              --v11;
          }
          else if ( (v6 & 1) == 0 )
          {
            ++v11;
          }
          if ( v12 && *(_QWORD *)(v8 + 312) && (v6 & 1) == 0 )
          {
            if ( (v16 & 1) != 0 )
            {
              v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33);
              if ( (*(_QWORD *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
                goto LABEL_20;
              v25 = *(_QWORD *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
              if ( v25 >= 0 )
                goto LABEL_20;
              v26 = v25 | 0x8000000000000000uLL;
            }
            else
            {
              if ( (v16 & 0x400) == 0
                || MiIsPrototypePteVadLookup(v16)
                || (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v28, v27, v28) )
              {
                goto LABEL_20;
              }
              if ( qword_14043B180 && (v29 & 0x10) == 0 )
                v29 &= ~qword_14043B180;
              v26 = v29 >> 16;
            }
            CloneAddress = MiLocateCloneAddress(Process, v26);
            if ( CloneAddress && v31 > *(_QWORD *)(CloneAddress + 96) )
              ++*v12;
          }
        }
LABEL_20:
        v9 += 8LL;
      }
      while ( (v9 & 0xFFF) != 0 && v9 <= v10 );
      v13 = a5;
      if ( (a5 & 4) == 0 )
        MiUnlockPageTableInternal(&Process[1].IdealNode[12], a6);
      a4 = v34;
    }
    while ( v9 <= v10 );
  }
  return v11;
}
