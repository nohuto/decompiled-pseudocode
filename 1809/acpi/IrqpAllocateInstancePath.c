/*
 * XREFs of IrqpAllocateInstancePath @ 0x1C00B3478
 * Callers:
 *     IrqTraceAffinityPolicy @ 0x1C00938A4 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall IrqpAllocateInstancePath(PDEVICE_OBJECT Pdo, __int64 a2)
{
  PVOID Data; // rdi
  ULONG Size; // eax
  const wchar_t *v6; // rdx
  __int16 result; // ax
  __int64 v8; // rcx
  _WORD *v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // ax
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+8h] BYREF
  ULONG Type; // [rsp+60h] [rbp+18h] BYREF

  Data = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( !Pdo )
    goto LABEL_8;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, 0, 0LL, (PULONG)&NumberOfBytes, &Type) == -1073741789 )
  {
    Size = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes >= 0xFFFE )
      goto LABEL_6;
    Data = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x49706341u);
    if ( !Data )
    {
LABEL_8:
      *(_QWORD *)a2 = 0LL;
      v6 = &word_1C006E654;
      *(_QWORD *)(a2 + 8) = 0LL;
      result = 0x7FFF;
      v8 = 0x7FFFLL;
      while ( *v6 )
      {
        ++v6;
        if ( !--v8 )
          return result;
      }
      result = 0x7FFF - v8;
      if ( a2 )
      {
        *(_QWORD *)(a2 + 8) = &word_1C006E654;
        goto LABEL_21;
      }
      return result;
    }
  }
  Size = NumberOfBytes;
LABEL_6:
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, Size, Data, (PULONG)&NumberOfBytes, &Type) < 0 )
  {
    ExFreePoolWithTag(Data, 0);
    goto LABEL_8;
  }
  if ( !Data )
    goto LABEL_8;
  v9 = Data;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  result = 0x7FFF;
  v10 = 0x7FFFLL;
  while ( *v9 )
  {
    ++v9;
    if ( !--v10 )
      return result;
  }
  result = 0x7FFF - v10;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 8) = Data;
LABEL_21:
    v11 = 2 * result;
    *(_WORD *)a2 = v11;
    result = v11 + 2;
    *(_WORD *)(a2 + 2) = result;
  }
  return result;
}
