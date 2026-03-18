/*
 * XREFs of MiCreateMemoryEvent @ 0x14074EFD4
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14074EE8C (MiInitializeMemoryEvents.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ZwCreateEvent @ 0x1401C09D0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     ObCreateSymbolicLink @ 0x1406D92D8 (ObCreateSymbolicLink.c)
 */

__int64 __fastcall MiCreateMemoryEvent(UNICODE_STRING *a1, int a2, void *a3, void *a4, int a5, _QWORD *a6, HANDLE *a7)
{
  UNICODE_STRING v7; // xmm0
  PVOID v8; // rbx
  __int64 v11; // r15
  int SymbolicLink; // edi
  NTSTATUS v13; // eax
  HANDLE *v14; // rcx
  HANDLE v15; // rcx
  UNICODE_STRING v17; // [rsp+30h] [rbp-41h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-31h] BYREF
  NTSTATUS (__fastcall *v19)(__int64, __int64, __int64, PVOID *); // [rsp+48h] [rbp-29h]
  __int64 v20; // [rsp+50h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  HANDLE EventHandle; // [rsp+C0h] [rbp+4Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+5Fh] BYREF

  v7 = *a1;
  *(&ObjectAttributes.Length + 1) = 0;
  v8 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  EventHandle = 0LL;
  v11 = a2;
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
      v18[1] = 0;
      v19 = MiResolveMemoryEvent;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 528;
      ObjectAttributes.ObjectName = a1;
      ObjectAttributes.SecurityDescriptor = a4;
      v18[0] = 1;
      v20 = v11;
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
