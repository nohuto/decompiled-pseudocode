/*
 * XREFs of NtQueryEvent @ 0x1406DDAE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r12
  PULONG v8; // rbx
  __int64 v9; // rcx
  int v10; // esi
  int v11; // r15d
  int v12; // r14d
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  if ( EventInformationClass )
    return -1073741821;
  if ( EventInformationLength != 8 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(EventInformation, 8uLL, 4u);
    v8 = ReturnLength;
    if ( ReturnLength )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v8 = ReturnLength;
  }
  v10 = ObReferenceObjectByHandle(EventHandle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  if ( v10 >= 0 )
  {
    v11 = *((_DWORD *)Object + 1);
    v12 = *(_BYTE *)Object & 0x7F;
    if ( PreviousMode )
    {
      *(_DWORD *)EventInformation = v12;
      *((_DWORD *)EventInformation + 1) = v11;
      if ( v8 )
        *v8 = 8;
    }
    else
    {
      *(_DWORD *)EventInformation = v12;
      *((_DWORD *)EventInformation + 1) = v11;
      if ( v8 )
        *v8 = 8;
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v10;
}
