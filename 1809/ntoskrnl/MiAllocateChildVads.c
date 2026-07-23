/*
 * XREFs of MiAllocateChildVads @ 0x14085EC58
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiFreeVadEvents @ 0x1402B0028 (MiFreeVadEvents.c)
 *     MiCloneCaptureVadCommit @ 0x1402BA108 (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x1402C8CBC (MiCloneImageVad.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiCreateVadEventBitmap @ 0x140697348 (MiCreateVadEventBitmap.c)
 *     MiFreePlaceholderStorage @ 0x1406D1E70 (MiFreePlaceholderStorage.c)
 *     MiCloneNoChange @ 0x14085061C (MiCloneNoChange.c)
 *     MiFreeVadEventBitmap @ 0x1408506D4 (MiFreeVadEventBitmap.c)
 *     MiCloneLargeFileOnlyVad @ 0x140853B74 (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x140859C34 (MiCloneDiscardVadCommit.c)
 *     MiCreatePlaceholderStorage @ 0x14085D918 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x14085E288 (MiCreateLargePageVad.c)
 *     MiDeletePartialCloneVads @ 0x14085F728 (MiDeletePartialCloneVads.c)
 *     MiInsertChildVads @ 0x14085F950 (MiInsertChildVads.c)
 *     MiVadHasSharedCommit @ 0x14085FBF4 (MiVadHasSharedCommit.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  void *v3; // r12
  int v4; // r15d
  _QWORD *j; // rsi
  _QWORD *i; // rax
  _QWORD **v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // r8d
  int v13; // ecx
  ULONG v14; // r8d
  SIZE_T v15; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rbx
  int v18; // ecx
  int inserted; // edi
  __int64 v20; // rax
  bool v21; // sf
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  _BYTE v28[48]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0LL;
  v4 = 0;
  j = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[4]; i; i = (_QWORD *)*i )
    j = i;
  while ( 1 )
  {
    do
    {
      if ( !j )
        return MiInsertChildVads(BugCheckParameter1, v3);
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
      v12 = *(_DWORD *)(v9 + 48);
    }
    while ( ((1 << (*(_BYTE *)(v9 + 48) & 7)) & 0xB5) == 0
         || (v12 & 0xA0000) != 0
         || (v12 & 0x4000) == 0 && (*(_DWORD *)(v9 + 64) & 0x4000000) == 0 );
    v13 = *(_DWORD *)(v9 + 48);
    v14 = 1818517846;
    v15 = (-(__int64)((v13 & 0x4000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (v13 & 7) == 2 && (v13 & 0x8000) != 0 )
    {
      v14 = 1231315286;
      v15 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v9 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v9 + 72) + 8LL) & 0x3F) != 0)
           + 20LL);
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, v14);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memmove(PoolWithTag, (const void *)v9, v15);
    v18 = *((_DWORD *)v17 + 12);
    if ( (*(_DWORD *)(v9 + 48) & 0x4000) != 0 )
    {
      v18 &= ~0x8000000u;
      *((_DWORD *)v17 + 12) = v18;
    }
    else
    {
      v17[14] = BugCheckParameter1 | 1;
    }
    v17[7] = 0LL;
    *((_DWORD *)v17 + 9) = 0;
    v17[5] = 0LL;
    v17[1] = 0LL;
    *((_DWORD *)v17 + 12) = v18 & 0x3FFFFFFF;
    v17[2] = -2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v9) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD ***)(v9 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_54;
    }
    if ( (unsigned int)MiVadPureReserve((__int64)v17) )
    {
      v20 = *((unsigned int *)v17 + 13);
      LODWORD(v20) = v20 & 0x7FFFFFFF;
      if ( (v20 | ((unsigned __int64)*((unsigned __int8 *)v17 + 34) << 31)) < 0x7FFFFFFFDLL )
      {
        inserted = MiCloneCaptureVadCommit((__int64)v17);
        if ( inserted < 0 )
        {
          if ( (unsigned int)MiVadHasSharedCommit(v17) )
            MiRemoveSharedCommitNode(*(_QWORD *)v17[9], BugCheckParameter1, 0);
LABEL_54:
          ExFreePoolWithTag(v17, 0);
          v17 = 0LL;
          goto LABEL_58;
        }
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x8000000) != 0 )
    {
      inserted = MiCloneNoChange(v9, (__int64)v17);
      if ( inserted < 0 )
        goto LABEL_58;
    }
    if ( MiLocateVadEvent(v9, 128) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v17);
      if ( inserted < 0 )
        goto LABEL_58;
    }
    if ( (*(_DWORD *)(v9 + 48) & 7) == 4 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28);
        v4 = 1;
      }
      inserted = MiCreateVadEventBitmap(
                   BugCheckParameter1,
                   (__int64)v17,
                   (*((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32))
                 - (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32))
                 + 1,
                   4);
      if ( inserted >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x8000u);
        inserted = 0;
      }
      v21 = inserted < 0;
LABEL_42:
      if ( v21 )
        goto LABEL_58;
      goto LABEL_49;
    }
    if ( !MiVadMapsLargeImage(v9) )
    {
      v22 = *(_DWORD *)(v9 + 48) & 7;
      if ( v22 != 5 )
      {
        if ( v22 == 2 )
        {
          v23 = MiCloneImageVad(BugCheckParameter1, (__int64)v17, v9);
        }
        else
        {
          if ( v22 != 7 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
            goto LABEL_49;
          v23 = MiCloneLargeFileOnlyVad(v9);
        }
        inserted = v23;
        v21 = v23 < 0;
        goto LABEL_42;
      }
    }
    v24 = (*((_DWORD *)v17 + 7) - *((_DWORD *)v17 + 6) + 1) ^ *((_DWORD *)v17 + 13);
    *((_BYTE *)v17 + 34) = ((*((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32))
                          - (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32))
                          + 1) >> 31;
    *((_DWORD *)v17 + 13) ^= v24 & 0x7FFFFFFF;
    inserted = MiCreateLargePageVad(BugCheckParameter1, (__int64)v17, 0LL);
    if ( inserted < 0 )
      goto LABEL_58;
    ++*a2;
LABEL_49:
    if ( v4 )
    {
      KiUnstackDetachProcess((__int64)v28, 0LL);
      v4 = 0;
    }
    *v17 = v3;
    v3 = v17;
  }
  inserted = -1073741670;
LABEL_58:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28);
  if ( v17 )
  {
    if ( (unsigned int)MiVadHasSharedCommit(v17) )
      MiRemoveSharedCommitNode(*(_QWORD *)v17[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit((__int64)v17);
    MiFreeVadEventBitmap((struct _KPROCESS *)BugCheckParameter1, (__int64)v17, 4LL);
    MiFreePlaceholderStorage((__int64)v17, v26, v27);
    MiFreeVadEvents((__int64)v17);
    ExFreePoolWithTag(v17, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess((__int64)v28, 0LL);
  return (unsigned int)inserted;
}
