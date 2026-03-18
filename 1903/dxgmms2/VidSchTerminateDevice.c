/*
 * XREFs of VidSchTerminateDevice @ 0x1C007C000
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C007BAD8 (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00CC870 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0010A98 (VidSchiDecrementDeviceReference.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00241B0 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0ppqpttq @ 0x1C002C2CC (McTemplateK0ppqpttq.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C007B180 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchFlushDevice @ 0x1C007B810 (VidSchFlushDevice.c)
 *     VidSchControlVSyncDevice @ 0x1C007CD70 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchTerminateDevice(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  void *v8; // rdx
  int v9; // esi
  int v10; // ebx
  HANDLE CurrentProcessId; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+50h] [rbp-18h] BYREF

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2272), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1392), 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2272));
    v14[0] = 13LL;
    v14[1] = 0LL;
    VidSchFlushDevice(a1, (int *)v14, v4, v5);
    if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
    {
      v8 = *(void **)(a1 + 16);
      if ( v8 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v3 + 8), v8);
        *(_QWORD *)(a1 + 16) = 0LL;
        if ( bTracingEnabled )
        {
          v9 = *(_DWORD *)(a1 + 48) >> 2;
          v10 = *(_DWORD *)(a1 + 48) >> 1;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ppqpttq(
              v12,
              &EventDestroyDevice,
              v13,
              CurrentProcessId,
              *(_QWORD *)(v3 + 16),
              -1,
              a1,
              v10 & 1,
              v9 & 1);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 1072) )
    {
      *(_DWORD *)(a1 + 1072) = 1;
      VidSchControlVSyncDevice(a1, 4LL);
    }
    if ( *(_BYTE *)(a1 + 240) )
      VidSchiCloseProcessAdapterInfo(*(_QWORD *)(a1 + 40), (unsigned int *)v3);
    ExDeleteResourceLite((PERESOURCE)(a1 + 968));
    VidSchiDecrementDeviceReference((char *)a1, 0);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
