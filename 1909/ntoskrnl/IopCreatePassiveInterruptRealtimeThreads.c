/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x1407835CC
 * Callers:
 *     IopInitializePassiveInterruptServices @ 0x140A1B9B0 (IopInitializePassiveInterruptServices.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1, void *a2)
{
  int v2; // edi
  __int64 result; // rax
  NTSTATUS v4; // ebx
  __int128 v5; // [rsp+50h] [rbp-30h] BYREF
  __int64 v6; // [rsp+60h] [rbp-20h]
  int v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+6Ch] [rbp-14h]
  __int128 v9; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  Handle = a2;
  Object = a1;
  v2 = 0;
  v8 = 0;
  v6 = 0LL;
  v5 = 0x30uLL;
  v7 = 512;
  v9 = 0LL;
  if ( !PassiveInterruptRealtimeWorkerCount )
    return 0LL;
  while ( 1 )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&Handle,
               0x1FFFFF,
               &v5,
               0LL,
               0LL,
               (__int64)IopPassiveInterruptRealtimeWorker,
               (__int64)&PassiveInterruptRealtimeWorkQueue,
               0LL,
               0LL);
    if ( (int)result < 0 )
      break;
    v4 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( v4 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority);
      ObfDereferenceObject(Object);
    }
    if ( ++v2 >= (unsigned int)(unsigned __int8)PassiveInterruptRealtimeWorkerCount )
      return 0LL;
  }
  return result;
}
