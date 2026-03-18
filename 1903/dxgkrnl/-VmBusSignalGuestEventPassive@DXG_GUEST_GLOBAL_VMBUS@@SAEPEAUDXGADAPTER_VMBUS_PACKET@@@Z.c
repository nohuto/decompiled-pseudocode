/*
 * XREFs of ?VmBusSignalGuestEventPassive@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEventPassive(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PVOID v12; // rdi
  __int64 v13; // rax
  PEPROCESS Process; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  memset(&ApcState, 0, sizeof(ApcState));
  Process = 0LL;
  v2 = PsLookupProcessByProcessId(*(HANDLE *)(v1 + 32), &Process);
  v6 = v2;
  if ( v2 >= 0 )
  {
    KeStackAttachProcess(Process, &ApcState);
    v8 = ObReferenceObjectByHandle(*(HANDLE *)(v1 + 24), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v12 = Object;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(v1 + 24);
      *(_QWORD *)(v13 + 32) = Process;
      WdLogEvent5_WdError(v13);
    }
    else
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      ObfDereferenceObject(v12);
    }
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(Process);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v7 + 24) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v7 + 32) = v6;
    WdLogEvent5_WdError(v7);
  }
  return 0;
}
