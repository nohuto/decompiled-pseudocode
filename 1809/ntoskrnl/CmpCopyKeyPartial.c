/*
 * XREFs of CmpCopyKeyPartial @ 0x140700B60
 * Callers:
 *     CmpReorganizeHive @ 0x1405A7F70 (CmpReorganizeHive.c)
 *     CmpCopySyncTree2 @ 0x1407FDE04 (CmpCopySyncTree2.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140805204 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpCopyCell @ 0x1406968D8 (CmpCopyCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140700FA4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140700FD4 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyValue @ 0x1407FE584 (CmpCopyValue.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int16 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  __int64 v9; // rdi
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // edx
  int v16; // eax
  __int64 v17; // rax
  char v18; // cl
  __int16 v19; // ax
  unsigned int v20; // r12d
  char v21; // bl
  int SecurityDescriptorNode; // ebx
  unsigned int v23; // r12d
  unsigned int *v24; // rax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  __int64 v27; // r15
  unsigned int v29; // [rsp+40h] [rbp-41h]
  int v30; // [rsp+40h] [rbp-41h]
  unsigned int *v31; // [rsp+48h] [rbp-39h] BYREF
  int v32; // [rsp+50h] [rbp-31h]
  _DWORD v33[2]; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v34[2]; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v35[2]; // [rsp+68h] [rbp-19h] BYREF
  _DWORD v36[2]; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v37[2]; // [rsp+78h] [rbp-9h] BYREF
  unsigned int *v38; // [rsp+80h] [rbp-1h]
  __int64 v39; // [rsp+88h] [rbp+7h]
  unsigned int BugCheckParameter3; // [rsp+D0h] [rbp+4Fh]
  unsigned int v41; // [rsp+D8h] [rbp+57h]
  unsigned int v42; // [rsp+100h] [rbp+7Fh]

  v41 = a2;
  v7 = a7;
  v38 = 0LL;
  v9 = 0LL;
  BugCheckParameter3 = -1;
  v35[0] = -1;
  v35[1] = 0;
  v36[0] = -1;
  v12 = -1;
  v36[1] = 0;
  v37[0] = -1;
  v37[1] = 0;
  v34[0] = -1;
  v34[1] = 0;
  v33[0] = -1;
  v33[1] = 0;
  if ( a7 == 2 )
  {
    if ( a4 == -1 )
      v7 = 0;
    else
      v7 = a4 >> 31;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v35);
  v39 = v13;
  v14 = v13;
  if ( !v13 )
    return 0xFFFFFFFFLL;
  v15 = *(unsigned __int16 *)(v13 + 74);
  v29 = *(_DWORD *)(v13 + 44);
  v16 = *(_DWORD *)(v13 + 48);
  if ( (a5 & 2) == 0 )
    v16 = -1;
  LODWORD(v31) = v16;
  v32 = (a5 & 2) != 0 ? v15 : 0;
  v42 = CmpCopyCell(a1, v41, a3, v7);
  if ( v42 == -1 )
  {
    v20 = -1;
    goto LABEL_59;
  }
  if ( v32 )
  {
    BugCheckParameter3 = CmpCopyCell(a1, (unsigned int)v31, a3, v7);
    if ( BugCheckParameter3 == -1 )
    {
      v20 = v42;
LABEL_59:
      v21 = 0;
      goto LABEL_25;
    }
  }
  v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v42, v36);
  v9 = v17;
  if ( v17 )
  {
    v18 = a5;
    *(_DWORD *)(v17 + 48) = BugCheckParameter3;
    *(_WORD *)(v17 + 74) = v32;
    *(_DWORD *)(v17 + 44) = -1;
    *(_DWORD *)(v17 + 20) = 0;
    *(_DWORD *)(v17 + 24) = 0;
    *(_DWORD *)(v17 + 28) = -1;
    *(_DWORD *)(v17 + 32) = -1;
    *(_DWORD *)(v17 + 16) = a4;
    *(_BYTE *)(v17 + 12) = 0;
    if ( (a5 & 0x100) != 0 )
      *(_BYTE *)(v17 + 13) &= 0xFCu;
    if ( (a5 & 0x80u) != 0 )
      *(_BYTE *)(v17 + 13) |= 0x80u;
    v19 = *(_WORD *)(v14 + 2) & 0x30;
    *(_WORD *)(v9 + 2) = v19;
    if ( (a5 & 0x20) != 0 )
    {
      v19 = *(_WORD *)(v14 + 2) & 0xFFBF;
      *(_WORD *)(v9 + 2) = v19;
    }
    if ( a4 == -1 )
      *(_WORD *)(v9 + 2) = v19 | 0xC;
    if ( (a5 & 0x10) == 0 )
    {
      CmpLockTwoSecurityCachesExclusiveShared(a3, a1);
      if ( !CmpFindSecurityCellCacheIndexNew(a1, v29, &v31) )
      {
        CmpUnlockTwoSecurityCaches(a3, a1);
        goto LABEL_23;
      }
      v20 = v42;
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                 a3,
                                 v42,
                                 v9,
                                 v42 >> 31,
                                 (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)v31 + 8) + 32LL),
                                 0,
                                 (unsigned int *)(v9 + 44));
      CmpUnlockTwoSecurityCaches(a3, a1);
      if ( SecurityDescriptorNode < 0 )
        goto LABEL_24;
      v14 = v39;
      v18 = a5;
    }
    if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
      v23 = 0;
    else
      v23 = *(_DWORD *)(v14 + 36);
    *(_DWORD *)(v9 + 36) = 0;
    *(_DWORD *)(v9 + 40) = -1;
    if ( !v23 || (v18 & 4) == 0 )
    {
LABEL_49:
      v20 = v42;
      v21 = 1;
      goto LABEL_25;
    }
    v24 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(v14 + 40),
                            v37);
    v38 = v24;
    if ( v24 )
    {
      v25 = 0;
      v31 = v24;
      while ( 1 )
      {
        v26 = CmpCopyValue(a1, *v24, a3, v7);
        v30 = v26;
        if ( v26 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v26, v33) )
        {
          v12 = *(_DWORD *)(v9 + 40);
          goto LABEL_23;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v33);
        if ( (int)CmpAddValueToListEx(a3, v30, v25, v7, (unsigned int *)(v9 + 36), v23) < 0 )
          break;
        ++v25;
        v24 = ++v31;
        if ( v25 >= v23 )
          goto LABEL_49;
      }
      v12 = *(_DWORD *)(v9 + 40);
      if ( v12 == -1 )
      {
        v20 = v42;
        v21 = 0;
        goto LABEL_25;
      }
      v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v12, v34);
      if ( v27 )
      {
        while ( v25 )
          HvFreeCell(a3, *(unsigned int *)(v27 + 4LL * --v25));
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v34);
      }
    }
  }
LABEL_23:
  v20 = v42;
LABEL_24:
  v21 = 0;
LABEL_25:
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v35);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v36);
  if ( v38 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v37);
  if ( v21 )
    return v20;
  if ( v12 != -1 )
    HvFreeCell(a3, v12);
  if ( BugCheckParameter3 != -1 )
    HvFreeCell(a3, BugCheckParameter3);
  if ( v20 != -1 )
    HvFreeCell(a3, v20);
  return 0xFFFFFFFFLL;
}
