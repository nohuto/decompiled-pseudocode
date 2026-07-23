/*
 * XREFs of PipDmgInitReadGroupPolicy @ 0x14082AB10
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x14073C340 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 */

__int64 PipDmgInitReadGroupPolicy()
{
  unsigned int v0; // ebx
  int v1; // edx
  int v2; // edx
  int v4; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v5; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID P; // [rsp+78h] [rbp+18h] BYREF

  P = 0LL;
  v5 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\Kernel DMA Protection";
  v4 = 9961622;
  v0 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v4;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( IopGetRegistryValue(KeyHandle, L"DeviceEnumerationPolicy", 0, &P) >= 0
      && *((_DWORD *)P + 1) == 4
      && *((_DWORD *)P + 3) == 4 )
    {
      v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      if ( v1 )
      {
        v2 = v1 - 1;
        if ( v2 )
          v0 = v2 == 1;
        else
          v0 = 2;
      }
      else
      {
        v0 = 3;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  return v0;
}
