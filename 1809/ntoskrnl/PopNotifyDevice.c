/*
 * XREFs of PopNotifyDevice @ 0x140569C68
 * Callers:
 *     PopWakeDeviceList @ 0x140569954 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140569AB8 (PopSleepDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopMapInternalActionToIrpAction @ 0x140143558 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14014357C (PoFxActivateDeviceForSystemTransition.c)
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x140172B8C (PopQueueQuerySetIrp.c)
 *     PopLogNotifyDevice @ 0x1402DE85C (PopLogNotifyDevice.c)
 */

NTSTATUS __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r9
  ULONG v7; // r15d
  int v8; // r10d
  int v9; // esi
  _BYTE *v10; // r14
  PIRP v11; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v13; // rax
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a1 + 464) || **(_QWORD **)(a1 + 56) != *(_QWORD *)(a2 + 64);
  v7 = PopMapInternalActionToIrpAction(qword_140418728, *(_DWORD *)(a1 + 4), v4);
  v9 = v8;
  if ( v7 == 7 && *v6 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
  {
    *v6 = 0LL;
    v9 = *(_DWORD *)(a1 + 4);
  }
  PopAllocateIrp(*(struct _DEVICE_OBJECT **)(a2 + 48), v5, *(_BYTE *)a1, 0, v9, 1, 0, 0LL, 0LL, &Irp, &v18);
  v10 = (_BYTE *)v18;
  v11 = Irp;
  *(_QWORD *)(v18 + 216) = a2;
  v10[224] = 0;
  CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v9;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
  v13 = v11->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v13[-1].Context = v10;
  v13[-1].Control = -32;
  if ( (xmmword_140542350 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v11);
  if ( v9 > 1 && (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x72496F50u);
    LOBYTE(v15) = *(_BYTE *)a1 == 2;
    PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, v15, v16);
    v10[224] = 1;
  }
  return PopQueueQuerySetIrp(v11);
}
