/*
 * XREFs of CmpCopyKeyPartial @ 0x140716C74
 * Callers:
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     CmpCommitAddKeyUoW @ 0x140716A80 (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x1408356C0 (CmpCopySyncTree2.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083CF18 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     CmpAddValueToListEx @ 0x140632D40 (CmpAddValueToListEx.c)
 *     CmpCopyCell @ 0x1406E406C (CmpCopyCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140716ED8 (CmpUnlockTwoSecurityCaches.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140716F08 (CmpFindSecurityCellCacheIndex.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140716F1C (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpAssignSecurityDescriptor @ 0x14082D5FC (CmpAssignSecurityDescriptor.c)
 *     CmpCopyValue @ 0x140835E48 (CmpCopyValue.c)
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
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // edx
  int v16; // eax
  __int64 v17; // rax
  char v18; // cl
  __int16 v19; // ax
  unsigned int v20; // r13d
  int v21; // ebx
  unsigned int v22; // r13d
  char v23; // bl
  unsigned int *v25; // rax
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  __int64 v28; // r15
  unsigned int v29; // [rsp+30h] [rbp-50h]
  int v30; // [rsp+30h] [rbp-50h]
  unsigned int *v31; // [rsp+38h] [rbp-48h] BYREF
  int v32; // [rsp+40h] [rbp-40h]
  _DWORD v33[2]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v34[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v35[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v36[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v37[2]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int *v38; // [rsp+70h] [rbp-10h]
  __int64 v39; // [rsp+78h] [rbp-8h]
  unsigned int BugCheckParameter3; // [rsp+C0h] [rbp+40h]
  unsigned int v41; // [rsp+C8h] [rbp+48h]
  unsigned int v42; // [rsp+F0h] [rbp+70h]

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
    goto LABEL_56;
  }
  if ( v32 )
  {
    BugCheckParameter3 = CmpCopyCell(a1, (unsigned int)v31, a3, v7);
    if ( BugCheckParameter3 == -1 )
    {
      v20 = v42;
LABEL_56:
      v23 = 0;
      goto LABEL_24;
    }
  }
  v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v42, v36);
  v9 = v17;
  if ( !v17 )
    goto LABEL_39;
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
  if ( (a5 & 0x10) != 0 )
    goto LABEL_20;
  CmpLockTwoSecurityCachesExclusiveShared(a3, a1);
  if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(a1, v29, &v31) )
  {
    CmpUnlockTwoSecurityCaches(a3, a1);
LABEL_39:
    v20 = v42;
    goto LABEL_31;
  }
  v20 = v42;
  v21 = CmpAssignSecurityDescriptor(
          a3,
          v42,
          v9,
          (unsigned int)*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)v31 + 8) + 32,
          0);
  CmpUnlockTwoSecurityCaches(a3, a1);
  if ( v21 < 0 )
  {
LABEL_31:
    v23 = 0;
    goto LABEL_24;
  }
  v14 = v39;
  v18 = a5;
LABEL_20:
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
    v22 = 0;
  else
    v22 = *(_DWORD *)(v14 + 36);
  *(_DWORD *)(v9 + 36) = 0;
  *(_DWORD *)(v9 + 40) = -1;
  if ( v22 && (v18 & 4) != 0 )
  {
    v25 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(v14 + 40),
                            v37);
    v38 = v25;
    if ( v25 )
    {
      v26 = 0;
      v31 = v25;
      while ( 1 )
      {
        v27 = CmpCopyValue(a1, *v25, a3, v7);
        v30 = v27;
        if ( v27 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v27, v33) )
        {
          v12 = *(_DWORD *)(v9 + 40);
          goto LABEL_39;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v33);
        if ( (int)CmpAddValueToListEx(a3, v30, v26, v7, (unsigned int *)(v9 + 36), v22) < 0 )
          break;
        ++v26;
        v25 = ++v31;
        if ( v26 >= v22 )
          goto LABEL_23;
      }
      v12 = *(_DWORD *)(v9 + 40);
      if ( v12 == -1 )
      {
        v20 = v42;
        v23 = 0;
        goto LABEL_24;
      }
      v28 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v12, v34);
      if ( v28 )
      {
        while ( v26 )
          HvFreeCell(a3, *(unsigned int *)(v28 + 4LL * --v26));
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v34);
      }
    }
    goto LABEL_39;
  }
LABEL_23:
  v20 = v42;
  v23 = 1;
LABEL_24:
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v35);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v36);
  if ( v38 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v37);
  if ( v23 )
    return v20;
  if ( v12 != -1 )
    HvFreeCell(a3, v12);
  if ( BugCheckParameter3 != -1 )
    HvFreeCell(a3, BugCheckParameter3);
  if ( v20 != -1 )
    HvFreeCell(a3, v20);
  return 0xFFFFFFFFLL;
}
