/*
 * XREFs of ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x18000FA60
 * Callers:
 *     ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x18000F718 (-HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800188A0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall __noreturn HampDepGroupAddProcessDependency(struct _HOST_ACTIVITY_MANAGER *a1, void *a2, void *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v6; // rdi
  struct _HAM_DEPENDENCY_GROUP *v7; // r14
  __int64 v8; // r8
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int16 v11; // ax
  _WORD *v12; // rax
  _WORD *v13; // rcx
  __int16 v14; // ax
  _WORD *v15; // rax
  char *v16; // rcx
  __int64 v17; // r8
  int *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v27; // rsi
  int v28; // eax
  bool v29; // zf
  struct _RM_HAM_ACTIVITY_HOST *v30; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v31; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v32; // [rsp+40h] [rbp-C0h] BYREF
  char v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+51h] [rbp-AFh]
  __int16 v35; // [rsp+55h] [rbp-ABh]
  char v36; // [rsp+57h] [rbp-A9h]
  char v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+1E0h] [rbp+E0h]
  void *v39; // [rsp+1E8h] [rbp+E8h]
  void *v40; // [rsp+1F0h] [rbp+F0h]
  DWORD ProcessId; // [rsp+1F8h] [rbp+F8h]
  DWORD v42; // [rsp+1FCh] [rbp+FCh]
  int v43; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v44[8]; // [rsp+204h] [rbp+104h] BYREF
  _BYTE v45[128]; // [rsp+20Ch] [rbp+10Ch] BYREF
  _BYTE v46[128]; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v47; // [rsp+30Ch] [rbp+20Ch]
  int v48; // [rsp+314h] [rbp+214h]
  _BYTE v49[40]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v50; // [rsp+340h] [rbp+240h]
  __int64 v51; // [rsp+348h] [rbp+248h]
  __int64 v52; // [rsp+350h] [rbp+250h]
  __int64 v53; // [rsp+358h] [rbp+258h]
  __int64 v54; // [rsp+360h] [rbp+260h]
  int v55; // [rsp+370h] [rbp+270h]

  v31 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset_0(v44, 0, 0x184uLL);
  v8 = 64LL;
  v43 = 8397888;
  v9 = 64LL;
  v10 = v45;
  do
  {
    if ( v9 == -2147483582 )
      break;
    v11 = *(_WORD *)((char *)v10 + (char *)L"ProcessDependency" - v45);
    if ( !v11 )
      break;
    *v10++ = v11;
    --v9;
  }
  while ( v9 );
  v12 = v10 - 1;
  if ( v9 )
    v12 = v10;
  v13 = v46;
  *v12 = 0;
  do
  {
    if ( v8 == -2147483582 )
      break;
    v14 = *(_WORD *)((char *)v13 + (char *)&word_18008DA4C - v46);
    if ( !v14 )
      break;
    *v13++ = v14;
    --v8;
  }
  while ( v8 );
  v15 = v13 - 1;
  if ( v8 )
    v15 = v13;
  *v15 = 0;
  v48 = -1;
  v47 = 5;
  memset_0(v49, 0, 0x68uLL);
  v43 |= 0x400u;
  v16 = &v37;
  v55 = 33;
  v54 = -1LL;
  v50 |= 0x80uLL;
  v53 = -1LL;
  v52 = -1LL;
  v51 = -1LL;
  v17 = 3LL;
  v38 = 0LL;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v18 = &v43;
  v33 = 0;
  do
  {
    v19 = *((_OWORD *)v18 + 1);
    *(_OWORD *)v16 = *(_OWORD *)v18;
    v20 = *((_OWORD *)v18 + 2);
    *((_OWORD *)v16 + 1) = v19;
    v21 = *((_OWORD *)v18 + 3);
    *((_OWORD *)v16 + 2) = v20;
    v22 = *((_OWORD *)v18 + 4);
    *((_OWORD *)v16 + 3) = v21;
    v23 = *((_OWORD *)v18 + 5);
    *((_OWORD *)v16 + 4) = v22;
    v24 = *((_OWORD *)v18 + 6);
    *((_OWORD *)v16 + 5) = v23;
    v25 = *((_OWORD *)v18 + 7);
    v18 += 32;
    *((_OWORD *)v16 + 6) = v24;
    v16 += 128;
    *((_OWORD *)v16 - 1) = v25;
    --v17;
  }
  while ( v17 );
  *(_QWORD *)v16 = *(_QWORD *)v18;
  v39 = a2;
  v40 = a3;
  ProcessId = GetProcessId(a2);
  v42 = GetProcessId(a3);
  HostByProcessHandle = RmHamFindHostByProcessHandle(a1, a2, &v31);
  v27 = v31;
  if ( HostByProcessHandle >= 0 )
  {
    v28 = RmHamFindHostByProcessHandle(a1, a3, &v30);
    v6 = v30;
    if ( v28 >= 0 )
    {
      HampDepGroupAddDependency(v27, v30, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v33, 0LL, &v32);
      v7 = v32;
    }
  }
  if ( v27 )
  {
    RmpAcquireGlobalLock();
    v29 = (*((_QWORD *)v27 + 74))-- == 1LL;
    if ( v29 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v27 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v29 = (*((_QWORD *)v6 + 74))-- == 1LL;
    if ( v29 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v7 )
  {
    HampDepGroupRunStateChangeWorker(v7);
    HampDepGroupDereference(v7);
  }
}
