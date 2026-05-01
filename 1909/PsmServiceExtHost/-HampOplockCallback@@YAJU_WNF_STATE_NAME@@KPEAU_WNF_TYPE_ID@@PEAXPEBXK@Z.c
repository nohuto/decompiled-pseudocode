/*
 * XREFs of ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180045D90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003DEC0 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18007698C (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180076C64 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180077E54 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

__int64 __fastcall HampOplockCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // edi
  DWORD v11; // ebx
  unsigned int *v13; // r14
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  __int64 v15; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v16; // rbx
  unsigned __int64 v17; // rbx
  _BYTE v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v20[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v22; // [rsp+F0h] [rbp-10h]
  int v23; // [rsp+F8h] [rbp-8h]
  int v24; // [rsp+FCh] [rbp-4h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009843F, 0LL, 0LL, 2u, &pData);
  LOBYTE(v8) = 4;
  v9 = 0LL;
  while ( a1 != HamOplockWatchStateNames[v9] )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 4 )
      goto LABEL_8;
  }
  LOBYTE(v8) = v9;
LABEL_8:
  v10 = (unsigned __int8)v8 | 0x1000;
  if ( !a5 || a6 < 4 || (a6 & 3) != 0 )
  {
    v19 = -1073741584;
    goto LABEL_11;
  }
  v13 = (unsigned int *)(a5 + 4);
  if ( *(_DWORD *)a5 )
  {
    if ( *(_DWORD *)a5 == -1 )
    {
      for ( i = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(a4 + 128), 0, 0LL);
            ;
            i = HampManagerGetNextHost(v16) )
      {
        v16 = i;
        if ( !i )
          break;
        HampHostTerminateIfSuspended(i, v15, v10, v18);
      }
    }
    else
    {
      v17 = *(unsigned int *)a5;
      if ( v17 > ((unsigned __int64)a6 >> 2) - 1 )
      {
        v19 = -1073741583;
        goto LABEL_11;
      }
      if ( *(_DWORD *)a5 )
      {
        do
        {
          HampManagerTerminateHostIfSuspended(a4, *v13++, v8, v10, 0LL);
          --v17;
        }
        while ( v17 );
      }
    }
  }
  v19 = 0;
LABEL_11:
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( dword_1800AB2C0 > 4u )
  {
    v24 = 0;
    v22 = &v19;
    v23 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800984B8, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
