/*
 * XREFs of PiInitCacheGroupInformation @ 0x140A1765C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x14071DBA0 (IopOpenRegistryKeyEx.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x140A17730 (PnpRegMultiSzToUnicodeStrings.c)
 */

NTSTATUS PiInitCacheGroupInformation()
{
  __int16 v0; // r14
  NTSTATUS result; // eax
  NTSTATUS RegistryValue; // ebx
  void *v3; // rsi
  PVOID v4; // rdi
  NTSTATUS v5; // eax
  UNICODE_STRING v6; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+60h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+38h] BYREF
  void *v9; // [rsp+70h] [rbp+40h] BYREF
  PVOID P; // [rsp+78h] [rbp+48h] BYREF

  *(_DWORD *)(&v6.MaximumLength + 1) = 0;
  v0 = 0;
  v6.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ServiceGroupOrder";
  v7 = 0;
  *(_DWORD *)&v6.Length = 9044104;
  result = IopOpenRegistryKeyEx(&Handle, 0LL, &v6, 0x20019u);
  if ( result >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"List", 0, &P);
    ZwClose(Handle);
    v3 = 0LL;
    v9 = 0LL;
    if ( RegistryValue < 0 )
      return RegistryValue;
    v4 = P;
    if ( *((_DWORD *)P + 1) == 7 && *((_DWORD *)P + 3) )
    {
      v5 = PnpRegMultiSzToUnicodeStrings(P, &v9, &v7);
      v0 = v7;
      RegistryValue = v5;
      v3 = v9;
    }
    else
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(v4, 0);
    if ( RegistryValue < 0 )
    {
      return RegistryValue;
    }
    else
    {
      PiInitGroupOrderTable = v3;
      result = 0;
      PiInitGroupOrderTableCount = v0;
    }
  }
  return result;
}
