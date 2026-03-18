/*
 * XREFs of CmSiProtectViewOfSection @ 0x14008A608
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140631DA0 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapSealRange @ 0x140631F3C (HvpViewMapSealRange.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1406603E4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140660618 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1406C3214 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14072A750 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140766E54 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14082FB5C (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1401C0AD0 (ZwProtectVirtualMemory.c)
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
