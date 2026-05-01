/*
 * XREFs of ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003D340
 * Callers:
 *     <none>
 * Callees:
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180006EDC (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x1800088D0 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180068EBC (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18006A298 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
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
  unsigned int *v11; // r14
  unsigned __int64 v12; // rbx
  DWORD v13; // ebx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rbx
  _BYTE v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v19[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v21; // [rsp+F0h] [rbp-10h]
  int v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+FCh] [rbp-4h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A906, 0LL, 0LL, 2u, &pData);
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
    v18 = -1073741584;
    goto LABEL_17;
  }
  v11 = (unsigned int *)(a5 + 4);
  if ( !*(_DWORD *)a5 )
  {
LABEL_16:
    v18 = 0;
    goto LABEL_17;
  }
  if ( *(_DWORD *)a5 == -1 )
  {
    for ( i = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(a4 + 128), 0, 0LL);
          ;
          i = HampManagerGetNextHost(v16) )
    {
      v16 = i;
      if ( !i )
        break;
      HampHostTerminateIfSuspended(i, 1LL, v10, v17);
    }
    goto LABEL_16;
  }
  v12 = *(unsigned int *)a5;
  if ( v12 <= ((unsigned __int64)a6 >> 2) - 1 )
  {
    if ( *(_DWORD *)a5 )
    {
      do
      {
        HampManagerTerminateHostIfSuspended((struct _HOST_ACTIVITY_MANAGER *)a4, *v11++, v8, v10, 0LL);
        --v12;
      }
      while ( v12 );
    }
    goto LABEL_16;
  }
  v18 = -1073741583;
LABEL_17:
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  if ( hProvider > 4u )
  {
    v23 = 0;
    v21 = &v18;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A94D, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
