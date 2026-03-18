/*
 * XREFs of ?Initialize@CFlipManager@@IEAAJXZ @ 0x1C0061404
 * Callers:
 *     ?ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C00605D0 (-ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::Initialize(CFlipManager *this)
{
  PVOID v2; // rsi
  PVOID v3; // rdi
  NTSTATUS v4; // r14d
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *EventHandle; // [rsp+A0h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+48h] BYREF
  PVOID v12; // [rsp+B8h] [rbp+50h] BYREF

  *((_BYTE *)this + 32) |= 1u;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v2 = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  v3 = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v4 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v4 >= 0 )
  {
    v5 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v2 = Object;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( v4 >= 0 )
      {
        v6 = ObReferenceObjectByHandle(Handle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v12, 0LL);
        v3 = v12;
        v4 = v6;
        if ( v6 >= 0 )
        {
          *((_QWORD *)this + 27) = v2;
          v2 = 0LL;
          *((_QWORD *)this + 28) = v3;
          v3 = 0LL;
        }
      }
    }
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
