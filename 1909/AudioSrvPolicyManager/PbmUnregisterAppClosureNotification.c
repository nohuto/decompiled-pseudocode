/*
 * XREFs of PbmUnregisterAppClosureNotification @ 0x180020D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019318 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800194A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterAppClosureNotification(CApplicationManager *a1)
{
  unsigned int v1; // esi
  int Process; // eax
  struct CProcess *v3; // rdi
  CApplicationManager *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  struct CProcess *v6; // rbx
  struct CProcess *v8; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v8 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v8);
    v3 = v8;
    v1 = Process;
    if ( Process >= 0 )
    {
      v4 = g_ApplicationManager;
      v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      *((_DWORD *)v3 + 124) = 0;
      CApplicationManager::Unregister(v4, v3);
      if ( v5 )
        LeaveCriticalSection(v5);
      *((_DWORD *)v3 + 124) = 0;
    }
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) == 1 )
    {
      v6 = v8;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v8 + 32LL))(v8);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
    }
  }
  return v1;
}
