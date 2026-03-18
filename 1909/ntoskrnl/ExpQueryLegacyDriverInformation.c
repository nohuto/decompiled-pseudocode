/*
 * XREFs of ExpQueryLegacyDriverInformation @ 0x140909588
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetLegacyVetoList @ 0x14066F0F8 (IoGetLegacyVetoList.c)
 */

__int64 __fastcall ExpQueryLegacyDriverInformation(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned __int16 Length; // dx
  unsigned int v7; // edi
  PCWSTR SourceString; // [rsp+28h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h]

  SourceString = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = IoGetLegacyVetoList((PVOID *)&SourceString, &v10);
  v5 = result;
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Length = DestinationString.Length;
    v7 = DestinationString.Length + 24;
    v11 = v7;
    if ( v7 <= *a2 )
    {
      *(_DWORD *)a1 = v10;
      *(_WORD *)(a1 + 8) = Length;
      *(_QWORD *)(a1 + 16) = a1 + 24;
      memmove((void *)(a1 + 24), DestinationString.Buffer, Length);
    }
    else
    {
      v5 = -2147483643;
    }
    if ( SourceString )
      ExFreePoolWithTag((PVOID)SourceString, 0);
    *a2 = v7;
    return v5;
  }
  return result;
}
