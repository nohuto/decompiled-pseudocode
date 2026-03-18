/*
 * XREFs of MxCreateFreePfns @ 0x1409F2AC8
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x1409F2628 (MxReleaseFreeDescriptor.c)
 *     MiSwitchToPfns @ 0x1409F26EC (MiSwitchToPfns.c)
 *     MiCreateFreePfns @ 0x1409F2960 (MiCreateFreePfns.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiPageToChannel @ 0x14002F36C (MiPageToChannel.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiCreateInitialPfns @ 0x140188BF4 (MiCreateInitialPfns.c)
 *     MiCreatePfnTemplate @ 0x140188C84 (MiCreatePfnTemplate.c)
 *     MiRestrictRangeToNode @ 0x140188DA4 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFreeEmptyBootPageTable @ 0x140A3D5A4 (MiFreeEmptyBootPageTable.c)
 */

void *__fastcall MxCreateFreePfns(__int64 a1)
{
  void *result; // rax
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rbp
  int v5; // eax
  __int64 v6; // rcx
  BOOL v7; // r15d
  __m128i *v8; // rdi
  __m128i *v9; // r14
  __int16 v10; // ax
  __int16 v11; // si
  unsigned __int8 CurrentIrql; // di
  __m128i *v13; // rbx
  ULONG_PTR v14; // rbp
  char v15; // al
  unsigned int v16; // r10d
  __int64 v17; // rdx
  _QWORD *v18; // r8
  int v19; // r9d
  __int64 v20; // r11
  __int64 v21; // r8
  ULONG_PTR v22; // r12
  unsigned int v23; // ebx
  char v24; // r8
  unsigned int v25; // r13d
  unsigned int i; // r10d
  unsigned __int64 v27; // r14
  __int64 v28; // rdx
  ULONG_PTR v29; // r15
  ULONG_PTR v30; // rdx
  ULONG_PTR v31; // rax
  ULONG_PTR v32; // r15
  unsigned __int8 v33; // al
  __int64 v34; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v36; // rcx
  int v37; // [rsp+30h] [rbp-98h]
  int v38; // [rsp+34h] [rbp-94h] BYREF
  __m128i *v39; // [rsp+38h] [rbp-90h]
  __int64 v40; // [rsp+40h] [rbp-88h]
  _BOOL8 v41; // [rsp+48h] [rbp-80h]
  __m128i v42[7]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int8 v43; // [rsp+D0h] [rbp+8h]
  int v44; // [rsp+D8h] [rbp+10h]
  unsigned int v45; // [rsp+E0h] [rbp+18h]
  char v46; // [rsp+E8h] [rbp+20h]

  result = memset(v42, 0, 0x30uLL);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
  {
    if ( !--v4 )
      return result;
    v3 = 1LL;
  }
  v5 = *(_DWORD *)(a1 + 16);
  v37 = v5;
  if ( v5 == 2 || (v6 = 1LL, v5 == 24) )
    v6 = 0LL;
  v40 = v6;
  v7 = v5 != 24;
  v44 = v7;
  v8 = (__m128i *)(48 * v3 - 0x58000000000LL);
  v39 = 0LL;
  v9 = 0LL;
  if ( v4 )
  {
    while ( !v6 )
    {
LABEL_8:
      if ( (v3 & 0x1FF) == 0 && !v6 && v4 >= 0x200 )
      {
        v22 = MiRestrictRangeToNode(v3, v4);
        if ( v22 >= 0x200 )
        {
          v45 = MiPageToNode(v3, 0);
          v23 = v45;
          v24 = MiPageToChannel(v3);
          v46 = v24;
          v25 = (KeFeatureBits & 0x2000000000LL) == 0;
          v41 = (KeFeatureBits & 0x2000000000LL) == 0;
          for ( i = v25; i <= 1; ++i )
          {
            v27 = MiLargePageSizes[i];
            if ( v3 == (v3 & ~(v27 - 1)) && v22 >= v27 )
            {
              if ( i == v25 )
              {
                v31 = v22;
                v29 = v22;
              }
              else
              {
                v28 = MiLargePageSizes[i - 1];
                v29 = v22;
                v30 = v28 - (v3 & (v28 - 1));
                if ( v30 <= v22 )
                  v29 = v30;
                v31 = v29;
              }
              v32 = v29 - v31 % v27;
              MiCreatePfnTemplate(i, v23, v24, v44, v42[0].m128i_i64);
              if ( v32 )
              {
                while ( 1 )
                {
                  MiCreateInitialPfns(v8, v27, v42);
                  v43 = MiLockPageInline((__int64)v8);
                  MiInsertLargePageInNodeList(v3, v44, 0);
                  _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
                  {
                    v33 = v43;
                    if ( KeGetCurrentIrql() < 2u || v43 >= 2u )
                      goto LABEL_42;
                    CurrentPrcb = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                  v33 = v43;
LABEL_42:
                  __writecr8(v33);
                  v22 -= v27;
                  v4 -= v27;
                  v3 += v27;
                  v8 += 3 * v27;
                  v32 -= v27;
                  if ( !v32 )
                  {
                    v23 = v45;
                    v25 = v41;
                    break;
                  }
                }
              }
              if ( v22 < 0x200 )
                break;
              v24 = v46;
              i = v25 - 1;
            }
          }
          v9 = v39;
          goto LABEL_11;
        }
      }
      v8->m128i_i64[0] = (__int64)v9;
      v9 = v8;
      v39 = v8;
LABEL_10:
      ++v3;
      v8 += 3;
      --v4;
LABEL_11:
      v6 = v40;
      if ( !v4 )
      {
        v7 = v44;
        goto LABEL_13;
      }
    }
    v10 = v8[2].m128i_i16[0];
    if ( v10 != 1 )
    {
      if ( v10 )
        goto LABEL_10;
      goto LABEL_8;
    }
    if ( !MiPteInShadowRange(v8->m128i_i64[1] | 0x8000000000000000uLL) )
    {
LABEL_24:
      *v18 = v17;
      if ( v19 )
        MiWritePteShadow((__int64)v18);
      v21 = *(_QWORD *)(v20 + 24) ^ ((*(_QWORD *)(v20 + 24) - 1LL) ^ *(_QWORD *)(v20 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v20 + 24) = v21;
      if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiFreeEmptyBootPageTable(v20);
      v6 = v40;
      v8[1].m128i_i64[1] &= 0xC000000000000000uLL;
      v8[2].m128i_i16[0] = 0;
      goto LABEL_8;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_24;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_24;
    }
    if ( (v17 & 1) != 0 )
      v17 |= v34;
    goto LABEL_24;
  }
LABEL_13:
  v11 = 1025;
  if ( v37 != 24 )
    v11 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  while ( v9 )
  {
    v13 = v9;
    v9 = (__m128i *)v9->m128i_i64[0];
    v14 = (__int64)v13[0x5800000000LL].m128i_i64 / 48;
    MiPageToNode(v14, 0);
    v15 = MiPageToChannel(v14);
    MiCreatePfnTemplate(0xFFFFFFFF, v16, v15, v7, v42[0].m128i_i64);
    MiCreateInitialPfns(v13, 1uLL, v42);
    v38 = 0;
    while ( _interlockedbittestandset64(&v13[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( v13[1].m128i_i64[1] < 0 );
    }
    MiInsertPageInFreeOrZeroedList(v14, v11);
    _InterlockedAnd64(&v13[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v36 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v36);
  }
  result = (void *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
