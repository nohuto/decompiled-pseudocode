/*
 * XREFs of MxCreateFreePfns @ 0x1409BBD10
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x1409BB8A4 (MxReleaseFreeDescriptor.c)
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 *     MiCreateFreePfns @ 0x1409BBBA8 (MiCreateFreePfns.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiPageToChannel @ 0x14009CF2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiRestrictRangeToNode @ 0x14017F3EC (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializeBlankPfns @ 0x1409BC160 (MiInitializeBlankPfns.c)
 *     MiFreeEmptyBootPageTable @ 0x1409F8BF4 (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rcx
  BOOL v5; // r15d
  __int64 v6; // rbx
  volatile signed __int32 *v7; // r14
  __int16 v8; // ax
  __int16 v9; // bp
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *v11; // rbx
  unsigned __int64 v12; // rsi
  int v13; // eax
  int v14; // r10d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // r8
  int v19; // r9d
  __int64 v20; // r11
  __int64 v21; // r8
  unsigned __int64 v22; // r12
  int v23; // r8d
  int v24; // r10d
  unsigned int v25; // r13d
  unsigned int i; // r15d
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rbp
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rbp
  unsigned __int8 v33; // al
  __int64 v34; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v36; // rcx
  int v37; // [rsp+30h] [rbp-68h]
  int v38; // [rsp+34h] [rbp-64h] BYREF
  volatile signed __int32 *v39; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+40h] [rbp-58h]
  _BOOL8 v41; // [rsp+48h] [rbp-50h]
  unsigned __int8 v42; // [rsp+A0h] [rbp+8h]
  int v43; // [rsp+A8h] [rbp+10h]
  int v44; // [rsp+B0h] [rbp+18h]
  int v45; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v3 = *(_DWORD *)(a1 + 16);
  v37 = v3;
  if ( v3 == 2 || (v4 = 1LL, v3 == 24) )
    v4 = 0LL;
  v40 = v4;
  v5 = v3 != 24;
  v43 = v5;
  v6 = 48 * v1 - 0x58000000000LL;
  v39 = 0LL;
  v7 = 0LL;
  if ( v2 )
  {
    while ( !v4 )
    {
LABEL_8:
      if ( (v1 & 0x1FF) == 0 && !v4 && v2 >= 0x200 )
      {
        v22 = MiRestrictRangeToNode(v1, v2);
        if ( v22 >= 0x200 )
        {
          v44 = MiPageToNode(v1, 0);
          v23 = MiPageToChannel(v1);
          v45 = v23;
          v25 = ((KeFeatureBits >> 37) & 1) == 0;
          v41 = ((KeFeatureBits >> 37) & 1) == 0;
          for ( i = v25; i <= 1; ++i )
          {
            v27 = MiLargePageSizes[i];
            if ( v1 == (v1 & ~(v27 - 1)) && v22 >= v27 )
            {
              v28 = v22;
              if ( i == v25 )
              {
                v31 = v22;
              }
              else
              {
                v29 = MiLargePageSizes[i - 1];
                v30 = v29 - (v1 & (v29 - 1));
                if ( v30 <= v22 )
                  v28 = v30;
                v31 = v28;
              }
              v32 = v28 - v31 % v27;
              if ( v32 )
              {
                while ( 1 )
                {
                  MiInitializeBlankPfns(v6, i, v24, v23, v43);
                  v42 = MiLockPageInline(v6);
                  MiInsertLargePageInNodeListHelper(v1, v27, v43, 0LL);
                  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
                  {
                    v33 = v42;
                    if ( KeGetCurrentIrql() < 2u || v42 >= 2u )
                      goto LABEL_42;
                    CurrentPrcb = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                  v33 = v42;
LABEL_42:
                  __writecr8(v33);
                  v24 = v44;
                  v22 -= v27;
                  v23 = v45;
                  v2 -= v27;
                  v1 += v27;
                  v6 += 48 * v27;
                  v32 -= v27;
                  if ( !v32 )
                  {
                    v25 = v41;
                    break;
                  }
                }
              }
              if ( v22 < 0x200 )
                break;
              i = v25 - 1;
            }
          }
          v7 = v39;
          goto LABEL_11;
        }
      }
      *(_QWORD *)v6 = v7;
      v7 = (volatile signed __int32 *)v6;
      v39 = (volatile signed __int32 *)v6;
LABEL_10:
      ++v1;
      v6 += 48LL;
      --v2;
LABEL_11:
      v4 = v40;
      if ( !v2 )
      {
        v5 = v43;
        goto LABEL_13;
      }
    }
    v8 = *(_WORD *)(v6 + 32);
    if ( v8 != 1 )
    {
      if ( v8 )
        goto LABEL_10;
      goto LABEL_8;
    }
    if ( !MiPteInShadowRange(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) )
    {
LABEL_24:
      *v18 = v17;
      if ( v19 )
        MiWritePteShadow((__int64)v18, v17);
      v21 = *(_QWORD *)(v20 + 24) ^ ((*(_QWORD *)(v20 + 24) - 1LL) ^ *(_QWORD *)(v20 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v20 + 24) = v21;
      if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiFreeEmptyBootPageTable(v20);
      v4 = v40;
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = 0;
      goto LABEL_8;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_24;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_24;
    }
    if ( (v17 & 1) != 0 )
      v17 |= v34;
    goto LABEL_24;
  }
LABEL_13:
  v9 = 1025;
  if ( v37 != 24 )
    v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  while ( v7 )
  {
    v11 = v7;
    v7 = *(volatile signed __int32 **)v7;
    v12 = (__int64)(v11 + 0x16000000000LL) / 48;
    MiPageToNode(v12, 0);
    v13 = MiPageToChannel(v12);
    MiInitializeBlankPfns((_DWORD)v11, -1, v14, v13, v5);
    v38 = 0;
    while ( _interlockedbittestandset64(v11 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v38, v15, v16);
      while ( *((__int64 *)v11 + 3) < 0 );
    }
    MiInsertPageInFreeOrZeroedList(v12, v9);
    _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v36 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v36);
  }
  __writecr8(CurrentIrql);
}
