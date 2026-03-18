/*
 * XREFs of PiDcInit @ 0x1409F91A8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400025C0 (RtlInitializeGenericTableAvl.c)
 *     PiDcInitUpdateProperties @ 0x1407566BC (PiDcInitUpdateProperties.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140757298 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcInit(int a1)
{
  int inited; // ebx

  inited = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      inited = PiDcInitUpdateProperties();
      if ( inited >= 0 )
        return (unsigned int)PiDcGenerateConfigNotificationIfContainerRequiresConfiguration((__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
    }
  }
  else
  {
    RtlInitializeGenericTableAvl(
      &PiDcUpdateProperties,
      (PRTL_AVL_COMPARE_ROUTINE)PiDcCompareUpdateProperties,
      (PRTL_AVL_ALLOCATE_ROUTINE)PiDcAllocateGenericTableEntry,
      (PRTL_AVL_FREE_ROUTINE)PiDcFreeGenericTableEntry,
      0LL);
  }
  return (unsigned int)inited;
}
