/*
 * XREFs of CmSiProtectViewOfSection @ 0x14008B908
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140635C20 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapSealRange @ 0x140635DBC (HvpViewMapSealRange.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1406383B4 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapMakeViewRangeValid @ 0x14068F340 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x14068F520 (HvpViewMapCreateView.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14072C5F0 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x14076B954 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14082F9CC (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1401C1650 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall CmSiProtectViewOfSection(
        SIZE_T a1,
        void **a2,
        void *a3,
        SIZE_T a4,
        ULONG NewAccessProtection,
        ULONG *a6)
{
  void *v6; // rcx
  SIZE_T v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, NewAccessProtection, a6);
}
