/*
 * XREFs of IrqpAllocateInstancePath @ 0x1C009815C
 * Callers:
 *     IrqTraceAffinityPolicy @ 0x1C0097FC8 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall IrqpAllocateInstancePath(PDEVICE_OBJECT Pdo, __int64 a2)
{
  PVOID Data; // rdi
  ULONG Size; // eax
  _WORD *v6; // r8
  __int64 v7; // rcx
  __int16 result; // ax
  __int16 v9; // ax
  const wchar_t *v10; // r8
  __int64 v11; // rcx
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  Data = 0LL;
  if ( !Pdo )
    goto LABEL_20;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, 0, 0LL, (PULONG)&NumberOfBytes, &Type) == -1073741789 )
  {
    Size = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes >= 0xFFFE )
      goto LABEL_6;
    Data = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x49706341u);
    if ( !Data )
      goto LABEL_20;
  }
  Size = NumberOfBytes;
LABEL_6:
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, Size, Data, (PULONG)&NumberOfBytes, &Type) < 0 )
  {
    ExFreePoolWithTag(Data, 0);
    Data = 0LL;
  }
  if ( Data )
  {
    v6 = Data;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v7 = 0x7FFFLL;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v7;
    }
    while ( v7 );
    if ( v7 )
      result = 0x7FFF - v7;
    else
      result = 0;
    if ( v7 && a2 )
    {
      *(_QWORD *)(a2 + 8) = Data;
LABEL_17:
      v9 = 2 * result;
      *(_WORD *)a2 = v9;
      result = v9 + 2;
      *(_WORD *)(a2 + 2) = result;
      return result;
    }
    return result;
  }
LABEL_20:
  *(_QWORD *)a2 = 0LL;
  v10 = &word_1C006FF24;
  *(_QWORD *)(a2 + 8) = 0LL;
  v11 = 0x7FFFLL;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( v11 )
    result = 0x7FFF - v11;
  else
    result = 0;
  if ( v11 && a2 )
  {
    *(_QWORD *)(a2 + 8) = &word_1C006FF24;
    goto LABEL_17;
  }
  return result;
}
