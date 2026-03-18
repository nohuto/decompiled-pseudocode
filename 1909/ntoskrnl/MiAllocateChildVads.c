/*
 * XREFs of MiAllocateChildVads @ 0x14089A0E0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     MiIsVadLargePrivate @ 0x1400731FC (MiIsVadLargePrivate.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x1400E8414 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFreeVadEvents @ 0x1402C79E0 (MiFreeVadEvents.c)
 *     MiCloneCaptureVadCommit @ 0x1402CFE8C (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x1402E2B64 (MiCloneImageVad.c)
 *     MiVadShouldBeForked @ 0x1402E5074 (MiVadShouldBeForked.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     MiCreateWriteWatchView @ 0x14067F684 (MiCreateWriteWatchView.c)
 *     MiFreePlaceholderStorage @ 0x1406F1C80 (MiFreePlaceholderStorage.c)
 *     MiCloneNoChange @ 0x14088AB70 (MiCloneNoChange.c)
 *     MiFreeVadEventBitmap @ 0x14088AC28 (MiFreeVadEventBitmap.c)
 *     MiCloneLargeFileOnlyVad @ 0x14088BE30 (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x140891E58 (MiCloneDiscardVadCommit.c)
 *     MiCreatePlaceholderStorage @ 0x140898A4C (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x140899374 (MiCreateLargePageVad.c)
 *     MiDeletePartialCloneVads @ 0x14089ABC0 (MiDeletePartialCloneVads.c)
 *     MiInsertChildVads @ 0x14089ADD0 (MiInsertChildVads.c)
 *     MiVadHasSharedCommit @ 0x14089B074 (MiVadHasSharedCommit.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  void *v4; // r12
  int v5; // r15d
  _QWORD *j; // rdi
  _QWORD *i; // rax
  _QWORD **v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // r8d
  ULONG v13; // r9d
  SIZE_T v14; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rbx
  int v17; // ecx
  unsigned int v18; // ecx
  int inserted; // esi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  _BYTE v28[48]; // [rsp+20h] [rbp-78h] BYREF

  memset(v28, 0, sizeof(v28));
  v4 = 0LL;
  v5 = 0;
  j = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[8]; i; i = (_QWORD *)*i )
    j = i;
  while ( 1 )
  {
    do
    {
      if ( !j )
        return MiInsertChildVads(BugCheckParameter1, v4);
      v8 = (_QWORD **)j[1];
      v9 = (__int64)j;
      v10 = j;
      if ( v8 )
      {
        v11 = *v8;
        for ( j = (_QWORD *)j[1]; v11; v11 = (_QWORD *)*v11 )
          j = v11;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v10 )
            break;
          v10 = j;
        }
      }
    }
    while ( !MiVadShouldBeForked(v9) );
    v12 = *(_DWORD *)(v9 + 48);
    v13 = 1818517846;
    v14 = (-(__int64)((v12 & 0x100000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (v12 & 0x100000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x200000) != 0 )
    {
      v13 = 1231315286;
      v14 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v9 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v9 + 72) + 8LL) & 0x3F) != 0)
           + 20LL);
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, v13);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memmove(PoolWithTag, (const void *)v9, v14);
    v17 = *((_DWORD *)v16 + 12);
    if ( (*(_DWORD *)(v9 + 48) & 0x100000) != 0 )
      v17 &= ~8u;
    else
      v16[14] = BugCheckParameter1 | 1;
    v16[7] = 0LL;
    v18 = v17 & 0xFFFFFFFC;
    *((_DWORD *)v16 + 9) = 0;
    v16[5] = 0LL;
    v16[1] = 0LL;
    *((_DWORD *)v16 + 12) = v18;
    if ( (v18 & 0x100000) == 0 && (v18 & 0x70) == 0x20 && (v18 & 0x400000) != 0 )
      *((_DWORD *)v16 + 12) = v18 & 0xFFBFFFFF;
    v16[2] = -2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v9) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD ***)(v9 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_52;
    }
    if ( (unsigned int)MiVadPureReserve((__int64)v16) )
    {
      v20 = *((unsigned int *)v16 + 13);
      LODWORD(v20) = v20 & 0x7FFFFFFF;
      if ( (v20 | ((unsigned __int64)*((unsigned __int8 *)v16 + 34) << 31)) < 0x7FFFFFFFDLL )
      {
        inserted = MiCloneCaptureVadCommit((__int64)v16);
        if ( inserted < 0 )
        {
          if ( (unsigned int)MiVadHasSharedCommit(v16) )
            MiRemoveSharedCommitNode(*(_QWORD **)v16[9], BugCheckParameter1, 0);
LABEL_52:
          ExFreePoolWithTag(v16, 0);
          v16 = 0LL;
          goto LABEL_56;
        }
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 )
    {
      inserted = MiCloneNoChange(v9, (__int64)v16);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( MiLocateVadEvent(v9, 128LL) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v28);
      v5 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v16);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x300000) == 0x300000 )
    {
      if ( !v5 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v28);
        v5 = 1;
      }
      inserted = MiCreateWriteWatchView(BugCheckParameter1, (__int64)v16);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( MiIsVadLargePrivate(v9) )
    {
      v21 = *(_DWORD *)(v9 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31);
      v22 = (v21 ^ *((_DWORD *)v16 + 13)) & 0x7FFFFFFF;
      *((_BYTE *)v16 + 34) = v21 >> 31;
      *((_DWORD *)v16 + 13) ^= v22;
      inserted = MiCreateLargePageVad(BugCheckParameter1, (__int64)v16, 0LL, 1);
      if ( inserted < 0 )
        goto LABEL_56;
      ++*a2;
    }
    else
    {
      v23 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v23 == 32 )
      {
        v24 = MiCloneImageVad(BugCheckParameter1, (__int64)v16, v9);
      }
      else
      {
        if ( v23 != 80 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
          goto LABEL_47;
        v24 = MiCloneLargeFileOnlyVad(v9);
      }
      inserted = v24;
      if ( v24 < 0 )
        goto LABEL_56;
    }
LABEL_47:
    if ( v5 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v28, 0);
      v5 = 0;
    }
    *v16 = v4;
    v4 = v16;
  }
  inserted = -1073741670;
LABEL_56:
  if ( !v5 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v28);
  if ( v16 )
  {
    if ( (unsigned int)MiVadHasSharedCommit(v16) )
      MiRemoveSharedCommitNode(*(_QWORD **)v16[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit((__int64)v16);
    MiFreeVadEventBitmap((struct _KPROCESS *)BugCheckParameter1, (__int64)v16, 4LL);
    MiFreePlaceholderStorage((__int64)v16, v26, v27);
    MiFreeVadEvents((__int64)v16);
    ExFreePoolWithTag(v16, 0);
  }
  if ( v4 )
    MiDeletePartialCloneVads(v4);
  KiUnstackDetachProcess((struct _KTHREAD *)v28, 0);
  return (unsigned int)inserted;
}
