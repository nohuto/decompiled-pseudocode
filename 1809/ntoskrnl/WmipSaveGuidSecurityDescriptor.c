/*
 * XREFs of WmipSaveGuidSecurityDescriptor @ 0x140762790
 * Callers:
 *     WmipSecurityMethod @ 0x1406AAA80 (WmipSecurityMethod.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405CA090 (RtlLengthSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140612450 (RtlGetPersistedStateLocation.c)
 *     RtlWriteRegistryValue @ 0x1406C2260 (RtlWriteRegistryValue.c)
 */

__int64 __fastcall WmipSaveGuidSecurityDescriptor(__int64 a1, void *a2)
{
  PVOID PoolWithTag; // rbx
  ULONG ValueLength; // r14d
  unsigned int v6; // edi
  unsigned int PersistedStateLocation; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  ValueLength = RtlLengthSecurityDescriptor(a2);
  v6 = 0;
  LODWORD(v10) = 0;
  while ( 1 )
  {
    if ( v6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x70696D57u);
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ETWSecurityPath",
                               0LL,
                               0LL,
                               0,
                               PoolWithTag,
                               v6,
                               (unsigned int *)&v10);
    v8 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
    v6 = v10;
  }
  if ( !PersistedStateLocation )
    v8 = RtlWriteRegistryValue(0, (PCWSTR)PoolWithTag, *(PCWSTR *)(a1 + 8), 3u, a2, ValueLength);
  if ( v8 == -1073741772 )
    v8 = RtlWriteRegistryValue(2u, L"WMI\\Security", *(PCWSTR *)(a1 + 8), 3u, a2, ValueLength);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v8;
}
