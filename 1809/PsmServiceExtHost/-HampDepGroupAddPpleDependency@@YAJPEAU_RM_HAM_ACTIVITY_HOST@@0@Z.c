/*
 * XREFs of ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003F8D0
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010AC0 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000D57C (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E300 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x18003FB78 (-PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddPpleDependency(struct _RM_HAM_ACTIVITY_HOST *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  _WORD *v6; // rax
  __int16 v7; // cx
  _WORD *v8; // rcx
  __int16 v9; // ax
  char *v10; // rcx
  __int128 *v11; // rax
  __int64 v12; // r8
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // edi
  struct _HAM_DEPENDENCY_GROUP *v22; // rbx
  unsigned __int8 v24[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  struct _HAM_HOST_DEPENDENCY *v26; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v27; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[3]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[128]; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE v30[128]; // [rsp+DCh] [rbp-24h] BYREF
  int v31; // [rsp+15Ch] [rbp+5Ch]
  int v32; // [rsp+164h] [rbp+64h]
  _BYTE v33[40]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v34; // [rsp+190h] [rbp+90h]
  __int64 v35; // [rsp+198h] [rbp+98h]
  __int64 v36; // [rsp+1A0h] [rbp+A0h]
  __int64 v37; // [rsp+1A8h] [rbp+A8h]
  __int64 v38; // [rsp+1B0h] [rbp+B0h]
  int v39; // [rsp+1C0h] [rbp+C0h]
  unsigned __int16 v40; // [rsp+1E0h] [rbp+E0h] BYREF
  char v41; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v42; // [rsp+370h] [rbp+270h]

  v26 = 0LL;
  v27 = 0LL;
  memset_0(v28, 0, 0x188uLL);
  v4 = 64LL;
  v28[0] = 8256;
  v5 = 64LL;
  v6 = v29;
  while ( v5 != -2147483582 )
  {
    v7 = *(_WORD *)((char *)v6 + (char *)L"PpleDependency" - v29);
    if ( !v7 )
      break;
    *v6++ = v7;
    if ( !--v5 )
    {
      --v6;
      break;
    }
  }
  *v6 = 0;
  v8 = v30;
  while ( v4 != -2147483582 )
  {
    v9 = *(_WORD *)((char *)v8 + (char *)L"DefaultPPLE" - v30);
    if ( !v9 )
      break;
    *v8++ = v9;
    if ( !--v4 )
    {
      --v8;
      break;
    }
  }
  *v8 = 0;
  v31 = 5;
  memset_0(v33, 0, 0x68uLL);
  v34 |= 0x80uLL;
  v38 = -1LL;
  v37 = -1LL;
  v36 = -1LL;
  v35 = -1LL;
  v39 = 33;
  v24[0] = 1;
  v25 = 256;
  PsmGetPackageFullNameFromKey((char *)a2 + 24, &v40, &v25);
  PpleHostCacheHelperIsEligibleByPackageFullName((char *)a2 + 488, &v40, v24);
  if ( v24[0] )
    v32 = -1;
  else
    v32 = 0;
  v28[0] |= 0x400u;
  memset_0(&v40, 0, 0x1B0uLL);
  v10 = &v41;
  v42 = 0LL;
  v11 = (__int128 *)v28;
  LOBYTE(v40) = 2;
  v12 = 3LL;
  do
  {
    v10 += 128;
    v13 = *v11;
    v14 = v11[1];
    v11 += 8;
    *((_OWORD *)v10 - 8) = v13;
    v15 = *(v11 - 6);
    *((_OWORD *)v10 - 7) = v14;
    v16 = *(v11 - 5);
    *((_OWORD *)v10 - 6) = v15;
    v17 = *(v11 - 4);
    *((_OWORD *)v10 - 5) = v16;
    v18 = *(v11 - 3);
    *((_OWORD *)v10 - 4) = v17;
    v19 = *(v11 - 2);
    *((_OWORD *)v10 - 3) = v18;
    v20 = *(v11 - 1);
    *((_OWORD *)v10 - 2) = v19;
    *((_OWORD *)v10 - 1) = v20;
    --v12;
  }
  while ( v12 );
  *(_QWORD *)v10 = *(_QWORD *)v11;
  v21 = HampDepGroupAddDependency(a1, a2, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v40, &v26, &v27);
  if ( v21 >= 0 )
  {
    v21 = 0;
    *((_QWORD *)a1 + 84) = v26;
  }
  v22 = v27;
  if ( v27 )
  {
    HampDepGroupRunStateChangeWorker(v27);
    HampDepGroupDereference(v22);
  }
  return (unsigned int)v21;
}
