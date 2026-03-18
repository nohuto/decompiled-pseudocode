/*
 * XREFs of RIMGetKbdExId @ 0x1C005D58C
 * Callers:
 *     RIMQueryDev @ 0x1C005D938 (RIMQueryDev.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_S @ 0x1C005836C (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // edi
  int v5; // edx
  void *v6; // rax
  __int64 v7; // rbx
  struct _UNICODE_STRING InstanceName; // [rsp+30h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+70h] [rbp+30h] BYREF
  PVOID DataBlockObject; // [rsp+78h] [rbp+38h] BYREF

  DataBlockObject = 0LL;
  *(_QWORD *)&InstanceName.Length = 0LL;
  InstanceName.Buffer = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_S(
          (_DWORD)gRimLog,
          v5,
          1,
          19,
          (__int64)&WPP_b4f7f5930cc337ed86d67593361a7c26_Traceguids,
          (__int64)InstanceName.Buffer);
      }
      InOutBufferSize = 0;
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v6 = (void *)Win32AllocPoolNonPaged(InOutBufferSize, 0x656B7352u);
      v7 = (__int64)v6;
      if ( v6 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v6);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)(*(unsigned int *)(v7 + 56) + v7);
        Win32FreePool(v7);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
