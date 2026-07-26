/*
 * XREFs of ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0117C58
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01072CC (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002CE7C (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

bool __fastcall ndisIsNetSetupV1Interface(const struct _UNICODE_STRING *a1)
{
  bool v3; // bl
  HANDLE Handle[2]; // [rsp+20h] [rbp-228h] BYREF
  wchar_t Dest[256]; // [rsp+30h] [rbp-218h] BYREF

  memset(Dest, 0, 0x100uLL);
  if ( (int)RtlStringCchPrintfW(
              Dest,
              256LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup\\Interfaces\\%wZ",
              a1) < 0 )
    return 0;
  Handle[0] = 0LL;
  v3 = (int)KRegKey::Open((KRegKey *)Handle, 1u, Dest, 0LL) >= 0;
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v3;
}
