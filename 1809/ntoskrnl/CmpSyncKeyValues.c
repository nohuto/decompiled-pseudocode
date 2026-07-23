/*
 * XREFs of CmpSyncKeyValues @ 0x1407FF6DC
 * Callers:
 *     CmpCopySyncTree2 @ 0x1407FDE04 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x1407FECE0 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpFreeSecurityDescriptor @ 0x1405B034C (CmpFreeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpCopyCell @ 0x1406968D8 (CmpCopyCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140700FA4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140700FD4 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyValue @ 0x1407FE584 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x1407FE904 (CmpFreeKeyValues.c)
 */

char __fastcall CmpSyncKeyValues(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        char a7)
{
  unsigned int v8; // r15d
  int v9; // r12d
  __int64 v12; // rsi
  __int64 v14; // rdx
  char v15; // di
  unsigned int *v16; // r12
  unsigned int v17; // r13d
  unsigned int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // zf
  unsigned int v22; // ecx
  __int64 v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // r13d
  unsigned int v28; // r12d
  unsigned int *v29; // r13
  unsigned int v30; // r14d
  int v31; // r12d
  __int64 v32; // rsi
  unsigned int BugCheckParameter3; // [rsp+48h] [rbp-41h]
  unsigned int BugCheckParameter3a; // [rsp+48h] [rbp-41h]
  unsigned int BugCheckParameter3_4; // [rsp+4Ch] [rbp-3Dh]
  _DWORD v36[2]; // [rsp+50h] [rbp-39h] BYREF
  int v37; // [rsp+58h] [rbp-31h]
  _DWORD v38[2]; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v39[2]; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v40[2]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v41[2]; // [rsp+78h] [rbp-11h] BYREF
  _DWORD v42[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v43; // [rsp+88h] [rbp-1h]
  __int64 v44; // [rsp+90h] [rbp+7h]
  __int64 v45; // [rsp+98h] [rbp+Fh]
  unsigned int v46; // [rsp+E0h] [rbp+57h] BYREF

  v46 = a2;
  v41[1] = 0;
  v41[0] = -1;
  v8 = -1;
  v40[0] = -1;
  v9 = -1;
  BugCheckParameter3_4 = -1;
  v42[0] = -1;
  a7 = 0;
  v40[1] = 0;
  v42[1] = 0;
  CmpLockTwoSecurityCachesExclusiveShared(a4, a1);
  v12 = a6;
  if ( !CmpFreeKeyValues(a4, (unsigned int)a5, a6) )
  {
    CmpUnlockTwoSecurityCaches(a4, a1);
    return 0;
  }
  v37 = (unsigned int)a5 >> 31;
  if ( !*(_WORD *)(a3 + 74) || (v14 = *(unsigned int *)(a3 + 48), (_DWORD)v14 == -1) )
  {
LABEL_8:
    *(_DWORD *)(v12 + 48) = v9;
    if ( !CmpFindSecurityCellCacheIndexNew(a1, *(_DWORD *)(a3 + 44), &v46) )
    {
      CmpUnlockTwoSecurityCaches(a4, a1);
      v15 = 0;
      goto LABEL_15;
    }
    v16 = (unsigned int *)(v12 + 44);
    v17 = *(_DWORD *)(v12 + 44);
    v18 = v37;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v46 + 8);
    *(_DWORD *)(v12 + 44) = -1;
    if ( (int)CmpGetSecurityDescriptorNodeEx(
                a4,
                (unsigned int)a5,
                v12,
                v18,
                (void *)(v19 + 32),
                0,
                (unsigned int *)(v12 + 44)) < 0 )
    {
      *v16 = v17;
LABEL_12:
      v20 = a4;
LABEL_13:
      CmpUnlockTwoSecurityCaches(v20, a1);
LABEL_14:
      v15 = a7;
LABEL_15:
      if ( BugCheckParameter3_4 != -1 )
        HvFreeCell(a4, BugCheckParameter3_4);
      return v15;
    }
    v21 = (*(_BYTE *)(v12 + 2) & 4) == 0;
    v22 = *v16;
    v46 = *v16;
    *v16 = v17;
    if ( v21 || v22 == v17 )
    {
      v27 = v22;
    }
    else
    {
      v36[0] = -1;
      v38[0] = -1;
      v39[0] = -1;
      v36[1] = 0;
      v38[1] = 0;
      v39[1] = 0;
      v43 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v22, v36);
      v20 = a4;
      if ( !v43 )
        goto LABEL_13;
      v23 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v17, v38);
      v44 = v23;
      if ( !v23 )
      {
        v24 = v36;
LABEL_23:
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v24);
        goto LABEL_12;
      }
      BugCheckParameter3 = *(_DWORD *)(v23 + 8);
      v45 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, BugCheckParameter3, v39);
      if ( !v45 )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v36);
        v24 = v38;
        goto LABEL_23;
      }
      if ( !HvpMarkCellDirty(a4, v17, 0) || !HvpMarkCellDirty(a4, BugCheckParameter3, 0) )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v36);
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v38);
        v24 = v39;
        goto LABEL_23;
      }
      v25 = v43;
      *(_DWORD *)(v43 + 8) = BugCheckParameter3;
      v26 = v44;
      *(_DWORD *)(v25 + 4) = v17;
      v27 = v46;
      *(_DWORD *)(v26 + 8) = v46;
      *(_DWORD *)(v45 + 4) = v27;
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v36);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v38);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v39);
    }
    CmpFreeSecurityDescriptor(a4, (unsigned int)a5);
    *v16 = v27;
    CmpUnlockTwoSecurityCaches(a4, a1);
    v28 = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(v12 + 40) = -1;
    *(_DWORD *)(v12 + 36) = 0;
    *(_DWORD *)(v12 + 60) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a3 + 64);
    BugCheckParameter3a = v28;
    if ( !v28 )
      return 1;
    v29 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(a3 + 40),
                            v41);
    if ( v29 )
    {
      v30 = 0;
      v31 = v37;
      while ( 1 )
      {
        v46 = CmpCopyValue(a1, *v29, a4, v31);
        if ( v46 == -1 || !(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v46, v42) )
        {
          v8 = *(_DWORD *)(v12 + 40);
          goto LABEL_41;
        }
        if ( (int)CmpAddValueToListEx(a4, v46, v30, v31, (unsigned int *)(v12 + 36), 1) < 0 )
          break;
        ++v30;
        ++v29;
        if ( v30 >= BugCheckParameter3a )
        {
          a7 = 1;
          goto LABEL_41;
        }
      }
      v8 = *(_DWORD *)(v12 + 40);
      if ( v8 != -1 )
      {
        v32 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v8, v40);
        if ( v32 )
        {
          while ( v30 )
            HvFreeCell(a4, *(unsigned int *)(v32 + 4LL * --v30));
          (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v40);
        }
      }
LABEL_41:
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a1 + 16))(a1, v41);
      v15 = a7;
      if ( a7 )
        return v15;
      if ( v8 != -1 )
        HvFreeCell(a4, v8);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  BugCheckParameter3_4 = CmpCopyCell(a1, v14, a4, (unsigned int)a5 >> 31);
  if ( BugCheckParameter3_4 != -1 )
  {
    v9 = BugCheckParameter3_4;
    *(_WORD *)(v12 + 74) = *(_WORD *)(a3 + 74);
    goto LABEL_8;
  }
  CmpUnlockTwoSecurityCaches(a4, a1);
  return 0;
}
