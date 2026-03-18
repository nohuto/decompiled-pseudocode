/*
 * XREFs of SmCreateEvent @ 0x14078A260
 * Callers:
 *     SmRegistrationCtxStart @ 0x14078A208 (SmRegistrationCtxStart.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401C1550 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
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
