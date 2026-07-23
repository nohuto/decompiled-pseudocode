/*
 * XREFs of MiLockPageLeafPageTable @ 0x140041DD0
 * Callers:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140094BAC (MiProbeLeafFrame.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFaultInProbeAddress @ 0x14009363C (MiFaultInProbeAddress.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  char v16; // r12
  __int64 v17; // r10
  __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-48h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]
  unsigned __int64 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+38h] [rbp-30h]
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[12];
  v4 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
  a1[5] = ZeroPte;
  v5 = v4 - 0x98000000000LL;
  v25 = v5;
  v26 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a1[4];
  v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v6 )
  {
    if ( v6 == ((a1[2] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_4;
    MiUnlockPageTableInternal(v2, v6);
    *((_DWORD *)a1 + 16) &= ~0x20u;
    a1[4] = 0LL;
  }
  v7 = MiFastLockLeafPageTable(v2, v1, 4LL);
  if ( !v7 )
  {
    LODWORD(v11) = 3;
    a1[4] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL, v8);
    goto LABEL_13;
  }
  a1[4] = *(&v25 + v7);
  if ( v7 != 1 )
  {
    LODWORD(v11) = v7 - 1;
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_4:
    v9 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          v6 = *(_QWORD *)v5;
          if ( (v9 & 1) == 0 || (v9 & 0x20) != 0 && (v9 & 0x42) != 0 )
          {
            v5 = v25;
          }
          else
          {
            v6 = *(_QWORD *)v5;
            v5 = v25;
            v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( !v23 )
              goto LABEL_5;
            v6 = v9 | 0x20;
            v24 = *(_QWORD *)(v23 + 8 * ((v25 >> 3) & 0x1FF));
            if ( (v24 & 0x20) == 0 )
              v6 = v9;
            if ( (v24 & 0x42) != 0 )
              v6 |= 0x42uLL;
          }
          goto LABEL_44;
        }
        v5 = v25;
      }
      v6 = v9;
LABEL_44:
      v9 = v6;
    }
LABEL_5:
    if ( (v9 & 1) != 0 )
      break;
    result = MiFaultInProbeAddress(a1, v6);
    if ( (int)result < 0 )
    {
LABEL_30:
      ++dword_14043B8DC;
      return result;
    }
    a1[4] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL, v21);
    LODWORD(v11) = 3;
LABEL_13:
    v11 = (int)v11;
    if ( (_DWORD)v11 )
    {
      while ( 1 )
      {
        v12 = *(&v25 + v11);
        v13 = MI_READ_PTE_LOCK_FREE(v12);
        v29 = v13;
        if ( (v13 & 1) != 0 )
        {
          if ( (v13 & 0x80u) != 0LL )
          {
            if ( *((_DWORD *)a1 + 22) == 1 && (v13 & 0x800) == 0 )
            {
              ++dword_14043B8E4;
              return 3221225477LL;
            }
            v16 = 1;
            v1 >>= 12;
            v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL;
            v17 = 1LL;
            do
            {
              v18 = v1;
              v1 >>= 9;
              v19 = v17 * (v18 & 0x1FF);
              v17 <<= 9;
              v15 += v19;
              --v11;
            }
            while ( v11 );
            v20 = *a1;
            a1[16] = v15;
            a1[18] = v20 & ~((v17 << 12) - 1);
            a1[19] = (~((v17 << 12) - 1) & ((v17 << 12) + v20)) - 1;
            *((_DWORD *)a1 + 16) |= 0x20u;
            a1[20] = v15 & ~(v17 - 1);
          }
          else
          {
            v16 = 0;
          }
          MiLockPageTableInternal(v2, v12, 0LL, v15);
          MiUnlockPageTableInternal(v2, a1[4]);
          a1[4] = v12;
          if ( v16 )
            return 0LL;
        }
        else
        {
          result = MiFaultInProbeAddress(a1, v14);
          if ( (int)result < 0 )
            goto LABEL_30;
          a1[4] = 0xFFFFF6FB7DBEDF68uLL;
          MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL, v22);
          v11 = 4LL;
        }
        if ( !--v11 )
          goto LABEL_4;
      }
    }
  }
  a1[5] = v9;
  return 0LL;
}
