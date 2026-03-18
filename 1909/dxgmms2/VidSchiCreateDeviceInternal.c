/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C007C868
 * Callers:
 *     VidSchCreateDevice @ 0x1C007CC70 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C0091A2C (VidSchCreateSystemDevices.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0004910 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiIncrementDeviceReference @ 0x1C0011400 (VidSchiIncrementDeviceReference.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0018018 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0ppqpttq @ 0x1C002C2CC (McTemplateK0ppqpttq.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C007BD1C (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C007CB60 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C007CBB8 (VidSchiReadDeviceConfiguration.c)
 *     VidSchTerminateDevice @ 0x1C007CD90 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncDevice @ 0x1C007DEF0 (VidSchControlVSyncDevice.c)
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
  int v15; // eax
  int v16; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  ADAPTER_RENDER *v21; // rcx
  bool v22; // zf
  int v23; // r14d
  int v24; // esi
  HANDLE CurrentProcessId; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  _DXGKARG_CREATEDEVICE v30; // [rsp+50h] [rbp-38h] BYREF

  *a4 = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      v28 = WdLogNewEntry5_WdWarning(a1, a2);
      WdLogEvent5_WdWarning(v28);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x580uLL, 0x33616956u);
  v12 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x580uLL);
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
    *(_QWORD *)(v12 + 1320) = v12 + 1312;
    *(_QWORD *)(v12 + 1312) = v12 + 1312;
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
      v18 = g_pVidSchSystemProcess;
      *(_QWORD *)(v12 + 40) = g_pVidSchSystemProcess;
      v14 = v18;
    }
    else
    {
      v14 = *((_QWORD *)Current + 9);
      if ( v14 )
        v14 = *(_QWORD *)(v14 + 24);
      *(_QWORD *)(v12 + 40) = v14;
    }
    v15 = *(_DWORD *)(*(_QWORD *)(v14 + 2616) + 4 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5));
    if ( _bittest(&v15, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      v16 = -1073741790;
    }
    else
    {
      v16 = VidSchiOpenProcessAdapterInfo(v14, a1);
      if ( v16 >= 0 )
      {
        *(_BYTE *)(v12 + 240) = 1;
        if ( (*(_DWORD *)a2 & 1) != 0 )
        {
          memset(&v30, 0, 24);
          v19 = *(unsigned int *)(a1 + 4);
          v30.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 1;
          v20 = *(_QWORD **)(*((_QWORD *)Current + 6) + 8 * v19);
          if ( v20 )
            v20 = (_QWORD *)v20[2];
          v21 = *(ADAPTER_RENDER **)(a1 + 8);
          v30.hKmdProcess = v20;
          v16 = ADAPTER_RENDER::DdiCreateDevice(v21, &v30);
          if ( v16 < 0 )
            goto LABEL_31;
          v22 = bTracingEnabled == 0;
          *(_QWORD *)(v12 + 16) = v30.hDevice;
          if ( !v22 )
          {
            v23 = *(_DWORD *)(v12 + 48) >> 2;
            v24 = *(_DWORD *)(v12 + 48) >> 1;
            CurrentProcessId = PsGetCurrentProcessId();
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0ppqpttq(
                v26,
                &EventCreateDevice,
                v27,
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
        if ( (*(_DWORD *)(v12 + 48) & 2) == 0 || (v16 = VidSchControlVSyncDevice(v12, 2LL), v16 >= 0) )
        {
          *a4 = v12;
          return (unsigned int)v16;
        }
      }
    }
LABEL_31:
    VidSchTerminateDevice(v12);
    return (unsigned int)v16;
  }
  v29 = WdLogNewEntry5_WdWarning(v11, v10);
  WdLogEvent5_WdWarning(v29);
  return 3221225495LL;
}
