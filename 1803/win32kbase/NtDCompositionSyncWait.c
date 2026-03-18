/*
 * XREFs of NtDCompositionSyncWait @ 0x1C0143870
 * Callers:
 *     <none>
 * Callees:
 *     OpenDwmHandle @ 0x1C0011FF8 (OpenDwmHandle.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C014557C (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 */

__int64 __fastcall NtDCompositionSyncWait(int a1)
{
  PVOID v1; // rdi
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v5; // edx
  DirectComposition::CConnection *DefaultConnection; // rsi
  NTSTATUS v7; // eax
  __int64 v8; // r9
  int InitialState; // [rsp+20h] [rbp-50h]
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  void *EventHandle; // [rsp+A8h] [rbp+38h] BYREF
  void *v14; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  EventHandle = (void *)-1LL;
  v14 = (void *)-1LL;
  v1 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v4 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
    if ( !DefaultConnection )
      v4 = -1073741790;
    if ( v4 >= 0 )
    {
      v7 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      v1 = Object;
      v4 = v7;
      if ( v7 >= 0 )
      {
        v4 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v8, InitialState, &v14);
        if ( v4 >= 0 )
          v4 = DirectComposition::CConnection::Synchronize(DefaultConnection, v14, a1 != 0);
      }
    }
    if ( DefaultConnection )
      DirectComposition::CConnection::Release(DefaultConnection, v5);
    if ( v4 >= 0 )
    {
      Timeout.QuadPart = -20000000LL;
      v4 = KeWaitForSingleObject(v1, Executive, 0, 0, &Timeout);
    }
    if ( v1 )
      ObfDereferenceObject(v1);
  }
  if ( EventHandle != (void *)-1LL )
    ObCloseHandle(EventHandle, 0);
  return (unsigned int)v4;
}
