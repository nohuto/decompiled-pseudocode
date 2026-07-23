/*
 * XREFs of ExpHwidSysVolIfDeviceInfoProvider @ 0x140586820
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140587E88 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140588074 (ExpHwidSendSynchronousIrpToDevice.c)
 */

__int64 __fastcall ExpHwidSysVolIfDeviceInfoProvider(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int *v3; // rbx
  __int64 HostSilo; // rax
  unsigned int v5; // ebp
  int i; // r14d
  unsigned int *PoolWithTag; // rax
  int v8; // eax
  unsigned int v9; // esi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  WCHAR SourceString[8]; // [rsp+50h] [rbp-38h] BYREF

  v1 = 0;
  v3 = 0LL;
  wcscpy(SourceString, L"\\??\\x:");
  HostSilo = PsGetHostSilo();
  SourceString[4] = **((_WORD **)PsGetServerSiloGlobals(HostSilo) + 134);
  RtlInitUnicodeString(&DestinationString, SourceString);
  v5 = 32;
  for ( i = 0; ; i = 1 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, v5);
    v8 = ExpHwidSendSynchronousIrpToDevice(&DestinationString, 5636096LL, 0LL, 0LL, v3, v5, 0LL, 0LL);
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( *v3 )
      {
        do
          ExpHwidSysVolIfGetDiskInfo(a1, v3[6 * v1++ + 2]);
        while ( v1 < *v3 );
      }
LABEL_8:
      ExFreePoolWithTag(v3, 0);
      return v9;
    }
    if ( v8 != -2147483643 || i )
      goto LABEL_8;
    v5 = v5 + 24 * *v3 - 24;
  }
  return (unsigned int)-1073741670;
}
