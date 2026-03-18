/*
 * XREFs of MiInitializeDynamicPfns @ 0x1402BDEDC
 * Callers:
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiReferenceControlAreaPfn @ 0x1400A6610 (MiReferenceControlAreaPfn.c)
 *     MiAbortCombineScan @ 0x1400B8A28 (MiAbortCombineScan.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiInitializeUnusablePfns @ 0x140188A34 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x140188DA4 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiInitializeDpcGang @ 0x1402E8814 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1402E897C (MiStartDpcGang.c)
 */

__int64 __fastcall MiInitializeDynamicPfns(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v9; // rbx
  char v10; // di
  __int64 result; // rax
  KIRQL v12; // al
  KIRQL v13; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // r13
  ULONG_PTR v18; // r14
  ULONG_PTR v19; // rax
  unsigned __int64 v20; // rbx
  unsigned int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rdi
  int v24; // r14d
  __int128 v25; // xmm1
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  struct _KPRCB *v31; // rcx
  unsigned __int8 v32[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v33; // [rsp+42h] [rbp-BEh]
  unsigned int v34; // [rsp+44h] [rbp-BCh]
  __int64 v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h]
  _OWORD v37[6]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v38[38]; // [rsp+C0h] [rbp-40h] BYREF

  v33 = a3;
  v36 = a5;
  v35 = a6;
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  v9 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v10 = 5;
  result = a4 & 6;
  v34 = result;
  if ( (_DWORD)result == 4 )
  {
    v12 = ExAcquireSpinLockExclusive(&dword_140468540);
    qword_14046A350 += a2;
    v13 = v12;
    byte_14046848C = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140468540);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v13);
    result = v34;
    v10 = 6;
  }
  if ( (a4 & 1) != 0 )
  {
    v15 = a4 | 0x40;
    if ( (_DWORD)result != 4 )
      v15 = a4;
    if ( (v15 & 2) != 0 )
    {
      v16 = *(_QWORD *)(a5 + 8);
      result = MiReferenceControlAreaPfn(**(_QWORD **)a5, *(_QWORD *)a5, a2);
    }
    else
    {
      v16 = 0LL;
    }
    v17 = 17;
    v18 = 0LL;
    v32[0] = 17;
    while ( a2 )
    {
      v19 = MiRestrictRangeToNode(BugCheckParameter2, a2);
      v20 = v19;
      if ( v36 )
      {
        if ( v19 > (unsigned __int64)(4096 - (unsigned int)(v16 & 0xFFF)) >> 3 )
          v20 = (unsigned __int64)(4096 - (unsigned int)(v16 & 0xFFF)) >> 3;
        while ( 1 )
        {
          v18 = MiLockProtoPoolPage(v16, v32);
          if ( v18 )
            break;
          MmAccessFault(2uLL, v16, 0, 0LL);
        }
        result = MiInitializeUnusablePfns(
                   (_OWORD *)(48 * BugCheckParameter2 - 0x58000000000LL),
                   v20,
                   v33,
                   v15,
                   *(_QWORD *)v36,
                   v16,
                   *(_DWORD *)(v36 + 16));
        v17 = v32[0];
      }
      else
      {
        v21 = MiPageToNode(BugCheckParameter2, 0);
        MiInitializeDpcGang(v38, v21, 1LL);
        LOWORD(v38[12]) = v33;
        v22 = HIDWORD(v38[13]) | 4;
        LODWORD(v38[13]) = v15;
        v38[0] = BugCheckParameter2;
        v38[1] = v20;
        v38[11] = v35;
        if ( v35 )
          v22 = HIDWORD(v38[13]) | 0xC;
        HIDWORD(v38[13]) = v22 | 2;
        result = MiStartDpcGang(v38);
      }
      if ( v16 )
      {
        result = MiUnlockProtoPoolPage(v18, v17);
        v16 += 8 * v20;
      }
      a2 -= v20;
      BugCheckParameter2 += v20;
      v35 += v20 << 12;
    }
  }
  else
  {
    if ( (a4 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, BugCheckParameter2, a2, 0, 0);
    result = 0x8000000000000000uLL;
    *((_QWORD *)&v37[4] + 1) |= 0x8000000000000000uLL;
    *((_QWORD *)&v37[1] + 1) |= 0x8000000000000000uLL;
    BYTE2(v37[2]) ^= (BYTE2(v37[2]) ^ v10) & 7;
    v23 = v9 + 48 * a2;
    if ( v9 < v23 )
    {
      v24 = a4 & 0x10;
      do
      {
        v32[0] = MiLockPageInline(v9);
        v25 = v37[1];
        v26 = *((_QWORD *)&v37[2] + 1);
        v27 = *((_QWORD *)&v37[2] + 1) ^ ((unsigned __int64)(unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) << 40);
        *(_OWORD *)v9 = v37[0];
        *((_QWORD *)&v37[2] + 1) = v27 & 0x3FF0000000000LL ^ v26;
        v28 = v37[2];
        *(_OWORD *)(v9 + 16) = v25;
        *(_OWORD *)(v9 + 32) = v28;
        MiAbortCombineScan(v9);
        if ( v24 )
        {
          v29 = v37[4];
          *(_OWORD *)v9 = v37[3];
          v30 = v37[5];
          *(_OWORD *)(v9 + 16) = v29;
          *(_OWORD *)(v9 + 32) = v30;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32[0] < 2u )
        {
          v31 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v31);
        }
        result = v32[0];
        __writecr8(v32[0]);
        v9 += 48LL;
      }
      while ( v9 < v23 );
    }
  }
  return result;
}
