/*
 * XREFs of RIMGetKbdExId @ 0x1C00891A0
 * Callers:
 *     RIMQueryDev @ 0x1C0088FEC (RIMQueryDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  void *v5; // rax
  __int64 v6; // rdi
  struct _UNICODE_STRING InstanceName; // [rsp+30h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+70h] [rbp+30h] BYREF
  PVOID DataBlockObject; // [rsp+78h] [rbp+38h] BYREF

  DataBlockObject = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 >= 0 )
    {
      WPP_RECORDER_SF_S(
        gRimLog,
        3u,
        0x15u,
        0x12u,
        (__int64)&WPP_5e106e1955d43df0565e3144618cade0_Traceguids,
        (const struct _MCGEN_TRACE_CONTEXT *)InstanceName.Buffer);
      InOutBufferSize = 0;
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v5 = (void *)Win32AllocPoolNonPaged(InOutBufferSize, 0x656B7352u);
      v6 = (__int64)v5;
      if ( v5 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v5);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)(*(unsigned int *)(v6 + 56) + v6);
        Win32FreePool(v6);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
