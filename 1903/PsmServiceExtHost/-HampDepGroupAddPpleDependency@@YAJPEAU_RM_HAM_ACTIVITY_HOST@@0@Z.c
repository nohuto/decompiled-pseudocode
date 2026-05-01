/*
 * XREFs of ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800409CC
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800185F8 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x180040C48 (-PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddPpleDependency(struct _RM_HAM_ACTIVITY_HOST *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  _WORD *v6; // rcx
  __int16 v7; // ax
  _WORD *v8; // rax
  _WORD *v9; // rcx
  __int16 v10; // ax
  _WORD *v11; // rax
  char *v12; // rcx
  int *v13; // rax
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // edi
  struct _HAM_DEPENDENCY_GROUP *v23; // rbx
  unsigned __int8 v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  struct _HAM_HOST_DEPENDENCY *v27; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[8]; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v31[128]; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE v32[128]; // [rsp+DCh] [rbp-24h] BYREF
  int v33; // [rsp+15Ch] [rbp+5Ch]
  int v34; // [rsp+164h] [rbp+64h]
  _BYTE v35[40]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v36; // [rsp+190h] [rbp+90h]
  __int64 v37; // [rsp+198h] [rbp+98h]
  __int64 v38; // [rsp+1A0h] [rbp+A0h]
  __int64 v39; // [rsp+1A8h] [rbp+A8h]
  __int64 v40; // [rsp+1B0h] [rbp+B0h]
  int v41; // [rsp+1C0h] [rbp+C0h]
  unsigned __int16 v42; // [rsp+1E0h] [rbp+E0h] BYREF
  char v43; // [rsp+1E8h] [rbp+E8h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  memset_0(v30, 0, 0x184uLL);
  v4 = 64LL;
  v29 = 8397888;
  v5 = 64LL;
  v6 = v31;
  do
  {
    if ( v5 == -2147483582 )
      break;
    v7 = *(_WORD *)((char *)v6 + (char *)L"PpleDependency" - v31);
    if ( !v7 )
      break;
    *v6++ = v7;
    --v5;
  }
  while ( v5 );
  v8 = v6 - 1;
  if ( v5 )
    v8 = v6;
  v9 = v32;
  *v8 = 0;
  do
  {
    if ( v4 == -2147483582 )
      break;
    v10 = *(_WORD *)((char *)v9 + (char *)L"DefaultPPLE" - v32);
    if ( !v10 )
      break;
    *v9++ = v10;
    --v4;
  }
  while ( v4 );
  v11 = v9 - 1;
  if ( v4 )
    v11 = v9;
  *v11 = 0;
  v33 = 5;
  memset_0(v35, 0, 0x68uLL);
  v41 = 33;
  v40 = -1LL;
  v36 |= 0x80uLL;
  v39 = -1LL;
  v38 = -1LL;
  v37 = -1LL;
  v25[0] = 1;
  v26 = 256;
  PsmGetPackageFullNameFromKey((char *)a2 + 24, &v42, &v26);
  PpleHostCacheHelperIsEligibleByPackageFullName((char *)a2 + 488, &v42, v25);
  v29 |= 0x400u;
  v34 = -(v25[0] != 0);
  memset_0(&v42, 0, 0x1B0uLL);
  v12 = &v43;
  LOBYTE(v42) = 2;
  v13 = &v29;
  v14 = 3LL;
  do
  {
    v15 = *((_OWORD *)v13 + 1);
    *(_OWORD *)v12 = *(_OWORD *)v13;
    v16 = *((_OWORD *)v13 + 2);
    *((_OWORD *)v12 + 1) = v15;
    v17 = *((_OWORD *)v13 + 3);
    *((_OWORD *)v12 + 2) = v16;
    v18 = *((_OWORD *)v13 + 4);
    *((_OWORD *)v12 + 3) = v17;
    v19 = *((_OWORD *)v13 + 5);
    *((_OWORD *)v12 + 4) = v18;
    v20 = *((_OWORD *)v13 + 6);
    *((_OWORD *)v12 + 5) = v19;
    v21 = *((_OWORD *)v13 + 7);
    v13 += 32;
    *((_OWORD *)v12 + 6) = v20;
    v12 += 128;
    *((_OWORD *)v12 - 1) = v21;
    --v14;
  }
  while ( v14 );
  *(_QWORD *)v12 = *(_QWORD *)v13;
  v22 = HampDepGroupAddDependency(a1, a2, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v42, &v27, &v28);
  if ( v22 >= 0 )
  {
    v22 = 0;
    *((_QWORD *)a1 + 87) = v27;
  }
  v23 = v28;
  if ( v28 )
  {
    HampDepGroupRunStateChangeWorker(v28);
    HampDepGroupDereference(v23);
  }
  return (unsigned int)v22;
}
