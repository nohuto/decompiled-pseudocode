/*
 * XREFs of MiZeroFault @ 0x1400C99E0
 * Callers:
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiLocateLockedVadEvent @ 0x1400ACF18 (MiLocateLockedVadEvent.c)
 *     MiCheckVadSequential @ 0x1400C7CF0 (MiCheckVadSequential.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiResolveSharedZeroFault @ 0x1400C8250 (MiResolveSharedZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400CD460 (MiResolvePrivateZeroFault.c)
 *     MiAllowGuardFault @ 0x140115490 (MiAllowGuardFault.c)
 *     MiCheckFatalAccessViolation @ 0x14011F2F0 (MiCheckFatalAccessViolation.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiUpdatePageTableUseCount @ 0x140138218 (MiUpdatePageTableUseCount.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiPrefetchJumpVad @ 0x1402C701C (MiPrefetchJumpVad.c)
 */

__int64 __fastcall MiZeroFault(__int64 a1, _BYTE *a2, unsigned int *a3, __int64 *a4)
{
  unsigned int v4; // esi
  ULONG_PTR *v5; // r8
  _KPROCESS *Process; // r9
  int v7; // r14d
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // r13
  _KPROCESS *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  ULONG_PTR v16; // r14
  __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  __int64 ProtoPteAddress; // r12
  unsigned int v21; // r15d
  ULONG_PTR v22; // rax
  char v24; // dl
  __int64 **LockedVadEvent; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // r8
  _KPROCESS *v30; // [rsp+30h] [rbp-59h]
  __int64 v31; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v33; // [rsp+60h] [rbp-29h]
  __int128 v34; // [rsp+70h] [rbp-19h]
  __int64 v35; // [rsp+80h] [rbp-9h]
  unsigned __int64 v36; // [rsp+88h] [rbp-1h]
  __int64 v37; // [rsp+90h] [rbp+7h]
  __int64 v38; // [rsp+98h] [rbp+Fh]

  v4 = 0;
  v32[0] = 0LL;
  v33 = 0LL;
  v5 = (ULONG_PTR *)a1;
  v34 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 56);
  v35 = 0LL;
  v37 = 0LL;
  *a2 = 1;
  v9 = (*(_BYTE *)(v8 + 184) & 7) == 0;
  v30 = Process;
  LODWORD(v32[0]) = 0;
  v38 = 0LL;
  if ( v9 )
  {
    v7 = 64;
    LODWORD(v32[0]) = 64;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) != 0 )
  {
    v24 = *(_BYTE *)v11;
    if ( *(_BYTE *)v11 == 2 )
    {
      v7 |= 1u;
    }
    else if ( v24 == 1 )
    {
      v7 |= 2u;
    }
    else
    {
      if ( v24 != 5 )
      {
LABEL_61:
        if ( v24 == 4 )
          goto LABEL_62;
        goto LABEL_4;
      }
      v7 |= 8u;
    }
    LODWORD(v32[0]) = v7;
    goto LABEL_61;
  }
LABEL_4:
  if ( (v7 & 0xB) == 0 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
LABEL_62:
  if ( (v10 & 1) != 0 && *(_BYTE *)v11 == 4 )
    v38 = *(_QWORD *)(v11 + 40);
  if ( (v7 & 2) != 0 && (*(_DWORD *)(v11 + 80) & 0x4000) != 0 )
  {
    v7 |= 4u;
    LODWORD(v32[0]) = v7;
  }
  if ( (v7 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) > 0x1000uLL )
  {
    v7 |= 0x10u;
    LODWORD(v32[0]) = v7;
  }
LABEL_6:
  v12 = *v5;
  v36 = v11;
  v32[1] = v5;
  v13 = (_KPROCESS *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v12 >= 0xFFFF800000000000uLL )
  {
    if ( (v7 & 2) != 0 )
      return 0LL;
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL && v10 )
      KeBugCheckEx(0x50u, v12, v5[1], (ULONG_PTR)v13, 6uLL);
  }
  v14 = 0LL;
  if ( v12 > 0x7FFFFFFEFFFFLL )
  {
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v21 = 4;
      ProtoPteAddress = 0LL;
      goto LABEL_30;
    }
LABEL_40:
    MiCheckFatalAccessViolation(v12);
    if ( (v7 & 2) != 0 && v14 )
      MiPrefetchJumpVad(v11, v14, v12);
    return 3221225477LL;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) != 0 )
    goto LABEL_11;
  v15 = v12 & 0x7FFFFFFFF000LL;
  if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
  {
    ProtoPteAddress = qword_140465A10;
    v21 = 1;
    LOBYTE(v7) = v32[0];
    goto LABEL_30;
  }
  if ( v15 != qword_140465A20 || !v15 )
  {
LABEL_11:
    v13 = KeGetCurrentThread()->ApcState.Process;
    v14 = v13[2].Affinity.Bitmap[9];
    if ( v14 )
    {
      v16 = v12 >> 12;
      if ( v12 >> 12 >= (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
        && v16 <= (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) )
      {
LABEL_14:
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) == 0 )
        {
          v17 = v12 & 0x7FFFFFFFF000LL;
          if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            ProtoPteAddress = qword_140465A10;
            v21 = 1;
            goto LABEL_29;
          }
          if ( v17 == qword_140465A20 && v17 )
          {
            ProtoPteAddress = qword_140465A18;
            v21 = 1;
            goto LABEL_29;
          }
        }
        if ( (*(_DWORD *)(v14 + 48) & 0x70) == 0x20 && (*(_DWORD *)(v14 + 64) & 0x10000000) != 0 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v14, 32);
          if ( LockedVadEvent )
          {
            if ( LockedVadEvent[1] != (__int64 *)KeGetCurrentThread() )
              goto LABEL_85;
          }
        }
        v18 = *(_DWORD *)(v14 + 48);
        if ( (v18 & 4) != 0 )
        {
          v21 = 24;
          ProtoPteAddress = 0LL;
        }
        else
        {
          v19 = *(_DWORD *)(v14 + 48) & 0x70;
          if ( v19 == 16 )
          {
            v21 = 24;
            ProtoPteAddress = 0LL;
          }
          else
          {
            if ( (v18 & 0x100000) != 0 )
            {
              if ( v19 != 48
                && (v18 & 0x400000) == 0
                && (v18 & 0xC0000u) < 0x80000
                && (v19 != 32 || (*(_DWORD *)(v14 + 64) & 0x1000000) == 0)
                && *(int *)(v14 + 52) < 0 )
              {
                v21 = (*(_DWORD *)(v14 + 48) >> 7) & 0x1F;
LABEL_49:
                ProtoPteAddress = 0LL;
                goto LABEL_29;
              }
LABEL_85:
              v21 = 24;
              goto LABEL_49;
            }
            if ( (*(_DWORD *)(v14 + 64) & 0x1000000) == 0 || (*(_BYTE *)(v14 + 48) & 0x70) == 0x50 )
            {
              ProtoPteAddress = MiGetProtoPteAddress(v14, v12 >> 12, 4, &v31);
              if ( ProtoPteAddress )
              {
                v21 = (*(_DWORD *)(v14 + 48) >> 7) & 0x1F;
                if ( (*(_DWORD *)(v14 + 48) & 0x70) == 0x20 && v21 == 7 )
                  v21 = 256;
              }
              else
              {
                v21 = 24;
              }
              v13 = *(_KPROCESS **)(v14 + 120);
              if ( (__int64)v13 < 0
                && v16 - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) > (unsigned __int64)(*(_QWORD *)&v13->Header.Lock - 1LL) >> 12 )
              {
                v21 = 24;
              }
              v5 = (ULONG_PTR *)a1;
              Process = v30;
            }
            else
            {
              v21 = 24;
              ProtoPteAddress = 0LL;
            }
          }
        }
LABEL_29:
        LOBYTE(v7) = v32[0];
        if ( v21 != 24 )
          goto LABEL_30;
        goto LABEL_40;
      }
      v14 = v13[2].Affinity.Bitmap[8];
      while ( v14 )
      {
        if ( v16 > (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) )
        {
          v14 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          if ( v16 >= (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) )
          {
            v13[2].Affinity.Bitmap[9] = v14;
            goto LABEL_14;
          }
          v14 = *(_QWORD *)v14;
        }
      }
    }
    v14 = 0LL;
    LOBYTE(v7) = v32[0];
    goto LABEL_40;
  }
  ProtoPteAddress = qword_140465A18;
  v21 = 1;
  LOBYTE(v7) = v32[0];
LABEL_30:
  if ( (v21 & 0xFFFFFFF8) == 0x10 )
  {
    if ( (v7 & 2) == 0 )
    {
      if ( (unsigned int)MiAllowGuardFault(v5[2]) )
      {
        MiUpdatePageTableUseCount(v12, 1LL);
        v26 = v21 & 0xF;
        if ( ProtoPteAddress )
          v26 |= 0xFFFFFFFFF8000020uLL;
        MiSwizzleInvalidPte(32 * v26);
        if ( MiPteInShadowRange(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
        {
          if ( (unsigned int)MiPteHasShadow(v28) )
          {
            if ( !HIBYTE(word_140465BEC) && (v27 & 1) != 0 )
              v27 |= 0x8000000000000000uLL;
            *v29 = v27;
            MiWritePteShadow(v29, v27);
            goto LABEL_116;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v27 & 1) != 0 )
          {
            v27 |= 0x8000000000000000uLL;
          }
        }
        *v29 = v27;
LABEL_116:
        *a2 = 2;
        return 0LL;
      }
      return 3221225477LL;
    }
    return 0LL;
  }
  v22 = v5[1] >> 57;
  *(_QWORD *)&v33 = v12;
  *(_QWORD *)&v34 = v21;
  LODWORD(v35) = v22;
  *((_QWORD *)&v33 + 1) = ProtoPteAddress;
  v37 = v14;
  if ( !ProtoPteAddress )
    return MiResolvePrivateZeroFault(v32, v13, v5, Process);
  if ( (v7 & 2) == 0 && v14 && *(__int64 *)(v14 + 120) >= 0 )
  {
    v4 = MiCheckVadSequential((__int64)v32);
    if ( v4 == -1073741280 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 36));
      *(_DWORD *)(a1 + 80) |= 1u;
      *(_QWORD *)(a1 + 88) = v14;
    }
  }
  *a2 = 0;
  *a3 = v21;
  *a4 = ProtoPteAddress;
  MiResolveSharedZeroFault((unsigned int *)v32);
  return v4;
}
