/*
 * XREFs of IopDeviceObjectFromSymbolicName @ 0x140735B00
 * Callers:
 *     IopGetSessionIdFromSymbolicName @ 0x140735AA4 (IopGetSessionIdFromSymbolicName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDA40 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF440 (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

_QWORD *__fastcall IopDeviceObjectFromSymbolicName(__int64 a1)
{
  _QWORD *v1; // rdi
  WCHAR *PoolWithTag; // rax
  WCHAR *v4; // rbp
  int ObjectProperty; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-28h] BYREF
  int v8; // [rsp+90h] [rbp+8h] BYREF
  int v9; // [rsp+98h] [rbp+10h] BYREF
  __int16 *v10; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      if ( *(_WORD *)a1 )
      {
        if ( (int)PnpUnicodeStringToWstr(&v10, 0LL, (unsigned __int16 *)a1) >= 0 )
        {
          v8 = 400;
          PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
          v4 = PoolWithTag;
          if ( PoolWithTag )
          {
            ObjectProperty = PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v10,
                               3LL,
                               0LL,
                               0LL,
                               (__int64)&DEVPKEY_Device_InstanceId,
                               (__int64)&v9,
                               (__int64)PoolWithTag,
                               v8,
                               (__int64)&v8,
                               0);
            PnpUnicodeStringToWstrFree(v10, a1);
            if ( ObjectProperty >= 0 && v9 == 18 && RtlInitUnicodeStringEx(&DestinationString, v4) >= 0 )
              v1 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
            ExFreePoolWithTag(v4, 0x47706E50u);
          }
        }
      }
    }
  }
  return v1;
}
