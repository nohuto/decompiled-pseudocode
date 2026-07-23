/*
 * XREFs of MiDemoteLocalLargePage @ 0x140064050
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400EB150 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkNodeLargePage @ 0x140064280 (MiUnlinkNodeLargePage.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400EE9A8 (MiNodeLargeFreeZeroPages.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

volatile signed __int32 *__fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, __int16 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned int v8; // r12d
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r15
  int v14; // ebx
  __int64 *v15; // rsi
  __int64 v16; // rax
  int v17; // r15d
  int v18; // edi
  unsigned __int8 CurrentIrql; // r13
  unsigned int v20; // ebp
  _QWORD *v21; // rax
  __int64 v22; // rax
  volatile signed __int32 *inserted; // rsi
  int v24; // ebx
  unsigned __int64 v25; // rcx
  int v27; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  int v29; // [rsp+40h] [rbp-88h]
  int v30; // [rsp+44h] [rbp-84h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-80h]
  unsigned int v32; // [rsp+4Ch] [rbp-7Ch]
  __int64 v33; // [rsp+50h] [rbp-78h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  _QWORD v35[2]; // [rsp+60h] [rbp-68h] BYREF

  v35[0] = a4;
  v31 = a2;
  v33 = a1;
  if ( (a3 & 1) != 0 )
    return 0LL;
  v6 = MmNumberOfChannels;
  v7 = 0LL;
  v29 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v7 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_14043B10A);
    v29 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_14043B10A);
  }
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  v32 = a2 >> byte_14043B109;
  v11 = 0LL;
  v12 = 1984LL * (a2 >> byte_14043B109);
  v13 = v12 + v9;
  v34 = v12;
  v30 = a3 & 2;
  v14 = a3 & 0x1000;
  v15 = (__int64 *)(v13 + 1760);
  do
  {
    if ( v6 > 1 )
      v16 = *(_QWORD *)(v13 + 8 * (v11 + 2 * v7) + 1824);
    else
      v16 = *v15;
    v10 += v16;
    if ( v14 )
      v10 += MiNodeLargeFreeZeroPages(v13, v7, v8);
    ++v8;
    ++v11;
    ++v15;
  }
  while ( v11 <= (v30 == 0) );
  v17 = v35[0];
  if ( v10 >= v35[0] )
    return 0LL;
  v18 = 13;
  if ( !v30 )
    v18 = 9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
LABEL_14:
  v20 = 3;
  while ( 1 )
  {
    if ( --v20 == 2 )
    {
      v35[0] = 0LL;
      v21 = v35;
      v35[1] = v31;
    }
    else
    {
      v21 = (_QWORD *)(v34 + 1936 + *(_QWORD *)(v33 + 16));
    }
    v22 = MiUnlinkNodeLargePage(v33, v20, v32, v7, (__int64)v21, v18 | 2u, 0LL);
    inserted = (volatile signed __int32 *)v22;
    if ( v22 )
      break;
    LODWORD(v7) = v29;
    if ( !v20 )
    {
      if ( (v18 & 1) == 0 )
        goto LABEL_22;
      v18 &= ~1u;
      goto LABEL_14;
    }
  }
  v24 = *(_BYTE *)(v22 + 34) & 7;
  inserted = (volatile signed __int32 *)MiInsertLargePageInFreeOrZeroList(v22, v20, 1, v31, v17 - (int)v10);
  if ( inserted )
  {
    v25 = *(_QWORD *)(v33 + 7296);
    if ( v25 )
      --v25;
    if ( v25 < 0x9F )
    {
      v27 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v27 & 0xC) != 8
        && (v25 < 0x20 && (ULONG_PTR *)v33 == &MiSystemPartition
         || ((v27 & 2) == 0 || v25 < 0x21) && (*(_DWORD *)(v33 + 4) & 0x10) == 0) )
      {
        v30 = 0;
        while ( _interlockedbittestandset64(inserted + 6, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v30);
          while ( *((__int64 *)inserted + 3) < 0 );
        }
        MiInsertPageInFreeOrZeroedList((__int64)(inserted + 0x16000000000LL) / 48, (v24 != 0) + 1);
        _InterlockedAnd64((volatile signed __int64 *)inserted + 3, 0x7FFFFFFFFFFFFFFFuLL);
        inserted = 0LL;
      }
    }
  }
LABEL_22:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return inserted;
}
