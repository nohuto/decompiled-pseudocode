/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1400656D0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v8; // rbp
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  int v16; // r11d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r10
  __int64 v19; // rcx
  unsigned int v20; // r9d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // r8
  __int64 CurrentIrql; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  __int64 Address; // rax
  char v39; // r10
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  int v48; // [rsp+20h] [rbp-68h] BYREF
  int v49; // [rsp+24h] [rbp-64h] BYREF
  __int64 v50; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+30h] [rbp-58h] BYREF
  __int64 v52; // [rsp+38h] [rbp-50h]
  __int64 v53; // [rsp+40h] [rbp-48h]
  unsigned __int64 v54; // [rsp+48h] [rbp-40h]
  int v56; // [rsp+98h] [rbp+10h]
  int v57; // [rsp+A0h] [rbp+18h]

  v8 = 0LL;
  v9 = 0xFFFFFFFFFLL;
  v10 = a1;
  v11 = 0xFFFFFFFFFLL;
  result = (unsigned __int64)&a2[a3];
  v54 = result;
  if ( (unsigned __int64)a2 < result )
  {
    v13 = 0xFFFFF6FB7DBED000uLL;
    while ( 1 )
    {
      result = 0xFFFFFA8000000000uLL;
      v14 = 48LL * *a2 - 0x58000000000LL;
      if ( v14 != qword_14043BE90 )
        break;
LABEL_42:
      ++a2;
      a4 += 8LL;
      if ( (unsigned __int64)a2 >= v54 )
        return result;
    }
    v15 = *(_QWORD *)a4;
    if ( a4 >= v13
      && a4 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 8 * ((a4 >> 3) & 0x1FF));
        v35 = v15 | 0x20;
        if ( (v34 & 0x20) == 0 )
          v35 = *(_QWORD *)a4;
        v15 = v35;
        if ( (v34 & 0x42) != 0 )
          v15 = v35 | 0x42;
      }
      v10 = a1;
    }
    v16 = 0;
    v17 = v15;
    v50 = v15;
    LOBYTE(v57) = 0;
    if ( (a6 & 0x40) != 0 )
    {
      if ( MiIsPrototypePteVadLookup(v15) )
      {
        v29 = v15;
      }
      else
      {
        v30 = v15;
        if ( qword_14043B180 && (v15 & 0x10) == 0 )
          v30 = v15 & ~qword_14043B180;
        v50 = MI_READ_PTE_LOCK_FREE(v30 >> 16);
        v31 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50);
        v29 = MI_READ_PTE_LOCK_FREE(48 * (v32 & (v31 >> 12)) - 0x57FFFFFFFF0LL);
      }
      v57 = MmMakeProtectNotWriteCopy[(v29 >> 5) & 0x1F];
      v17 = MiSwizzleInvalidPte(32LL * (v57 & 0x1F));
    }
    else
    {
      v18 = v15;
      if ( (v15 & 0xC00) != 0x800 )
        goto LABEL_7;
      if ( qword_14043B180 && (v15 & 0x10) == 0 )
        v17 = v15 & ~qword_14043B180;
      v17 = *(_QWORD *)(48 * (v9 & (v17 >> 12)) - 0x58000000000LL + 16);
    }
    v18 = v17;
    v50 = v17;
LABEL_7:
    *(_QWORD *)(v14 + 16) = v17;
    if ( (a6 & 0x40) != 0 )
    {
      LODWORD(v19) = v16;
    }
    else
    {
      if ( (a6 & 0x10) != 0 )
      {
        *(_QWORD *)(v14 + 40) |= 0x200000000000000uLL;
        if ( (unsigned __int64)&v50 >= v13
          && (unsigned __int64)&v50 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v18 & 1) != 0 )
        {
          if ( (v18 & 0x20) != 0 && (v18 & 0x42) != 0 )
          {
            v10 = a1;
          }
          else
          {
            v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v36 )
            {
              v37 = *(_QWORD *)(v36 + 8 * (((unsigned __int64)&v50 >> 3) & 0x1FF));
              if ( (v37 & 0x20) != 0 )
                v18 |= 0x20uLL;
              v10 = a1;
              if ( (v37 & 0x42) != 0 )
                v18 |= 0x42uLL;
            }
            else
            {
              v18 = v50;
              v10 = a1;
            }
          }
        }
      }
      v57 = (v18 >> 5) & 0x1F;
      v19 = (v18 >> 5) & 0x1F;
      LOBYTE(v16) = v19;
      if ( v57 == 24 )
      {
        LOBYTE(v57) = 24;
        if ( v10 <= 0x7FFFFFFEFFFFLL )
        {
          Address = MiLocateAddress(v10);
          LOBYTE(v57) = v39;
          LODWORD(v19) = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
        }
      }
    }
    v56 = 1;
    v20 = 1;
    if ( (_DWORD)v19 == 31 )
    {
      v56 = 1;
    }
    else
    {
      if ( (unsigned int)v19 >> 3 == 3 && (v19 & 7) != 0 )
      {
        v20 = 2;
      }
      else
      {
        if ( (unsigned int)v19 >> 3 != 1 )
          goto LABEL_14;
        v20 = 0;
      }
      v56 = v20;
    }
LABEL_14:
    if ( v11 == 0xFFFFFFFFFLL )
    {
      v21 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v22 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v40 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 8 * ((v21 >> 3) & 0x1FF));
          v42 = v22 | 0x20;
          if ( (v41 & 0x20) == 0 )
            v42 = v22;
          v22 = v42;
          if ( (v41 & 0x42) != 0 )
            v22 = v42 | 0x42;
        }
      }
      v51 = v22;
      if ( (unsigned __int64)&v51 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v51 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v43 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
          v45 = v22 | 0x20;
          if ( (v44 & 0x20) == 0 )
            v45 = v22;
          v22 = v45;
          if ( (v44 & 0x42) != 0 )
            v22 = v45 | 0x42;
        }
      }
      v11 = (v22 >> 12) & 0xFFFFFFFFFLL;
      v8 = 48 * v11 - 0x58000000000LL;
    }
    v52 = a4;
    v23 = a4;
    if ( (a6 & 0x20) != 0 )
    {
      v23 = a4 & 0x7FFFFFFFFFFFFFFFLL;
      v52 = a4 & 0x7FFFFFFFFFFFFFFFLL;
    }
    CurrentIrql = KeGetCurrentIrql();
    v53 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v48 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v48);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
      LOBYTE(CurrentIrql) = v53;
      v23 = v52;
      v20 = v56;
      LOBYTE(v16) = v57;
    }
    *(_BYTE *)(v14 + 34) |= 0x20u;
    if ( a5 )
      v25 = a5 + 32;
    else
      v25 = 0LL;
    *(_QWORD *)v14 = v25;
    v26 = *(unsigned __int8 *)(v14 + 34);
    if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v20 )
    {
      MiChangePageAttribute(v14, v20, 1LL);
      v26 = *(unsigned __int8 *)(v14 + 34);
      LOBYTE(CurrentIrql) = v53;
      v23 = v52;
      LOBYTE(v16) = v57;
    }
    *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v14 + 32) = 1;
    if ( (a6 & 8) != 0 )
      *(_BYTE *)(v14 + 35) ^= (a6 ^ *(_BYTE *)(v14 + 35)) & 7;
    v27 = v11 ^ *(_QWORD *)(v14 + 40);
    *(_QWORD *)(v14 + 8) = v23;
    LOBYTE(v26) = v26 & 0xF8 | 2;
    v9 = 0xFFFFFFFFFLL;
    *(_QWORD *)(v14 + 40) ^= v27 & 0xFFFFFFFFFLL;
    *(_BYTE *)(v14 + 34) = v26;
    if ( a6 < 0 )
      *(_BYTE *)(v14 + 35) |= 0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      LOBYTE(CurrentIrql) = v53;
      v9 = 0xFFFFFFFFFLL;
      LOBYTE(v16) = v57;
    }
    result = (unsigned __int8)CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
    if ( (v15 & 0xC00) == 0x800 )
      goto LABEL_32;
    v28 = 32 * (v16 & 0x1F | ((*a2 & 0xFFFFFFFFFLL) << 7) | 0x40);
    if ( qword_14043B180 )
    {
      if ( (qword_14043B180 & v28) != 0 )
        v28 |= 0x10uLL;
      else
        v28 |= qword_14043B180;
    }
    v13 = 0xFFFFF6FB7DBED000uLL;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( a4 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( a4 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v26, v28) )
        {
          if ( !HIBYTE(word_14043B26C) && (v28 & 1) != 0 )
            v28 |= 0x8000000000000000uLL;
          *(_QWORD *)a4 = v28;
          result = MiWritePteShadow(a4);
          v9 = 0xFFFFFFFFFLL;
LABEL_32:
          v13 = 0xFFFFF6FB7DBED000uLL;
LABEL_38:
          if ( (a6 & 0x40) == 0 )
          {
            v49 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v49);
                while ( *(__int64 *)(v8 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
              v9 = 0xFFFFFFFFFLL;
            }
            result = 0x7FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v13 = 0xFFFFF6FB7DBED000uLL;
          }
          v10 = a1;
          goto LABEL_42;
        }
        result = (unsigned __int64)KeGetCurrentThread();
        if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1740LL) & 0x1000) != 0 && (v28 & 1) != 0 )
        {
          result = 0x8000000000000000uLL;
          v28 |= 0x8000000000000000uLL;
        }
      }
    }
    *(_QWORD *)a4 = v28;
    goto LABEL_38;
  }
  return result;
}
