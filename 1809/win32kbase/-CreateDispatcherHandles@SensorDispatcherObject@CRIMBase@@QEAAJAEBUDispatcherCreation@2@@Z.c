/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C007AC54
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C007AAD0 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ProtectHandle @ 0x1C0017508 (ProtectHandle.c)
 *     ?CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ @ 0x1C007ADD0 (-CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  HANDLE *v6; // rsi
  NTSTATUS Event; // eax
  NTSTATUS v8; // ebx
  POBJECT_TYPE *v9; // rcx
  struct _OBJECT_TYPE *v10; // r15
  int v11; // edx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((unsigned int *)a2 + 1);
  *((_DWORD *)this + 5) = v5;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  if ( (_DWORD)v5 == 1 )
  {
    v6 = (HANDLE *)((char *)this + 24);
    Event = ZwCreateEvent((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else
  {
    if ( (_DWORD)v5 != 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
    v6 = (HANDLE *)((char *)this + 24);
    Event = ZwCreateTimer((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  v8 = Event;
  if ( Event >= 0 )
  {
    v9 = (POBJECT_TYPE *)ExTimerObjectType;
    if ( *((_DWORD *)this + 5) == 1 )
      v9 = ExEventObjectType;
    v10 = *v9;
    v8 = ObReferenceObjectByHandle(*v6, 0x1F0003u, *v9, 1, &Object, 0LL);
    *((_QWORD *)this + 6) = Object;
    if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
    {
      if ( *((_DWORD *)this + 5) != 1 )
        MicrosoftTelemetryAssertTriggeredMsgKM("We expect protection requested for dispatcher of type Event only");
      ProtectHandle(*v6, v11, v10, 1);
      *((_BYTE *)this + 32) = 1;
    }
    if ( v8 >= 0 )
    {
      v8 = ObOpenObjectByPointer(*((PVOID *)this + 6), 0x200u, 0LL, 0x1F0003u, v10, 0, (PHANDLE)this + 5);
      if ( v8 >= 0 && (*((_DWORD *)a2 + 2) & 1) != 0 )
        return !CRIMBase::SensorDispatcherObject::MarshalingCompletion::CreateMarshalingEvent((CRIMBase::SensorDispatcherObject *)((char *)this + 56))
             ? 0xC0000001
             : 0;
    }
  }
  return (unsigned int)v8;
}
