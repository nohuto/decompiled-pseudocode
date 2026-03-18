/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x14063FE98
 * Callers:
 *     CmCheckRegistry @ 0x140641AD8 (CmCheckRegistry.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401BE8F0 (CmpFindSecurityCellCacheIndexNew.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x14027F4C0 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 *     CmpAddSecurityCellToCache @ 0x14064030C (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1406407B0 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAdjustSecurityCacheSize @ 0x140641010 (CmpAdjustSecurityCacheSize.c)
 *     HvIsCellAllocated @ 0x140664D20 (HvIsCellAllocated.c)
 *     CmpInitSecurityCache @ 0x14068EDC0 (CmpInitSecurityCache.c)
 *     CmpDestroySecurityCache @ 0x1406B9EAC (CmpDestroySecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x1406D4F7C (CmpCheckSecurityCellAccess.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter2,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // r13d
  int v12; // edi
  __int64 v13; // rax
  _DWORD *v14; // r15
  unsigned int v15; // eax
  ULONG v16; // edx
  __int64 v17; // r8
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned int v24; // edi
  ULONG v25; // edx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  int v30; // [rsp+20h] [rbp-40h]
  int v31; // [rsp+20h] [rbp-40h]
  int v32; // [rsp+20h] [rbp-40h]
  unsigned int v33; // [rsp+30h] [rbp-30h]
  int v34; // [rsp+34h] [rbp-2Ch]
  int v35; // [rsp+38h] [rbp-28h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h]
  unsigned int v39; // [rsp+A0h] [rbp+40h]

  v36 = 0LL;
  v37 = 0xFFFFFFFFLL;
  v6 = a4;
  v7 = *(_DWORD *)(BugCheckParameter2 + 1864);
  LODWORD(v36) = -1;
  v34 = v7;
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter2,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                           0LL) )
  {
    v8 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v30 = 0;
LABEL_5:
    v9 = -1073741492;
    SetFailureLocation(v8, 0, 9, -1073741492, v30);
    return v9;
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
          &v37);
  v38 = v10;
  if ( !v10 )
  {
    v8 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v30 = 16;
    goto LABEL_5;
  }
  v11 = *(_DWORD *)(v10 + 44);
  v12 = -4;
  v33 = 0;
  v39 = v11;
  while ( 1 )
  {
    if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v11, v6) )
    {
      if ( v39 != v11 )
        goto LABEL_39;
      v32 = 128;
      goto LABEL_62;
    }
    v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v11,
            &v36);
    v14 = (_DWORD *)v13;
    if ( !v13 )
    {
      v31 = 144;
      goto LABEL_50;
    }
    v15 = v12 - *(_DWORD *)(v13 - 4);
    if ( v15 < 0x14 || (v16 = v14[4], v16 + 20 < v16) || v16 + 20 > v15 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
      SetFailureLocation(a5, 1, 9, -1073741492, 152);
      goto LABEL_39;
    }
    if ( v11 != v39 && v14[2] != v33 )
    {
      v31 = 160;
LABEL_50:
      v9 = -1073741492;
      SetFailureLocation(a5, 0, 9, -1073741492, v31);
      goto LABEL_63;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v14 + 5, v16, 0) )
      break;
    if ( v34 )
    {
      if ( !CmpFindSecurityCellCacheIndexNew(BugCheckParameter2, v11, &v35) )
      {
        v31 = 192;
        goto LABEL_50;
      }
    }
    else
    {
      LOBYTE(v17) = 1;
      v18 = CmpAddSecurityCellToCache(BugCheckParameter2, v11, v17);
      v9 = v18;
      if ( v18 < 0 )
      {
        SetFailureLocation(a5, 0, 9, v18, 176);
        goto LABEL_63;
      }
      v12 = v34 - 4;
    }
    v33 = v11;
    v11 = v14[1];
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
    v14 = 0LL;
    if ( v11 == v39 )
    {
      if ( !v34 )
        CmpAdjustSecurityCacheSize(BugCheckParameter2);
      if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
      {
        v20 = 0;
        while ( 1 )
        {
          LOBYTE(v19) = 1;
          v21 = CmpCheckSecurityCellAccess(
                  BugCheckParameter2,
                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v20),
                  v19,
                  131097,
                  0);
          v9 = v21;
          if ( v21 < 0 )
            break;
          if ( ++v20 >= *(_DWORD *)(BugCheckParameter2 + 1864) )
            goto LABEL_34;
        }
        SetFailureLocation(a5, 0, 9, v21, 208);
        if ( v9 != -1073741670 )
          v9 = -1073741492;
      }
      else
      {
LABEL_34:
        v9 = 0;
      }
      goto LABEL_63;
    }
    v6 = a4;
  }
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
  SetFailureLocation(a5, 1, 9, -1073741492, 168);
LABEL_39:
  if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
  {
    v32 = 112;
    goto LABEL_62;
  }
  v22 = v38;
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v38 + 44), 0LL) )
  {
    v32 = 32;
LABEL_62:
    v9 = -1073741492;
    SetFailureLocation(a5, 0, 9, -1073741492, v32);
    v14 = 0LL;
    goto LABEL_63;
  }
  v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v22 + 44),
          &v36);
  v14 = (_DWORD *)v23;
  if ( !v23 )
  {
    v31 = 48;
    goto LABEL_50;
  }
  v24 = v12 - *(_DWORD *)(v23 - 4);
  if ( v24 < 0x14 || (v25 = *(_DWORD *)(v23 + 16), v25 + 20 < v25) || v25 + 20 > v24 )
  {
    v31 = 80;
    goto LABEL_50;
  }
  if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v23 + 20), v25, 0) )
  {
    v31 = 64;
    goto LABEL_50;
  }
  v26 = v38;
  if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v38 + 44), 0) )
  {
    v27 = *(_DWORD *)(v26 + 44);
    v14[2] = v27;
    v14[1] = v27;
    CmpDestroySecurityCache(BugCheckParameter2);
    CmpInitSecurityCache(BugCheckParameter2);
    v9 = -1073741267;
    v28 = *(_QWORD *)(BugCheckParameter2 + 64);
    *a3 = 1;
    *(_DWORD *)(v28 + 4088) |= 4u;
  }
  else
  {
    v9 = -1073741443;
    SetFailureLocation(a5, 0, 9, -1073741443, 96);
  }
LABEL_63:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
  return v9;
}
