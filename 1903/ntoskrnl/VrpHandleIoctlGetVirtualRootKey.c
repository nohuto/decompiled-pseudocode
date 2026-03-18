/*
 * XREFs of VrpHandleIoctlGetVirtualRootKey @ 0x140842460
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140841570 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x1400064B4 (PsIsThreadInSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsGetJobSilo @ 0x140307C10 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlGetVirtualRootKey(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  int JobSilo; // ebx
  struct _LIST_ENTRY *v10; // rdx
  struct _LIST_ENTRY *v11; // rax
  struct _LIST_ENTRY *v12; // r14
  ULONG v13; // ecx
  _QWORD *v14; // rcx
  HANDLE v15; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Object[0] = 0LL;
  KeyHandle = 0LL;
  if ( a2 < 0x10 || *(_DWORD *)(a1 + 8) > 2u )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 4, (__int64)PsJobType, a3, 0x52566D43u, Object, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object[0]);
      if ( JobSilo >= 0 )
      {
        if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), (__int64)Object[1]) )
        {
          JobSilo = -1073741811;
        }
        else
        {
          v11 = PsAttachSiloToCurrentThread(v10);
          ObjectAttributes.RootDirectory = 0LL;
          v12 = v11;
          ObjectAttributes.Length = 48;
          v13 = 1088;
          if ( a3 != 1 )
            v13 = 576;
          ObjectAttributes.Attributes = v13;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&VrpRootKeyPaths[8 * *(int *)(a1 + 8)];
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          JobSilo = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
          if ( JobSilo >= 0 )
          {
            v14 = a5;
            *a6 = 8;
            v15 = KeyHandle;
            KeyHandle = 0LL;
            JobSilo = 0;
            *v14 = v15;
          }
          PsDetachSiloFromCurrentThread(v12);
        }
      }
    }
    if ( Object[0] )
      ObfDereferenceObjectWithTag(Object[0], 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
