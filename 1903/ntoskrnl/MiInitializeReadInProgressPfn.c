/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1400A5280
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v7; // r11
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v11; // r9
  unsigned __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // r8d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // r9d
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int8 CurrentIrql; // r13
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // r11
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 Address; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  int v45; // [rsp+20h] [rbp-68h] BYREF
  int v46; // [rsp+24h] [rbp-64h] BYREF
  __int64 v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h] BYREF
  __int64 v49; // [rsp+38h] [rbp-50h]
  __int64 v50; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-40h]
  int v53; // [rsp+98h] [rbp+10h]

  v7 = 0xFFFFFFFFFLL;
  v8 = 0LL;
  v9 = 0xFFFFFFFFFLL;
  v11 = a1;
  v47 = 0xFFFFFFFFFLL;
  result = (unsigned __int64)&a2[a3];
  v51 = result;
  if ( (unsigned __int64)a2 < result )
  {
    while ( 1 )
    {
      result = 0xFFFFFA8000000000uLL;
      v13 = 48LL * *a2 - 0x58000000000LL;
      if ( v13 != qword_140466850 )
        break;
LABEL_37:
      ++a2;
      a4 += 8LL;
      if ( (unsigned __int64)a2 >= v51 )
        return result;
    }
    v14 = *(_QWORD *)a4;
    if ( a4 >= 0xFFFFF6FB7DBED000uLL
      && a4 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v36 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a4 >> 3) & 0x1FF));
        v37 = v14 | 0x20;
        if ( (v36 & 0x20) == 0 )
          v37 = *(_QWORD *)a4;
        v14 = v37;
        if ( (v36 & 0x42) != 0 )
          v14 = v37 | 0x42;
      }
      v9 = v47;
    }
    v15 = 0;
    v48 = v14;
    v16 = v14;
    if ( (a6 & 0x40) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v14) )
      {
        v31 = v14;
      }
      else
      {
        v32 = v14;
        if ( qword_140465B00 && (v14 & 0x10) == 0 )
          v32 = v14 & ~qword_140465B00;
        v48 = MI_READ_PTE_LOCK_FREE(v32 >> 16);
        v33 = MI_READ_PTE_LOCK_FREE(&v48);
        v31 = MI_READ_PTE_LOCK_FREE(48 * (v34 & (v33 >> 12)) - 0x57FFFFFFFF0LL);
      }
      v16 = MiSwizzleInvalidPte(32LL * (MmMakeProtectNotWriteCopy[(v31 >> 5) & 0x1F] & 0x1F));
    }
    else
    {
      v17 = v14;
      if ( (v14 & 0xC00) != 0x800 )
        goto LABEL_6;
      if ( qword_140465B00 && (v14 & 0x10) == 0 )
        v16 = v14 & ~qword_140465B00;
      v16 = *(_QWORD *)(48 * (v7 & (v16 >> 12)) - 0x58000000000LL + 16);
    }
    v17 = v16;
    v48 = v16;
LABEL_6:
    *(_QWORD *)(v13 + 16) = v16;
    if ( (a6 & 0x40) != 0 )
    {
      LODWORD(v18) = v15;
    }
    else
    {
      if ( (a6 & 0x10) != 0 )
      {
        *(_QWORD *)(v13 + 40) |= 0x200000000000000uLL;
        if ( (unsigned __int64)&v48 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v48 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v17 & 1) != 0 )
        {
          if ( (v17 & 0x20) != 0 && (v17 & 0x42) != 0 )
          {
            v9 = v47;
          }
          else
          {
            v38 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 8 * (((unsigned __int64)&v48 >> 3) & 0x1FF));
              if ( (v39 & 0x20) != 0 )
                v17 |= 0x20uLL;
              v9 = v47;
              if ( (v39 & 0x42) != 0 )
                v17 |= 0x42uLL;
            }
            else
            {
              v17 = v48;
              v9 = v47;
            }
          }
        }
      }
      v18 = (v17 >> 5) & 0x1F;
      if ( ((v17 >> 5) & 0x1F) == 0x18 && v11 <= 0x7FFFFFFEFFFFLL )
      {
        Address = MiLocateAddress(v11);
        v9 = v47;
        LODWORD(v18) = (*(_DWORD *)(Address + 48) >> 7) & 0x1F;
      }
    }
    v53 = 1;
    v19 = 1;
    if ( (_DWORD)v18 == 31 )
    {
      v53 = 1;
    }
    else
    {
      if ( (unsigned int)v18 >> 3 == 3 && (v18 & 7) != 0 )
      {
        v20 = 2LL;
        v19 = 2;
        v53 = 2;
LABEL_16:
        if ( v9 == v7 )
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
            v41 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v41 )
            {
              v42 = *(_QWORD *)(v41 + 8 * ((v21 >> 3) & 0x1FF));
              v43 = v22 | 0x20;
              if ( (v42 & 0x20) == 0 )
                v43 = v22;
              v22 = v43;
              if ( (v42 & 0x42) != 0 )
                v22 = v43 | 0x42;
            }
          }
          v50 = v22;
          v23 = MI_READ_PTE_LOCK_FREE(&v50);
          v47 = v7 & (v23 >> 12);
          v8 = 48 * v47 - 0x58000000000LL;
        }
        v49 = a4;
        v24 = a4;
        if ( (a6 & 0x20) != 0 )
        {
          v24 = a4 & 0x7FFFFFFFFFFFFFFFLL;
          v49 = a4 & 0x7FFFFFFFFFFFFFFFLL;
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v20);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v45 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v45);
            while ( *(__int64 *)(v13 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
          v24 = v49;
          v7 = 0xFFFFFFFFFLL;
          v19 = v53;
        }
        *(_BYTE *)(v13 + 34) |= 0x20u;
        if ( a5 )
          v26 = a5 + 32;
        else
          v26 = 0LL;
        *(_QWORD *)v13 = v26;
        v27 = *(_BYTE *)(v13 + 34);
        if ( v27 >> 6 != v19 )
        {
          MiChangePageAttribute(v13, v19, 1LL);
          v27 = *(_BYTE *)(v13 + 34);
          v7 = 0xFFFFFFFFFLL;
          v24 = v49;
        }
        *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v13 + 32) = 1;
        if ( (a6 & 8) != 0 )
          *(_BYTE *)(v13 + 35) ^= (a6 ^ *(_BYTE *)(v13 + 35)) & 7;
        v9 = v47;
        v28 = v47 ^ *(_QWORD *)(v13 + 40);
        *(_QWORD *)(v13 + 8) = v24;
        *(_QWORD *)(v13 + 40) ^= v7 & v28;
        *(_BYTE *)(v13 + 34) = v27 & 0xF8 | 2;
        if ( a6 < 0 )
          *(_BYTE *)(v13 + 35) |= 0x20u;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v9 = v47;
          v7 = 0xFFFFFFFFFLL;
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        if ( (v14 & 0xC00) == 0x800 )
          goto LABEL_33;
        result = MiPteInShadowRange(a4);
        if ( (_DWORD)result )
        {
          if ( (unsigned int)MiPteHasShadow(v30) )
          {
            if ( !HIBYTE(word_140465BEC) && (v29 & 1) != 0 )
              v29 |= 0x8000000000000000uLL;
            *(_QWORD *)a4 = v29;
            result = MiWritePteShadow(a4, v29);
            goto LABEL_45;
          }
          result = (unsigned __int64)KeGetCurrentThread();
          if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1788LL) & 0x1000) != 0 && (v29 & 1) != 0 )
          {
            result = 0x8000000000000000uLL;
            v29 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a4 = v29;
LABEL_45:
        v9 = v47;
LABEL_33:
        if ( (a6 & 0x40) == 0 )
        {
          v46 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v46);
              while ( *(__int64 *)(v8 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
            v7 = 0xFFFFFFFFFLL;
          }
          result = 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = v47;
        }
        v11 = a1;
        goto LABEL_37;
      }
      if ( (unsigned int)v18 >> 3 == 1 )
      {
        v19 = 0;
        v53 = 0;
      }
    }
    v20 = 2LL;
    goto LABEL_16;
  }
  return result;
}
