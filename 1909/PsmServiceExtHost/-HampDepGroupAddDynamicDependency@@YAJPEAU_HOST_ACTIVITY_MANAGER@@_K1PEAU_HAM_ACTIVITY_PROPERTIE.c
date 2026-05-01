/*
 * XREFs of ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000FD54
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F8AC (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB70 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddDynamicDependency(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  int *v4; // rbx
  struct _HAM_DEPENDENCY_GROUP *v8; // r14
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  __int64 v18; // rax
  char *v19; // r8
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v28; // rsi
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // eax
  bool v32; // zf
  struct _RM_HAM_ACTIVITY_HOST *v34; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v35; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v36; // [rsp+40h] [rbp-C0h] BYREF
  char v37[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v40[8]; // [rsp+204h] [rbp+104h] BYREF
  _BYTE v41[128]; // [rsp+20Ch] [rbp+10Ch] BYREF
  _BYTE v42[128]; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v43; // [rsp+30Ch] [rbp+20Ch]
  int v44; // [rsp+314h] [rbp+214h]
  _BYTE v45[40]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v46; // [rsp+340h] [rbp+240h]
  __int64 v47; // [rsp+348h] [rbp+248h]
  __int64 v48; // [rsp+350h] [rbp+250h]
  __int64 v49; // [rsp+358h] [rbp+258h]
  __int64 v50; // [rsp+360h] [rbp+260h]
  int v51; // [rsp+370h] [rbp+270h]

  v4 = (int *)a4;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !a4 )
  {
    memset_0(v40, 0, 0x184uLL);
    v10 = 64LL;
    v39 = 8397888;
    v11 = 64LL;
    v12 = v41;
    do
    {
      if ( v11 == -2147483582 )
        break;
      v13 = *(_WORD *)((char *)v12 + (char *)L"DynamicHostDependency" - v41);
      if ( !v13 )
        break;
      *v12++ = v13;
      --v11;
    }
    while ( v11 );
    v14 = v12 - 1;
    if ( v11 )
      v14 = v12;
    v15 = v42;
    *v14 = 0;
    do
    {
      if ( v10 == -2147483582 )
        break;
      v16 = *(_WORD *)((char *)v15 + (char *)&word_18008DA4C - v42);
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
    v44 = -1;
    v43 = 5;
    memset_0(v45, 0, 0x68uLL);
    v51 = 33;
    v46 |= 0x80uLL;
    v4 = &v39;
    v50 = -1LL;
    v49 = -1LL;
    v48 = -1LL;
    v47 = -1LL;
  }
  *v4 |= 0x400u;
  memset_0(v37, 0, 0x1B0uLL);
  v18 = 3LL;
  v37[0] = 1;
  v19 = &v38;
  do
  {
    v20 = *((_OWORD *)v4 + 1);
    *(_OWORD *)v19 = *(_OWORD *)v4;
    v21 = *((_OWORD *)v4 + 2);
    *((_OWORD *)v19 + 1) = v20;
    v22 = *((_OWORD *)v4 + 3);
    *((_OWORD *)v19 + 2) = v21;
    v23 = *((_OWORD *)v4 + 4);
    *((_OWORD *)v19 + 3) = v22;
    v24 = *((_OWORD *)v4 + 5);
    *((_OWORD *)v19 + 4) = v23;
    v25 = *((_OWORD *)v4 + 6);
    *((_OWORD *)v19 + 5) = v24;
    v26 = *((_OWORD *)v4 + 7);
    v4 += 32;
    *((_OWORD *)v19 + 6) = v25;
    v19 += 128;
    *((_OWORD *)v19 - 1) = v26;
    --v18;
  }
  while ( v18 );
  *(_QWORD *)v19 = *(_QWORD *)v4;
  Host = RmHamFindHost(a1, a2, &v35);
  v28 = v35;
  v29 = Host;
  if ( Host >= 0 )
  {
    v30 = RmHamFindHost(a1, a3, &v34);
    v9 = v34;
    v29 = v30;
    if ( v30 >= 0 )
    {
      v31 = HampDepGroupAddDependency(v28, v34, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v37, 0LL, &v36);
      v8 = v36;
      v29 = v31;
      if ( v31 >= 0 )
        v29 = 0;
    }
  }
  if ( v28 )
  {
    RmpAcquireGlobalLock();
    v32 = (*((_QWORD *)v28 + 74))-- == 1LL;
    if ( v32 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v28 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    v32 = (*((_QWORD *)v9 + 74))-- == 1LL;
    if ( v32 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v9 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v8 )
  {
    HampDepGroupRunStateChangeWorker(v8);
    HampDepGroupDereference(v8);
  }
  return v29;
}
