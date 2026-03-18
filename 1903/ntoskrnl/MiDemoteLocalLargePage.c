/*
 * XREFs of MiDemoteLocalLargePage @ 0x1400DBD70
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400DBC9C (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027570 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiUnlinkNodeLargePage @ 0x14002A3E0 (MiUnlinkNodeLargePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400DAFC8 (MiNodeLargeFreeZeroPages.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

volatile signed __int32 *__fastcall MiDemoteLocalLargePage(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        unsigned __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r13
  int v9; // ebp
  unsigned int v10; // esi
  unsigned __int64 v11; // r12
  __int64 v12; // r8
  _QWORD *v13; // r13
  __int64 v14; // r15
  int v15; // ebx
  __int64 *v16; // r14
  __int64 v17; // rax
  int v18; // r13d
  unsigned int v19; // esi
  char v20; // di
  __int64 CurrentIrql; // rcx
  unsigned int v22; // ebp
  unsigned __int64 *v23; // rax
  __int64 v24; // rax
  volatile signed __int32 *inserted; // r14
  int v26; // ebx
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // bl
  int v30; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  int v32; // [rsp+40h] [rbp-98h]
  int v33; // [rsp+44h] [rbp-94h] BYREF
  __int64 v34; // [rsp+48h] [rbp-90h]
  unsigned int v35; // [rsp+50h] [rbp-88h]
  __int64 v36; // [rsp+58h] [rbp-80h]
  _BOOL8 v37; // [rsp+60h] [rbp-78h]
  __int64 v38; // [rsp+68h] [rbp-70h]
  unsigned __int64 v39; // [rsp+70h] [rbp-68h] BYREF
  __int64 v40; // [rsp+78h] [rbp-60h]

  v39 = a4;
  v35 = a2;
  v36 = a1;
  if ( (a3 & 1) != 0 )
    return 0LL;
  v6 = MmNumberOfChannels;
  v7 = 0LL;
  v32 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v7 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_140465A4E);
    v32 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_140465A4E);
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  v10 = a2 >> byte_140465A4D;
  v11 = 0LL;
  v12 = 1984LL * (a2 >> byte_140465A4D);
  LODWORD(v34) = v10;
  v13 = (_QWORD *)(v12 + v8);
  v38 = v12;
  v14 = 0LL;
  v33 = a3 & 2;
  v15 = a3 & 0x1000;
  v37 = v33 == 0;
  v16 = v13 + 220;
  do
  {
    if ( v6 > 1 )
      v17 = v13[2 * v7 + 231 + v14];
    else
      v17 = *v16;
    v11 += v17;
    if ( v15 )
      v11 += MiNodeLargeFreeZeroPages(v13, v7, v9);
    ++v9;
    ++v14;
    ++v16;
  }
  while ( v14 <= (v33 == 0) );
  v18 = v39;
  v19 = v34;
  if ( v11 >= v39 )
    return 0LL;
  v20 = 13;
  if ( !v33 )
    v20 = 9;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
LABEL_14:
  v22 = 3;
  while ( 1 )
  {
    --v22;
    v39 = 0LL;
    v40 = 0LL;
    if ( v22 == 2 )
    {
      LODWORD(v40) = v35;
      v23 = &v39;
    }
    else
    {
      v23 = (unsigned __int64 *)(v38 + 1960 + *(_QWORD *)(v36 + 16));
    }
    v24 = MiUnlinkNodeLargePage(v36, v22, v19, (unsigned int)v7, (__int64)v23, v20 | 2u, 0LL);
    inserted = (volatile signed __int32 *)v24;
    if ( v24 )
      break;
    LODWORD(v7) = v32;
    if ( !v22 )
    {
      if ( (v20 & 1) == 0 )
        goto LABEL_22;
      v20 &= ~1u;
      goto LABEL_14;
    }
  }
  v26 = *(_BYTE *)(v24 + 34) & 7;
  inserted = (volatile signed __int32 *)MiInsertLargePageInFreeOrZeroList(v24, v22, 1, v35, v18 - (int)v11);
  if ( inserted )
  {
    v27 = *(_QWORD *)(v36 + 8064);
    if ( v27 )
      --v27;
    if ( v27 < 0x9F )
    {
      v30 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v30 & 0xC) != 8
        && (v27 < 0x20 && (ULONG_PTR *)v36 == &MiSystemPartition
         || ((v30 & 2) == 0 || v27 < 0x21) && (*(_DWORD *)(v36 + 4) & 0x20) == 0) )
      {
        v33 = 0;
        while ( _interlockedbittestandset64(inserted + 6, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v33);
          while ( *((__int64 *)inserted + 3) < 0 );
        }
        MiInsertPageInFreeOrZeroedList((__int64)(inserted + 0x16000000000LL) / 48, (v26 != 0) + 1);
        _InterlockedAnd64((volatile signed __int64 *)inserted + 3, 0x7FFFFFFFFFFFFFFFuLL);
        inserted = 0LL;
      }
    }
  }
LABEL_22:
  v28 = v34;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v34 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v28);
  return inserted;
}
