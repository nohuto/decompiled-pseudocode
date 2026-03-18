/*
 * XREFs of MiHandleTransitionFault @ 0x1400D3150
 * Callers:
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiMakeTransitionHeatBatch @ 0x1402EBC7C (MiMakeTransitionHeatBatch.c)
 */

__int64 __fastcall MiHandleTransitionFault(
        unsigned __int64 *a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        _QWORD *a4,
        __int64 *a5,
        int a6,
        __int64 *a7)
{
  __int64 *v7; // r14
  int v8; // r12d
  void *BugCheckParameter4; // rbx
  __int64 v10; // r10
  int v13; // r10d
  unsigned __int64 v14; // rdi
  unsigned __int64 Address; // r13
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rax
  ULONG_PTR v28; // r9
  __int64 TransitionHeatBatch; // rax
  unsigned __int64 v30; // rax
  char v31; // r10
  __int64 v32; // r11
  int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rbx

  v7 = a7;
  v8 = a2;
  BugCheckParameter4 = a4;
  v10 = a4[5] >> 57;
  *a7 = 0LL;
  *a5 = 0LL;
  v13 = v10 & 1;
  if ( !v13 )
  {
    v28 = a4[1];
    if ( a2 != (v28 | 0x8000000000000000uLL) )
      KeBugCheckEx(0x1Au, 0x888AuLL, a2, v28, (ULONG_PTR)BugCheckParameter4);
  }
  v14 = *a1;
  Address = 0LL;
  v16 = *((_QWORD *)BugCheckParameter4 + 2) >> 3;
  if ( (*((_QWORD *)BugCheckParameter4 + 2) & 0x400LL) != 0 )
    LOBYTE(v16) = *((_QWORD *)BugCheckParameter4 + 2) >> 11;
  if ( (v16 & 1) != 0 )
  {
    if ( v14 <= 0x7FFFFFFEFFFFLL && !v13 )
      Address = MiLocateAddress(v14);
    TransitionHeatBatch = MiMakeTransitionHeatBatch(BugCheckParameter4, Address, 0LL);
    a1[14] = TransitionHeatBatch;
    if ( TransitionHeatBatch )
      goto LABEL_31;
  }
  v17 = *((_QWORD *)BugCheckParameter4 + 5);
  if ( (v17 & 0x200000000000000LL) != 0 )
  {
    v18 = *((_QWORD *)BugCheckParameter4 + 2);
    if ( (v18 & 0x400) != 0 && ((v17 >> 54) & 7) != 3 )
    {
      if ( qword_140465B00 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140465B00;
      v19 = v18 >> 16;
      v20 = *(_QWORD *)v19;
      if ( (*(_DWORD *)(*(_QWORD *)v19 + 56LL) & 0x20) != 0 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 96) + 40LL);
        if ( v21 )
        {
          if ( (v21 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v21 & 3) != 2 )
          {
            if ( (*(_DWORD *)(v20 + 92) & 0xC0000) != 0
              && ((MiFlags & 0x4000) != 0 || (unsigned int)MiIsPfnFromSlabAllocation(BugCheckParameter4))
              || (v14 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0)
              && ((v30 = MiLocateAddress(v14)) == 0
               || (v33 = *(_DWORD *)(v30 + 48), (v33 & 0x70) != 0x20)
               || (v33 & 0xF80) != 0x80
               && ((*(_DWORD *)(v30 + 64) & 0x8000000) == 0 || (v31 & 4) != 0)
               && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v32 + 34) & 2) == 0)) )
            {
              _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              if ( a3 )
                MiUnlockProtoPoolPage(a3, 0x11u);
              return 3221226536LL;
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)MiUnlinkPageFromList((ULONG_PTR)BugCheckParameter4) )
  {
    v22 = *((_QWORD *)BugCheckParameter4 + 5);
    if ( (v22 & 0x10000000000000LL) != 0 )
      goto LABEL_21;
    LOBYTE(a7) = 0;
    if ( v14 > 0x7FFFFFFEFFFFLL || *((_WORD *)BugCheckParameter4 + 16) )
      goto LABEL_19;
    v23 = 0x200000000000000LL;
    v24 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14];
    if ( (v22 & 0x200000000000000LL) != 0 )
    {
      if ( (*((_DWORD *)BugCheckParameter4 + 4) & 0x400LL) != 0 || !*(_QWORD *)(v24 + 432) )
        goto LABEL_19;
    }
    else if ( !*(_QWORD *)(v24 + 424) )
    {
      goto LABEL_19;
    }
    if ( Address || (Address = MiLocateAddress(v14)) != 0 )
    {
      v34 = *(_DWORD *)(Address + 48);
      if ( MiVadPageSizes[(v34 >> 18) & 3] == 16 )
      {
        v35 = *((_QWORD *)BugCheckParameter4 + 5);
        if ( ((v35 & 0x200000000000000LL) == 0 || (v34 & 0x100000) == 0) && ((v35 & v23) != 0 || (v34 & 0x100000) != 0) )
        {
          v36 = MiIdealClusterPage((int)a1, Address, v8, a6, BugCheckParameter4, a3, (__int64)&a7);
          v25 = v36;
          if ( v36 )
          {
            if ( BugCheckParameter4 != (void *)v36 )
            {
              BugCheckParameter4 = (void *)v36;
              *a5 = v36;
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( a3 )
              MiUnlockProtoPoolPage(a3, 0x11u);
          }
          if ( (_BYTE)a7 )
          {
LABEL_20:
            if ( !v25 )
              goto LABEL_68;
LABEL_21:
            v26 = *((_QWORD *)BugCheckParameter4 + 3);
            ++*((_WORD *)BugCheckParameter4 + 16);
            *((_QWORD *)BugCheckParameter4 + 3) = v26 & 0xC000000000000000uLL | 1;
            *((_BYTE *)BugCheckParameter4 + 34) = *((_BYTE *)BugCheckParameter4 + 34) & 0xF8 | 6;
            return 0LL;
          }
          if ( !v25 )
          {
LABEL_68:
            v37 = *v7;
            if ( *v7 )
            {
              if ( *(int *)(v37 + 176) > 1 )
                KeSetEvent((PRKEVENT)(v37 + 56), 0, 0);
              MiFreeInPageSupportBlock((char *)v37);
              *v7 = 0LL;
            }
            return 3221226548LL;
          }
        }
      }
    }
LABEL_19:
    v25 = MiMigratePfn(a1, BugCheckParameter4, a3, v7);
    *a5 = v25;
    BugCheckParameter4 = (void *)v25;
    goto LABEL_20;
  }
  MiDiscardTransitionPteEx(BugCheckParameter4, 0LL);
LABEL_31:
  _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( !a3 )
    return 3221226548LL;
  MiUnlockProtoPoolPage(a3, 0x11u);
  return 3221226548LL;
}
