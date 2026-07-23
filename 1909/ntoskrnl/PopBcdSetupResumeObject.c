/*
 * XREFs of PopBcdSetupResumeObject @ 0x14074174C
 * Callers:
 *     PopBcdSetPendingResume @ 0x140728C24 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073E530 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall PopBcdSetupResumeObject(HANDLE BcdObjectHandle)
{
  ULONG BufferSize; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  BCD_FLAGS v5; // r8d
  NTSTATUS v6; // ebx
  BCD_FLAGS v7; // r8d
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  BufferSize = IoArcBootDeviceName.Length + 22;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferSize, 0x64634250u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, BufferSize);
    *v4 = 2;
    memmove(v4 + 5, IoArcBootDeviceName.Buffer, IoArcBootDeviceName.Length);
    v6 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x21000001u, v5, v4, BufferSize);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
      v6 = BcdSetElementDataWithFlags(
             BcdObjectHandle,
             0x22000002u,
             v7,
             DestinationString.Buffer,
             DestinationString.Length + 2);
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
