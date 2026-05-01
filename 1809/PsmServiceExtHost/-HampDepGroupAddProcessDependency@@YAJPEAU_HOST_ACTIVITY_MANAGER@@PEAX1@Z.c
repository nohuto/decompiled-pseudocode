/*
 * XREFs of ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180008A20
 * Callers:
 *     ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x18000BEE8 (-HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000D57C (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E300 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010D4C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddProcessDependency(struct _HOST_ACTIVITY_MANAGER *a1, void *a2, void *a3)
{
  struct _HAM_DEPENDENCY_GROUP *v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v7; // r14
  __int64 v8; // r9
  __int64 v9; // rdx
  _WORD *v10; // rax
  __int16 v11; // cx
  _WORD *v12; // rcx
  __int16 v13; // ax
  char *v14; // rcx
  __int128 *v15; // rax
  __int64 v16; // r8
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v26; // rdi
  int v27; // ebx
  int v28; // eax
  bool v29; // zf
  struct _HAM_DEPENDENCY_GROUP *v31; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v32; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v33; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v34[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+1E0h] [rbp+E0h]
  void *v37; // [rsp+1E8h] [rbp+E8h]
  void *v38; // [rsp+1F0h] [rbp+F0h]
  DWORD ProcessId; // [rsp+1F8h] [rbp+F8h]
  DWORD v40; // [rsp+1FCh] [rbp+FCh]
  _DWORD v41[3]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v42[128]; // [rsp+20Ch] [rbp+10Ch] BYREF
  _BYTE v43[128]; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v44; // [rsp+30Ch] [rbp+20Ch]
  int v45; // [rsp+314h] [rbp+214h]
  _BYTE v46[40]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v47; // [rsp+340h] [rbp+240h]
  __int64 v48; // [rsp+348h] [rbp+248h]
  __int64 v49; // [rsp+350h] [rbp+250h]
  __int64 v50; // [rsp+358h] [rbp+258h]
  __int64 v51; // [rsp+360h] [rbp+260h]
  int v52; // [rsp+370h] [rbp+270h]

  v3 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v7 = 0LL;
  memset_0(v41, 0, 0x188uLL);
  v8 = 64LL;
  v41[0] = 8256;
  v9 = 64LL;
  v10 = v42;
  while ( v9 != -2147483582 )
  {
    v11 = *(_WORD *)((char *)v10 + (char *)L"ProcessDependency" - v42);
    if ( !v11 )
      break;
    *v10++ = v11;
    if ( !--v9 )
    {
      --v10;
      break;
    }
  }
  *v10 = 0;
  v12 = v43;
  while ( v8 != -2147483582 )
  {
    v13 = *(_WORD *)((char *)v12 + (char *)&pwsz - v43);
    if ( !v13 )
      break;
    *v12++ = v13;
    if ( !--v8 )
    {
      --v12;
      break;
    }
  }
  *v12 = 0;
  v44 = 5;
  v45 = -1;
  memset_0(v46, 0, 0x68uLL);
  v47 |= 0x80uLL;
  v41[0] |= 0x400u;
  v51 = -1LL;
  v50 = -1LL;
  v49 = -1LL;
  v48 = -1LL;
  v52 = 33;
  memset_0(v34, 0, 0x1B0uLL);
  v14 = &v35;
  v36 = 0LL;
  v15 = (__int128 *)v41;
  v34[0] = 0;
  v16 = 3LL;
  do
  {
    v14 += 128;
    v17 = *v15;
    v18 = v15[1];
    v15 += 8;
    *((_OWORD *)v14 - 8) = v17;
    v19 = *(v15 - 6);
    *((_OWORD *)v14 - 7) = v18;
    v20 = *(v15 - 5);
    *((_OWORD *)v14 - 6) = v19;
    v21 = *(v15 - 4);
    *((_OWORD *)v14 - 5) = v20;
    v22 = *(v15 - 3);
    *((_OWORD *)v14 - 4) = v21;
    v23 = *(v15 - 2);
    *((_OWORD *)v14 - 3) = v22;
    v24 = *(v15 - 1);
    *((_OWORD *)v14 - 2) = v23;
    *((_OWORD *)v14 - 1) = v24;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)v14 = *(_QWORD *)v15;
  v37 = a2;
  v38 = a3;
  ProcessId = GetProcessId(a2);
  v40 = GetProcessId(a3);
  HostByProcessHandle = RmHamFindHostByProcessHandle(a1, a2, &v33);
  v26 = v33;
  v27 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v28 = RmHamFindHostByProcessHandle(a1, a3, &v32);
    v7 = v32;
    v27 = v28;
    if ( v28 >= 0 )
    {
      v27 = HampDepGroupAddDependency(v26, v32, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v34, 0LL, &v31);
      if ( v27 >= 0 )
        v27 = 0;
      v3 = v31;
    }
  }
  if ( v26 )
  {
    RmpAcquireGlobalLock();
    v29 = (*((_QWORD *)v26 + 72))-- == 1LL;
    if ( v29 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v26 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    v29 = (*((_QWORD *)v7 + 72))-- == 1LL;
    if ( v29 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v3 )
  {
    HampDepGroupRunStateChangeWorker(v3);
    HampDepGroupDereference(v3);
  }
  return (unsigned int)v27;
}
