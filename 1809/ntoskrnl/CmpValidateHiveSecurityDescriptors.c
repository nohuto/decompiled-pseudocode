/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1405AC0AC
 * Callers:
 *     CmCheckRegistry @ 0x1405A948C (CmCheckRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     CmpResetCachedSecurity @ 0x140582274 (CmpResetCachedSecurity.c)
 *     CmpInitSecurityCache @ 0x1405A8210 (CmpInitSecurityCache.c)
 *     CmpAdjustSecurityCacheSize @ 0x1405A9C54 (CmpAdjustSecurityCacheSize.c)
 *     CmpAddSecurityCellToCache @ 0x1405AC584 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1405AE180 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpDestroySecurityCache @ 0x1405B0B54 (CmpDestroySecurityCache.c)
 *     HvIsCellAllocated @ 0x1405DCB00 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpCheckSecurityCellAccess @ 0x1406CB1CC (CmpCheckSecurityCellAccess.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter2,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // edi
  __int64 v16; // rax
  unsigned int v17; // eax
  ULONG v18; // edx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // r8d
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned int v27; // r13d
  ULONG v28; // edx
  int v29; // eax
  __int64 v30; // rdx
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+20h] [rbp-38h]
  int v35; // [rsp+30h] [rbp-28h]
  unsigned int v36; // [rsp+34h] [rbp-24h]
  __int64 v37; // [rsp+38h] [rbp-20h] BYREF
  __int64 v38; // [rsp+40h] [rbp-18h] BYREF
  __int64 v39; // [rsp+48h] [rbp-10h]
  unsigned int v40; // [rsp+A0h] [rbp+48h]

  v38 = 0LL;
  v37 = 0LL;
  v6 = a4;
  v7 = 0LL;
  v8 = *(_DWORD *)(BugCheckParameter2 + 1864);
  LODWORD(v38) = -1;
  LODWORD(v37) = -1;
  v35 = v8;
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter2,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                           0LL) )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v32 = 0;
LABEL_5:
    v10 = -1073741492;
    SetFailureLocation(v9, 0, 9, -1073741492, v32);
    return v10;
  }
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
          &v38);
  v39 = v11;
  if ( !v11 )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v32 = 16;
    goto LABEL_5;
  }
  if ( -4 - *(_DWORD *)(v11 - 4) < 76 )
  {
    v12 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v33 = 24;
    v10 = -1073741492;
    v13 = -1073741492;
    goto LABEL_14;
  }
  v14 = *(_DWORD *)(v11 + 44);
  v15 = v14;
  v40 = 0;
  v36 = v14;
  while ( 1 )
  {
    if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v14, v6) )
    {
      if ( v15 != v14 )
        goto LABEL_47;
      v34 = 128;
      goto LABEL_70;
    }
    v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v14,
            &v37);
    v7 = (_DWORD *)v16;
    if ( !v16 )
    {
      v33 = 144;
      goto LABEL_58;
    }
    v17 = -4 - *(_DWORD *)(v16 - 4);
    if ( v17 < 0x14 || (v18 = v7[4], v18 + 20 < v18) || v18 + 20 > v17 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
      SetFailureLocation(a5, 1, 9, -1073741492, 152);
      goto LABEL_47;
    }
    if ( v14 != v15 && v7[2] != v40 )
    {
      v33 = 160;
      goto LABEL_58;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v7 + 5, v18, 0) )
      break;
    if ( v35 )
    {
      v20 = CmpResetCachedSecurity(BugCheckParameter2, v14);
      v10 = v20;
      if ( v20 < 0 )
      {
        v33 = 184;
        goto LABEL_27;
      }
    }
    else
    {
      LOBYTE(v19) = 1;
      v20 = CmpAddSecurityCellToCache(BugCheckParameter2, v14, v19);
      v10 = v20;
      if ( v20 < 0 )
      {
        v33 = 176;
LABEL_27:
        v13 = v20;
        goto LABEL_28;
      }
    }
    v21 = v14;
    v14 = v7[1];
    v40 = v21;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
    v15 = v36;
    if ( v14 == v36 )
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v14,
                       &v37);
      if ( v7[2] == v21 )
      {
        if ( !v35 )
          CmpAdjustSecurityCacheSize(BugCheckParameter2);
        if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
        {
          v23 = 0;
          while ( 1 )
          {
            LOBYTE(v22) = 1;
            v24 = CmpCheckSecurityCellAccess(
                    BugCheckParameter2,
                    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v23),
                    v22,
                    131097,
                    0);
            v10 = v24;
            if ( v24 < 0 )
              break;
            if ( ++v23 >= *(_DWORD *)(BugCheckParameter2 + 1864) )
              goto LABEL_42;
          }
          SetFailureLocation(a5, 0, 9, v24, 208);
          if ( v10 != -1073741670 )
            v10 = -1073741492;
        }
        else
        {
LABEL_42:
          v10 = 0;
        }
        goto LABEL_71;
      }
      v33 = 200;
      v10 = -1073741492;
      v13 = -1073741492;
LABEL_28:
      v12 = a5;
      goto LABEL_14;
    }
    v6 = a4;
  }
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
  SetFailureLocation(a5, 1, 9, -1073741492, 168);
LABEL_47:
  if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
  {
    v34 = 112;
LABEL_70:
    v10 = -1073741492;
    SetFailureLocation(a5, 0, 9, -1073741492, v34);
    v7 = 0LL;
    goto LABEL_71;
  }
  v25 = v39;
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v39 + 44), 0LL) )
  {
    v34 = 32;
    goto LABEL_70;
  }
  v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v25 + 44),
          &v37);
  v7 = (_DWORD *)v26;
  if ( !v26 )
  {
    v33 = 48;
    goto LABEL_58;
  }
  v27 = -4 - *(_DWORD *)(v26 - 4);
  if ( v27 < 0x14 || (v28 = *(_DWORD *)(v26 + 16), v28 + 20 < v28) || v28 + 20 > v27 )
  {
    v33 = 80;
LABEL_58:
    v10 = -1073741492;
    v13 = -1073741492;
  }
  else
  {
    if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v26 + 20), v28, 0) )
    {
      v33 = 64;
      goto LABEL_58;
    }
    if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v25 + 44)) )
    {
      v29 = *(_DWORD *)(v25 + 44);
      v7[2] = v29;
      v7[1] = v29;
      CmpDestroySecurityCache(BugCheckParameter2);
      CmpInitSecurityCache(BugCheckParameter2);
      v10 = -1073741267;
      v30 = *(_QWORD *)(BugCheckParameter2 + 64);
      *a3 = 1;
      *(_DWORD *)(v30 + 4088) |= 4u;
      goto LABEL_71;
    }
    v10 = -1073741443;
    v33 = 96;
    v13 = -1073741443;
  }
  v12 = a5;
LABEL_14:
  SetFailureLocation(v12, 0, 9, v13, v33);
LABEL_71:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
  return v10;
}
