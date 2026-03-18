/*
 * XREFs of FsRtlpQueryValueKey @ 0x14084F990
 * Callers:
 *     FsRtlHeatInit @ 0x14084F4D0 (FsRtlHeatInit.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall FsRtlpQueryValueKey(UNICODE_STRING *a1, UNICODE_STRING *a2, ULONG *a3, PVOID *a4, _BYTE *a5)
{
  NTSTATUS result; // eax
  ULONG Length; // edi
  PVOID PoolWithTag; // rbx
  _BYTE *i; // r15
  NTSTATUS v12; // eax
  int v13; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      Length = *a3;
      PoolWithTag = *a4;
      for ( i = a5; ; *i = 1 )
      {
        v12 = ZwQueryValueKey(KeyHandle, a2, KeyValueFullInformation, PoolWithTag, Length, &ResultLength);
        v13 = v12;
        if ( v12 != -1073741789 && v12 != -2147483643 )
          break;
        if ( Length != *a3 )
          break;
        Length = ResultLength;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x68745346u);
        if ( !PoolWithTag )
        {
          v13 = -1073741670;
          break;
        }
        if ( *i )
          ExFreePoolWithTag(*a4, 0);
        *a4 = PoolWithTag;
        *a3 = Length;
      }
      ZwClose(KeyHandle);
      if ( v13 >= 0 && !*((_DWORD *)*a4 + 3) )
        return -1073741772;
      return v13;
    }
    else
    {
      ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
