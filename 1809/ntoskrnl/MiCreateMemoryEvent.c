/*
 * XREFs of MiCreateMemoryEvent @ 0x14072CCD4
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14072CB8C (MiInitializeMemoryEvents.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ZwCreateEvent @ 0x1401B8BF0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObCreateSymbolicLink @ 0x1406B849C (ObCreateSymbolicLink.c)
 */

__int64 __fastcall MiCreateMemoryEvent(UNICODE_STRING *a1, int a2, void *a3, void *a4, int a5, _QWORD *a6, HANDLE *a7)
{
  UNICODE_STRING v7; // xmm0
  PVOID v8; // rbx
  __int64 v9; // r15
  int SymbolicLink; // edi
  NTSTATUS v13; // eax
  HANDLE *v14; // rcx
  HANDLE v15; // rcx
  UNICODE_STRING v17; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  HANDLE EventHandle; // [rsp+C0h] [rbp+4Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+5Fh] BYREF

  v7 = *a1;
  EventHandle = 0LL;
  v8 = 0LL;
  v9 = a2;
  v17 = v7;
  if ( a3 )
  {
    ++v17.Buffer;
    v17.Length -= 2;
    v17.MaximumLength -= 2;
  }
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.ObjectName = &v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = a4;
  SymbolicLink = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( SymbolicLink >= 0 )
  {
    v13 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v8 = Object;
    SymbolicLink = v13;
    if ( v13 >= 0 )
    {
      if ( !a5 )
      {
LABEL_8:
        v14 = a7;
        *a6 = v8;
        v8 = 0LL;
        *v14 = EventHandle;
        v15 = 0LL;
        EventHandle = 0LL;
        SymbolicLink = 0;
        goto LABEL_9;
      }
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 528;
      v18[1] = MiResolveMemoryEvent;
      ObjectAttributes.ObjectName = a1;
      ObjectAttributes.SecurityDescriptor = a4;
      v18[0] = 1LL;
      v18[2] = v9;
      SymbolicLink = ObCreateSymbolicLink((__int64 *)&Object, 0xF0001u, (int)&ObjectAttributes, (__int64)v18, 0);
      if ( SymbolicLink >= 0 )
      {
        ObCloseHandle(Object, 0);
        goto LABEL_8;
      }
    }
  }
  v15 = EventHandle;
LABEL_9:
  if ( v15 )
    ObCloseHandle(v15, 0);
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)SymbolicLink;
}
