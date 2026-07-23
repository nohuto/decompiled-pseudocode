/*
 * XREFs of MUIInitializeResourceLock @ 0x1407106FC
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406AE860 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     NtFlushInstallUILanguage @ 0x140762950 (NtFlushInstallUILanguage.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MUIInitializeResourceLock(volatile signed __int64 *a1)
{
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v3; // rdi
  unsigned int v4; // ebx

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6D756950u);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = ExInitializeResourceLite(PoolWithTag);
        if ( (v4 & 0xC0000000) != 0xC0000000 )
        {
          if ( _InterlockedCompareExchange64(a1, (signed __int64)v3, 0LL) )
            ExDeleteResourceLite(v3);
          else
            v3 = 0LL;
          v4 = 0;
        }
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
