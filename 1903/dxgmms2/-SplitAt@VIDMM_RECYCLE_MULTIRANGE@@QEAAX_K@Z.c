/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C00670DC
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0067694 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064E3C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00652C8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0068410 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068A10 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0068B80 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0068F9C (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007E460 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  char v2; // di
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  unsigned __int64 i; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r8
  unsigned int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r15
  PSLIST_ENTRY v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r8
  struct _RTL_BALANCED_NODE *v27; // rbx
  __int64 v28; // rax
  struct _RTL_BALANCED_NODE *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD v32[2]; // [rsp+30h] [rbp-58h] BYREF
  char v33; // [rsp+40h] [rbp-48h]
  unsigned int v34; // [rsp+90h] [rbp+8h] BYREF
  __int64 v35; // [rsp+98h] [rbp+10h]

  v2 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  for ( i = a2 + *((_QWORD *)this + 4); NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 4) <= i && *((_QWORD *)NextRange + 5) > i )
      break;
  }
  v6 = *((_QWORD *)NextRange + 4);
  if ( v6 == i )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
  }
  else
  {
    LOBYTE(v34) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v6, (bool *)&v34);
    if ( !(_BYTE)v34 )
    {
      v31 = WdLogNewEntry5_WdWarning(v8, v7);
      *(_QWORD *)(v31 + 24) = this;
      *(_QWORD *)(v31 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v31);
      return;
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)NextRange + 5) != *((_QWORD *)this + 5) )
      *((_QWORD *)this + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    v9 = *((_QWORD *)NextRange + 15);
    PreviousRange = NextRange;
    v11 = *((_QWORD *)NextRange + 9);
    NextRange = 0LL;
    if ( v9 != v11 + 72 )
      NextRange = (struct VIDMM_RECYCLE_RANGE *)(v9 - 120);
  }
  v12 = *((_QWORD *)this + 10);
  v13 = *((_QWORD *)this + 5);
  v14 = *((_DWORD *)this + 54);
  v35 = v13;
  v15 = *(_QWORD *)(v12 + 32);
  v34 = v14;
  v16 = *(_QWORD *)(v15 + 8);
  v17 = *(_DWORD *)(v16 + 1612);
  v18 = *(_QWORD *)(v16 + 1320);
  if ( v17 )
  {
    v30 = (unsigned int)(v17 - 1);
    v19 = *(PSLIST_ENTRY *)(v16 + 8 * v30 + 1648);
    *(_QWORD *)(v16 + 8 * v30 + 1648) = 0LL;
    --*(_DWORD *)(v16 + 1612);
  }
  else
  {
    ++*(_DWORD *)(v18 + 20);
    v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v18);
    if ( !v19 )
    {
      ++*(_DWORD *)(v18 + 24);
      v19 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v18 + 48))(
                            *(unsigned int *)(v18 + 36),
                            *(unsigned int *)(v18 + 44),
                            *(unsigned int *)(v18 + 40),
                            v18);
    }
    v13 = v35;
    v14 = v34;
  }
  if ( v19 )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v19, v14, v12, i, v13);
    v19[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v19[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v19);
    v21 = *((unsigned int *)this + 54);
    if ( !(_DWORD)v21 )
    {
      v24 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
      v25 = WdLogNewEntry5_WdEvent(v21, v20);
      *(_QWORD *)(v25 + 24) = v19;
      *(_QWORD *)(v25 + 32) = 2LL;
      WdLogEvent5_WdEvent(v25);
      v27 = *(struct _RTL_BALANCED_NODE **)(v24 + 64);
      v28 = *((_QWORD *)&v19[3].Next + 1);
      v32[0] = *((_QWORD *)&v19[2].Next + 1) - (unsigned __int64)v19[2].Next;
      v32[1] = v28;
      v33 = 0;
      if ( !v27 )
        goto LABEL_27;
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v32, v27) < 0 )
        {
          v29 = v27->Children[0];
          if ( !v27->Children[0] )
            goto LABEL_27;
        }
        else
        {
          v29 = v27->Children[1];
          if ( !v29 )
          {
            v2 = 1;
LABEL_27:
            LOBYTE(v26) = v2;
            RtlAvlInsertNodeEx(v24 + 64, v27, v26, v19);
            *((_DWORD *)&v19[5].Next + 2) = 2;
            return;
          }
        }
        v27 = v29;
      }
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 != 1 )
        return;
      v23 = 0LL;
    }
    else
    {
      v23 = 1LL;
    }
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v23, v19);
  }
}
