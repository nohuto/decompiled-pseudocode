/*
 * XREFs of PspInitPhase3 @ 0x1409FEAD8
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 *     PsInitSystem @ 0x1409FEE9C (PsInitSystem.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspMapSystemDll @ 0x14067E6D8 (PspMapSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A3DB50 (PspGetSystemDllSecureHandle.c)
 */

bool PspInitPhase3()
{
  int SystemDllSecureHandle; // ebx
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // [rsp+20h] [rbp-69h] BYREF
  __int64 v5; // [rsp+28h] [rbp-61h] BYREF
  _BYTE v6[48]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v7[14]; // [rsp+60h] [rbp-29h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v6);
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(PspSystemDlls, &v5);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls, 0, 0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v4 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(off_1409AD2B0, &v4) < 0 )
      {
        v3 = v4;
      }
      else
      {
        v2 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_1409AD2B0, 0, 0);
        v3 = v4;
        if ( v2 < 0 )
          v3 = 0LL;
      }
      memset(v7, 0, 0x68uLL);
      v7[1] = v5;
      v7[2] = v3;
      SystemDllSecureHandle = VslpEnterIumSecureMode(2, 4LL, 0LL, (__int64)v7);
    }
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v6, 0);
  return SystemDllSecureHandle >= 0;
}
