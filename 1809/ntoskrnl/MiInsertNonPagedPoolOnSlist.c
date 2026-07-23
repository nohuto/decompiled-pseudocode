/*
 * XREFs of MiInsertNonPagedPoolOnSlist @ 0x140161360
 * Callers:
 *     MiFreePoolPages @ 0x140161200 (MiFreePoolPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiVaToPfn @ 0x140098F50 (MiVaToPfn.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140121FC0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLockNonPagedPoolPte @ 0x140162570 (MiLockNonPagedPoolPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiInsertNonPagedPoolOnSlist(unsigned __int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v13; // rbx
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rbx
  _SLIST_HEADER *v21; // rbx
  __int64 v23; // r9
  char v24; // r10
  unsigned __int64 v25; // r11
  ULONG_PTR v26; // rcx
  unsigned __int16 v27; // ax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v36; // rcx
  unsigned __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-48h]
  unsigned __int8 v40; // [rsp+90h] [rbp+8h]
  int v41; // [rsp+A0h] [rbp+18h]
  int v42; // [rsp+A8h] [rbp+20h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = v4;
  v7 = MI_IS_PHYSICAL_ADDRESS(a1);
  if ( !v7 )
    goto LABEL_30;
  do
  {
    v5 <<= 9;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  if ( v5 > 1 )
  {
    if ( MiPteInShadowRange(v6)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      v32 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 8 * ((v6 >> 3) & 0x1FF));
        v34 = v8 | 0x20;
        if ( (v33 & 0x20) == 0 )
          v34 = v8;
        v8 = v34;
        if ( (v33 & 0x42) != 0 )
          v8 = v34 | 0x42;
      }
    }
    v37 = v8;
    v10 = 48 * MiVaToPfn(a1) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v42 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v42, v9, v11);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    v40 = CurrentIrql;
    v13 = v37;
  }
  else
  {
LABEL_30:
    v10 = MiLockNonPagedPoolPte(v4);
    v30 = MI_READ_PTE_LOCK_FREE(v4);
    v37 = v30;
    v13 = v30;
    if ( (v30 & 0x200) != 0 )
    {
      v13 = v30 & 0xFFFFFFFFFFFFFDFFuLL;
      v37 = v30 & 0xFFFFFFFFFFFFFDFFuLL;
      MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v4, v30 & 0xFFFFFFFFFFFFFDFFuLL);
    }
  }
  BugCheckParameter4 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 1 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (__int64)(v10 + 0x58000000000LL) / 48, *(_BYTE *)(v10 + 34) & 7, BugCheckParameter4);
  v15 = *(_WORD *)(v10 + 32);
  if ( v15 != 1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (__int64)(v10 + 0x58000000000LL) / 48, *(_BYTE *)(v10 + 34) & 7, v15);
  v16 = v13 >> 63;
  v17 = v16 != 0 ? 0x200 : 0;
  v18 = *(_QWORD *)(v10 + 40) >> 58;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v40 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v40);
  if ( a2 > 3 )
    return v17;
  v19 = 25LL * (unsigned int)v18;
  v20 = v16 ? v19 + a2 + 3 : v19 + a2;
  v21 = &qword_14043B118[v20];
  if ( LOWORD(v21->Alignment) >= (unsigned int)dword_140439B08[a2 - 1] )
    return v17;
  v41 = 1;
  v38 = 1LL;
  if ( a2 > 1 )
  {
    do
    {
      v4 += 8LL;
      if ( (v4 & 0xFFF) != 0 )
      {
        v24 = MI_READ_PTE_LOCK_FREE(v6);
      }
      else
      {
        v6 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v37 = MI_READ_PTE_LOCK_FREE(v6);
        v24 = v37;
        if ( (v37 & 0x80u) != 0LL )
          v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37) >> 12) & 0xFFFFFFFFFLL)
              - 0x58000000030LL;
      }
      if ( v24 >= 0 )
      {
        v10 = MiLockNonPagedPoolPte(v4);
        v31 = MI_READ_PTE_LOCK_FREE(v4);
        if ( (v31 & 0x200) != 0 )
        {
          v37 = v31 & 0xFFFFFFFFFFFFFDFFuLL;
          MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v4, v31 & 0xFFFFFFFFFFFFFDFFuLL);
        }
        v23 = v38;
        v25 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v40 = 17;
        v10 += 48LL;
      }
      v26 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v26 != 1 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (__int64)(v10 + 0x58000000000LL) / 48, *(_BYTE *)(v10 + 34) & 7, v26);
      v27 = *(_WORD *)(v10 + 32);
      if ( v27 != 1 )
        KeBugCheckEx(0x4Eu, 0x9AuLL, (__int64)(v10 + 0x58000000000LL) / 48, *(_BYTE *)(v10 + 34) & 7, v27);
      v28 = *(_QWORD *)(v10 + 40) >> 58;
      v39 = v28;
      if ( v40 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v25);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v40 < 2u )
        {
          v36 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v36);
          v23 = v38;
          LODWORD(v28) = v39;
        }
        __writecr8(v40);
      }
      if ( (_DWORD)v28 == (_DWORD)v18 )
      {
        v29 = v41;
      }
      else
      {
        v29 = 0;
        v41 = 0;
      }
      v38 = v23 + 1;
    }
    while ( v23 + 1 < a2 );
    if ( !v29 )
      return v17;
  }
  *(_QWORD *)a1 = a1 ^ qword_14043BF80;
  RtlpInterlockedPushEntrySList(v21, (PSLIST_ENTRY)(a1 + 16));
  return 1LL;
}
