/*
 * XREFs of ?ExtractPenIdFromStaticDescriptor@PenIdentity@@YA_NPEAU_HIDP_PREPARSED_DATA@@PEAU_GUID@@@Z @ 0x18012AC44
 * Callers:
 *     ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z @ 0x180129C20 (--0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?CreatePenId@PenIdentity@@YA_NG_KPEAU_GUID@@@Z @ 0x18012AA6C (-CreatePenId@PenIdentity@@YA_NG_KPEAU_GUID@@@Z.c)
 */

bool __fastcall PenIdentity::ExtractPenIdFromStaticDescriptor(
        PHIDP_PREPARSED_DATA PreparsedData,
        struct _HIDP_PREPARSED_DATA *a2,
        struct _GUID *a3)
{
  NTSTATUS SpecificValueCaps; // ebx
  NTSTATUS v6; // eax
  struct _GUID *v7; // r9
  USHORT ValueCapsLength[8]; // [rsp+40h] [rbp-C8h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-B8h] BYREF
  struct _HIDP_VALUE_CAPS v11; // [rsp+A0h] [rbp-68h] BYREF

  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  memset_0(&v11, 0, sizeof(v11));
  ValueCapsLength[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        0xDu,
                        0,
                        0x5Bu,
                        &ValueCaps,
                        ValueCapsLength,
                        PreparsedData);
  v6 = HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x92u, &v11, ValueCapsLength, PreparsedData);
  return SpecificValueCaps >= 0
      && v6 >= 0
      && ValueCaps.LogicalMin == ValueCaps.LogicalMax
      && v11.LogicalMin == v11.LogicalMax
      && PenIdentity::CreatePenId((PenIdentity *)(unsigned int)v11.LogicalMin, ValueCaps.LogicalMin, (__int64)a2, v7);
}
