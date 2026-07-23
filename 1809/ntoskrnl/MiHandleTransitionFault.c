/*
 * XREFs of MiHandleTransitionFault @ 0x14003B680
 * Callers:
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 */

__int64 __fastcall MiHandleTransitionFault(
        unsigned __int64 *a1,
        ULONG_PTR a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v7; // r14
  void *BugCheckParameter4; // rbx
  __int64 v11; // r10
  int v14; // r10d
  __int64 Address; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rax
  ULONG_PTR v29; // r9
  __int64 TransitionHeatBatch; // rax
  __int64 v31; // rax
  char v32; // r10
  __int64 v33; // r11
  int v34; // edx
  int ImagePageOk; // edi
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // [rsp+90h] [rbp+28h]

  v7 = a7;
  BugCheckParameter4 = a4;
  v11 = a4[5] >> 57;
  *a7 = 0LL;
  *a5 = 0LL;
  v14 = v11 & 1;
  if ( !v14 )
  {
    v29 = a4[1];
    if ( a2 != (v29 | 0x8000000000000000uLL) )
      KeBugCheckEx(0x1Au, 0x888AuLL, a2, v29, (ULONG_PTR)BugCheckParameter4);
  }
  v40 = 0LL;
  Address = 0LL;
  v16 = *((_QWORD *)BugCheckParameter4 + 2);
  v17 = *a1;
  v18 = v16 >> 11;
  v19 = v16 >> 3;
  if ( (*((_QWORD *)BugCheckParameter4 + 2) & 0x400LL) != 0 )
    LOBYTE(v19) = v18;
  if ( (v19 & 1) != 0 )
  {
    if ( v17 <= 0x7FFFFFFEFFFFLL && !v14 )
    {
      Address = MiLocateAddress(*a1);
      v40 = Address;
    }
    TransitionHeatBatch = MiMakeTransitionHeatBatch(BugCheckParameter4, Address, 0LL);
    a1[14] = TransitionHeatBatch;
    if ( TransitionHeatBatch )
      goto LABEL_31;
  }
  if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) != 0 )
  {
    v20 = *((_QWORD *)BugCheckParameter4 + 2);
    if ( (v20 & 0x400) != 0 && ((*((_QWORD *)BugCheckParameter4 + 5) >> 54) & 7) != 3 )
    {
      if ( qword_14043B180 && (v20 & 0x10) == 0 )
        v20 &= ~qword_14043B180;
      v21 = v20 >> 16;
      v22 = *(_QWORD *)v21;
      if ( (*(_DWORD *)(*(_QWORD *)v21 + 56LL) & 0x20) != 0 )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(v22 + 96) + 40LL);
        if ( v23 )
        {
          if ( (v23 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v23 & 3) != 2 )
          {
            if ( (*(_DWORD *)(v22 + 92) & 0x180000) != 0
              && ((MiFlags & 0x4000) != 0 || MiIsPfnFromSlabAllocation((__int64)BugCheckParameter4))
              || (v17 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0)
              && ((v31 = MiLocateAddress(v17)) == 0
               || (v34 = *(_DWORD *)(v31 + 48), (v34 & 7) != 2)
               || (v34 & 0xF8) != 8
               && ((*(_DWORD *)(v31 + 64) & 0x8000000) == 0 || (v32 & 4) != 0)
               && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v33 + 34) & 2) == 0)) )
            {
              ImagePageOk = MiMakeImagePageOk(a1, a2, a6, BugCheckParameter4, a3);
              if ( ImagePageOk < 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
                if ( a3 )
                  MiUnlockProtoPoolPage(a3, 0x11u);
                return (unsigned int)ImagePageOk;
              }
              Address = v40;
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)MiUnlinkPageFromList((ULONG_PTR)BugCheckParameter4) )
  {
    v24 = *((_QWORD *)BugCheckParameter4 + 5);
    if ( (v24 & 0x10000000000000LL) != 0 )
      goto LABEL_21;
    LOBYTE(a7) = 0;
    if ( v17 > 0x7FFFFFFEFFFFLL || *((_WORD *)BugCheckParameter4 + 16) )
      goto LABEL_19;
    v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( (v24 & 0x200000000000000LL) != 0 )
    {
      if ( (*((_DWORD *)BugCheckParameter4 + 4) & 0x400LL) != 0 || !*(_QWORD *)(v25 + 384) )
        goto LABEL_19;
    }
    else if ( !*(_QWORD *)(v25 + 376) )
    {
      goto LABEL_19;
    }
    if ( Address || (Address = MiLocateAddress(v17)) != 0 )
    {
      v36 = *(_DWORD *)(Address + 48);
      if ( (v36 & 0x40000) != 0 )
      {
        v37 = *((_QWORD *)BugCheckParameter4 + 5);
        if ( ((*(_DWORD *)(Address + 48) & 0x4000) == 0 || (v37 & 0x200000000000000LL) == 0)
          && ((v37 & 0x200000000000000LL) != 0 || (v36 & 0x4000) != 0) )
        {
          v38 = MiIdealClusterPage((int)a1, Address, a2, a6, BugCheckParameter4, a3, (__int64)&a7);
          v26 = v38;
          if ( v38 )
          {
            if ( BugCheckParameter4 != (void *)v38 )
            {
              BugCheckParameter4 = (void *)v38;
              *a5 = v38;
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
            if ( !v26 )
              goto LABEL_70;
LABEL_21:
            v27 = *((_QWORD *)BugCheckParameter4 + 3);
            ++*((_WORD *)BugCheckParameter4 + 16);
            *((_QWORD *)BugCheckParameter4 + 3) = v27 & 0xC000000000000000uLL | 1;
            *((_BYTE *)BugCheckParameter4 + 34) = *((_BYTE *)BugCheckParameter4 + 34) & 0xF8 | 6;
            return 0LL;
          }
          if ( !v26 )
          {
LABEL_70:
            v39 = *v7;
            if ( *v7 )
            {
              if ( *(int *)(v39 + 176) > 1 )
                KeSetEvent((PRKEVENT)(v39 + 56), 0, 0);
              MiFreeInPageSupportBlock((char *)v39);
              *v7 = 0LL;
            }
            return 3221226548LL;
          }
        }
      }
    }
LABEL_19:
    v26 = MiMigratePfn(a1, BugCheckParameter4, a3, v7);
    *a5 = v26;
    BugCheckParameter4 = (void *)v26;
    goto LABEL_20;
  }
  MiDiscardTransitionPte(BugCheckParameter4);
LABEL_31:
  _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( !a3 )
    return 3221226548LL;
  MiUnlockProtoPoolPage(a3, 0x11u);
  return 3221226548LL;
}
