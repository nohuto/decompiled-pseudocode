/*
 * XREFs of ?VmBusSignalGuestEventPassive@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9240
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEventPassive(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  PVOID v8; // rdi
  __int64 v9; // rax
  PEPROCESS Process; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  Process = 0LL;
  v2 = PsLookupProcessByProcessId(*(HANDLE *)(v1 + 32), &Process);
  v4 = v2;
  if ( v2 >= 0 )
  {
    KeStackAttachProcess(Process, &ApcState);
    v6 = ObReferenceObjectByHandle(*(HANDLE *)(v1 + 24), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v8 = Object;
    if ( v6 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(v1 + 24);
      *(_QWORD *)(v9 + 32) = Process;
      WdLogEvent5_WdError(v9);
    }
    else
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      ObfDereferenceObject(v8);
    }
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(Process);
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v5 + 32) = v4;
    WdLogEvent5_WdError(v5);
  }
  return 0;
}
