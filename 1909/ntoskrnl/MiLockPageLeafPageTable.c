/*
 * XREFs of MiLockPageLeafPageTable @ 0x1400CCA80
 * Callers:
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x1400DDB74 (MiProbeLeafFrame.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1400AB5F0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiFaultInProbeAddress @ 0x1400DE680 (MiFaultInProbeAddress.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // r12
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  __int16 v17; // ax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+30h] [rbp-38h]
  __int64 v26; // [rsp+38h] [rbp-30h]
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 96);
  v4 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
  *(_QWORD *)(a1 + 40) = ZeroPte;
  v5 = v4 - 0x98000000000LL;
  v23 = v5;
  v24 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = *(_KPROCESS **)(a1 + 32);
  v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( Process )
  {
    if ( Process == (_KPROCESS *)(((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      goto LABEL_4;
    MiUnlockPageTableInternal(v2);
    *(_DWORD *)(a1 + 64) &= ~0x20u;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v7 = MiFastLockLeafPageTable(v2, v1, 4);
  if ( !v7 )
  {
    LODWORD(v10) = 3;
    *(_QWORD *)(a1 + 32) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 32) = *(&v23 + v7);
  if ( v7 != 1 )
  {
    LODWORD(v10) = v7 - 1;
    goto LABEL_14;
  }
  while ( 1 )
  {
LABEL_4:
    v8 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy == 1 || (v8 & 1) == 0 || (v8 & 0x20) != 0 && (v8 & 0x42) != 0 )
      {
        v5 = v23;
      }
      else
      {
        v5 = v23;
        Process = KeGetCurrentThread()->ApcState.Process;
        DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v21 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v23 >> 3) & 0x1FF));
          v22 = v8 | 0x20;
          Process = (_KPROCESS *)(unsigned __int8)v21;
          LOBYTE(Process) = v21 & 0x20;
          if ( (v21 & 0x20) == 0 )
            v22 = v8;
          v8 = v22;
          if ( (v21 & 0x42) != 0 )
            v8 = v22 | 0x42;
        }
      }
    }
    if ( (v8 & 1) != 0 )
      break;
    result = MiFaultInProbeAddress(a1, Process);
    if ( (int)result < 0 )
    {
LABEL_27:
      ++dword_140465FBC;
      return result;
    }
    *(_QWORD *)(a1 + 32) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    LODWORD(v10) = 3;
LABEL_14:
    v10 = (int)v10;
    if ( (_DWORD)v10 )
    {
      while ( 1 )
      {
        v11 = *(&v23 + v10);
        v12 = MI_READ_PTE_LOCK_FREE(v11);
        v27 = v12;
        if ( (v12 & 1) != 0 )
        {
          if ( (v12 & 0x80u) != 0LL )
          {
            if ( *(_DWORD *)(a1 + 88) == 1 && (v12 & 0x800) == 0 )
            {
              ++dword_140465FC4;
              return 3221225477LL;
            }
            v14 = 1;
            v1 >>= 12;
            v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 12) & 0xFFFFFFFFFLL;
            v16 = 1LL;
            do
            {
              v17 = v1;
              v1 >>= 9;
              v18 = v16 * (v17 & 0x1FF);
              v16 <<= 9;
              v15 += v18;
              --v10;
            }
            while ( v10 );
            v19 = *(_QWORD *)a1;
            *(_QWORD *)(a1 + 128) = v15;
            *(_QWORD *)(a1 + 144) = v19 & ~((v16 << 12) - 1);
            *(_QWORD *)(a1 + 152) = (~((v16 << 12) - 1) & ((v16 << 12) + v19)) - 1;
            *(_DWORD *)(a1 + 64) |= 0x20u;
            *(_QWORD *)(a1 + 160) = v15 & ~(v16 - 1);
          }
          else
          {
            v14 = 0;
          }
          MiLockPageTableInternal(v2, v11, 0LL);
          MiUnlockPageTableInternal(v2);
          *(_QWORD *)(a1 + 32) = v11;
          if ( v14 )
            return 0LL;
        }
        else
        {
          result = MiFaultInProbeAddress(a1, v13);
          if ( (int)result < 0 )
            goto LABEL_27;
          *(_QWORD *)(a1 + 32) = 0xFFFFF6FB7DBEDF68uLL;
          MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
          v10 = 4LL;
        }
        if ( !--v10 )
          goto LABEL_4;
      }
    }
  }
  *(_QWORD *)(a1 + 40) = v8;
  return 0LL;
}
