/*
 * XREFs of ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18007711C
 * Callers:
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800467C0 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x1800797E0 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800029F4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@PEAK@Z @ 0x18007B12C (-HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@PEAK@Z.c)
 */

void __fastcall HampHostAmbientStateChanged(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _SYSTEM_STATE_TRACKER_SYSTEM_STATE *a2,
        int a3)
{
  struct _HAM_ACTIVITY *i; // rax
  struct _HAM_ACTIVITY *v7; // rbx
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  HampHostAcquireLockExclusiveEx(a1, 0);
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( HampActShouldBeRevoked(i, a2, &v8) )
      HampActRequestStopEx((__int64)v7, 1u, a3, 0, 6912, v8, 0LL);
  }
  HampHostReleaseLockExclusiveEx(a1);
}
