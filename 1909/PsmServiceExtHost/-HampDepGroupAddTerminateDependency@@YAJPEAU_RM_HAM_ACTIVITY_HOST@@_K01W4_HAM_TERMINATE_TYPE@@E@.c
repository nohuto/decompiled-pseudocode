/*
 * XREFs of ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180010020
 * Callers:
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18000F494 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180076418 (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddTerminateDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        __int64 a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  char *v18; // r8
  __int64 v19; // rcx
  int *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // edi
  struct _HAM_DEPENDENCY_GROUP *v29; // rbx
  struct _HAM_DEPENDENCY_GROUP *v31; // [rsp+30h] [rbp-D0h] BYREF
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+41h] [rbp-BFh]
  __int16 v34; // [rsp+45h] [rbp-BBh]
  char v35; // [rsp+47h] [rbp-B9h]
  char v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+1D0h] [rbp+D0h]
  __int64 v38; // [rsp+1D8h] [rbp+D8h]
  __int64 v39; // [rsp+1E0h] [rbp+E0h]
  int v40; // [rsp+1E8h] [rbp+E8h]
  int v41; // [rsp+1ECh] [rbp+ECh]
  int v42; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v43[8]; // [rsp+1F4h] [rbp+F4h] BYREF
  _BYTE v44[128]; // [rsp+1FCh] [rbp+FCh] BYREF
  _BYTE v45[128]; // [rsp+27Ch] [rbp+17Ch] BYREF
  int v46; // [rsp+2FCh] [rbp+1FCh]
  int v47; // [rsp+304h] [rbp+204h]
  _BYTE v48[40]; // [rsp+308h] [rbp+208h] BYREF
  __int64 v49; // [rsp+330h] [rbp+230h]
  __int64 v50; // [rsp+338h] [rbp+238h]
  __int64 v51; // [rsp+340h] [rbp+240h]
  __int64 v52; // [rsp+348h] [rbp+248h]
  __int64 v53; // [rsp+350h] [rbp+250h]
  int v54; // [rsp+360h] [rbp+260h]

  v31 = 0LL;
  memset_0(v43, 0, 0x184uLL);
  v42 = 8397888;
  v10 = 64LL;
  v11 = 64LL;
  v12 = v44;
  do
  {
    if ( v11 == -2147483582 )
      break;
    v13 = *(_WORD *)((char *)v12 + (char *)&word_18008DA4C - v44);
    if ( !v13 )
      break;
    *v12++ = v13;
    --v11;
  }
  while ( v11 );
  v14 = v12 - 1;
  if ( v11 )
    v14 = v12;
  v15 = v45;
  *v14 = 0;
  do
  {
    if ( v10 == -2147483582 )
      break;
    v16 = *(_WORD *)((char *)v15 + (char *)&word_18008DA4C - v45);
    if ( !v16 )
      break;
    *v15++ = v16;
    --v10;
  }
  while ( v10 );
  v17 = v15 - 1;
  if ( v10 )
    v17 = v15;
  *v17 = 0;
  v47 = -1;
  v46 = 5;
  memset_0(v48, 0, 0x68uLL);
  v54 = 33;
  v53 = -1LL;
  v49 |= 0x80uLL;
  v18 = &v36;
  v52 = -1LL;
  v51 = -1LL;
  v50 = -1LL;
  v19 = 3LL;
  v32 = 3;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v20 = &v42;
  v37 = 0LL;
  do
  {
    v21 = *((_OWORD *)v20 + 1);
    *(_OWORD *)v18 = *(_OWORD *)v20;
    v22 = *((_OWORD *)v20 + 2);
    *((_OWORD *)v18 + 1) = v21;
    v23 = *((_OWORD *)v20 + 3);
    *((_OWORD *)v18 + 2) = v22;
    v24 = *((_OWORD *)v20 + 4);
    *((_OWORD *)v18 + 3) = v23;
    v25 = *((_OWORD *)v20 + 5);
    *((_OWORD *)v18 + 4) = v24;
    v26 = *((_OWORD *)v20 + 6);
    *((_OWORD *)v18 + 5) = v25;
    v27 = *((_OWORD *)v20 + 7);
    v20 += 32;
    *((_OWORD *)v18 + 6) = v26;
    v18 += 128;
    *((_OWORD *)v18 - 1) = v27;
    --v19;
  }
  while ( v19 );
  *(_QWORD *)v18 = *(_QWORD *)v20;
  v41 = a5;
  v38 = a4;
  v40 = a6 | 0xC00;
  v39 = a2;
  v28 = HampDepGroupAddDependency(a3, a1, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v32, 0LL, &v31);
  if ( v28 >= 0 )
    v28 = 0;
  v29 = v31;
  if ( v31 )
  {
    HampDepGroupRunStateChangeWorker(v31);
    HampDepGroupDereference(v29);
  }
  return (unsigned int)v28;
}
