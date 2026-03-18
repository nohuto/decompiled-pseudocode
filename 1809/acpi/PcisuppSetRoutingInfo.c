/*
 * XREFs of PcisuppSetRoutingInfo @ 0x1C008FAD0
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C00112C8 (ACPIAmliBuildObjectPathname.c)
 *     IrqPolicyGetSubKey @ 0x1C0092808 (IrqPolicyGetSubKey.c)
 */

__int64 __fastcall PcisuppSetRoutingInfo(__int64 a1, __int64 a2)
{
  char *Data; // rbx
  __int64 result; // rax
  int v5; // edi
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 DataSize; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+30h] BYREF
  char *v11; // [rsp+78h] [rbp+38h] BYREF

  Data = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Routing Info", 1LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Flags");
    v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (PVOID)(a2 + 12), 1u);
    if ( v5 < 0 )
    {
LABEL_8:
      ZwClose(KeyHandle);
      return (unsigned int)v5;
    }
    if ( *(_QWORD *)a2 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)a2 + 552LL);
      v11 = 0LL;
      v5 = ACPIAmliBuildObjectPathname(v7, &v11, 0);
      if ( v5 < 0 )
      {
LABEL_6:
        if ( Data )
          ExFreePoolWithTag(Data, 0);
        goto LABEL_8;
      }
      Data = v11;
      RtlInitUnicodeString(&DestinationString, L"LinkNode");
      DataSize = -1LL;
      do
        ++DataSize;
      while ( Data[DataSize] );
      v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"StaticVector");
      v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (PVOID)(a2 + 8), 4u);
    }
    v5 = v6;
    goto LABEL_6;
  }
  return result;
}
