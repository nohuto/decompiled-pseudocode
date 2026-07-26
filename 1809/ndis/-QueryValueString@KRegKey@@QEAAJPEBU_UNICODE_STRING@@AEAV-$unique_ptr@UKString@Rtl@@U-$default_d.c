/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C4B40
 * Callers:
 *     ndisMNotifyMachineName @ 0x1C00BD150 (ndisMNotifyMachineName.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C4AB0 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00D18D0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00D1E20 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C010709C (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00C5244 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00D0550 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueString(HANDLE *a1, _UNICODE_STRING *a2, void **a3)
{
  wchar_t *PoolWithTag; // rsi
  wchar_t *v7; // rbx
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  int v10; // ecx
  struct Rtl::KString *v11; // rax
  void *v12; // rcx
  struct Rtl::KString *v13; // rdi
  ULONG ResultLength; // [rsp+30h] [rbp-168h] BYREF
  struct _UNICODE_STRING v16; // [rsp+38h] [rbp-160h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-148h] BYREF

  PoolWithTag = (wchar_t *)KeyValueInformation;
  v7 = 0LL;
  v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v9 = v8;
  if ( v8 == -2147483643 )
  {
    if ( ResultLength > 0x100000 )
    {
      v9 = -1073740757;
      goto LABEL_14;
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x72745352u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_14;
    }
    operator delete[](0LL);
    v7 = PoolWithTag;
    v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
    v9 = v8;
  }
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)PoolWithTag + 1) == 1 )
    {
      v10 = *((_DWORD *)PoolWithTag + 2);
      if ( (v10 & 1) != 0 )
      {
        v9 = -1073741811;
      }
      else
      {
        v16.MaximumLength = *((_DWORD *)PoolWithTag + 2);
        v16.Buffer = PoolWithTag + 6;
        while ( 1 )
        {
          v16.Length = v10;
          if ( (unsigned __int16)v10 < 2u || PoolWithTag[((unsigned __int64)(unsigned __int16)v10 >> 1) + 5] )
            break;
          LOWORD(v10) = v10 - 2;
        }
        v11 = Rtl::KString::Initialize(&v16);
        v12 = *a3;
        v13 = v11;
        if ( v11 != *a3 )
        {
          if ( v12 )
            ExFreePoolWithTag(v12, 0x7274534Bu);
          *a3 = v13;
          v12 = v13;
        }
        v9 = -1073741670;
        if ( v12 )
          v9 = 0;
      }
    }
    else
    {
      v9 = -1073741788;
    }
  }
LABEL_14:
  operator delete[](v7);
  return v9;
}
