/*
 * XREFs of MiFillPageWithImageExtentContents @ 0x1402CB8D4
 * Callers:
 *     MiCopyImageExtentContents @ 0x1402CAF9C (MiCopyImageExtentContents.c)
 *     MiCopyFromDirectMapExtent @ 0x14088C0F0 (MiCopyFromDirectMapExtent.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiAllocateHyperSpace @ 0x14011ABC4 (MiAllocateHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

struct _KPRCB *__fastcall MiFillPageWithImageExtentContents(
        char *BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        int a5)
{
  ULONG_PTR BugCheckParameter4; // r12
  unsigned int v9; // edx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // r9
  bool v15; // zf
  ULONG_PTR v16; // r9
  int v17; // r8d
  int v18; // ecx
  int v19; // edx
  char *v20; // rbp
  __int64 v21; // r11
  _QWORD *v22; // rdi
  unsigned __int64 v23; // r13
  char ValidPte; // bl
  __int64 v25; // rdx
  int v26; // r8d
  bool v27; // zf
  __int64 v28; // r11
  unsigned __int64 v29; // rdi
  const void *v30; // r11
  __int64 v31; // rdx
  int v32; // r8d
  int v33; // r9d
  bool v34; // zf
  __int64 v35; // rdx
  int v36; // r8d
  bool v37; // zf
  __int64 v38; // rdx
  __int64 v39; // r11
  struct _KPRCB *result; // rax
  _QWORD *MmInternal; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 HyperSpace; // [rsp+30h] [rbp-58h]
  unsigned __int8 v44; // [rsp+90h] [rbp+8h]
  __int16 v45; // [rsp+A0h] [rbp+18h]
  unsigned int v46; // [rsp+A8h] [rbp+20h]

  BugCheckParameter4 = a4;
  v45 = a3;
  v46 = (a3 & 0xFFF) + a4;
  v9 = (v46 > 0x1000) + 3;
  if ( a4 == 4096 )
    v9 = (v46 > 0x1000) + 2;
  if ( a5 )
  {
    v44 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v44 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  HyperSpace = MiAllocateHyperSpace(v9);
  v11 = (_QWORD *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMakeValidPte((unsigned __int64)v11, a2, -1610612732);
  if ( !MiPteInShadowRange((unsigned __int64)v11) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v13 = 1;
    if ( !HIBYTE(word_1404658EC) )
    {
      v15 = (v12 & 1) == 0;
      goto LABEL_15;
    }
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
  {
    v15 = (v12 & 1) == 0;
LABEL_15:
    if ( !v15 )
      v12 |= v14;
  }
LABEL_17:
  *v11 = v12;
  if ( v13 )
    MiWritePteShadow((__int64)v11);
  v16 = a3 >> 12;
  v17 = 0;
  v18 = *(_DWORD *)BugCheckParameter3 - 1;
  if ( v18 < 0 )
    goto LABEL_86;
  do
  {
    v19 = (v18 + v17) >> 1;
    v20 = &BugCheckParameter3[48 * v19];
    v21 = *((unsigned int *)v20 + 8);
    if ( (unsigned int)v16 >= (unsigned int)v21 )
    {
      if ( (unsigned int)v16 < (int)v21 + *((_DWORD *)v20 + 12) )
        break;
      v17 = v19 + 1;
    }
    else
    {
      if ( !v19 )
        KeBugCheckEx(0x1Au, 0x13000uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v18 = v19 - 1;
    }
  }
  while ( v18 >= v17 );
  if ( v18 < v17 )
LABEL_86:
    KeBugCheckEx(0x1Au, 0x13001uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  v22 = v11 + 1;
  v23 = *((_QWORD *)v20 + 5) + (unsigned int)v16 - v21;
  ValidPte = MiMakeValidPte((unsigned __int64)(v11 + 1), v23, 536870913);
  if ( MiPteInShadowRange((unsigned __int64)(v11 + 1)) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v26 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_36;
      v27 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_36;
      v27 = (ValidPte & 1) == 0;
    }
    if ( !v27 )
      v25 |= 0x8000000000000000uLL;
  }
LABEL_36:
  *v22 = v25;
  if ( v26 )
    MiWritePteShadow((__int64)(v11 + 1));
  v28 = (_QWORD)v22 << 25;
  v29 = (unsigned __int64)(v11 + 2);
  v30 = (const void *)((v45 & 0xFFF) + (v28 >> 16));
  if ( v46 > 0x1000 )
  {
    if ( v23 >= *((_QWORD *)v20 + 5) + *((_QWORD *)v20 + 6) - 1LL
      && (v20 + 56 - BugCheckParameter3 - 8) / 48 == *(_DWORD *)BugCheckParameter3 )
    {
      KeBugCheckEx(0x1Au, 0x13002uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    }
    if ( !MiPteInShadowRange(v29) )
      goto LABEL_50;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v32 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
        v34 = (ValidPte & 1) == 0;
        goto LABEL_48;
      }
    }
    else if ( (v33 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4])) != 0 )
    {
      v34 = (ValidPte & 1) == 0;
LABEL_48:
      if ( !v34 )
        v31 |= 0x8000000000000000uLL;
    }
LABEL_50:
    *(_QWORD *)v29 = v31;
    if ( v32 )
      MiWritePteShadow(v29);
    v29 = (unsigned __int64)(v11 + 3);
  }
  memmove((void *)HyperSpace, v30, BugCheckParameter4);
  if ( (_DWORD)BugCheckParameter4 == 4096 )
    goto LABEL_65;
  if ( !MiPteInShadowRange(v29) )
    goto LABEL_62;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v36 = 1;
    if ( !HIBYTE(word_1404658EC) )
    {
      v37 = (v35 & 1) == 0;
      goto LABEL_60;
    }
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
  {
    v37 = (v35 & 1) == 0;
LABEL_60:
    if ( !v37 )
      v35 |= 0x8000000000000000uLL;
  }
LABEL_62:
  *(_QWORD *)v29 = v35;
  if ( v36 )
    MiWritePteShadow(v29);
  memmove(
    (void *)(HyperSpace + BugCheckParameter4),
    (const void *)((__int64)(v29 << 25) >> 16),
    (unsigned int)(4096 - BugCheckParameter4));
  do
  {
LABEL_65:
    if ( !MiPteInShadowRange((unsigned __int64)v11) )
      goto LABEL_74;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v38 & 1) != 0 )
      {
        v38 |= 0x8000000000000000uLL;
      }
LABEL_74:
      *v11 = v38;
      goto LABEL_75;
    }
    if ( !HIBYTE(word_1404658EC) && (v38 & 1) != 0 )
      v38 |= 0x8000000000000000uLL;
    *v11 = v38;
    MiWritePteShadow((__int64)v11);
LABEL_75:
    ++v11;
  }
  while ( v39 != 1 );
  result = KeGetCurrentPrcb();
  MmInternal = result->MmInternal;
  if ( MmInternal )
    MmInternal[1543] = 0LL;
  if ( v44 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = (struct _KPRCB *)v44;
    __writecr8(v44);
  }
  return result;
}
