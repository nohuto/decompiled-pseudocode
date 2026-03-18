/*
 * XREFs of ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C012F1A0
 * Callers:
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C012F020 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 * Callees:
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C012F2FC (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 */

NTSTATUS __fastcall DXGPRESENTHISTORYTOKENQUEUE::Initialize(DXGPRESENTHISTORYTOKENQUEUE *this)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  PRKSEMAPHORE *v4; // rdi
  NTSTATUS v5; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+98h] [rbp+18h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF

  if ( !DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(this) )
    return -1073741801;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v3 = EventHandle;
    *((_QWORD *)this + 9) = Object;
    ZwClose(v3);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    v4 = (PRKSEMAPHORE *)((char *)this + 64);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ObCreateObject(0LL, ExSemaphoreObjectType, &ObjectAttributes, 0LL, 0LL, 32, 0, 0, (char *)this + 64);
    v5 = result;
    if ( result >= 0 )
    {
      KeInitializeSemaphore(*v4, 2047, 2047);
      ObDeleteCapturedInsertInfo(*v4);
      return v5;
    }
  }
  return result;
}
