/*
 * XREFs of PopRequestPowerIrp @ 0x140172660
 * Callers:
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     PopFxReleasePowerIrp @ 0x1401716E8 (PopFxReleasePowerIrp.c)
 *     PoRequestPowerIrp @ 0x140172630 (PoRequestPowerIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopMapInternalActionToIrpAction @ 0x140143558 (PopMapInternalActionToIrpAction.c)
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x140172B8C (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x140172E20 (PopDiagTraceIrpStart.c)
 *     IofCallDriverSpecifyReturn @ 0x1401732D0 (IofCallDriverSpecifyReturn.c)
 *     PopPepDeviceWaitWake @ 0x1402DCE74 (PopPepDeviceWaitWake.c)
 *     PopLogNotifyDevice @ 0x1402DE85C (PopLogNotifyDevice.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, ULONG a3, __int64 a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // rsi
  ULONG v8; // ebx
  char v11; // cl
  __int64 result; // rax
  IRP *v13; // rdi
  _QWORD *v14; // rbp
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v17; // rsi
  __int64 v18; // rdx
  PDEVICE_OBJECT DeviceObject; // rcx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  p_Type = (volatile __int64 *)&Irp->Type;
  v8 = a3;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_20;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)PopCurrentBroadcast )
    v11 = 1;
  else
LABEL_20:
    v11 = 0;
  LOBYTE(a3) = a2;
  result = PopAllocateIrp(a1, a2, a3, a2 != 0, v8, v11, a6, a4, a5, (__int64)&Irp, (__int64)&v25);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v13 = Irp;
    if ( Irp )
    {
      v14 = (_QWORD *)v25;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = v14;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v13);
        v13 = Irp;
        v14 = (_QWORD *)v25;
      }
      v17 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v17[-1].Parameters.Create.Options = 1;
        v17[-1].Parameters.Read.ByteOffset.LowPart = v8;
        v17[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
        if ( (_BYTE)PopCurrentBroadcast )
          v17[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                 qword_140418728,
                                                 WORD2(PopCurrentBroadcast) >> 12,
                                                 1);
        if ( (xmmword_140542350 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v13);
        PopQueueQuerySetIrp(v13);
      }
      else
      {
        v18 = v14[25];
        if ( v18 )
        {
          _m_prefetchw((const void *)(v18 + 32));
          v20 = *(_DWORD *)(v18 + 32);
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 32), v20, v20);
          }
          while ( v21 != v20 );
          v22 = v25;
          v23 = v20 & 1;
          *(_BYTE *)(v25 + 208) = v23;
          v23 ^= 1u;
          *(_BYTE *)(v22 + 209) = v23;
          v24 = v14[25];
          if ( v23 )
          {
            PopPepDeviceWaitWake(*(_QWORD *)(v24 + 56), 0LL);
          }
          else
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 228), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v24 + 232), 0, 0);
            v14[25] = 0LL;
          }
          v13 = Irp;
        }
        DeviceObject = v17[-1].DeviceObject;
        v17[-1].Parameters.Read.Length = v8;
        PopDiagTraceIrpStart(DeviceObject, v13);
        IofCallDriverSpecifyReturn(v17[-1].DeviceObject, v13, retaddr);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
