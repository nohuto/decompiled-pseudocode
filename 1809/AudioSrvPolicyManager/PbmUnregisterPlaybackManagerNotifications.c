/*
 * XREFs of PbmUnregisterPlaybackManagerNotifications @ 0x180024050
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180015E20 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180015ED8 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C494 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterPlaybackManagerNotifications(CApplicationManager *a1, int a2, int a3)
{
  unsigned int v3; // esi
  int Process; // eax
  volatile signed __int32 *v7; // rdi
  CApplicationManager *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  struct CProcess *v10; // rbx
  struct CProcess *v12; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v12 = 0LL;
  if ( !g_ApplicationManager )
    return v3;
  Process = CApplicationManager::RpcGetProcess(a1, a1, &v12);
  v7 = (volatile signed __int32 *)v12;
  v3 = Process;
  if ( Process >= 0 )
  {
    if ( !a2 )
    {
      v8 = g_ApplicationManager;
      v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      CProcess::RegisteredForSoundLevelNotifications((__int64)v7, 0, a3);
      goto LABEL_7;
    }
    if ( a2 == 1 )
    {
      v8 = g_ApplicationManager;
      v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      CProcess::RegisteredForTrackStateNotifications((__int64)v7, 0, a3);
LABEL_7:
      CApplicationManager::Unregister(v8, (struct CProcess *)v7);
      if ( v9 )
        LeaveCriticalSection(v9);
      v3 = 0;
    }
  }
  if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
  {
    v10 = v12;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v12 + 32LL))(v12);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
  }
  return v3;
}
