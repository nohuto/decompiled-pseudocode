/*
 * XREFs of UserFindBaseWindowHandleLocked @ 0x1C00F42F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     HMFindEntry @ 0x1C00EB920 (HMFindEntry.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall UserFindBaseWindowHandleLocked(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  char *v7; // rax
  int v8; // edx
  int v9; // eax
  _QWORD v11[4]; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0xFu,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gHmLock, 0LL);
  v11[0] = a1;
  v11[1] = a2;
  v11[2] = a3;
  v7 = HMFindEntry((__int64)v11, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
  if ( v7 )
  {
    v6 = **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v7 - (_BYTE *)qword_1C01CBA58) >> 5));
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      if ( a2 )
        v9 = *(_DWORD *)(a2 + 56);
      else
        LOBYTE(v9) = 0;
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_qd(gBaseLog, v8, 16, 16, (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids, a1, v9);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0x10u,
        0x11u,
        (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  }
  ExReleasePushLockSharedEx(&gHmLock, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
