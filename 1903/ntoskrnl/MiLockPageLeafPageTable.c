/*
 * XREFs of MiLockPageLeafPageTable @ 0x14008F490
 * Callers:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x1400F0464 (MiProbeLeafFrame.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiFaultInProbeAddress @ 0x1400EEE90 (MiFaultInProbeAddress.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // rdx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  char v17; // r12
  __int64 v18; // r10
  __int16 v19; // ax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]
  unsigned __int64 v28; // [rsp+30h] [rbp-38h]
  __int64 v29; // [rsp+38h] [rbp-30h]
  __int64 v30; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[12];
  v4 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
  a1[5] = ZeroPte;
  v5 = v4 - 0x98000000000LL;
  v26 = v5;
  v27 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = (_KPROCESS *)a1[4];
  v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( Process )
  {
    if ( Process == (_KPROCESS *)(((a1[2] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      goto LABEL_4;
    MiUnlockPageTableInternal(v2);
    *((_DWORD *)a1 + 16) &= ~0x20u;
    a1[4] = 0LL;
  }
  v7 = MiFastLockLeafPageTable(v2, v1, 4LL);
  if ( !v7 )
  {
    LODWORD(v12) = 3;
    a1[4] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL, v8);
    goto LABEL_14;
  }
  a1[4] = *(&v26 + v7);
  if ( v7 != 1 )
  {
    LODWORD(v12) = v7 - 1;
    goto LABEL_14;
  }
  while ( 1 )
  {
LABEL_4:
    v9 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy == 1 || (v9 & 1) == 0 || (v9 & 0x20) != 0 && (v9 & 0x42) != 0 )
      {
        v5 = v26;
      }
      else
      {
        v5 = v26;
        Process = KeGetCurrentThread()->ApcState.Process;
        DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v24 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v26 >> 3) & 0x1FF));
          v25 = v9 | 0x20;
          Process = (_KPROCESS *)(unsigned __int8)v24;
          LOBYTE(Process) = v24 & 0x20;
          if ( (v24 & 0x20) == 0 )
            v25 = v9;
          v9 = v25;
          if ( (v24 & 0x42) != 0 )
            v9 = v25 | 0x42;
        }
      }
    }
    if ( (v9 & 1) != 0 )
      break;
    result = MiFaultInProbeAddress(a1, Process);
    if ( (int)result < 0 )
    {
LABEL_27:
      ++dword_1404662BC;
      return result;
    }
    a1[4] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL, v11);
    LODWORD(v12) = 3;
LABEL_14:
    v12 = (int)v12;
    if ( (_DWORD)v12 )
    {
      while ( 1 )
      {
        v13 = *(&v26 + v12);
        v14 = MI_READ_PTE_LOCK_FREE(v13);
        v30 = v14;
        if ( (v14 & 1) != 0 )
        {
          if ( (v14 & 0x80u) != 0LL )
          {
            if ( *((_DWORD *)a1 + 22) == 1 && (v14 & 0x800) == 0 )
            {
              ++dword_1404662C4;
              return 3221225477LL;
            }
            v17 = 1;
            v1 >>= 12;
            v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v30) >> 12) & 0xFFFFFFFFFLL;
            v18 = 1LL;
            do
            {
              v19 = v1;
              v1 >>= 9;
              v20 = v18 * (v19 & 0x1FF);
              v18 <<= 9;
              v16 += v20;
              --v12;
            }
            while ( v12 );
            v21 = *a1;
            a1[16] = v16;
            a1[18] = v21 & ~((v18 << 12) - 1);
            a1[19] = (~((v18 << 12) - 1) & ((v18 << 12) + v21)) - 1;
            *((_DWORD *)a1 + 16) |= 0x20u;
            a1[20] = v16 & ~(v18 - 1);
          }
          else
          {
            v17 = 0;
          }
          MiLockPageTableInternal(v2, v13, 0LL, v16);
          MiUnlockPageTableInternal(v2);
          a1[4] = v13;
          if ( v17 )
            return 0LL;
        }
        else
        {
          result = MiFaultInProbeAddress(a1, v15);
          if ( (int)result < 0 )
            goto LABEL_27;
          a1[4] = 0xFFFFF6FB7DBEDF68uLL;
          MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL, v22);
          v12 = 4LL;
        }
        if ( !--v12 )
          goto LABEL_4;
      }
    }
  }
  a1[5] = v9;
  return 0LL;
}
