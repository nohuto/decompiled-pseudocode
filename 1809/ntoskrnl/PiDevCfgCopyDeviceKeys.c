/*
 * XREFs of PiDevCfgCopyDeviceKeys @ 0x1406F2BE8
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406F2B90 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14082C014 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14082ED10 (PiDevCfgResetDeviceKeyCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F5A70 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F5C80 (PipCommitPendingService.c)
 * Callees:
 *     PiDevCfgPopCopyKeyEntry @ 0x14015D030 (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015D138 (PiDevCfgPushCopyKeyEntry.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CD4 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKeys(void *a1, void *a2, int a3, __int64 a4)
{
  int v5; // edi
  int v6; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v9; // [rsp+48h] [rbp-18h] BYREF
  __int64 v10[2]; // [rsp+50h] [rbp-10h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF

  v11 = a3;
  Handle = 0LL;
  v9 = 0LL;
  v10[1] = (__int64)v10;
  v10[0] = (__int64)v10;
  v5 = PiDevCfgPushCopyKeyEntry((HANDLE *)v10, a1, a2, a3);
  while ( v5 >= 0 )
  {
    if ( !PiDevCfgPopCopyKeyEntry(v10, &Handle, &v9, &v11) )
      break;
    v6 = v11;
    v5 = PiDevCfgCopyDeviceKey(Handle, v11, (__int64)v10, a4);
    if ( (v6 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v9);
    }
  }
  while ( PiDevCfgPopCopyKeyEntry(v10, &Handle, &v9, &v11) )
  {
    if ( (v11 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v9);
    }
  }
  return (unsigned int)v5;
}
