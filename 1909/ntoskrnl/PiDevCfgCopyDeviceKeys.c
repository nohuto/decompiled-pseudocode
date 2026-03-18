/*
 * XREFs of PiDevCfgCopyDeviceKeys @ 0x1406FF3A8
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406FF350 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140865F54 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x140868CD0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3AE40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B050 (PipCommitPendingService.c)
 * Callees:
 *     PiDevCfgPopCopyKeyEntry @ 0x1401457B8 (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1401458C0 (PiDevCfgPushCopyKeyEntry.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x1401C4070 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4 (PiDevCfgGetKeySecurityDescriptor.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKeys(void *a1, void *a2, int a3, __int64 a4)
{
  int v8; // edi
  int v9; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v12; // [rsp+48h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-20h]
  __int64 v14[3]; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+A0h] [rbp+30h] BYREF

  v15 = a3;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v14[1] = (__int64)v14;
  v14[0] = (__int64)v14;
  if ( (int)PiDevCfgGetKeySecurityDescriptor(a1) >= 0 )
  {
    ZwSetSecurityObject(a2, 4u, SecurityDescriptor);
    ExFreePoolWithTag(SecurityDescriptor, 0);
  }
  v8 = PiDevCfgPushCopyKeyEntry((HANDLE *)v14, a1, a2, a3);
  while ( v8 >= 0 )
  {
    if ( !PiDevCfgPopCopyKeyEntry(v14, &Handle, &v12, &v15) )
      break;
    v9 = v15;
    v8 = PiDevCfgCopyDeviceKey(Handle, v15, (__int64)v14, a4);
    if ( (v9 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v12);
    }
  }
  while ( PiDevCfgPopCopyKeyEntry(v14, &Handle, &v12, &v15) )
  {
    if ( (v15 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v12);
    }
  }
  return (unsigned int)v8;
}
