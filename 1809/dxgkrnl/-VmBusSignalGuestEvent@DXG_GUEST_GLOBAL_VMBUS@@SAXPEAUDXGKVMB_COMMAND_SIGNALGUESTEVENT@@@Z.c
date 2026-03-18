/*
 * XREFs of ?VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z @ 0x1C003748C
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0036A40 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent(struct DXGKVMB_COMMAND_SIGNALGUESTEVENT *a1)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  PVOID v9; // rdi
  __int64 v10; // rax
  PEPROCESS v11; // rcx
  ULONG64 v12; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 4);
  if ( v2 )
  {
    Process = 0LL;
    v3 = PsLookupProcessByProcessId(v2, &Process);
    v5 = v3;
    if ( v3 < 0 )
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = *((_QWORD *)a1 + 4);
      *(_QWORD *)(v6 + 32) = v5;
      WdLogEvent5_WdError(v6);
      return;
    }
    KeStackAttachProcess(Process, &ApcState);
    v7 = ObReferenceObjectByHandle(*((HANDLE *)a1 + 3), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v9 = Object;
    if ( v7 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v10 + 24) = *((_QWORD *)a1 + 3);
      *(_QWORD *)(v10 + 32) = Process;
      WdLogEvent5_WdError(v10);
    }
    else
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      ObfDereferenceObject(v9);
    }
    KeUnstackDetachProcess(&ApcState);
    v11 = Process;
    goto LABEL_11;
  }
  v12 = *((_QWORD *)a1 + 3);
  if ( v12 > MmUserProbeAddress )
  {
    KeSetEvent(*((PRKEVENT *)a1 + 3), 0, 0);
    if ( *((_BYTE *)a1 + 40) )
    {
      v11 = (PEPROCESS)v12;
LABEL_11:
      ObfDereferenceObject(v11);
    }
  }
}
