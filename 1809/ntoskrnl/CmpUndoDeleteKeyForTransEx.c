/*
 * XREFs of CmpUndoDeleteKeyForTransEx @ 0x140582354
 * Callers:
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000FB08 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14010EF28 (CmpTransEnlistUowInKcb.c)
 *     CmpDereferenceSecurityNode @ 0x1401B3530 (CmpDereferenceSecurityNode.c)
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLockIXLockExclusive @ 0x1405A9E88 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1405A9EE8 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvUnlockHiveFlusherShared @ 0x1405B05D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1405B0600 (HvLockHiveFlusherShared.c)
 *     CmListGetPrevElement @ 0x1406C188C (CmListGetPrevElement.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     CmUnlockHiveSecurity @ 0x1406D1DA8 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x1407FA70C (CmLockHiveSecurityExclusive.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTransEx(ULONG_PTR BugCheckParameter3, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  void *v6; // r15
  __int64 *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 PrevElement; // r14
  __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *PoolWithTag; // rax
  __int64 v20; // rax
  __int64 v21; // r15
  int SecurityDescriptorNode; // edi
  __int64 *v23; // rsi
  _QWORD *UnitOfWork; // rax
  int *v25; // rdi
  int v26; // eax
  __int64 v27; // rcx
  ULONG_PTR v28; // rsi
  __int64 v29; // rax
  ULONG_PTR v30; // rdx
  ULONG_PTR v31; // rcx
  unsigned int v32; // r15d
  _DWORD *v33; // rax
  __int64 v34; // rax
  ULONG_PTR v35; // rdx
  __int64 v36; // rax
  ULONG_PTR *v37; // rsi
  __int64 v38; // r14
  _DWORD v40[2]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v41[2]; // [rsp+50h] [rbp-28h] BYREF
  int *v42; // [rsp+58h] [rbp-20h]
  __int64 v43; // [rsp+60h] [rbp-18h]
  __int64 v44; // [rsp+68h] [rbp-10h]
  ULONG_PTR v45; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v46; // [rsp+C8h] [rbp+50h]
  void *v47; // [rsp+D0h] [rbp+58h]
  __int64 v48; // [rsp+D8h] [rbp+60h] BYREF

  v47 = a3;
  v46 = a2;
  v40[1] = 0;
  v41[1] = 0;
  v4 = a2;
  v5 = *(_QWORD *)(BugCheckParameter3 + 64) + 200LL;
  LODWORD(v45) = -1;
  v40[0] = -1;
  v6 = a3;
  v43 = 0LL;
  v7 = 0LL;
  v41[0] = -1;
  v48 = 0LL;
  PrevElement = CmListGetPrevElement(v5, &v48, a3, 0xFFFFFFFFLL);
  if ( !PrevElement )
    return 3221225524LL;
  do
  {
    if ( *(_DWORD *)(PrevElement + 68) == 3 && *(_QWORD *)(PrevElement + 88) == BugCheckParameter3 )
      break;
    PrevElement = CmListGetPrevElement(v8, &v48, v9, v10);
  }
  while ( PrevElement );
  if ( !PrevElement )
    return 3221225524LL;
  v48 = 0LL;
  v12 = CmListGetPrevElement(BugCheckParameter3 + 200, &v48, v9, v10);
  v44 = v12;
  if ( !v12 || *(_DWORD *)(v12 + 68) != 2 )
    return 3221225524LL;
  if ( *(_QWORD *)(BugCheckParameter3 + 280) == v4 )
  {
    v14 = *(_DWORD *)(BugCheckParameter3 + 272);
    v15 = *(_DWORD *)(BugCheckParameter3 + 276);
  }
  else
  {
    v16 = *(_QWORD *)(BugCheckParameter3 + 24);
    v17 = *(unsigned int *)(BugCheckParameter3 + 32);
    v48 = v13;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v16 + 8))(v16, v17, &v48);
    if ( !v18 )
      return 3221225626LL;
    v14 = *(_DWORD *)(v18 + 36);
    v15 = *(_DWORD *)(v18 + 40);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
      *(_QWORD *)(BugCheckParameter3 + 24),
      &v48);
  }
  if ( v14 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v14, 0x37344D43u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v14);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 8LL))(
              *(_QWORD *)(BugCheckParameter3 + 24),
              v15,
              v40);
      v21 = v20;
      if ( v20 )
      {
        LODWORD(v48) = 0;
        v23 = v7;
        v42 = (int *)v20;
        while ( 1 )
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
          *v23 = (__int64)UnitOfWork;
          if ( !UnitOfWork )
            break;
          CmpTransEnlistUowInKcb(UnitOfWork, BugCheckParameter3);
          SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)*v23, v46);
          if ( SecurityDescriptorNode < 0 )
            goto LABEL_45;
          if ( !(unsigned __int8)CmpLockIXLockIntent(BugCheckParameter3 + 240, *v23)
            || !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 256, *v23, 1LL) )
          {
            SecurityDescriptorNode = -1072103423;
            goto LABEL_45;
          }
          v25 = v42;
          *(_DWORD *)(*v23 + 68) = 6;
          v26 = *v25;
          v27 = *v23++;
          v42 = v25 + 1;
          *(_DWORD *)(v27 + 88) = v26;
          LODWORD(v48) = v48 + 1;
          if ( (unsigned int)v48 >= v14 )
          {
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
              *(_QWORD *)(BugCheckParameter3 + 24),
              v40);
            v4 = v46;
            v6 = v47;
            goto LABEL_24;
          }
        }
      }
      SecurityDescriptorNode = -1073741670;
      goto LABEL_45;
    }
    return 3221225626LL;
  }
LABEL_24:
  v28 = CmpAllocateUnitOfWork();
  if ( v28 )
  {
    HvLockHiveFlusherShared(*(_QWORD *)(BugCheckParameter3 + 24));
    CmLockHiveSecurityExclusive(*(_QWORD *)(BugCheckParameter3 + 24));
    CmpTransEnlistUowInKcb((_QWORD *)v28, BugCheckParameter3);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)v28, v4);
    if ( SecurityDescriptorNode < 0 )
    {
      v32 = -1;
    }
    else
    {
      if ( !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 240, v28, 0LL)
        || !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 256, v28, 1LL) )
      {
        SecurityDescriptorNode = -1072103423;
LABEL_43:
        CmUnlockHiveSecurity(*(_QWORD *)(BugCheckParameter3 + 24));
        HvUnlockHiveFlusherShared(*(_QWORD *)(BugCheckParameter3 + 24));
        v21 = 0LL;
        if ( v28 )
        {
          CmpRundownUnitOfWork(v28);
          ExFreePoolWithTag((PVOID)v28, 0x77554D43u);
        }
        goto LABEL_45;
      }
      *(_DWORD *)(v28 + 96) = -1;
      *(_QWORD *)(v28 + 88) = 0LL;
      *(_DWORD *)(v28 + 68) = 9;
      *(_BYTE *)(v28 + 100) = 0;
      v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 8LL))(
              *(_QWORD *)(BugCheckParameter3 + 24),
              *(unsigned int *)(BugCheckParameter3 + 32),
              v41);
      v30 = *(unsigned int *)(BugCheckParameter3 + 32);
      v31 = *(_QWORD *)(BugCheckParameter3 + 24);
      v43 = v29;
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v31, v30, v29, 1u, v6, 1, (unsigned int *)&v45);
      if ( SecurityDescriptorNode < 0 )
      {
        v32 = v45;
      }
      else
      {
        if ( !CmpFindSecurityCellCacheIndexNew(*(_QWORD *)(BugCheckParameter3 + 24), v45, &v48) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v45);
        v32 = -1;
        v33 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 24) + 1880LL) + 16LL * (unsigned int)v48 + 8);
        *(_QWORD *)(v28 + 88) = v33;
        *(_DWORD *)(v28 + 96) = *v33;
        v34 = v44;
        *(_BYTE *)(v28 + 100) = 1;
        v28 = 0LL;
        *(_DWORD *)(PrevElement + 68) = 13;
        *(_DWORD *)(v34 + 68) = 14;
        if ( *(_QWORD *)(BugCheckParameter3 + 280) )
        {
          v35 = *(unsigned int *)(BugCheckParameter3 + 276);
          if ( (_DWORD)v35 != -1 )
            HvFreeCell(*(_QWORD *)(BugCheckParameter3 + 24), v35);
        }
        v36 = v46;
        *(_DWORD *)(BugCheckParameter3 + 272) = 0;
        *(_DWORD *)(BugCheckParameter3 + 276) = -1;
        *(_QWORD *)(BugCheckParameter3 + 280) = v36;
      }
    }
    if ( v32 != -1 )
      CmpDereferenceSecurityNode(*(_QWORD *)(BugCheckParameter3 + 24), v32);
    if ( v43 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
        *(_QWORD *)(BugCheckParameter3 + 24),
        v41);
    goto LABEL_43;
  }
  SecurityDescriptorNode = -1073741670;
  v21 = 0LL;
LABEL_45:
  if ( v7 )
  {
    if ( SecurityDescriptorNode < 0 && v14 )
    {
      v37 = (ULONG_PTR *)v7;
      v38 = v14;
      do
      {
        if ( *v37 )
        {
          CmpRundownUnitOfWork(*v37);
          ExFreePoolWithTag((PVOID)*v37, 0x77554D43u);
        }
        ++v37;
        --v38;
      }
      while ( v38 );
    }
    ExFreePoolWithTag(v7, 0x37344D43u);
  }
  if ( v21 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
      *(_QWORD *)(BugCheckParameter3 + 24),
      v40);
  return (unsigned int)SecurityDescriptorNode;
}
