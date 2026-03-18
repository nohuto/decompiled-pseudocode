/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x14063CDE8
 * Callers:
 *     CmCheckRegistry @ 0x14065CD7C (CmCheckRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x14027F760 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     CmpAddSecurityCellToCache @ 0x14063CFF4 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14063D470 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAdjustSecurityCacheSize @ 0x14063DCD0 (CmpAdjustSecurityCacheSize.c)
 *     CmpDestroySecurityCache @ 0x14063E29C (CmpDestroySecurityCache.c)
 *     HvIsCellAllocated @ 0x140651B60 (HvIsCellAllocated.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140656940 (CmpFindSecurityCellCacheIndex.c)
 *     CmpInitSecurityCache @ 0x14065ED54 (CmpInitSecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x1406D589C (CmpCheckSecurityCellAccess.c)
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
  __int64 v8; // rax
  unsigned int v9; // r13d
  int v10; // edi
  __int64 v11; // rax
  _DWORD *v12; // r15
  unsigned int v13; // eax
  ULONG v14; // edx
  __int64 v15; // r8
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // edi
  void (__fastcall *v19)(ULONG_PTR, __int64 *); // rax
  int v20; // r8d
  unsigned int v22; // ebx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rax
  int v27; // r9d
  unsigned int v28; // edi
  ULONG v29; // edx
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+20h] [rbp-30h]
  unsigned int v36; // [rsp+30h] [rbp-20h] BYREF
  int v37; // [rsp+34h] [rbp-1Ch]
  __int64 v38; // [rsp+38h] [rbp-18h] BYREF
  __int64 v39; // [rsp+40h] [rbp-10h] BYREF
  __int64 v40; // [rsp+48h] [rbp-8h]
  unsigned int v41; // [rsp+90h] [rbp+40h]

  v38 = 0LL;
  v39 = 0xFFFFFFFFLL;
  v6 = a4;
  v7 = *(_DWORD *)(BugCheckParameter2 + 1864);
  LODWORD(v38) = -1;
  v37 = v7;
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter2,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                           0LL) )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v33 = 0;
    goto LABEL_33;
  }
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
         &v39);
  v40 = v8;
  if ( !v8 )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v33 = 16;
LABEL_33:
    v18 = -1073741492;
    SetFailureLocation(v24, 0, 9, -1073741492, v33);
    return v18;
  }
  v9 = *(_DWORD *)(v8 + 44);
  v10 = -4;
  v36 = 0;
  v41 = v9;
  while ( 1 )
  {
    if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v9, v6) )
    {
      if ( v41 != v9 )
        goto LABEL_44;
      v35 = 128;
      goto LABEL_66;
    }
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v9,
            &v38);
    v12 = (_DWORD *)v11;
    if ( !v11 )
    {
      v34 = 144;
      goto LABEL_55;
    }
    v13 = v10 - *(_DWORD *)(v11 - 4);
    if ( v13 < 0x14 || (v14 = v12[4], v14 + 20 < v14) || v14 + 20 > v13 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
      SetFailureLocation(a5, 1, 9, -1073741492, 152);
      goto LABEL_44;
    }
    if ( v9 != v41 && v12[2] != v36 )
    {
      v34 = 160;
      goto LABEL_55;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v12 + 5, v14, 0) )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
      SetFailureLocation(a5, 1, 9, -1073741492, 168);
LABEL_44:
      if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v35 = 112;
        goto LABEL_66;
      }
      v25 = v40;
      if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v40 + 44), 0LL) )
      {
        v35 = 32;
LABEL_66:
        v18 = -1073741492;
        SetFailureLocation(a5, 0, 9, -1073741492, v35);
        v12 = 0LL;
        goto LABEL_22;
      }
      v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              *(unsigned int *)(v25 + 44),
              &v38);
      v12 = (_DWORD *)v26;
      if ( v26 )
      {
        v28 = v10 - *(_DWORD *)(v26 - 4);
        if ( v28 < 0x14 || (v29 = *(_DWORD *)(v26 + 16), v29 + 20 < v29) || v29 + 20 > v28 )
        {
          v34 = 80;
        }
        else
        {
          if ( RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v26 + 20), v29, 0) )
          {
            v30 = v40;
            if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v40 + 44), 0) )
            {
              v31 = *(_DWORD *)(v30 + 44);
              v12[2] = v31;
              v12[1] = v31;
              CmpDestroySecurityCache(BugCheckParameter2);
              CmpInitSecurityCache(BugCheckParameter2);
              v18 = -1073741267;
              v32 = *(_QWORD *)(BugCheckParameter2 + 64);
              *a3 = 1;
              *(_DWORD *)(v32 + 4088) |= 4u;
              goto LABEL_22;
            }
            v18 = -1073741443;
            v34 = 96;
            v27 = -1073741443;
LABEL_57:
            SetFailureLocation(a5, 0, 9, v27, v34);
            goto LABEL_22;
          }
          v34 = 64;
        }
      }
      else
      {
        v34 = 48;
      }
LABEL_55:
      v18 = -1073741492;
      v27 = -1073741492;
      goto LABEL_57;
    }
    v16 = v37;
    if ( v37 )
    {
      if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(BugCheckParameter2, v9, &v36) )
      {
        v34 = 192;
        goto LABEL_55;
      }
    }
    else
    {
      LOBYTE(v15) = 1;
      v17 = CmpAddSecurityCellToCache(BugCheckParameter2, v9, v15);
      v18 = v17;
      if ( v17 < 0 )
      {
        SetFailureLocation(a5, 0, 9, v17, 176);
        goto LABEL_22;
      }
      v10 = v16 - 4;
    }
    v19 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16);
    v36 = v9;
    v9 = v12[1];
    v19(BugCheckParameter2, &v38);
    v12 = 0LL;
    if ( v9 == v41 )
      break;
    v6 = a4;
  }
  if ( !v16 )
    CmpAdjustSecurityCacheSize(BugCheckParameter2);
  if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
  {
    v22 = 0;
    while ( 1 )
    {
      LOBYTE(v20) = 1;
      v23 = CmpCheckSecurityCellAccess(
              BugCheckParameter2,
              *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v22),
              v20,
              131097,
              0);
      v18 = v23;
      if ( v23 < 0 )
        break;
      if ( ++v22 >= *(_DWORD *)(BugCheckParameter2 + 1864) )
        goto LABEL_21;
    }
    SetFailureLocation(a5, 0, 9, v23, 208);
    if ( v18 != -1073741670 )
      v18 = -1073741492;
  }
  else
  {
LABEL_21:
    v18 = 0;
  }
LABEL_22:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v39);
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
  return v18;
}
