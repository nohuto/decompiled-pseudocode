/*
 * XREFs of ACPIWakeRemoveDevicesAndUpdate @ 0x1C0025AEC
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0024D60 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C0024F24 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIRootPowerCallBack @ 0x1C0030690 (ACPIRootPowerCallBack.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C004E500 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C004FCB0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     OSNotifyDeviceWake @ 0x1C0056E10 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0057068 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0057258 (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C0019D20 (ACPIGpeIndexToGpeRegister.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWriteGpeEnableRegister @ 0x1C0025D98 (ACPIWriteGpeEnableRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0026060 (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0026148 (ACPIGpeIndexToByteIndex.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  char v4; // bp
  unsigned __int16 *v5; // rdx
  unsigned int i; // r10d
  __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // edi
  __int64 v13; // rbx
  unsigned __int8 v14; // cl
  _BYTE *v15; // rax
  unsigned int j; // ebx
  __int64 v17; // rax
  __int64 **v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rax
  const char *v21; // rdx
  const char *v22; // rcx

  v4 = *((_BYTE *)AcpiInformation + 133);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  if ( !v4 )
  {
    v5 = (unsigned __int16 *)AcpiInformation;
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); v5 = (unsigned __int16 *)AcpiInformation )
    {
      v7 = i++;
      *((_BYTE *)GpeCurEnable + v7) &= *((_BYTE *)GpeSpecialHandler + v7) | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable
                                                                                               + v7) | *((_BYTE *)GpeWakeHandler + v7));
    }
    memset(GpeWakeEnable, 0, v5[51]);
  }
  v8 = (__int64 *)AcpiPowerWaitWakeList;
  v9 = &AcpiPowerWaitWakeList;
  while ( v8 != &AcpiPowerWaitWakeList )
  {
    v9 = v8;
    v8 = (__int64 *)*v8;
    v10 = v9[5];
    if ( v10 == a1 )
    {
      _InterlockedExchange64((volatile __int64 *)(v9[25] + 104), 0LL);
      if ( !*(_BYTE *)(v9[25] + 68) )
      {
        v17 = *v9;
        if ( *(__int64 **)(*v9 + 8) != v9
          || (v18 = (__int64 **)v9[1], *v18 != v9)
          || (*v18 = (__int64 *)v17, *(_QWORD *)(v17 + 8) = v18, v19 = *(__int64 ***)(a2 + 8), *v19 != (__int64 *)a2) )
        {
          __fastfail(3u);
        }
        *v9 = a2;
        v9[1] = (__int64)v19;
        *v19 = v9;
        *(_QWORD *)(a2 + 8) = v9;
        *((_DWORD *)v9 + 14) &= ~0x40u;
        *((_DWORD *)v9 + 27) |= 2u;
      }
      continue;
    }
    if ( !v4 && (*(_QWORD *)(v10 + 952) & 0x500000000LL) == 0 && *((_DWORD *)v9 + 26) >= AcpiMostRecentSleepState )
    {
      if ( *(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)(v10 + 456)) + GpeMap) )
      {
        v20 = *(_QWORD *)(v10 + 8);
        v21 = (const char *)&unk_1C006E28A;
        v22 = (const char *)&unk_1C006E28A;
        if ( (v20 & 0x200000000000LL) != 0 )
        {
          v21 = *(const char **)(v10 + 560);
          if ( (v20 & 0x400000000000LL) != 0 )
            v22 = *(const char **)(v10 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x11u,
          0x18u,
          (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
          *(_DWORD *)(v10 + 456),
          v10,
          v21,
          v22);
        continue;
      }
      v11 = ACPIGpeIndexToGpeRegister(*(unsigned int *)(v10 + 456));
      v9 = (__int64 *)GpeWakeEnable;
      v12 = 1 << (*(_BYTE *)(v10 + 456) & 7);
      v13 = v11;
      v14 = *((_BYTE *)GpeWakeEnable + v11);
      if ( (v14 & (unsigned __int8)v12) == 0 )
      {
        *((_BYTE *)GpeWakeEnable + v11) = v12 | v14;
        ACPIWriteGpeStatusRegister(v11);
        if ( ((unsigned __int8)v12 & *((_BYTE *)GpeEnable + v13)) == 0 )
        {
          if ( ((unsigned __int8)v12 & *((_BYTE *)GpeCurEnable + v13)) != 0 )
            continue;
          *((_BYTE *)GpeIsLevel + v13) |= v12;
          v15 = GpeCurEnable;
          goto LABEL_15;
        }
        if ( ((unsigned __int8)v12 & *((_BYTE *)GpeSpecialHandler + v13)) == 0 )
        {
          v15 = GpeWakeHandler;
LABEL_15:
          v15[v13] |= v12;
        }
      }
    }
  }
  if ( !v4 )
  {
    for ( j = 0; j < *((unsigned __int16 *)AcpiInformation + 51); ACPIWriteGpeEnableRegister(j++, v9) )
    {
      if ( AcpiPowerLeavingS0 )
      {
        v9 = (__int64 *)GpeCurEnable;
        *((_BYTE *)GpeCurEnable + j) &= ~*((_BYTE *)GpeWakeEnable + j);
      }
      else
      {
        *((_BYTE *)GpeCurEnable + j) |= *((_BYTE *)GpeWakeEnable + j) & (unsigned __int8)~*((_BYTE *)GpePending + j);
      }
      LOBYTE(v9) = *((_BYTE *)GpeCurEnable + j);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
