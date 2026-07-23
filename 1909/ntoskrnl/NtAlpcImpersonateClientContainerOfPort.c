/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x140884C00
 * Callers:
 *     <none>
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14000D5BC (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14000D668 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x14000E470 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x14000E540 (PoEnergyEstimationEnabled.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpcpCaptureIdMessage @ 0x14065394C (AlpcpCaptureIdMessage.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // r9
  struct _KTHREAD *v7; // rsi
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v9; // rdi
  struct _KTHREAD *v10; // r8
  void *Teb; // r8
  __int64 v12; // r8
  _DWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-20h] BYREF
  PVOID v18; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v18 = 0LL;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage((__int64)Message, &v20, &v19);
    v5 = ObReferenceObjectByHandle(
           PortHandle,
           0x20000u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL);
    v18 = Object;
    if ( v5 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v5 = AlpcpLookupMessage((__int64)Object, v20, v19, v6, &BugCheckParameter2);
        v14[1] = v5;
        if ( v5 >= 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
          {
            v7 = *(struct _KTHREAD **)(BugCheckParameter2 + 32);
            if ( v7 )
            {
              WorkOnBehalfThread = PsGetWorkOnBehalfThread(*(struct _KTHREAD **)(BugCheckParameter2 + 32), v14);
              v9 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread((__int64)WorkOnBehalfThread);
                if ( v14[0] )
                  ObDereferenceObjectDeferDelete(v9);
              }
              else if ( *(_QWORD *)&IoThreadToProcess(v7)[2].IdealNode[2] || PoEnergyEstimationEnabled() )
              {
                v9 = v7;
                PsImpersonateContainerOfThread((__int64)v7);
              }
              else
              {
                v9 = 0LL;
              }
              if ( v9 )
              {
                v10 = KeGetCurrentThread();
                if ( (v10->MiscFlags & 0x400) != 0 || v10->ApcStateIndex == 1 )
                  Teb = 0LL;
                else
                  Teb = v10->Teb;
                if ( Teb )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v9, &v17);
                  *(_QWORD *)(v12 + 696) = v17;
                }
              }
            }
            AlpcpUnlockMessage(BugCheckParameter2);
          }
          else
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v5 = -1073740029;
          }
        }
      }
      else
      {
        v5 = -1073741790;
      }
    }
  }
  if ( v18 )
    ObfDereferenceObject(v18);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
