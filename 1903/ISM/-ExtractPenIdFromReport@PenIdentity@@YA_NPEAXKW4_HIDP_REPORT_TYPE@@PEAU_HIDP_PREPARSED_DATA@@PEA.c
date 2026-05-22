/*
 * XREFs of ?ExtractPenIdFromReport@PenIdentity@@YA_NPEAXKW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEAU_GUID@@@Z @ 0x18012AA8C
 * Callers:
 *     ?ProcessPenUpdatePayload@PenDevice@@QEAAXPEAXKPEAU_GUID@@@Z @ 0x18012A2F8 (-ProcessPenUpdatePayload@PenDevice@@QEAAXPEAXKPEAU_GUID@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CECC (--_U@YAPEAX_K@Z.c)
 *     ?CreatePenId@PenIdentity@@YA_NG_KPEAU_GUID@@@Z @ 0x18012AA6C (-CreatePenId@PenIdentity@@YA_NG_KPEAU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall PenIdentity::ExtractPenIdFromReport(
        PCHAR Report,
        ULONG ReportLength,
        __int64 a3,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        struct _HIDP_PREPARSED_DATA *a5)
{
  char v8; // r14
  USHORT *v9; // rbx
  NTSTATUS Usages; // r15d
  bool PenId; // si
  __int64 v12; // rcx
  NTSTATUS v13; // edi
  NTSTATUS v14; // eax
  const struct std::nothrow_t *v15; // rdx
  struct _GUID *v16; // r9
  ULONG UsageValue; // [rsp+40h] [rbp-20h] BYREF
  ULONG v19; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  ULONG UsageLength; // [rsp+B0h] [rbp+50h] BYREF

  v20 = -2LL;
  UsageValue = 0;
  v19 = 0;
  v8 = 0;
  v9 = 0LL;
  v21 = 0LL;
  UsageLength = 0;
  Usages = HidP_GetUsages(HidP_Input, 0xDu, 0, 0LL, &UsageLength, PreparsedData, Report, ReportLength);
  PenId = 1;
  if ( Usages >= 0 )
  {
    if ( UsageLength )
    {
      v9 = (USHORT *)operator new[](saturated_mul(UsageLength, 2uLL));
      Usages = HidP_GetUsages(HidP_Input, 0xDu, 0, v9, &UsageLength, PreparsedData, Report, ReportLength);
      v12 = 0LL;
      if ( UsageLength )
      {
        while ( v9[v12] != 162 )
        {
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= UsageLength )
            goto LABEL_8;
        }
        v8 = 1;
      }
    }
  }
LABEL_8:
  v13 = HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x5Bu, &UsageValue, PreparsedData, Report, ReportLength);
  v14 = HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x92u, &v19, PreparsedData, Report, ReportLength);
  if ( v13 < 0 || v14 < 0 )
  {
    PenId = 0;
  }
  else if ( Usages < 0 || v8 )
  {
    PenId = PenIdentity::CreatePenId((PenIdentity *)(unsigned __int16)v19, UsageValue, (__int64)a5, v16);
  }
  else
  {
    *(GUID *)a5 = GUID_00000000_0000_0000_0000_000000000000;
  }
  if ( v9 )
    operator delete(v9, v15);
  return PenId;
}
