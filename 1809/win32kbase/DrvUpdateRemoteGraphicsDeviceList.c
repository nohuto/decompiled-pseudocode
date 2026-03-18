/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C0105804
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1610 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0048890 (UserIsUserCritSecIn.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C0061CCC (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A6108 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rdx
  struct tagREMOTE_CONTEXT *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v3 = WdLogNewEntry5_WdAssertion(v1, v0, v2);
    WdLogEvent5_WdAssertion(v3);
  }
  GreCleanupRemoteAdapterContext(v1);
  for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 35) )
    {
      v14 = 0;
      *((_QWORD *)i + 37) = 0LL;
      v5 = ((__int64 (__fastcall *)(char *, char *, char *, char *, char *))qword_1C01CDA30)(
             (char *)i + 280,
             (char *)i + 296,
             (char *)i + 304,
             (char *)i + 288,
             &v14);
      v9 = v5;
      if ( v5 >= 0 )
      {
        v11 = *((_DWORD *)i + 41);
        if ( v14 )
          v12 = v11 | 4;
        else
          v12 = v11 & 0xFFFFFFFB;
        *((_DWORD *)i + 41) = v12;
        DrvUpdateRemoteAdapterInfo(i);
      }
      else
      {
        v10 = WdLogNewEntry5_WdError(v7, v6, v8);
        *(_QWORD *)(v10 + 24) = i;
        *(_QWORD *)(v10 + 32) = v9;
        WdLogEvent5_WdError(v10);
      }
    }
  }
  return 1LL;
}
