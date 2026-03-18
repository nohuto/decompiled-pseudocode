/*
 * XREFs of PopRequestPowerIrp @ 0x140172EB0
 * Callers:
 *     PopScanIdleList @ 0x1400EDD84 (PopScanIdleList.c)
 *     PoRequestPowerIrp @ 0x140172E80 (PoRequestPowerIrp.c)
 *     PopFxReleasePowerIrp @ 0x14017EEC0 (PopFxReleasePowerIrp.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopMapInternalActionToIrpAction @ 0x14015EC44 (PopMapInternalActionToIrpAction.c)
 *     PopAllocateIrp @ 0x140173114 (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x140173474 (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x140173718 (PopDiagTraceIrpStart.c)
 *     PopFxGetDeviceDStateReason @ 0x14017B568 (PopFxGetDeviceDStateReason.c)
 *     IofCallDriverSpecifyReturn @ 0x140180740 (IofCallDriverSpecifyReturn.c)
 *     PopPepDeviceWaitWake @ 0x14019D5AC (PopPepDeviceWaitWake.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopLogNotifyDevice @ 0x1402FB5CC (PopLogNotifyDevice.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, ULONG a3, __int64 a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // r14
  ULONG v8; // ebx
  char v11; // cl
  __int64 result; // rax
  IRP *v13; // rdi
  _QWORD *v14; // rsi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdx
  PDEVICE_OBJECT DeviceObject; // rcx
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  KIRQL v24; // al
  KIRQL v25; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  p_Type = (volatile __int64 *)&Irp->Type;
  v8 = a3;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_21;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  v11 = 1;
  if ( !(_BYTE)PopCurrentBroadcast )
LABEL_21:
    v11 = 0;
  LOBYTE(a3) = a2;
  result = PopAllocateIrp(a1, a2, a3, a2 != 0, v8, v11, a6, a4, a5, (__int64)&Irp, (__int64)&v27);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v13 = Irp;
    if ( Irp )
    {
      v14 = (_QWORD *)v27;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = v14;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v13);
        v13 = Irp;
        v14 = (_QWORD *)v27;
      }
      v17 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v17[-1].Parameters.Create.Options = 1;
        v17[-1].Parameters.Read.ByteOffset.LowPart = v8;
        if ( (_BYTE)PopCurrentBroadcast && (!v14[25] || (unsigned int)PopFxGetDeviceDStateReason() == 1) )
        {
          v17[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                 qword_140442FC8,
                                                 WORD2(PopCurrentBroadcast) >> 12,
                                                 1);
          v17[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
        }
        v18 = v14[25];
        if ( v18 && a2 == 2 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 816), 0, 0) & 0x20) != 0 )
          {
            _m_prefetchw((const void *)(v18 + 32));
            if ( (_InterlockedOr((volatile signed __int32 *)(v18 + 32), 0) & 0x2000) != 0 )
            {
              v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 1144));
              *(_DWORD *)(v18 + 1172) |= 1u;
              v25 = v24;
              _InterlockedIncrement((volatile signed __int32 *)(v18 + 1152));
              KxReleaseSpinLock((PKSPIN_LOCK)(v18 + 1144));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              __writecr8(v25);
            }
          }
          v13 = Irp;
        }
        if ( (xmmword_140572410 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v13);
        PopQueueQuerySetIrp(v13);
      }
      else
      {
        v19 = v14[25];
        if ( v19 )
        {
          _m_prefetchw((const void *)(v19 + 32));
          v21 = _InterlockedOr((volatile signed __int32 *)(v19 + 32), 0);
          v22 = v27;
          v21 &= 1u;
          *(_BYTE *)(v27 + 208) = v21;
          v21 ^= 1u;
          *(_BYTE *)(v22 + 209) = v21;
          v23 = v14[25];
          if ( v21 )
          {
            PopPepDeviceWaitWake(*(_QWORD *)(v23 + 56), 0LL);
          }
          else
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 236), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v23 + 240), 0, 0);
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
