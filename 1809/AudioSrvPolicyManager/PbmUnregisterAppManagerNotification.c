/*
 * XREFs of PbmUnregisterAppManagerNotification @ 0x1800245B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800291E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterAppManagerNotification(CApplicationManager *a1)
{
  unsigned int v1; // edi
  int Process; // eax
  struct CProcess *v3; // rbx
  struct CProcess *v4; // rbx
  struct CProcess *v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v6 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v6);
    v3 = v6;
    v1 = Process;
    if ( Process >= 0 )
    {
      TsSessionIdDeleteAppManagerClient(v6);
      *((_DWORD *)v3 + 122) = 0;
    }
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) == 1 )
    {
      v4 = v6;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v6 + 32LL))(v6);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
  }
  return v1;
}
