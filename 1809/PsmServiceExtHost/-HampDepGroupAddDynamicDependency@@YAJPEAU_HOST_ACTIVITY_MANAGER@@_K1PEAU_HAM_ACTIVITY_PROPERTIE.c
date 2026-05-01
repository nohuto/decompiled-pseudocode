/*
 * XREFs of ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180008D40
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000C07C (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000D57C (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E300 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FF0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddDynamicDependency(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  struct _HAM_DEPENDENCY_GROUP *v4; // rsi
  struct _HAM_ACTIVITY_PROPERTIES *v5; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v9; // r14
  __int64 v10; // r9
  __int64 v11; // rdx
  _WORD *v12; // rax
  __int16 v13; // cx
  _WORD *v14; // rcx
  __int16 v15; // ax
  char *v16; // r8
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v27; // rdi
  int v28; // ebx
  int v29; // eax
  bool v30; // zf
  struct _HAM_DEPENDENCY_GROUP *v32; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v33; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v34; // [rsp+40h] [rbp-C0h] BYREF
  char v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+1E0h] [rbp+E0h]
  _DWORD v38[3]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v39[128]; // [rsp+20Ch] [rbp+10Ch] BYREF
  _BYTE v40[128]; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v41; // [rsp+30Ch] [rbp+20Ch]
  int v42; // [rsp+314h] [rbp+214h]
  _BYTE v43[40]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v44; // [rsp+340h] [rbp+240h]
  __int64 v45; // [rsp+348h] [rbp+248h]
  __int64 v46; // [rsp+350h] [rbp+250h]
  __int64 v47; // [rsp+358h] [rbp+258h]
  __int64 v48; // [rsp+360h] [rbp+260h]
  int v49; // [rsp+370h] [rbp+270h]

  v4 = 0LL;
  v5 = a4;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  if ( !a4 )
  {
    memset_0(v38, 0, 0x188uLL);
    v10 = 64LL;
    v38[0] = 8256;
    v11 = 64LL;
    v12 = v39;
    while ( v11 != -2147483582 )
    {
      v13 = *(_WORD *)((char *)v12 + (char *)L"DynamicHostDependency" - v39);
      if ( !v13 )
        break;
      *v12++ = v13;
      if ( !--v11 )
      {
        --v12;
        break;
      }
    }
    *v12 = 0;
    v14 = v40;
    while ( v10 != -2147483582 )
    {
      v15 = *(_WORD *)((char *)v14 + (char *)&pwsz - v40);
      if ( !v15 )
        break;
      *v14++ = v15;
      if ( !--v10 )
      {
        --v14;
        break;
      }
    }
    *v14 = 0;
    v41 = 5;
    v42 = -1;
    memset_0(v43, 0, 0x68uLL);
    v44 |= 0x80uLL;
    v5 = (struct _HAM_ACTIVITY_PROPERTIES *)v38;
    v48 = -1LL;
    v47 = -1LL;
    v46 = -1LL;
    v45 = -1LL;
    v49 = 33;
  }
  *(_DWORD *)v5 |= 0x400u;
  memset_0(v35, 0, 0x1B0uLL);
  v16 = &v36;
  v37 = 0LL;
  v17 = 3LL;
  v35[0] = 1;
  do
  {
    v16 += 128;
    v18 = *(_OWORD *)v5;
    v19 = *((_OWORD *)v5 + 1);
    v5 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v5 + 128);
    *((_OWORD *)v16 - 8) = v18;
    v20 = *((_OWORD *)v5 - 6);
    *((_OWORD *)v16 - 7) = v19;
    v21 = *((_OWORD *)v5 - 5);
    *((_OWORD *)v16 - 6) = v20;
    v22 = *((_OWORD *)v5 - 4);
    *((_OWORD *)v16 - 5) = v21;
    v23 = *((_OWORD *)v5 - 3);
    *((_OWORD *)v16 - 4) = v22;
    v24 = *((_OWORD *)v5 - 2);
    *((_OWORD *)v16 - 3) = v23;
    v25 = *((_OWORD *)v5 - 1);
    *((_OWORD *)v16 - 2) = v24;
    *((_OWORD *)v16 - 1) = v25;
    --v17;
  }
  while ( v17 );
  *(_QWORD *)v16 = *(_QWORD *)v5;
  Host = RmHamFindHost(a1, a2, &v34);
  v27 = v34;
  v28 = Host;
  if ( Host >= 0 )
  {
    v29 = RmHamFindHost(a1, a3, &v33);
    v9 = v33;
    v28 = v29;
    if ( v29 >= 0 )
    {
      v28 = HampDepGroupAddDependency(v27, v33, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v35, 0LL, &v32);
      if ( v28 >= 0 )
        v28 = 0;
      v4 = v32;
    }
  }
  if ( v27 )
  {
    RmpAcquireGlobalLock();
    v30 = (*((_QWORD *)v27 + 72))-- == 1LL;
    if ( v30 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v27 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    v30 = (*((_QWORD *)v9 + 72))-- == 1LL;
    if ( v30 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v9 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v4 )
  {
    HampDepGroupRunStateChangeWorker(v4);
    HampDepGroupDereference(v4);
  }
  return (unsigned int)v28;
}
