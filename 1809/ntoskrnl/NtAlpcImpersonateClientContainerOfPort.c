/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x14084B180
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     PsGetWorkOnBehalfThread @ 0x1400ACC54 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400ACD00 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140638B00 (AlpcpCaptureIdMessage.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _KTHREAD *v6; // rsi
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v8; // rdi
  struct _KTHREAD *v9; // r8
  void *Teb; // r8
  __int64 v11; // r8
  _DWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v14; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v16; // [rsp+48h] [rbp-20h]
  _QWORD v17[3]; // [rsp+50h] [rbp-18h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = 0LL;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage((__int64)Message, &v19, &v18);
    v5 = ObReferenceObjectByHandle(
           PortHandle,
           0x20000u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL);
    v16 = Object;
    if ( v5 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v5 = AlpcpLookupMessage((__int64)Object, v19, v18, &v14);
        v13[1] = v5;
        if ( v5 >= 0 )
        {
          if ( (*(_DWORD *)(v14 + 40) & 0x80u) == 0 )
          {
            v6 = *(struct _KTHREAD **)(v14 + 32);
            if ( v6 )
            {
              WorkOnBehalfThread = PsGetWorkOnBehalfThread(*(struct _KTHREAD **)(v14 + 32), v13);
              v8 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread((__int64)WorkOnBehalfThread);
                if ( v13[0] )
                  ObDereferenceObjectDeferDelete(v8);
              }
              else if ( *(_QWORD *)&IoThreadToProcess(v6)[2].ThreadSeed[14] || PoEnergyEstimationEnabled() )
              {
                v8 = v6;
                PsImpersonateContainerOfThread((__int64)v6);
              }
              else
              {
                v8 = 0LL;
              }
              if ( v8 )
              {
                v9 = KeGetCurrentThread();
                if ( (v9->MiscFlags & 0x400) != 0 || v9->ApcStateIndex == 1 )
                  Teb = 0LL;
                else
                  Teb = v9->Teb;
                if ( Teb )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v8, v17);
                  *(_QWORD *)(v11 + 696) = v17[0];
                }
              }
            }
            AlpcpUnlockMessage(v14);
          }
          else
          {
            AlpcpUnlockMessage(v14);
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
  if ( v16 )
    ObfDereferenceObject(v16);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
