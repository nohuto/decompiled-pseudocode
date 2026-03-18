/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B6B8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C005BD7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005CE40 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CF70 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005D0C8 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C005D424 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007C9E4 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00814A8 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
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
  __int64 v13; // r15
  PSLIST_ENTRY v14; // rbp
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64); // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r8
  struct _RTL_BALANCED_NODE *v26; // rbx
  __int64 v27; // rax
  struct _RTL_BALANCED_NODE *v28; // rax
  __int64 v29; // rax
  _QWORD v30[2]; // [rsp+30h] [rbp-58h] BYREF
  char v31; // [rsp+40h] [rbp-48h]
  unsigned int v32; // [rsp+90h] [rbp+8h] BYREF
  __int64 v33; // [rsp+98h] [rbp+10h]

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
    LOBYTE(v32) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v6, (bool *)&v32);
    if ( !(_BYTE)v32 )
    {
      v29 = WdLogNewEntry5_WdWarning(v8, v7);
      *(_QWORD *)(v29 + 24) = this;
      *(_QWORD *)(v29 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v29);
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
  v33 = *((_QWORD *)this + 5);
  v32 = *((_DWORD *)this + 54);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL) + 1320LL);
  ++*(_DWORD *)(v13 + 20);
  v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v13);
  if ( v14
    || (v15 = *(unsigned int *)(v13 + 44),
        v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v13 + 48),
        v17 = *(unsigned int *)(v13 + 40),
        v18 = *(unsigned int *)(v13 + 36),
        ++*(_DWORD *)(v13 + 24),
        (v14 = (PSLIST_ENTRY)v16(v18, v15, v17, v13)) != 0LL) )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v14, v32, v12, i, v33);
    v14[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v14[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v14);
    v20 = *((unsigned int *)this + 54);
    if ( !(_DWORD)v20 )
    {
      v23 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
      v24 = WdLogNewEntry5_WdEvent(v20, v19);
      *(_QWORD *)(v24 + 24) = v14;
      *(_QWORD *)(v24 + 32) = 2LL;
      WdLogEvent5_WdEvent(v24);
      v26 = *(struct _RTL_BALANCED_NODE **)(v23 + 64);
      v27 = *((_QWORD *)&v14[3].Next + 1);
      v30[0] = *((_QWORD *)&v14[2].Next + 1) - (unsigned __int64)v14[2].Next;
      v30[1] = v27;
      v31 = 0;
      if ( !v26 )
        goto LABEL_23;
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v30, v26) >= 0 )
        {
          v28 = v26->Children[1];
          if ( !v28 )
          {
            v2 = 1;
LABEL_23:
            LOBYTE(v25) = v2;
            RtlAvlInsertNodeEx(v23 + 64, v26, v25, v14);
            *((_DWORD *)&v14[5].Next + 2) = 2;
            return;
          }
        }
        else
        {
          v28 = v26->Children[0];
          if ( !v26->Children[0] )
            goto LABEL_23;
        }
        v26 = v28;
      }
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 != 1 )
        return;
      v22 = 0LL;
    }
    else
    {
      v22 = 1LL;
    }
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v22, v14);
  }
}
