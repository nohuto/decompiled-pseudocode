/*
 * XREFs of CmSiProtectViewOfSection @ 0x14000F024
 * Callers:
 *     HvpViewMapMakeViewRangeWriteable @ 0x140580D14 (HvpViewMapMakeViewRangeWriteable.c)
 *     HvpViewMapCreateView @ 0x1405A5570 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1405A5658 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1405A5890 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x1405A5998 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1405A5A80 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140703F80 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140740974 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x1407F6E88 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1401B8B90 (ZwProtectVirtualMemory.c)
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
