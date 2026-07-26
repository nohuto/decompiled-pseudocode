/*
 * XREFs of ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B4068
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___ @ 0x1C00B31A4 (netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___.c)
 *     ndisWdfUpdateAddDeviceParameters @ 0x1C00F33CC (ndisWdfUpdateAddDeviceParameters.c)
 *     ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C0104988 (--$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00C5244 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall KRegKey::GetSubkeyName(void **a1, ULONG a2, void **a3)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  struct Rtl::KString *v6; // rax
  void *v7; // rcx
  struct Rtl::KString *v8; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-268h] BYREF
  struct _UNICODE_STRING v10; // [rsp+38h] [rbp-260h] BYREF
  _BYTE KeyInformation[12]; // [rsp+50h] [rbp-248h] BYREF
  unsigned int v12; // [rsp+5Ch] [rbp-23Ch]
  _WORD v13[264]; // [rsp+60h] [rbp-238h] BYREF

  v3 = *a1;
  ResultLength = 0;
  result = ZwEnumerateKey(v3, a2, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v12 > 0x200 )
    {
      return -1073741562;
    }
    else
    {
      v13[(unsigned __int64)v12 >> 1] = 0;
      v10.Length = v12;
      v10.MaximumLength = v12 + 2;
      v10.Buffer = v13;
      v6 = Rtl::KString::Initialize(&v10);
      v7 = *a3;
      v8 = v6;
      if ( v6 != *a3 )
      {
        if ( v7 )
          ExFreePoolWithTag(v7, 0x7274534Bu);
        *a3 = v8;
        v7 = v8;
      }
      return v7 == 0LL ? 0xC000009A : 0;
    }
  }
  return result;
}
