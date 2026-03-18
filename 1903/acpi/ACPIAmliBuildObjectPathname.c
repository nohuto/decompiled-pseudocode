/*
 * XREFs of ACPIAmliBuildObjectPathname @ 0x1C000BD28
 * Callers:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000ABA0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIBuildDockExtension @ 0x1C004B10C (ACPIBuildDockExtension.c)
 *     ACPIBusIommuBusInterface @ 0x1C0094BFC (ACPIBusIommuBusInterface.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0095168 (ACPIQueryDeviceBiosName.c)
 *     PcisuppSetRoutingInfo @ 0x1C0098298 (PcisuppSetRoutingInfo.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AEDA0 (AcpiGetFullyQualifiedBiosName.c)
 *     LinkNodeFindByName @ 0x1C00B611C (LinkNodeFindByName.c)
 * Callees:
 *     AMLIGetNameSpaceObjectPath @ 0x1C000BE04 (AMLIGetNameSpaceObjectPath.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathname(__int64 a1, char **a2, char a3)
{
  int v6; // edi
  char *PoolWithTag; // rax
  char *v8; // rbx
  char v10; // cl
  char *v11; // rdx
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v6 = AMLIGetNameSpaceObjectPath(a1, 0LL, &NumberOfBytes);
  if ( v6 == -1073741789 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x53706341u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v6 = AMLIGetNameSpaceObjectPath(a1, PoolWithTag, &NumberOfBytes);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(v8, 0x53706341u);
      }
      else
      {
        if ( *v8 == 92 && (a3 & 1) == 0 )
          memmove(v8, v8 + 1, (unsigned int)(NumberOfBytes - 1));
        if ( (a3 & 2) != 0 )
        {
          v10 = *v8;
          v11 = v8;
          while ( v10 )
          {
            if ( (unsigned __int8)(v10 - 97) <= 0x19u )
              *v11 = v10 - 32;
            v10 = *++v11;
          }
        }
        *a2 = v8;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
