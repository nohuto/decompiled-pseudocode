/*
 * XREFs of ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@@Z @ 0x18001427C
 * Callers:
 *     ?HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013C48 (-HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 *     ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180014100 (-HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x180014374 (RmpWnfPublishMessageToClientStateName.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampManagerIssueStateChangeNotifications(
        struct _HOST_ACTIVITY_MANAGER *a1,
        int a2,
        struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *a3)
{
  DWORD v3; // edi
  __int64 **v4; // r14
  _QWORD *Value; // rbx
  __int64 *i; // rbx
  int v10; // eax
  _QWORD *v11; // rax

  v3 = HampLockTrackerId;
  v4 = (__int64 **)((char *)a1 + 112);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockShared(a1);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( (i[15] & 1) == 0 && (!a2 || (v10 = *((_DWORD *)i + 33)) == 0 || a2 == v10) )
    {
      if ( (i[15] & 2) != 0 )
        ((void (__fastcall *)(struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *, __int64))i[13])(a3, i[14]);
      else
        RmpWnfPublishMessageToClientStateName(i + 12, a3, 544LL, i[13]);
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v11 = TlsGetValue(HampLockTrackerId);
    if ( (*(_DWORD *)v11 & 0x400LL) == 0 )
      __int2c();
    if ( v11[11]-- == 1LL )
      *v11 &= ~0x400uLL;
  }
  RtlReleaseSRWLockShared(a1);
}
