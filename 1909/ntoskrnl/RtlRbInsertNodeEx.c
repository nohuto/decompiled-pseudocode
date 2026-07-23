/*
 * XREFs of RtlRbInsertNodeEx @ 0x140064630
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x14001EC20 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14005EEB0 (RtlpHpSegFreeRangeInsert.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060C30 (KiAbEntryGetLockedHeadEntry.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1400615A0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkSplit @ 0x140062140 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14008AA5C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14009F190 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400C6DF0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400C70A8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     PfSnGetFileInformation @ 0x1400D20B0 (PfSnGetFileInformation.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400DC578 (MiInvalidatePageFileBitmapsCache.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400EBD88 (IoStartDiskIoAttributionForContext.c)
 *     RtlpHpLargeAlloc @ 0x14010F9B4 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x140110AE8 (RtlpHpVaMgrFree.c)
 *     KiSetClockInterval @ 0x140111E80 (KiSetClockInterval.c)
 *     KiInsertSchedulingGroupQueue @ 0x140115BBC (KiInsertSchedulingGroupQueue.c)
 *     MiRescanPageFileBitmapPortion @ 0x14012502C (MiRescanPageFileBitmapPortion.c)
 *     MiInitializePagefileBitmapsCache @ 0x140193658 (MiInitializePagefileBitmapsCache.c)
 *     MiInsertSlabEntry @ 0x1402DC654 (MiInsertSlabEntry.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1403078F4 (PspJobIoRateVolumeEntryInsert.c)
 *     VmpFaultEntryInsert @ 0x14032969C (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x140329DC0 (VmpInsertMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14032AF18 (VmpSplitMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C48F0 (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14068DC9C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068F09C (HvpViewMapCreateViewsForRegion.c)
 *     KiGetSystemServiceTraceTable @ 0x14087FAA0 (KiGetSystemServiceTraceTable.c)
 *     MiGetHotPatchEntry @ 0x14088DC74 (MiGetHotPatchEntry.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x1409FCFBC (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int8 v5; // r11
  $7D93978C745EB1C2D28075BAF55422B4 v6; // cl
  unsigned __int64 Min; // rax
  _RTL_BALANCED_NODE *v8; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v11; // si
  _RTL_BALANCED_NODE *v12; // r8
  char v13; // bl
  unsigned __int64 v14; // rcx
  _BOOL8 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // r11d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _RTL_BALANCED_NODE **v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 Root; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // r11
  _RTL_BALANCED_NODE **v34; // rbx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  _RTL_BALANCED_NODE *v41; // rax
  _RTL_BALANCED_NODE *v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax

  Node->Children[0] = 0LL;
  v5 = Right;
  Node->Children[1] = 0LL;
  v6 = Tree->0;
  LOBYTE(Min) = *(_BYTE *)&v6 & 1;
  if ( !Parent )
  {
    v43 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
    if ( (_BYTE)Min )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)v43;
      v6 = Tree->0;
    }
    else
    {
      Tree->Root = Node;
    }
    if ( (*(_BYTE *)&v6 & 1) != 0 )
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v43;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v43 | 1);
    }
    else
    {
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return Min;
  }
  v8 = Node;
  v9 = (_BYTE)Min == 0;
  LOBYTE(Min) = Right;
  if ( !v9 )
    v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)Node);
  Parent->Children[Right] = v8;
  v10 = (unsigned __int64)Parent;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v10 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
  Node->ParentValue = v10 | 1;
  if ( !Right )
  {
    Min = (unsigned __int64)Tree->Min;
    if ( (Min & 1) != 0 )
      v42 = Min == 1 ? 0LL : (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
    else
      v42 = Tree->Min;
    if ( Parent == v42 )
    {
      if ( (Min & 1) != 0 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(Min) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)Min;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
  {
    v11 = Tree->0;
    while ( 1 )
    {
      v12 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v13 = *(_BYTE *)&v11 & 1;
      if ( (*(_BYTE *)&v11 & 1) != 0 && v12 )
        v12 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v12);
      v14 = (unsigned __int64)v12->Children[0];
      if ( v13 && v14 )
        v14 ^= (unsigned __int64)v12;
      Min = v14 != (_QWORD)Parent;
      v15 = v14 == (_QWORD)Parent;
      v16 = Min;
      v17 = (unsigned __int64)v12->Children[v15];
      if ( v13 )
      {
        if ( !v17 )
          break;
        v17 ^= (unsigned __int64)v12;
      }
      if ( !v17 || (*(_BYTE *)(v17 + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->0 &= ~1u;
      Node = v12;
      *(_BYTE *)(v17 + 16) &= ~1u;
      Parent = (PRTL_BALANCED_NODE)(v12->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !Parent )
          return Min;
        Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v12 ^ (unsigned __int64)Parent);
      }
      if ( Parent )
      {
        v12->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v12->ParentValue | 1);
        v11 = Tree->0;
        Min = (unsigned __int64)Parent->Children[0];
        if ( (*(_BYTE *)&v11 & 1) != 0 && Min )
          Min ^= (unsigned __int64)Parent;
        v5 = v12 != (_RTL_BALANCED_NODE *)Min;
        if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
          continue;
      }
      return Min;
    }
    if ( v5 == (_DWORD)Min )
    {
LABEL_37:
      Root = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      v30 = (unsigned int)v16 ^ 1;
      v31 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v32 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v31 )
        v31 ^= (unsigned __int64)Parent;
      if ( (_RTL_BALANCED_NODE *)v31 != v12 )
        goto LABEL_138;
      v33 = (unsigned int)v30;
      v34 = &v12->Children[(unsigned int)v30 ^ 1LL];
      v35 = (unsigned __int64)*v34;
      if ( ((__int64)Tree->Min & 1) != 0 && v35 )
        v35 ^= (unsigned __int64)v12;
      if ( (PRTL_BALANCED_NODE)v35 != Parent )
        goto LABEL_138;
      v36 = v12->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_83;
        v36 ^= (unsigned __int64)v12;
      }
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 8);
        if ( ((__int64)Tree->Min & 1) != 0 && v37 )
          v37 ^= v36;
        if ( (_RTL_BALANCED_NODE *)v37 == v12 )
        {
          v38 = v36 ^ (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v38 = (unsigned __int64)Parent;
          *(_QWORD *)(v36 + 8) = v38;
        }
        else
        {
          v47 = *(_QWORD *)v36;
          if ( ((__int64)Tree->Min & 1) != 0 && v47 )
            v47 ^= v36;
          if ( (_RTL_BALANCED_NODE *)v47 != v12 )
            goto LABEL_138;
          v48 = v36 ^ (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v48 = (unsigned __int64)Parent;
          *(_QWORD *)v36 = v48;
        }
        goto LABEL_49;
      }
LABEL_83:
      if ( (_RTL_BALANCED_NODE *)Root != v12 )
        goto LABEL_138;
      Root = (unsigned __int64)Parent;
LABEL_49:
      if ( v32 && v36 )
        v36 ^= (unsigned __int64)Parent;
      Parent->ParentValue = v36 | *(_DWORD *)&Parent->0 & 3;
      v39 = (unsigned __int64)Parent->Children[v30];
      if ( v32 )
      {
        if ( !v39 )
        {
LABEL_52:
          if ( v32 && v39 )
            v39 ^= (unsigned __int64)v12;
          *v34 = (_RTL_BALANCED_NODE *)v39;
          v40 = (unsigned __int64)Parent ^ (unsigned __int64)v12;
          v41 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v12);
          if ( !v32 )
          {
            v41 = v12;
            v40 = (unsigned __int64)Parent;
          }
          Parent->Children[v33] = v41;
          Min = Root;
          v12->ParentValue = *(_DWORD *)&v12->0 & 3 | v40;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          {
            Min = (unsigned __int64)Tree ^ Root;
            if ( !Root )
              Min = 0LL;
          }
          Tree->Root = (_RTL_BALANCED_NODE *)Min;
          *(_BYTE *)&v12->0 |= 1u;
          *(_BYTE *)&Parent->0 &= ~1u;
          return Min;
        }
        v39 ^= (unsigned __int64)Parent;
      }
      if ( !v39 )
        goto LABEL_52;
      v44 = *(_QWORD *)(v39 + 16);
      v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v32 && v45 )
        v45 ^= v39;
      if ( (PRTL_BALANCED_NODE)v45 == Parent )
      {
        v46 = v39 ^ (unsigned __int64)v12;
        if ( !v32 )
          v46 = (unsigned __int64)v12;
        *(_QWORD *)(v39 + 16) = v44 & 3 | v46;
        goto LABEL_52;
      }
LABEL_138:
      __fastfail(0x1Du);
    }
    v18 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v19 = *(_BYTE *)&v11 & 1;
    if ( (*(_BYTE *)&v11 & 1) != 0 && v18 )
      v18 ^= (unsigned __int64)Node;
    if ( (PRTL_BALANCED_NODE)v18 != Parent )
      goto LABEL_138;
    v20 = (unsigned __int64)Parent->Children[v15];
    if ( (*(_BYTE *)&v11 & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v20 != Node )
      goto LABEL_138;
    v21 = (unsigned __int64)v12->Children[v16];
    if ( (*(_BYTE *)&v11 & 1) != 0 && v21 )
      v21 ^= (unsigned __int64)v12;
    if ( (PRTL_BALANCED_NODE)v21 != Parent )
      goto LABEL_138;
    v22 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v11 & 1) != 0 && v22 )
      v22 ^= (unsigned __int64)Parent;
    if ( (_RTL_BALANCED_NODE *)v22 != v12 )
      goto LABEL_138;
    v23 = &Node->Children[v16];
    v24 = (unsigned __int64)Node ^ (unsigned __int64)v12;
    v25 = (unsigned __int64)Node ^ (unsigned __int64)v12;
    if ( !v19 )
    {
      v25 = (unsigned __int64)Node;
      v24 = (unsigned __int64)v12;
    }
    v12->Children[v16] = (_RTL_BALANCED_NODE *)v25;
    Node->ParentValue = *(_DWORD *)&Node->0 & 3 | v24;
    v26 = (unsigned __int64)*v23;
    if ( v19 )
    {
      if ( !v26 )
      {
LABEL_33:
        if ( v19 && v26 )
          v26 ^= (unsigned __int64)Parent;
        Parent->Children[v15] = (_RTL_BALANCED_NODE *)v26;
        v27 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
        v28 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
        if ( !v19 )
        {
          v28 = (unsigned __int64)Parent;
          v27 = (unsigned __int64)Node;
        }
        *v23 = (_RTL_BALANCED_NODE *)v28;
        Parent->ParentValue = *(_DWORD *)&Parent->0 & 3 | v27;
        Parent = Node;
        goto LABEL_37;
      }
      v26 ^= (unsigned __int64)Node;
    }
    if ( v26 )
    {
      v49 = *(_QWORD *)(v26 + 16);
      v50 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v19 && v50 )
        v50 ^= v26;
      if ( (PRTL_BALANCED_NODE)v50 != Node )
        goto LABEL_138;
      v51 = v26 ^ (unsigned __int64)Parent;
      if ( !v19 )
        v51 = (unsigned __int64)Parent;
      *(_QWORD *)(v26 + 16) = v49 & 3 | v51;
    }
    goto LABEL_33;
  }
  return Min;
}
