/*
 * XREFs of VidSchTerminateDevice @ 0x1C007AA40
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C007B00C (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00C9A80 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0010F84 (VidSchiDecrementDeviceReference.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0024AA0 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0ppqpttq @ 0x1C002BBF0 (McTemplateK0ppqpttq.c)
 *     VidSchFlushDevice @ 0x1C007AD00 (VidSchFlushDevice.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C007B4C0 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchControlVSyncDevice @ 0x1C007C340 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchTerminateDevice(char *P, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  void *v6; // rdx
  int v7; // esi
  int v8; // ebx
  HANDLE CurrentProcessId; // rax
  __int64 v10; // r8

  if ( P )
  {
    v3 = *((_QWORD *)P + 4);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2272), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)P + 346, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2272));
    VidSchFlushDevice((int)P);
    if ( (*((_DWORD *)P + 12) & 1) != 0 )
    {
      v6 = (void *)*((_QWORD *)P + 2);
      if ( v6 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v3 + 8), v6);
        *((_QWORD *)P + 2) = 0LL;
        if ( bTracingEnabled )
        {
          v7 = *((_DWORD *)P + 12) >> 2;
          v8 = *((_DWORD *)P + 12) >> 1;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ppqpttq(
              *(_QWORD *)(v3 + 16),
              &EventDestroyDevice,
              v10,
              CurrentProcessId,
              *(_QWORD *)(v3 + 16),
              -1,
              P,
              v8 & 1,
              v7 & 1);
        }
      }
    }
    if ( *((_DWORD *)P + 268) )
    {
      *((_DWORD *)P + 268) = 1;
      VidSchControlVSyncDevice(P, 4LL);
    }
    if ( P[240] )
      VidSchiCloseProcessAdapterInfo(*((_QWORD *)P + 5), v3);
    ExDeleteResourceLite((PERESOURCE)(P + 968));
    VidSchiDecrementDeviceReference(P, 0);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}
