/*
 * XREFs of CreateKernelIocpWcp @ 0x1C00A0F40
 * Callers:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0033A64 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 */

__int64 CreateKernelIocpWcp()
{
  int v0; // eax
  int v1; // edx
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-30h]
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int128 v8; // [rsp+50h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0LL;
  v3[1] = 0;
  v7 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v8 = 0LL;
  v3[0] = 48;
  v6 = 512;
  v0 = ZwCreateWaitCompletionPacket(&v9, 1LL, v3);
  if ( v0 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v1, 17, 13, (__int64)&WPP_94568d5f27b1311edceb637cdcfb42af_Traceguids, v0);
  }
  return v9;
}
