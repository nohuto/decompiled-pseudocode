/*
 * XREFs of ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C007F518
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C007E7E4 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C007F438 (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C029C314 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C007F5CC (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 */

__int64 __fastcall bScanFamily(
        struct FHOBJ *a1,
        unsigned int a2,
        struct FHOBJ *a3,
        unsigned int a4,
        struct FHOBJ *a5,
        unsigned int a6,
        struct EFSOBJ *a7,
        unsigned int a8,
        struct _EFFILTER_INFO *a9,
        unsigned __int16 *a10)
{
  unsigned int v10; // ebx

  v10 = 0;
  if ( (!a1 || bScanTheList(a1, a2, a7, a8, a9, a10))
    && (!a3 || bScanTheList(a3, a4, a7, a8, a9, a10))
    && (!a5 || bScanTheList(a5, a6, a7, a8, a9, a10)) )
  {
    return 1;
  }
  return v10;
}
