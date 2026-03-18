/*
 * XREFs of BiGetElement @ 0x14092ED74
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14092F9E0 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x1409306FC (BiCreateBootEntry.c)
 *     BiExportEfiBootManager @ 0x14093132C (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140931CCC (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x1409328BC (BiUpdateEfiEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BiGetElement(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  PVOID PoolWithTag; // rdi
  int ElementDataWithFlags; // ebx
  __int64 v10; // r8
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  *a4 = 0;
  *a3 = 0LL;
  ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, (__int64)a3, 0LL, &NumberOfBytes);
  if ( ElementDataWithFlags != -1073741789 )
  {
LABEL_6:
    if ( ElementDataWithFlags >= 0 )
      return (unsigned int)ElementDataWithFlags;
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, v10, (__int64)PoolWithTag, &NumberOfBytes);
  if ( ElementDataWithFlags >= 0 )
  {
    *a4 = NumberOfBytes;
    *a3 = PoolWithTag;
    goto LABEL_6;
  }
LABEL_7:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
  return (unsigned int)ElementDataWithFlags;
}
