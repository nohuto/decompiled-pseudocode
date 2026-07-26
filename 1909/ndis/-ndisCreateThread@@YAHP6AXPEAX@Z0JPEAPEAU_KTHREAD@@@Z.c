/*
 * XREFs of ?ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z @ 0x1C0031D24
 * Callers:
 *     ?ndisCreateReceiveWorkerThreadPool@@YAHXZ @ 0x1C0031C40 (-ndisCreateReceiveWorkerThreadPool@@YAHXZ.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C007CABC (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ndisCreateThread(void (*a1)(void *), void *a2, KPRIORITY a3, PVOID *a4)
{
  int v6; // edx
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  struct _KTHREAD *v9; // rcx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+10h] BYREF

  ThreadHandle = a1;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v7 = PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)ndisReceiveWorkerThread,
         a2);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        12,
        80,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        v7);
    }
  }
  else
  {
    v8 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v9 = (struct _KTHREAD *)Object;
    v7 = v8;
    *a4 = Object;
    if ( a3 )
      KeSetPriorityThread(v9, a3);
    ZwClose(ThreadHandle);
  }
  return (unsigned int)v7;
}
