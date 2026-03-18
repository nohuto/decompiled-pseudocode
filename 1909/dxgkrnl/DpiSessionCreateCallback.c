/*
 * XREFs of DpiSessionCreateCallback @ 0x1C00C6178
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C00C6070 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C0161010 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0181900 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  __int64 v0; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax

  LODWORD(v0) = 0;
  if ( !byte_1C00A2753 )
  {
    byte_1C00A2753 = 1;
    v2 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      v6 = WdLogNewEntry5_WdError(v4, v3, v5);
      *(_QWORD *)(v6 + 24) = v0;
      WdLogEvent5_WdError(v6);
      LODWORD(v0) = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
  }
  return (unsigned int)v0;
}
