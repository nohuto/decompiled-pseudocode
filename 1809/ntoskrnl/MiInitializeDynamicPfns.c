/*
 * XREFs of MiInitializeDynamicPfns @ 0x1402A68F4
 * Callers:
 *     MiMapNewPfns @ 0x14084E600 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiReferenceControlAreaPfn @ 0x14002CA8C (MiReferenceControlAreaPfn.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     MiInitializeUnusablePfns @ 0x14017F18C (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x14017F3EC (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int8 __fastcall MiInitializeDynamicPfns(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 a3,
        int a4,
        __int64 a5)
{
  unsigned __int64 v6; // r12
  char v8; // bl
  unsigned __int64 v9; // rdi
  int v10; // eax
  KIRQL v11; // al
  KIRQL v12; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  int v14; // r14d
  unsigned __int64 v15; // rdi
  __int64 v16; // r15
  unsigned __int8 v17; // r13
  unsigned __int8 result; // al
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  int v22; // r15d
  __int128 v23; // xmm1
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  struct _KPRCB *v29; // rcx
  unsigned __int8 v30; // [rsp+40h] [rbp-A1h] BYREF
  char v31; // [rsp+41h] [rbp-A0h]
  unsigned __int16 v32; // [rsp+42h] [rbp-9Fh]
  unsigned int v33; // [rsp+44h] [rbp-9Dh]
  __int64 v34; // [rsp+48h] [rbp-99h]
  _OWORD v35[6]; // [rsp+50h] [rbp-91h] BYREF
  struct _SINGLE_LIST_ENTRY v36[4]; // [rsp+B0h] [rbp-31h] BYREF
  unsigned __int16 v37; // [rsp+D0h] [rbp-11h]
  int v38; // [rsp+D4h] [rbp-Dh]
  int i; // [rsp+D8h] [rbp-9h]

  v32 = a3;
  v6 = a1;
  v34 = a5;
  memset(v35, 0, sizeof(v35));
  v8 = 5;
  v31 = 5;
  v9 = 48 * a1 - 0x58000000000LL;
  v10 = a4 & 4;
  v33 = v10;
  if ( (a4 & 4) != 0 )
  {
    v8 = 6;
    v31 = 6;
    v11 = ExAcquireSpinLockExclusive(&dword_14043DAC0);
    qword_14043F5D0 += a2;
    v12 = v11;
    byte_14043DA0C = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043DAC0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v8 = v31;
    }
    __writecr8(v12);
    v10 = v33;
  }
  if ( (a4 & 1) != 0 )
  {
    v14 = a4 | 0x40;
    if ( !v10 )
      v14 = a4;
    if ( (v14 & 2) != 0 )
    {
      v15 = *(_QWORD *)(a5 + 8);
      MiReferenceControlAreaPfn(**(_QWORD **)a5, *(_QWORD *)a5, a2);
    }
    else
    {
      v15 = 0LL;
    }
    v16 = 0LL;
    v38 = 0;
    v17 = 17;
    v33 = KeNumberProcessors_0;
    result = v32;
    v30 = 17;
    v37 = v32;
    for ( i = v14; a2; a2 -= v20 )
    {
      v19 = MiRestrictRangeToNode(v6, a2);
      v20 = v19;
      if ( v34 )
      {
        if ( v19 > (unsigned __int64)(4096 - (unsigned int)(v15 & 0xFFF)) >> 3 )
          v20 = (unsigned __int64)(4096 - (unsigned int)(v15 & 0xFFF)) >> 3;
        while ( 1 )
        {
          v16 = MiLockProtoPoolPage(v15, &v30);
          if ( v16 )
            break;
          MmAccessFault(2uLL, v15, 0LL, 0LL);
        }
        result = MiInitializeUnusablePfns(
                   (_OWORD *)(48 * v6 - 0x58000000000LL),
                   v20,
                   v32,
                   v14,
                   *(_QWORD *)v34,
                   v15,
                   *(_DWORD *)(v34 + 16));
        v17 = v30;
      }
      else
      {
        v38 = 0;
        v36[0].Next = (struct _SINGLE_LIST_ENTRY *)v6;
        v36[2].Next = (struct _SINGLE_LIST_ENTRY *)(v19 / v33);
        v36[1].Next = (struct _SINGLE_LIST_ENTRY *)v19;
        v36[3].Next = (struct _SINGLE_LIST_ENTRY *)(v19 % v33);
        result = KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)MiInitializeDynamicPfnsTarget, v36);
      }
      if ( v15 )
      {
        result = MiUnlockProtoPoolPage(v16, v17);
        v15 += 8 * v20;
      }
      v6 += v20;
    }
  }
  else
  {
    if ( (a4 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, a2, 0, 0);
    *((_QWORD *)&v35[4] + 1) |= 0x8000000000000000uLL;
    *((_QWORD *)&v35[1] + 1) |= 0x8000000000000000uLL;
    result = BYTE2(v35[2]) ^ (BYTE2(v35[2]) ^ v8) & 7;
    v21 = v9 + 48 * a2;
    BYTE2(v35[2]) = result;
    if ( v9 < v21 )
    {
      v22 = a4 & 0x10;
      do
      {
        v30 = MiLockPageInline(v9);
        v23 = v35[1];
        v24 = *((_QWORD *)&v35[2] + 1);
        v25 = *((_QWORD *)&v35[2] + 1) ^ ((unsigned __int64)(unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) << 40);
        *(_OWORD *)v9 = v35[0];
        *((_QWORD *)&v35[2] + 1) = v25 & 0x3FF0000000000LL ^ v24;
        v26 = v35[2];
        *(_OWORD *)(v9 + 16) = v23;
        *(_OWORD *)(v9 + 32) = v26;
        MiAbortCombineScan(v9);
        if ( v22 )
        {
          v27 = v35[4];
          *(_OWORD *)v9 = v35[3];
          v28 = v35[5];
          *(_OWORD *)(v9 + 16) = v27;
          *(_OWORD *)(v9 + 32) = v28;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
        {
          v29 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v29);
        }
        result = v30;
        __writecr8(v30);
        v9 += 48LL;
      }
      while ( v9 < v21 );
    }
  }
  return result;
}
