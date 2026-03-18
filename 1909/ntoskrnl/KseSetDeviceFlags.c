/*
 * XREFs of KseSetDeviceFlags @ 0x140882150
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     KsepStringFree @ 0x14070F0A4 (KsepStringFree.c)
 *     KsepStringTransform @ 0x14074DBF8 (KsepStringTransform.c)
 *     KsepRegistryCreateKey @ 0x140883B44 (KsepRegistryCreateKey.c)
 */

__int64 __fastcall KseSetDeviceFlags(_WORD *a1, const WCHAR *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 Data; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Data = a3;
  v7 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( dword_140468164 != 2 || (KseEngine & 2) != 0 )
  {
    v4 = -1073741823;
  }
  else if ( a1 && a2 )
  {
    v4 = KsepStringTransform((__int64)&v7, a1);
    if ( v4 < 0 )
      goto LABEL_15;
    v5 = v8;
    v4 = KsepRegistryCreateKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
           v8,
           &Handle);
    if ( v4 == -1073741772 )
    {
      v4 = KsepRegistryCreateKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility",
             L"Device",
             &Handle);
      if ( v4 < 0 )
        goto LABEL_15;
      if ( Handle )
      {
        ZwClose(Handle);
        _InterlockedIncrement(dword_1404464FC);
        v5 = v8;
      }
      Handle = 0LL;
      v4 = KsepRegistryCreateKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
             v5,
             &Handle);
    }
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      v4 = ZwSetValueKey(Handle, &DestinationString, 0, 0xBu, &Data, 8u);
    }
  }
  else
  {
    v4 = -1073741811;
  }
LABEL_15:
  KsepStringFree(&v7);
  if ( Handle )
  {
    ZwClose(Handle);
    _InterlockedIncrement(dword_1404464FC);
  }
  return (unsigned int)v4;
}
