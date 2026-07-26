/*
 * XREFs of ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00FC308
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___ @ 0x1C00F9008 (netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C011840C (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C0124D20 (--$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01019FC (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall KRegKey::GetSubkeyName(void **a1, ULONG a2, void **a3)
{
  void *v6; // rcx
  NTSTATUS result; // eax
  struct Rtl::KString *v8; // rax
  void *v9; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v11; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyInformation[136]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyInformation, 0, 0x218uLL);
  v6 = *a1;
  ResultLength = 0;
  result = ZwEnumerateKey(v6, a2, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyInformation[3] > 0x200u )
    {
      return -1073741562;
    }
    else
    {
      *(_DWORD *)(&v11.MaximumLength + 1) = 0;
      *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
      v11.Length = KeyInformation[3];
      v11.MaximumLength = LOWORD(KeyInformation[3]) + 2;
      v11.Buffer = (wchar_t *)&KeyInformation[4];
      v8 = Rtl::KString::Initialize(&v11);
      v9 = *a3;
      *a3 = v8;
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x7274534Bu);
        v8 = (struct Rtl::KString *)*a3;
      }
      return v8 == 0LL ? 0xC000009A : 0;
    }
  }
  return result;
}
