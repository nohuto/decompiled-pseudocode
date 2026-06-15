/*
 * XREFs of PbmRegisterAppManagerNotification @ 0x180020BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800194A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x1800255B8 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterAppManagerNotification(CApplicationManager *a1)
{
  int v1; // edi
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
      v1 = TsSessionIdAddAppManagerClient(v6);
      if ( v1 >= 0 )
        *((_DWORD *)v3 + 123) = 1;
    }
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) == 1 )
    {
      v4 = v6;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v6 + 32LL))(v6);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
  }
  return (unsigned int)v1;
}
