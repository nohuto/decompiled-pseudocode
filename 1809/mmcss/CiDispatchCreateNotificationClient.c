/*
 * XREFs of CiDispatchCreateNotificationClient @ 0x1C000C230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0004854 (WPP_SF_q.c)
 *     CiProcessDereference @ 0x1C000A7C0 (CiProcessDereference.c)
 *     CiProcessLocate @ 0x1C000B210 (CiProcessLocate.c)
 *     CiProcessCreate @ 0x1C000B420 (CiProcessCreate.c)
 */

__int64 __fastcall CiDispatchCreateNotificationClient(PIRP Irp, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  NTSTATUS v7; // ebx
  char *v8; // rax
  char *v9; // rbp
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  v5 = *(_QWORD *)(a2 + 48);
  v6 = CurrentProcess;
  v7 = 0;
  KeEnterCriticalRegion();
  v8 = (char *)CiProcessLocate(v6);
  P = v8;
  if ( !v8 )
  {
    v7 = CiProcessCreate(&P);
    if ( v7 < 0 )
      goto LABEL_13;
    v8 = (char *)P;
  }
  v9 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v10 = (char *)P;
  *((_QWORD *)v9 + 1) = KeGetCurrentThread();
  if ( *((_QWORD *)v10 + 1) )
    v7 = -1073741790;
  else
    *((_QWORD *)v10 + 1) = v5;
  *((_QWORD *)v9 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  if ( v7 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_q((__int64)WPP_GLOBAL_Control->AttachedDevice, v11, v12, *((_QWORD *)v10 + 1));
    CiProcessDereference(v10);
  }
  else
  {
    *(_QWORD *)(v5 + 24) = v10;
  }
LABEL_13:
  KeLeaveCriticalRegion();
  Irp->IoStatus.Status = v7;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v7;
}
