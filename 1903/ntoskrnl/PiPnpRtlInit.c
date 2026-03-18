/*
 * XREFs of PiPnpRtlInit @ 0x140755F28
 * Callers:
 *     PnpBootPhaseComplete @ 0x140754ED4 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     _PnpCtxOpenMachine @ 0x140755030 (_PnpCtxOpenMachine.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407556A0 (PiDrvDbEnumDriverStoreNodes.c)
 *     _PnpCtxSetNtPlugPlayRoutine @ 0x1407560BC (_PnpCtxSetNtPlugPlayRoutine.c)
 *     PiDrvDbInit @ 0x1407560E8 (PiDrvDbInit.c)
 *     _PnpCtxRegisterMachineNode @ 0x140933BDC (_PnpCtxRegisterMachineNode.c)
 */

__int64 __fastcall PiPnpRtlInit(unsigned int a1)
{
  int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r9d
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+50h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0;
  Handle = 0LL;
  if ( a1 )
    return (unsigned int)PiDrvDbInit(a1);
  qword_14045FFB8 = (__int64)&PiPnpRtlActiveOperations;
  PiPnpRtlActiveOperations = (__int64)&PiPnpRtlActiveOperations;
  v2 = ExInitializeResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  if ( v2 >= 0 )
  {
    v2 = ExInitializeResourceLite(&PiPnpRtlActiveOperationsLock);
    if ( v2 >= 0 )
    {
      v2 = PnpCtxOpenMachine(v4, 0LL, v5, 0LL, v14, v15, &PiPnpRtlCtx);
      if ( v2 >= 0 )
      {
        if ( (MEMORY[0xFFFFF780000002F0] & 0x400) == 0
          || (*(_QWORD *)&PiPnpRtlCtx ? (v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) : (v11 = 0LL),
              (int)SysCtxRegOpenKey(v11, 2147483650LL, (__int64)L"DEVICES", 0, 0x2000000u, (__int64)&Handle) < 0
           || (v2 = PnpCtxRegisterMachineNode(v12, (unsigned int)L"DEVICES", 2, v13, (__int64)Handle),
               ZwClose(Handle),
               v2 >= 0)) )
        {
          v2 = PiDrvDbEnumDriverStoreNodes(
                 (unsigned __int8 (__fastcall *)(_QWORD, __int64))PiPnpRtlRegisterDriverMachineNodeCallback,
                 (__int64)&v16);
          if ( v2 >= 0 )
          {
            v2 = v16;
            if ( v16 >= 0 )
            {
              v2 = PnpCtxSetNtPlugPlayRoutine(v6, 1LL, PiPnpRtlGetDeviceNtPropertyRoutine);
              if ( v2 >= 0 )
              {
                v2 = PnpCtxSetNtPlugPlayRoutine(v7, 2LL, PiPnpRtlGetDeviceStatus);
                if ( v2 >= 0 )
                {
                  v2 = PnpCtxSetNtPlugPlayRoutine(v8, 3LL, PiPnpRtlGetDeviceRelatedDeviceRoutine);
                  if ( v2 >= 0 )
                  {
                    v2 = PnpCtxSetNtPlugPlayRoutine(v9, 4LL, PiPnpRtlGetDeviceRelationsList);
                    if ( v2 >= 0 )
                    {
                      v2 = PnpCtxSetNtPlugPlayRoutine(v10, 5LL, PiPnpRtlGetDeviceInterfaceEnabled);
                      if ( v2 >= 0 )
                      {
                        _InterlockedExchange64(
                          (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 488LL),
                          (__int64)PiPnpRtlObjectActionCallback);
                        _InterlockedExchange64(
                          (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 504LL),
                          (__int64)PiPnpRtlCmActionCallback);
                        _InterlockedExchange64(
                          (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 496LL),
                          (__int64)PiPnpRtlObjectEventCallback);
                        return (unsigned int)PiDrvDbInit(a1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
