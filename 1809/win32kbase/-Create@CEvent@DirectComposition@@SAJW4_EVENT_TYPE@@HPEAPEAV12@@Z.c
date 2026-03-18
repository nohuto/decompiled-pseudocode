/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C005C714
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005BCE4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C005B9E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C005C80C (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        enum _EVENT_TYPE a1,
        int a2,
        struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v4; // rax
  DirectComposition::CEvent *v5; // rdi
  NTSTATUS v6; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *EventHandle; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 )
    v4 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76654344u);
  else
    v4 = (DirectComposition::CEvent *)Win32AllocPoolZInit(0x10uLL, 0x76654344u);
  v5 = v4;
  v6 = v4 == 0LL ? 0xC0000017 : 0;
  if ( v4 )
  {
    EventHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v6 < 0 )
      goto LABEL_10;
    v6 = DirectComposition::CEvent::Initialize(v5, EventHandle, 1);
    ObCloseHandle(EventHandle, 0);
  }
  if ( v6 >= 0 )
  {
    *a3 = v5;
    return (unsigned int)v6;
  }
LABEL_10:
  if ( v5 )
    DirectComposition::CEvent::`scalar deleting destructor'(v5);
  return (unsigned int)v6;
}
