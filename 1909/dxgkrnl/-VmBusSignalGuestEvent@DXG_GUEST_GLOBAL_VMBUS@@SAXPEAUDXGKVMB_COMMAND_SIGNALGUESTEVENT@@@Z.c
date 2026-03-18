/*
 * XREFs of ?VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z @ 0x1C003DA14
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C003CF70 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent(struct DXGKVMB_COMMAND_SIGNALGUESTEVENT *a1)
{
  void *v1; // rdi
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  PVOID v13; // rdi
  __int64 v14; // rax
  PEPROCESS v15; // rcx
  ULONG64 v16; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v1 = (void *)*((_QWORD *)a1 + 4);
  if ( v1 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    Process = 0LL;
    v3 = PsLookupProcessByProcessId(v1, &Process);
    v7 = v3;
    if ( v3 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v5, v4, v6);
      *(_QWORD *)(v8 + 24) = *((_QWORD *)a1 + 4);
      *(_QWORD *)(v8 + 32) = v7;
      WdLogEvent5_WdError(v8);
      return;
    }
    KeStackAttachProcess(Process, &ApcState);
    v9 = ObReferenceObjectByHandle(*((HANDLE *)a1 + 3), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v13 = Object;
    if ( v9 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = *((_QWORD *)a1 + 3);
      *(_QWORD *)(v14 + 32) = Process;
      WdLogEvent5_WdError(v14);
    }
    else
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      ObfDereferenceObject(v13);
    }
    KeUnstackDetachProcess(&ApcState);
    v15 = Process;
    goto LABEL_11;
  }
  v16 = *((_QWORD *)a1 + 3);
  if ( v16 > MmUserProbeAddress )
  {
    KeSetEvent(*((PRKEVENT *)a1 + 3), 0, 0);
    if ( *((_BYTE *)a1 + 40) )
    {
      v15 = (PEPROCESS)v16;
LABEL_11:
      ObfDereferenceObject(v15);
    }
  }
}
