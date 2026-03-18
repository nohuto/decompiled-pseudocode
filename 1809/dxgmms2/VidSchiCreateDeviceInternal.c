/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C007B00C
 * Callers:
 *     VidSchCreateDevice @ 0x1C007AFD0 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C008CDCC (VidSchCreateSystemDevices.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0003990 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiIncrementDeviceReference @ 0x1C001299C (VidSchiIncrementDeviceReference.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0018B68 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0ppqpttq @ 0x1C002BBF0 (McTemplateK0ppqpttq.c)
 *     VidSchTerminateDevice @ 0x1C007AA40 (VidSchTerminateDevice.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C007B67C (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C007B9F0 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C007BA48 (VidSchiReadDeviceConfiguration.c)
 *     VidSchControlVSyncDevice @ 0x1C007C340 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct DXGPROCESS *Current; // rsi
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // xmm1_8
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // eax
  int v17; // edi
  __int64 v19; // rax
  _QWORD *v20; // rax
  ADAPTER_RENDER *v21; // rcx
  bool v22; // zf
  int v23; // r14d
  int v24; // esi
  HANDLE CurrentProcessId; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  _DXGKARG_CREATEDEVICE v29; // [rsp+50h] [rbp-38h] BYREF

  *a4 = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      v27 = WdLogNewEntry5_WdWarning(a1, a2);
      WdLogEvent5_WdWarning(v27);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x578uLL, 0x33616956u);
  v12 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x578uLL);
    *(_DWORD *)v12 = 862021974;
    *(_QWORD *)(v12 + 8) = a3;
    ExInitializeResourceLite((PERESOURCE)(v12 + 968));
    *(_QWORD *)(v12 + 32) = a1;
    *(_OWORD *)(v12 + 48) = *(_OWORD *)a2;
    v13 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v12 + 504) = -1;
    *(_QWORD *)(v12 + 64) = v13;
    VidSchiReadDeviceConfiguration(v12);
    *(_QWORD *)(v12 + 80) = v12 + 72;
    *(_QWORD *)(v12 + 72) = v12 + 72;
    *(_QWORD *)(v12 + 96) = v12 + 88;
    *(_QWORD *)(v12 + 88) = v12 + 88;
    *(_QWORD *)(v12 + 1312) = v12 + 1304;
    *(_QWORD *)(v12 + 1304) = v12 + 1304;
    *(_QWORD *)(v12 + 128) = v12 + 120;
    *(_QWORD *)(v12 + 120) = v12 + 120;
    *(_QWORD *)(v12 + 144) = v12 + 136;
    *(_QWORD *)(v12 + 136) = v12 + 136;
    *(_QWORD *)(v12 + 160) = v12 + 152;
    *(_QWORD *)(v12 + 152) = v12 + 152;
    *(_QWORD *)(v12 + 176) = v12 + 168;
    *(_QWORD *)(v12 + 168) = v12 + 168;
    VidSchSetQueuedPresentLimit(v12, 0LL);
    memset64((void *)(v12 + 376), 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference(v12);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1648), a1 + 280, (_QWORD *)(v12 + 104), 0LL);
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      v19 = g_pVidSchSystemProcess;
      *(_QWORD *)(v12 + 40) = g_pVidSchSystemProcess;
      v14 = v19;
    }
    else
    {
      v14 = *((_QWORD *)Current + 9);
      if ( v14 )
        v14 = *(_QWORD *)(v14 + 24);
      *(_QWORD *)(v12 + 40) = v14;
    }
    v15 = (unsigned __int64)*(unsigned int *)(a1 + 4) >> 5;
    v16 = *(_DWORD *)(*(_QWORD *)(v14 + 2616) + 4 * v15);
    if ( _bittest(&v16, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      v17 = -1073741790;
    }
    else
    {
      v17 = VidSchiOpenProcessAdapterInfo(v14, a1);
      if ( v17 >= 0 )
      {
        *(_BYTE *)(v12 + 240) = 1;
        if ( (*(_DWORD *)a2 & 1) != 0 )
        {
          memset(&v29, 0, sizeof(v29));
          v29.hDevice = 0LL;
          v29.Flags.Value |= 1u;
          v20 = *(_QWORD **)(*((_QWORD *)Current + 6) + 8LL * *(unsigned int *)(a1 + 4));
          if ( v20 )
            v20 = (_QWORD *)v20[2];
          v21 = *(ADAPTER_RENDER **)(a1 + 8);
          v29.hKmdProcess = v20;
          v17 = ADAPTER_RENDER::DdiCreateDevice(v21, &v29);
          if ( v17 < 0 )
            goto LABEL_31;
          v22 = bTracingEnabled == 0;
          *(_QWORD *)(v12 + 16) = v29.hDevice;
          if ( !v22 )
          {
            v23 = *(_DWORD *)(v12 + 48) >> 2;
            v24 = *(_DWORD *)(v12 + 48) >> 1;
            CurrentProcessId = PsGetCurrentProcessId();
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0ppqpttq(
                *(_QWORD *)(a1 + 16),
                &EventCreateDevice,
                v26,
                CurrentProcessId,
                *(_QWORD *)(a1 + 16),
                -1,
                v12,
                v24 & 1,
                v23 & 1);
          }
        }
        else
        {
          *(_QWORD *)(v12 + 16) = *(_QWORD *)(a3 + 472);
        }
        if ( (*(_DWORD *)(v12 + 48) & 2) == 0 || (v17 = VidSchControlVSyncDevice(v12, 2LL), v17 >= 0) )
        {
          *a4 = v12;
          return (unsigned int)v17;
        }
      }
    }
LABEL_31:
    VidSchTerminateDevice((char *)v12, v15);
    return (unsigned int)v17;
  }
  v28 = WdLogNewEntry5_WdWarning(v11, v10);
  WdLogEvent5_WdWarning(v28);
  return 3221225495LL;
}
