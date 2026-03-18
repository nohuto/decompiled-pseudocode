/*
 * XREFs of PipDmgInitReadGroupPolicy @ 0x140864060
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x140755BE4 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 */

__int64 PipDmgInitReadGroupPolicy()
{
  unsigned int v0; // ebx
  int v1; // edx
  int v2; // edx
  _DWORD v4[2]; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v5; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID P; // [rsp+78h] [rbp+18h] BYREF

  v4[1] = 0;
  P = 0LL;
  v0 = 0;
  v5 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\Kernel DMA Protection";
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v4;
  v4[0] = 9961622;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
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
