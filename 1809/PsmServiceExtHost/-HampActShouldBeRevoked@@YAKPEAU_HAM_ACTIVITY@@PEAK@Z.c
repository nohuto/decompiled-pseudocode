/*
 * XREFs of ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z @ 0x18006CC10
 * Callers:
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800472C0 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18006BA6C (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068BA0 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068F94 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPkgGetBackgroundAccessState@@YA?AW4BACKGROUND_ACCESS_STATE@@PEAU_HAM_PACKAGE@@@Z @ 0x18006B95C (-HampPkgGetBackgroundAccessState@@YA-AW4BACKGROUND_ACCESS_STATE@@PEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampActShouldBeRevoked(struct _HAM_ACTIVITY *a1, unsigned int *a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rsi
  unsigned __int8 v4; // al
  __int64 v7; // rdx
  int v8; // eax

  v2 = 0;
  v3 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v4 = *((_BYTE *)a1 + 548) - 2;
  *a2 = 0;
  if ( v4 <= 1u )
  {
    HampManagerAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)(v3 - 216), (__int64)a2);
    v8 = *(_DWORD *)(v3 + 128);
    if ( (v8 & 8) != 0 && (*((_BYTE *)a1 + 120) & 2) != 0 )
      *a2 |= 2u;
    if ( (v8 & 0x20) != 0 && (*((_BYTE *)a1 + 120) & 1) != 0 )
      *a2 |= 1u;
    if ( (v8 & 2) == 0 && (*((_BYTE *)a1 + 120) & 0x20) != 0 )
      *a2 |= 0x20u;
    if ( (v8 & 0x10) != 0 && (*((_BYTE *)a1 + 120) & 0x40) != 0 )
      *a2 |= 0x40u;
    HampManagerReleaseLockShared((struct _HOST_ACTIVITY_MANAGER *)(v3 - 216), v7);
    if ( (((*((_DWORD *)a1 + 28) & 0x8000) != 0) & ((HampPkgGetBackgroundAccessState(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 752LL)
                                                                                               + 88LL)) & 1) != 0)) != 0 )
      *a2 |= 0x100u;
  }
  LOBYTE(v2) = *a2 != 0;
  return v2;
}
