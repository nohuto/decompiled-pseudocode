/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108DB8
 * Callers:
 *     ndisMNotifyMachineName @ 0x1C0108884 (ndisMNotifyMachineName.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108B88 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108C3C (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108D28 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C0127458 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01019FC (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueString(HANDLE *a1, _UNICODE_STRING *a2, void **a3)
{
  _BYTE *v6; // rsi
  PVOID PoolWithTag; // rbx
  NTSTATUS v8; // eax
  NTSTATUS v9; // edi
  unsigned __int16 v10; // cx
  struct Rtl::KString *v11; // rax
  void *v12; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = KeyValueInformation;
  PoolWithTag = 0LL;
  v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v9 = v8;
  if ( v8 != -2147483643 )
  {
    if ( v8 < 0 )
      goto LABEL_12;
    goto LABEL_3;
  }
  if ( ResultLength > 0x100000 )
  {
    v9 = -1073740757;
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x72745352u);
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_12;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
  if ( v9 >= 0 )
  {
    v6 = PoolWithTag;
LABEL_3:
    if ( *((_DWORD *)v6 + 1) == 1 )
    {
      if ( (*((_DWORD *)v6 + 2) & 1) != 0 )
      {
        v9 = -1073741811;
      }
      else
      {
        v10 = *((_WORD *)v6 + 4);
        *(_DWORD *)(&v15.MaximumLength + 1) = 0;
        v15.Buffer = (wchar_t *)(v6 + 12);
        v15.Length = v10;
        v15.MaximumLength = v10;
        if ( v10 >= 2u )
        {
          do
          {
            if ( *(_WORD *)&v6[2 * ((unsigned __int64)v10 >> 1) + 10] )
              break;
            v10 -= 2;
          }
          while ( v10 >= 2u );
          v15.Length = v10;
        }
        v11 = Rtl::KString::Initialize(&v15);
        v12 = *a3;
        *a3 = v11;
        if ( v12 )
        {
          ExFreePoolWithTag(v12, 0x7274534Bu);
          v11 = (struct Rtl::KString *)*a3;
        }
        v9 = -1073741670;
        if ( v11 )
          v9 = 0;
      }
    }
    else
    {
      v9 = -1073741788;
    }
  }
LABEL_12:
  if ( PoolWithTag )
    operator delete[](PoolWithTag);
  return (unsigned int)v9;
}
