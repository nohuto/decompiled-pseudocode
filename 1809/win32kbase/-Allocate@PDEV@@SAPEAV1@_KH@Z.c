/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C005F588
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     EngAllocMem @ 0x1C005F5F0 (EngAllocMem.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C005F860 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 */

struct PDEV *__fastcall PDEV::Allocate(size_t cjMemSize, int a2)
{
  struct PDEV *v2; // rbx
  struct PDEV *result; // rax

  if ( a2 )
    return (struct PDEV *)EngAllocMem(1u, cjMemSize, 0x76654447u);
  result = (struct PDEV *)PALLOCMEM2(cjMemSize, 1986348103LL, 1);
  v2 = result;
  if ( result )
  {
    if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(1LL, result, (char *)result + 3552) )
    {
      Win32FreePool((__int64)v2);
      return 0LL;
    }
    return v2;
  }
  return result;
}
