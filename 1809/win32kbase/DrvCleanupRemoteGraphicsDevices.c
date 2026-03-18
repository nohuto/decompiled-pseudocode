/*
 * XREFs of DrvCleanupRemoteGraphicsDevices @ 0x1C01044BC
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1610 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0048890 (UserIsUserCritSecIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvCleanupRemoteGraphicsDevices()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx

  result = UserIsUserCritSecIn();
  if ( !(_DWORD)result )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2, v1, v3);
    result = WdLogEvent5_WdAssertion(v4);
  }
  for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 )
    {
      if ( *((_QWORD *)i + 38) )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C01CDA38)(*((_QWORD *)i + 35), 0LL, *((_QWORD *)i + 36));
        *((_QWORD *)i + 35) = 0LL;
        result = 0LL;
        *((_QWORD *)i + 37) = 0LL;
        *((_QWORD *)i + 38) = 0LL;
      }
    }
  }
  return result;
}
