/*
 * XREFs of SmCreateEvent @ 0x140787E00
 * Callers:
 *     SmRegistrationCtxStart @ 0x140787DA8 (SmRegistrationCtxStart.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401C09D0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmCreateEvent(__int64 a1, PVOID *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  PVOID v5; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v3 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  if ( v3 >= 0 )
  {
    v4 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v5 = Object;
    v3 = v4;
    if ( v4 >= 0 )
    {
      *a2 = Object;
      v5 = 0LL;
      v3 = 0;
    }
    if ( v5 )
      ObfDereferenceObject(v5);
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)v3;
}
